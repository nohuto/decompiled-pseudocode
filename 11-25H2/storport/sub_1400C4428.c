/*
 * XREFs of sub_1400C4428 @ 0x1400C4428
 * Callers:
 *     sub_14018852C @ 0x14018852C (sub_14018852C.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400BFB2C @ 0x1400BFB2C (sub_1400BFB2C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_1400C4428(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm0
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r11
  __int16 *v12; // rcx
  char v13; // r10
  char v14; // r9
  __int16 v15; // dx
  __int16 v16; // r14
  __int16 v17; // bx
  __int16 v18; // si
  __int64 v19; // rcx
  const wchar_t *v20; // rcx
  __int128 v22; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-60h] BYREF
  char v25; // [rsp+C8h] [rbp-58h]
  __int128 v26; // [rsp+D0h] [rbp-50h] BYREF
  int v27; // [rsp+E0h] [rbp-40h]
  char v28; // [rsp+E4h] [rbp-3Ch]
  __int128 v29; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v30; // [rsp+F8h] [rbp-28h]
  __int64 v31; // [rsp+108h] [rbp-18h]
  char v32; // [rsp+110h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v27 = 0;
    v22 = 0LL;
    v28 = 0;
    v29 = 0LL;
    v31 = 0LL;
    v30 = 0LL;
    v32 = 0;
    v7 = *(_OWORD *)(a1 + 5064);
    v8 = *(_QWORD *)(a1 + 16);
    v24 = 0LL;
    v23 = v7;
    v25 = 0;
    v26 = 0LL;
    LOWORD(v9) = sub_1400403EC(v8, (__int64)&v22);
    v12 = *(__int16 **)(v11 + 6000);
    if ( v12 )
    {
      v29 = *(_OWORD *)(v12 + 12);
      v30 = *(_OWORD *)(v12 + 20);
      v31 = *((_QWORD *)v12 + 7);
      v24 = *((_QWORD *)v12 + 8);
      v26 = *(_OWORD *)(v12 + 2);
      v9 = *((_DWORD *)v12 + 5);
      v27 = v9;
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      if ( a2 )
      {
        v13 = *(_BYTE *)(a2 + 26);
        v14 = *(_BYTE *)(a2 + 25);
        LOBYTE(v10) = *(_BYTE *)(a2 + 24);
        v15 = *(_WORD *)(a2 + 22);
        v16 = *(_WORD *)(a2 + 20);
      }
      else
      {
        v13 = 0;
        v14 = 0;
        LOBYTE(v10) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
      }
      if ( v12 )
      {
        v17 = v12[1];
        v18 = *v12;
      }
      else
      {
        LOBYTE(v17) = 0;
        LOBYTE(v18) = 0;
      }
      v19 = *(_QWORD *)(v11 + 6160);
      if ( !v19 || (v20 = *(const wchar_t **)(v19 + 24)) == 0LL )
        v20 = (const wchar_t *)&unk_140149394;
      LOWORD(v9) = sub_1400BFB2C(
                     (__int64)v20,
                     &stru_14014AFF8,
                     v10,
                     *(_DWORD *)(v11 + 56),
                     (__int64)&v23,
                     *((const wchar_t **)&v22 + 1),
                     (const char *)&v26,
                     v20,
                     v18,
                     v17,
                     (const char *)&v29,
                     (const char *)&v24,
                     v16,
                     v15,
                     v10,
                     v14,
                     v13,
                     a3 >> 1,
                     (a3 >> 9) & 7,
                     a4);
    }
  }
  return v9;
}
