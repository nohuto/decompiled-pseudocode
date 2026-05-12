/*
 * XREFs of RaidAdapterRequestDirectComplete @ 0x14002E1A8
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidLogMiniportCompletion @ 0x14000E920 (RaidLogMiniportCompletion.c)
 *     RaidAdapterSupportsAbortCommand @ 0x14002E2F0 (RaidAdapterSupportsAbortCommand.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterRequestDirectComplete(__int64 a1, __int64 a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r8
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  BugCheckParameter4 = CurrentIrql;
  if ( CurrentIrql > 2u )
  {
    v7 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v7, BugCheckParameter2, v5);
    KeBugCheckEx(0xF0u, 5uLL, BugCheckParameter2[1], *(_QWORD *)(a2 + 168), BugCheckParameter4);
  }
  if ( (*(_DWORD *)(a1 + 624) & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5152));
  if ( (qword_140172448 & 8) != 0 )
    RaidLogMiniportCompletion((_QWORD *)a2);
  if ( !(unsigned __int8)RaidAdapterSupportsAbortCommand(a1)
    || _InterlockedExchange((volatile __int32 *)(a2 + 776), 4) != 1 )
  {
    v9 = *(_QWORD *)(a2 + 160);
    if ( v9 )
      *(_BYTE *)(v9 + 141) = -85;
    v10 = (*(_BYTE *)(a2 + 17) & 1) == 0;
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    if ( !v10 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(a2 + 748));
      *(_BYTE *)(a2 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a2 + 656) )
    {
      if ( (unsigned __int8)BugCheckParameter4 < 2u )
        LOBYTE(BugCheckParameter4) = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64))(a2 + 656))(a2);
      if ( (unsigned __int8)BugCheckParameter4 < 2u )
        KeLowerIrql(BugCheckParameter4);
    }
  }
}
