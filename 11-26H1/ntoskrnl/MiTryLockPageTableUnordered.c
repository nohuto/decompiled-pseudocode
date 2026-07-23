/*
 * XREFs of MiTryLockPageTableUnordered @ 0x1402FCF54
 * Callers:
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiTryLockPageTableUnordered(__int64 a1, __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 1LL);
}
