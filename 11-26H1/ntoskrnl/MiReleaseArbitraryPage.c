/*
 * XREFs of MiReleaseArbitraryPage @ 0x1402D4FA0
 * Callers:
 *     MiConvertStandbyToProto @ 0x1402E8EE8 (MiConvertStandbyToProto.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v3 = (unsigned __int8)MiSafeLockPage((v1 + 0x220000000000LL) / 48);
  result = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  **(_QWORD **)(a1 + 56) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( (_BYTE)v3 != 17 )
  {
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v3 < 2u )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      __writecr8(v3);
    }
  }
  return result;
}
