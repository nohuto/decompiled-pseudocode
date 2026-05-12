/*
 * XREFs of sub_1401AC250 @ 0x1401AC250
 * Callers:
 *     sub_14001DAE0 @ 0x14001DAE0 (sub_14001DAE0.c)
 *     sub_14001E2C0 @ 0x14001E2C0 (sub_14001E2C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401AC250(__int64 a1, char a2, char a3, char a4, __int64 a5, unsigned __int64 a6, char a7)
{
  _BYTE *v7; // rax
  __int64 v9; // rax

  if ( a6 < 0x24 )
    return 3221225716LL;
  if ( a7 == 1 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 64) = a5;
    *(_WORD *)a1 = 8;
    *(_BYTE *)(a1 + 2) = 40;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 16) = 184;
    *(_DWORD *)(a1 + 120) = 144;
    *(_DWORD *)(a1 + 8) = 1397899864;
    *(_WORD *)(a1 + 36) = 2;
    *(_DWORD *)(a1 + 52) = 128;
    *(_DWORD *)(a1 + 24) = 72;
    *(_DWORD *)(a1 + 60) = a6;
    *(_DWORD *)(a1 + 40) = 10;
    *(_DWORD *)(a1 + 56) = 1;
    *(_WORD *)(a1 + 128) = 1;
    *(_DWORD *)(a1 + 132) = 4;
    *(_BYTE *)(a1 + 136) = a2;
    *(_BYTE *)(a1 + 137) = a3;
    *(_BYTE *)(a1 + 138) = a4;
    v9 = a1 + *(unsigned int *)(a1 + 120);
    *(_DWORD *)v9 = 64;
    *(_DWORD *)(v9 + 4) = 32;
    *(_BYTE *)(v9 + 10) = 6;
    v7 = (_BYTE *)(v9 + 24);
  }
  else
  {
    *(_QWORD *)(a1 + 24) = a5;
    v7 = (_BYTE *)(a1 + 72);
    *(_WORD *)a1 = 88;
    *(_BYTE *)(a1 + 2) = 0;
    *(_BYTE *)(a1 + 5) = a2;
    *(_BYTE *)(a1 + 6) = a3;
    *(_BYTE *)(a1 + 7) = a4;
    *(_DWORD *)(a1 + 12) = 72;
    *(_DWORD *)(a1 + 16) = a6;
    *(_DWORD *)(a1 + 20) = 10;
    *(_BYTE *)(a1 + 10) = 6;
  }
  v7[4] = a6;
  v7[3] = BYTE1(a6);
  *v7 = 18;
  return 0LL;
}
