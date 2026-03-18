/*
 * XREFs of MiCheckSameSlabType @ 0x140415E50
 * Callers:
 *     MiLockTargetPageForTrade @ 0x140295360 (MiLockTargetPageForTrade.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckSameSlabType(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rdx
  unsigned __int8 v7; // r10
  unsigned __int8 v8; // cl

  if ( a2 != a4 )
    return 0LL;
  if ( !byte_140E3BD26 )
    return 1LL;
  v5 = (unsigned __int64)((a1 + 0x220000000000LL) / 48) >> 9;
  if ( !*(_BYTE *)(qword_140E3D0C0 + 2 * v5) )
    return 1LL;
  if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v5) != 9 )
    return 1LL;
  v7 = *(_BYTE *)(qword_140E3D0C0 + 2 * v5 + 1) & 0x7F;
  v8 = *(_BYTE *)(qword_140E3D0C0 + 2 * ((unsigned __int64)((a3 + 0x220000000000LL) / 48) >> 9) + 1) & 0x7F;
  if ( v7 == v8 )
    return 1LL;
  if ( !a5 )
    return 0LL;
  if ( v7 >= 0x40u )
    return 1LL;
  return v8 >= 0x40u;
}
