/*
 * XREFs of FreeContext @ 0x140003D30
 * Callers:
 *     RunContext @ 0x140009490 (RunContext.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     LoadDDB @ 0x14006CDDC (LoadDDB.c)
 *     SyncLoadDDB @ 0x1400DDC3C (SyncLoadDDB.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x140054394 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogTimeoutAction @ 0x14006B97C (AmliWatchdogTimeoutAction.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall FreeContext(char *Entry)
{
  char **v2; // rdx
  PVOID *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  KIRQL v7; // al
  int v8; // r9d
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 *v11; // rdi
  KIRQL v12; // r14
  __int64 v13; // rsi
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // ax
  __int16 v22; // [rsp+30h] [rbp-29h] BYREF
  int v23; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v26; // [rsp+50h] [rbp-9h]
  int v27; // [rsp+58h] [rbp-1h]
  int v28; // [rsp+5Ch] [rbp+3h]
  int *v29; // [rsp+60h] [rbp+7h]
  __int64 v30; // [rsp+68h] [rbp+Fh]
  unsigned __int64 *v31; // [rsp+70h] [rbp+17h]
  _QWORD v32[3]; // [rsp+78h] [rbp+1Fh] BYREF

  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v2 = (char **)*((_QWORD *)Entry + 2);
  if ( v2[1] != Entry + 16
    || (v3 = (PVOID *)*((_QWORD *)Entry + 3), *v3 != Entry + 16)
    || (*v3 = v2, v4 = Entry + 32, v2[1] = (char *)v3, v5 = *((_QWORD *)Entry + 4), *(char **)(v5 + 8) != Entry + 32)
    || (v6 = (_QWORD *)*((_QWORD *)Entry + 5), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *((_QWORD *)Entry + 5) = Entry + 32;
  *v4 = v4;
  KeReleaseSpinLock(&gmutCtxtList, NewIrql);
  FreeDataBuffs(Entry + 128, 1LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v7);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
    && EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    v20 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)Entry + 57);
    *(_QWORD *)&UserData.Size = 2LL;
    v21 = *((_WORD *)Entry + 220);
    v27 = v21;
    v22 = v21 >> 1;
    UserData.Ptr = (unsigned __int64)&v22;
    v26 = *((_QWORD *)Entry + 56);
    v29 = &v23;
    v24 = v20 / 0x2710;
    v31 = &v24;
    v28 = 0;
    LOWORD(v23) = 0;
    v30 = 2LL;
    v32[0] = 8LL;
    EtwWrite(
      *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
      &ACPI_ETW_EVENT_AML_METHOD_TRACE,
      0LL,
      4u,
      &UserData);
  }
  v9 = *((_QWORD *)Entry + 57);
  v10 = (MEMORY[0xFFFFF78000000008] - v9) / 0x2710uLL;
  if ( v9 )
  {
    if ( (unsigned int)v10 >= 0x3E8 && (unsigned int)dword_14008C310 > 5 )
    {
      v9 = 0x400000000000LL;
      if ( (qword_14008C320 & 0x400000000000LL) != 0 && (qword_14008C328 & 0x400000000000LL) == qword_14008C328 )
      {
        v23 = v10;
        v29 = (int *)v32;
        v31 = (unsigned __int64 *)*((_QWORD *)Entry + 56);
        v32[0] = *((unsigned __int16 *)Entry + 220);
        v32[1] = &v23;
        v30 = 2LL;
        v32[2] = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_14008C310, (int)&dword_14007D276, 0, v8, 5u, (__int64)&UserData);
      }
    }
  }
  v11 = (__int64 *)*((_QWORD *)Entry + 58);
  if ( v11 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
    v13 = *v11;
    if ( *((_BYTE *)v11 + 88) || *(_BYTE *)(v13 + 472) )
    {
      *((_BYTE *)v11 + 88) = 0;
      if ( !KeCancelTimer((PKTIMER)(v11 + 13)) )
      {
        if ( *(_BYTE *)(v13 + 472) )
          AcpiQueueRecordBlackboxInformation();
        else
          AmliWatchdogTimeoutAction(v11);
      }
    }
    KeReleaseSpinLock(&AcpiWatchdogLock, v12);
    ExFreePoolWithTag(*((PVOID *)Entry + 58), 0);
  }
  v14 = (void *)*((_QWORD *)Entry + 56);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *((_QWORD *)Entry + 9);
  if ( v15 )
  {
    DereferenceObjectEx(v15, v10, v9);
    *((_QWORD *)Entry + 9) = 0LL;
  }
  v16 = *((_QWORD *)Entry + 53);
  if ( v16 )
  {
    DereferenceObjectEx(v16, v10, v9);
    *((_QWORD *)Entry + 53) = 0LL;
  }
  v17 = *((_QWORD *)Entry + 10);
  if ( v17 )
  {
    DereferenceObjectEx(v17, v10, v9);
    *((_QWORD *)Entry + 10) = 0LL;
  }
  v18 = (_QWORD *)*((_QWORD *)Entry + 63);
  if ( v18 )
  {
    do
    {
      v19 = (_QWORD *)v18[3];
      ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, v18);
      v18 = v19;
    }
    while ( v19 );
  }
  ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, Entry);
}
