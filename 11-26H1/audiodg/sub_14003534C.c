/*
 * XREFs of sub_14003534C @ 0x14003534C
 * Callers:
 *     sub_1400352DC @ 0x1400352DC (sub_1400352DC.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14003534C(__int64 a1)
{
  int v1; // r8d
  int v2; // r10d
  int v3; // r11d
  int v4; // ebx
  unsigned __int16 v5; // ax
  int v6; // edx
  __int64 v7; // rdx
  bool v8; // zf
  int v9; // edx
  int v10; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( !(_WORD)v1
    || (v2 = *(_DWORD *)(a1 + 4)) == 0
    || (v3 = *(_DWORD *)(a1 + 8)) == 0
    || (v4 = *(unsigned __int16 *)(a1 + 12), !(_WORD)v4)
    || (v5 = *(_WORD *)(a1 + 16), v5 > 0x400u) )
  {
    v6 = 40;
    goto LABEL_38;
  }
  if ( *(_WORD *)a1 == 1 || *(_WORD *)a1 == 3 )
  {
    if ( v5
      || (v10 = *(unsigned __int16 *)(a1 + 14), (v10 & 7) != 0)
      || (unsigned __int16)v1 > 2u
      || v3 != (unsigned int)(v10 * v2 * v1) >> 3 )
    {
      v6 = 48;
      goto LABEL_38;
    }
    return 0LL;
  }
  if ( *(_WORD *)a1 != 0xFFFE )
    return 0LL;
  if ( v5 >= 0x16u )
  {
    if ( *(_QWORD *)(a1 + 24) == 0x10000000000001LL && *(_QWORD *)(a1 + 32) == 0x719B3800AA000080LL
      || *(_QWORD *)(a1 + 24) == 0x10000000000003LL && *(_QWORD *)(a1 + 32) == 0x719B3800AA000080LL )
    {
      v7 = 0x10000000000001LL - *(_QWORD *)(a1 + 24);
      if ( !v7 )
        v7 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
      v8 = v7 == 0;
      v9 = *(unsigned __int16 *)(a1 + 14);
      if ( v8 )
      {
        if ( v9 != 8 && ((((_WORD)v9 - 16) & 0xFFE7) != 0 || (_WORD)v9 == 40) )
        {
          v6 = 63;
          goto LABEL_38;
        }
      }
      else if ( (((_WORD)v9 - 32) & 0xFFDF) != 0 )
      {
        v6 = 70;
        goto LABEL_38;
      }
      if ( !*(_WORD *)(a1 + 18) || (unsigned __int16)v9 < *(_WORD *)(a1 + 18) )
      {
        v6 = 75;
        goto LABEL_38;
      }
      if ( v3 != (unsigned int)(v2 * v1 * v9) >> 3 )
      {
        v6 = 78;
        goto LABEL_38;
      }
      if ( v4 != v1 * v9 / 8 )
      {
        v6 = 81;
        goto LABEL_38;
      }
    }
    return 0LL;
  }
  v6 = 53;
LABEL_38:
  sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\Include\\WaveUtil_core.h", -2147024809);
  return 2147942487LL;
}
