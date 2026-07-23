/*
 * XREFs of KiSelectGroupFromNodeForAffinity @ 0x1405F27F8
 * Callers:
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 * Callees:
 *     KeCountSetBitsGroupMask @ 0x1402007F0 (KeCountSetBitsGroupMask.c)
 *     KeFindNextSetRightGroupMask @ 0x1404BB7F8 (KeFindNextSetRightGroupMask.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiSelectGroupFromNodeForAffinity(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  char v6; // dl
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // r14
  char v9; // si
  unsigned __int64 v10; // r9
  unsigned __int16 i; // di
  unsigned __int16 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF

  v14 = *(_OWORD *)(a1 + 16);
  v5 = KeCountSetBitsGroupMask((__int64)&v14, (__int64)a2, a3);
  v6 = *(_BYTE *)(a1 + 11) + 1;
  v13 = 0;
  v7 = v6 & 0x7F;
  v8 = v5;
  v9 = 0;
  LOWORD(v10) = 0;
  for ( i = 0; i < v8; *((_BYTE *)&v14 + (v10 >> 3)) &= ~(1 << (v10 & 7)) )
  {
    KeFindNextSetRightGroupMask((__int64)&v14, v7, &v13);
    v10 = v13;
    if ( !v9 )
    {
      *(_BYTE *)(a1 + 11) = v13;
      v9 = 1;
    }
    if ( (unsigned __int16)v10 < *a2 && *(_QWORD *)&a2[4 * v10 + 4] )
      break;
    ++i;
    v7 = v10;
  }
  return (unsigned __int16)v10;
}
