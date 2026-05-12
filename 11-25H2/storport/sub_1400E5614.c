/*
 * XREFs of sub_1400E5614 @ 0x1400E5614
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 */

__int64 __fastcall sub_1400E5614(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rax
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 536);
  if ( !v4 )
  {
    v6 = sub_14007B110(a1, 0);
    *(_QWORD *)(a1 + 536) = v6;
    v4 = v6;
    if ( !v6 )
      return 3221225495LL;
  }
  if ( *(_BYTE *)(v4 + 2) == 40 && (a4 = *(unsigned int *)(v4 + 56), (_DWORD)a4) )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = *(unsigned int *)(v4 + 4LL * v8 + 120);
      if ( (unsigned int)v9 >= 0x80 && (unsigned int)v9 < *(_DWORD *)(v4 + 16) )
      {
        v10 = v4 + v9;
        if ( *(_DWORD *)(v4 + v9) == 67 )
          break;
      }
      if ( ++v8 >= (unsigned int)a4 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v10 = 0LL;
  }
  *(_BYTE *)(v10 + 16) = 24;
  *(_BYTE *)(v10 + 80) = 1;
  *(_WORD *)(v10 + 106) = 0;
  v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 320LL);
  v12 = v11 * ((100 * v11 + *(_DWORD *)(a1 + 1076) - 1) / (unsigned int)(100 * v11));
  *(_DWORD *)(a1 + 1076) = 100 * v12;
  return sub_1400E5218(a1, 0, 15, a4, 100 * v12, v13, v14, v15, v16, v17, v18, &v19);
}
