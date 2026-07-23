/*
 * XREFs of MmGetPageBadStatus @ 0x1406F6FB0
 * Callers:
 *     HalpPmemErrorDeferredHandler @ 0x140591A28 (HalpPmemErrorDeferredHandler.c)
 *     WheaAttemptRowOffline @ 0x1406D9BC0 (WheaAttemptRowOffline.c)
 *     WheapProcessOfflineList @ 0x1406DCDC0 (WheapProcessOfflineList.c)
 *     WheapExecuteRowFailureCheck @ 0x1408500C0 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x1408503FC (WheapPfaMemoryCheck.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406F0774 (MiGetPageInHugePageBadStatus.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rsi
  unsigned int v8; // edi
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1 >> 12;
  v4 = 48 * v3 - 0x220000000000LL;
  v5 = MiSafeLockPage(v3, a2, a3);
  v6 = v5;
  if ( v5 == 17 )
  {
    v9 = 0;
    return MiGetPageInHugePageBadStatus(v3, 0LL, &v9);
  }
  else
  {
    if ( MiIsPageOnBadList(v4) )
    {
      v8 = -1073740023;
    }
    else
    {
      v8 = 0;
      if ( (*(_DWORD *)(v4 + 32) & 0x40000000) != 0 )
        v8 = 259;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v6 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      __writecr8(v6);
    }
    return v8;
  }
}
