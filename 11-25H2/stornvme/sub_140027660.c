/*
 * XREFs of sub_140027660 @ 0x140027660
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14000D680 @ 0x14000D680 (sub_14000D680.c)
 *     sub_140023430 @ 0x140023430 (sub_140023430.c)
 */

__int64 __fastcall sub_140027660(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int16 v8; // cx
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // r11
  __int16 v12; // dx
  _WORD *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r10
  __int16 *v17; // r11
  unsigned int *v18; // r14
  __int64 v19; // r9
  __int16 v20; // ax
  __int64 v21; // r11
  __int64 v22; // r9
  __int16 v23; // r10
  unsigned __int16 v24; // dx
  unsigned int v25; // [rsp+68h] [rbp+10h]
  unsigned int *v26; // [rsp+78h] [rbp+20h] BYREF

  v4 = sub_140005000(a2);
  v26 = 0LL;
  v5 = v4;
  result = sub_14000B900(a2, &v26);
  v7 = v5 + 4160;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    HIBYTE(v25) = 0;
    v8 = *(_WORD *)(*(_QWORD *)v7 + 1LL);
    *(_WORD *)(result + 52) = 0;
    v9 = sub_140023430(v8);
    *(_WORD *)(v10 + 54) = v9;
    v12 = 8;
    v13 = (_WORD *)(v11 + 214);
    *(_DWORD *)(v10 + 56) = -2147450880;
    do
    {
      if ( *v13 )
        break;
      --v13;
      --v12;
    }
    while ( v12 );
    v14 = *(unsigned int *)(v10 + 32);
    v15 = v12 + 1;
    v16 = 1;
    *(_WORD *)(v10 + 40) = v15;
    if ( v14 <= 16 * (unsigned __int64)v15 + 24 )
      LODWORD(v14) = 16 * v15 + 24;
    v17 = (__int16 *)(v11 + 200);
    *(_DWORD *)(v10 + 32) = v14;
    if ( v15 > 1u )
    {
      v18 = v26;
      do
      {
        v19 = 16LL * v16;
        if ( *v18 < (unsigned __int64)(v19 + 40) )
          break;
        *(_WORD *)(v19 + v10 + 52) = v16;
        v20 = sub_140023430(*v17);
        v17 = (__int16 *)(v21 + 2);
        *(_WORD *)(v22 + v10 + 54) = v20;
        v16 = v23 + 1;
        *(_DWORD *)(v22 + v10 + 56) = -2147450880;
      }
      while ( v16 < v24 );
    }
    LOBYTE(v25) = v16 - 1;
    *(_WORD *)((char *)&v25 + 1) = 0;
    *(_BYTE *)(v5 + 4225) = *(_BYTE *)(v5 + 4225) & 0xFC | 1;
    sub_1400042C0(a1, a2);
    sub_14000D680(v5 + 4096, 0, 0);
    *(_BYTE *)(v5 + 4225) &= ~4u;
    *(_QWORD *)(v5 + 4192) = sub_140027830;
    *(_QWORD *)(v5 + 4200) = v25;
    result = sub_1400092F0(a1, a2);
  }
  else
  {
    *(_BYTE *)(v5 + 4225) |= 8u;
  }
  if ( *(_QWORD *)v7 )
    result = sub_14000CF50(a1, *(unsigned int *)(v5 + 4208), (__int64 *)(v5 + 4160), *(_QWORD *)(v5 + 4168));
  *(_DWORD *)(v5 + 4208) = 0;
  *(_QWORD *)v7 = 0LL;
  return result;
}
