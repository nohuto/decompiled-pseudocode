/*
 * XREFs of sub_1400C2598 @ 0x1400C2598
 * Callers:
 *     sub_1400C1594 @ 0x1400C1594 (sub_1400C1594.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400C0378 @ 0x1400C0378 (sub_1400C0378.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_1400C2598(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _UNKNOWN **v9; // rax
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int16 *v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r14
  char v20; // si
  char v21; // r10
  __int16 v22; // r9
  int v23; // eax
  __int16 v24; // bx
  __int16 v25; // r11
  __int64 v26; // rcx
  const wchar_t *v27; // rcx
  __int16 v29; // [rsp+E8h] [rbp-80h]
  __int128 v30; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v31; // [rsp+100h] [rbp-68h] BYREF
  __int64 v32; // [rsp+110h] [rbp-58h] BYREF
  char v33; // [rsp+118h] [rbp-50h]
  __int128 v34; // [rsp+120h] [rbp-48h] BYREF
  int v35; // [rsp+130h] [rbp-38h]
  char v36; // [rsp+134h] [rbp-34h]
  __int128 v37; // [rsp+138h] [rbp-30h] BYREF
  __int128 v38; // [rsp+148h] [rbp-20h]
  __int64 v39; // [rsp+158h] [rbp-10h]
  char v40; // [rsp+160h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+1A0h] [rbp+38h] BYREF

  v9 = &retaddr;
  if ( byte_140168DAA )
  {
    v35 = 0;
    v30 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v39 = 0LL;
    v38 = 0LL;
    v40 = 0;
    v14 = *(_OWORD *)(a1 + 5064);
    v15 = *(_QWORD *)(a1 + 16);
    v32 = 0LL;
    v31 = v14;
    v33 = 0;
    v34 = 0LL;
    LOWORD(v9) = sub_1400403EC(v15, (__int64)&v30);
    v16 = *(__int16 **)(a1 + 6000);
    if ( v16 )
    {
      v37 = *(_OWORD *)(v16 + 12);
      v38 = *(_OWORD *)(v16 + 20);
      v39 = *((_QWORD *)v16 + 7);
      v32 = *((_QWORD *)v16 + 8);
      v34 = *(_OWORD *)(v16 + 2);
      LODWORD(v9) = *((_DWORD *)v16 + 5);
      v35 = (int)v9;
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      if ( a5 )
      {
        v18 = *(unsigned __int16 *)(a5 + 2);
        v19 = *(_QWORD *)(a5 + 8);
        v20 = *(_BYTE *)(a5 + 1);
        v21 = *(_BYTE *)a5;
        v22 = *(_WORD *)(a5 + 6);
        v23 = 4 * *(unsigned __int16 *)(a5 + 2);
        v29 = *(_WORD *)(a5 + 4);
      }
      else
      {
        v23 = 0;
        v18 = 0LL;
        LOBYTE(v19) = 0;
        v20 = 0;
        v21 = 0;
        LOBYTE(v22) = 0;
        LOBYTE(v29) = 0;
      }
      if ( v16 )
      {
        v24 = v16[1];
        v25 = *v16;
      }
      else
      {
        LOBYTE(v24) = 0;
        LOBYTE(v25) = 0;
      }
      v26 = *(_QWORD *)(a1 + 6160);
      if ( !v26 || (v27 = *(const wchar_t **)(v26 + 24)) == 0LL )
        v27 = (const wchar_t *)&unk_140149394;
      v17 = (a5 + 32) & ((unsigned __int128)-(__int128)a5 >> 64);
      LOWORD(v9) = sub_1400C0378(
                     (__int64)v27,
                     v17,
                     v18,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v31,
                     *((const wchar_t **)&v30 + 1),
                     (const char *)&v34,
                     v27,
                     v25,
                     v24,
                     (const char *)&v37,
                     (const char *)&v32,
                     a2,
                     a3,
                     a4,
                     a6,
                     a7,
                     a8,
                     a9,
                     v29,
                     v22,
                     v21,
                     v20,
                     v19,
                     v18,
                     v23,
                     v17);
    }
  }
  return (__int16)v9;
}
