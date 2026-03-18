/*
 * XREFs of ACPIInterruptServiceRoutineDPC @ 0x14002DBE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInterruptDispatchEvents @ 0x14002DD70 (ACPIInterruptDispatchEvents.c)
 *     ACPIHardwareGlobalLockReleased @ 0x14002E138 (ACPIHardwareGlobalLockReleased.c)
 *     ACPIButtonEvent @ 0x14002F6EC (ACPIButtonEvent.c)
 *     ACPIPccProcessSci @ 0x14005226C (ACPIPccProcessSci.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIInterruptServiceRoutineDPC(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  signed __int32 v5; // edi
  unsigned __int32 v6; // ebx
  signed __int32 v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int16 v10; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v5 = DeferredContext[22];
    do
    {
      v6 = v5;
      v7 = 0x80000000;
      if ( (v5 & 0x7FFFFFFF) == 0 )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPm1EnableRegisterLock);
        v10 = *((_WORD *)AcpiInformation + 56);
        if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
          (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(PmHalDispatchTable + 136))(0LL, 2LL, &v10);
        if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL) >= 0 )
          (*(void (__fastcall **)(__int64, __int64, __int16 *))(PmHalDispatchTable + 136))(3LL, 2LL, &v10);
        KeReleaseSpinLockFromDpcLevel(&AcpiPm1EnableRegisterLock);
        v7 = 0;
      }
      v5 = _InterlockedCompareExchange(DeferredContext + 22, v7, v5);
    }
    while ( v6 != v5 );
    if ( !v7 )
      break;
    v8 = (v6 >> 8) & 1;
    v9 = (v6 >> 8) & 1 | 2;
    if ( (v6 & 0x200) == 0 )
      v9 = (unsigned int)v8;
    if ( (_DWORD)v9 )
    {
      if ( (v6 & 0x8000) != 0 )
        v9 = 0x80000000LL;
      ACPIButtonEvent(FixedButtonDeviceObject, v9, SystemArgument1, SystemArgument2);
    }
    if ( (v6 & 0x20) != 0 )
      ACPIHardwareGlobalLockReleased(v8, v9, SystemArgument1, SystemArgument2);
    if ( (v6 & 0x20000) != 0 )
      ACPIPccProcessSci(v8, v9, SystemArgument1, SystemArgument2);
    if ( (v6 & 0x10000) != 0 )
      ACPIInterruptDispatchEvents(v8, v9, SystemArgument1, SystemArgument2);
  }
}
