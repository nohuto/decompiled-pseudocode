/*
 * XREFs of MiSafeLockAnyPfn @ 0x1407036A8
 * Callers:
 *     MiReleaseScrubProtection @ 0x14070BF60 (MiReleaseScrubProtection.c)
 *     MiScrubLargePage @ 0x14070C4BC (MiScrubLargePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiLockHugePfnAtDpc @ 0x140358C94 (MiLockHugePfnAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiSafeLockAnyPfn(ULONG_PTR a1, __int64 a2)
{
  _QWORD *v2; // rdi
  unsigned __int8 CurrentIrql; // bl

  if ( (_DWORD)a2 != 1 )
    return MiSafeLockPage(a1, a2);
  v2 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * ((a1 >> 18) & 0x3FFFFF));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiLockHugePfnAtDpc((__int64)v2);
  if ( (*v2 & 7) == 0 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2EB88.SystemCallNumber
                                + 4
                                * (((((__int64)v2 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((__int64)v2 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3)));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 17;
  }
  return CurrentIrql;
}
