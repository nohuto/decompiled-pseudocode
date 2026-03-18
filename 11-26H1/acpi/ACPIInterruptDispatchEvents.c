/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x14002DD70
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x14002DBE0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // r14d
  unsigned int v1; // edi
  __int64 v2; // rbx
  int (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v6; // si
  char v7; // bp
  int (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int (__fastcall *v11)(__int64); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-48h] BYREF
  _BYTE *v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0LL;
    while ( 1 )
    {
      v14[0] = 0;
      v3 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
      if ( v1 < *((unsigned __int16 *)AcpiInformation + 43) )
        break;
      if ( v3(7LL) >= 0 )
      {
        v4 = v1 - *((unsigned __int16 *)AcpiInformation + 43);
        v5 = 7LL;
LABEL_6:
        (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(PmHalDispatchTable + 128))(
          v5,
          v4,
          v14,
          1LL,
          0LL);
      }
LABEL_7:
      v6 = v14[0] & *((_BYTE *)GpeCurEnable + v2);
      v7 = v14[0] & ~*((_BYTE *)GpeHandlerRegistered + v2);
      if ( !v7 )
        goto LABEL_15;
      v14[0] &= ~*((_BYTE *)GpeHandlerRegistered + v2);
      v15 = v1;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_UNEXPECTED_GPE) )
      {
        UserData.Ptr = (unsigned __int64)&v15;
        *(_QWORD *)&UserData.Size = 4LL;
        v17 = v14;
        v18 = 1LL;
        EtwWrite(
          *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
          &ACPI_ETW_EVENT_UNEXPECTED_GPE,
          0LL,
          2u,
          &UserData);
      }
      v14[0] = v7;
      v8 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
      if ( v1 < *((unsigned __int16 *)AcpiInformation + 43) )
      {
        if ( v8(6LL) < 0 )
          goto LABEL_15;
        v9 = v1;
        v10 = 6LL;
        goto LABEL_14;
      }
      if ( v8(7LL) >= 0 )
      {
        v9 = v1 - *((unsigned __int16 *)AcpiInformation + 43);
        v10 = 7LL;
LABEL_14:
        (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(PmHalDispatchTable + 136))(
          v10,
          v9,
          v14,
          1LL,
          0LL);
      }
LABEL_15:
      *((_BYTE *)GpePending + v2) |= v6;
      *((_BYTE *)GpeRunMethod + v2) |= v6;
      if ( (AcpiOverrideAttributes & 0x2000000) != 0 )
        *((_BYTE *)GpeCurEnable + v2) &= ~(v6 & *((_BYTE *)GpeIsLevel + v2));
      else
        *((_BYTE *)GpeCurEnable + v2) &= ~v6;
      if ( (v6 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v2)) == 0 )
        goto LABEL_22;
      v14[0] = v6 & ~*((_BYTE *)GpeIsLevel + v2);
      v11 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
      if ( v1 >= *((unsigned __int16 *)AcpiInformation + 43) )
      {
        if ( v11(7LL) < 0 )
          goto LABEL_22;
        v12 = v1 - *((unsigned __int16 *)AcpiInformation + 43);
        v13 = 7LL;
        goto LABEL_21;
      }
      if ( v11(6LL) >= 0 )
      {
        v12 = v1;
        v13 = 6LL;
LABEL_21:
        (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(PmHalDispatchTable + 136))(
          v13,
          v12,
          v14,
          1LL,
          0LL);
      }
LABEL_22:
      ++v1;
      ++v2;
      if ( v1 >= v0 )
        goto LABEL_23;
    }
    if ( v3(6LL) < 0 )
      goto LABEL_7;
    v4 = v1;
    v5 = 6LL;
    goto LABEL_6;
  }
LABEL_23:
  AcpiGpeWorkDone = 1;
  if ( !AcpiGpeDpcRunning && !AcpiGpeDpcScheduled )
  {
    AcpiGpeDpcScheduled = 1;
    KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
