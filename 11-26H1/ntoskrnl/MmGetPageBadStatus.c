/*
 * XREFs of MmGetPageBadStatus @ 0x1406F2340
 * Callers:
 *     HalpPmemErrorDeferredHandler @ 0x14058F2A8 (HalpPmemErrorDeferredHandler.c)
 *     WheaAttemptRowOffline @ 0x1406D5AE0 (WheaAttemptRowOffline.c)
 *     WheapProcessOfflineList @ 0x1406D8C30 (WheapProcessOfflineList.c)
 *     WheapExecuteRowFailureCheck @ 0x140849DB0 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x14084A0EC (WheapPfaMemoryCheck.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIsPageOnBadList @ 0x14028F9D0 (MiIsPageOnBadList.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406EBAD4 (MiGetPageInHugePageBadStatus.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rsi
  unsigned int v7; // edi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 >> 12;
  v3 = 48 * v2 - 0x220000000000LL;
  v4 = MiSafeLockPage(v2, a2);
  v5 = v4;
  if ( v4 == 17 )
  {
    v8 = 0;
    return MiGetPageInHugePageBadStatus(v2, 0LL, &v8);
  }
  else
  {
    if ( MiIsPageOnBadList(v3) )
    {
      v7 = -1073740023;
    }
    else
    {
      v7 = 0;
      if ( (*(_DWORD *)(v3 + 32) & 0x40000000) != 0 )
        v7 = 259;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v5 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      __writecr8(v5);
    }
    return v7;
  }
}
