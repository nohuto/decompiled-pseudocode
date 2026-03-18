/*
 * XREFs of MiUnlockAnyPfn @ 0x140703774
 * Callers:
 *     MiReleaseScrubProtection @ 0x14070BF60 (MiReleaseScrubProtection.c)
 *     MiScrubLargePage @ 0x14070C4BC (MiScrubLargePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 */

volatile signed __int64 *__fastcall MiUnlockAnyPfn(unsigned __int64 a1, int a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  volatile signed __int64 *result; // rax

  v3 = a3;
  if ( a2 == 1 )
  {
    result = *(volatile signed __int64 **)&stru_140E2EB88.SystemCallNumber;
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2EB88.SystemCallNumber + 4 * (((a1 >> 18) & 0x3FFFFF) >> 5)),
      ~(1 << (a1 >> 18)));
    if ( a3 == 17 )
      return result;
  }
  else
  {
    result = (volatile signed __int64 *)(48 * a1 - 0x21FFFFFFFFE8LL);
    _InterlockedAnd64(result, 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 >= 2u )
      return result;
  }
  if ( KiIrqlFlags )
    result = (volatile signed __int64 *)KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a3);
  __writecr8(v3);
  return result;
}
