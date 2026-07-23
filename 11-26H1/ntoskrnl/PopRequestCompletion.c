/*
 * XREFs of PopRequestCompletion @ 0x1403BE4B0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceIrpFinish @ 0x14021BC90 (PopDiagTraceIrpFinish.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1403BE794 (PopFxNotifyPreDIrpCompletion.c)
 *     PopFreeIrp @ 0x1403BFDEC (PopFreeIrp.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopUpdateWakeSource @ 0x1404D6A5C (PopUpdateWakeSource.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140606610 (PopDirectedDripsStartDisengageTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  char v5; // r14
  IRP *v6; // rsi
  int *v7; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx

  v3 = *(_QWORD *)(a3 + 200);
  v5 = *(_BYTE *)(a3 + 184);
  v6 = a2;
  if ( v3 && v5 == 2 )
    PopFxNotifyPreDIrpCompletion(v3);
  v7 = (int *)&v6->IoStatus.0;
  if ( *(_QWORD *)(a3 + 216) )
  {
    LOBYTE(a2) = v5;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 232), a2, *(unsigned int *)(a3 + 192));
  }
  if ( v5 )
  {
    PopHandleDevicePowerIrpCompletion(a3);
  }
  else
  {
    PopDiagTraceIrpFinish((__int64)v6);
    if ( *v7 >= 0 )
    {
      if ( *(_BYTE *)(a3 + 240) )
        PopUpdateWakeSource(*(PVOID *)(a3 + 24));
      if ( *v7 >= 0 )
      {
        v11 = *(_QWORD *)(a3 + 24);
        if ( v11 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
          if ( v12 )
          {
            if ( (*(_DWORD *)(v12 + 760) & 0x30000) != 0 )
              PopDirectedDripsStartDisengageTimer(0LL);
          }
        }
      }
    }
    if ( v3 )
    {
      v13 = *(_QWORD *)(v3 + 56);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 128), 0xFFFFFFFF) == 1 )
        PopPepUpdateConstraints(v13, 5, 1);
      PopFxDereferenceDevice(v3, 0LL, v9, v10);
    }
    PopFreeIrp(v6);
  }
  return 3221225494LL;
}
