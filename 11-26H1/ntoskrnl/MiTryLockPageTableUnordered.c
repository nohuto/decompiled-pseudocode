/*
 * XREFs of MiTryLockPageTableUnordered @ 0x140415E30
 * Callers:
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiTryLockPageTableUnordered(signed __int64 a1, unsigned __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 1);
}
