/*
 * XREFs of sub_1400671AC @ 0x1400671AC
 * Callers:
 *     sub_14005B208 @ 0x14005B208 (sub_14005B208.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140057278 @ 0x140057278 (sub_140057278.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400671AC(__int64 a1, char a2, char a3, char a4, unsigned __int16 a5, char a6)
{
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r11
  __int16 *v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  int v15; // r10d
  __int16 v16; // bx
  __int16 v17; // di
  const wchar_t *v18; // r8
  __int128 v19; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-60h] BYREF
  char v22; // [rsp+C8h] [rbp-58h]
  __int128 v23; // [rsp+D0h] [rbp-50h] BYREF
  int v24; // [rsp+E0h] [rbp-40h]
  char v25; // [rsp+E4h] [rbp-3Ch]
  __int128 v26; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v27; // [rsp+F8h] [rbp-28h]
  __int64 v28; // [rsp+108h] [rbp-18h]
  char v29; // [rsp+110h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v24 = 0;
    v19 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v29 = 0;
    v9 = *(_OWORD *)(a1 + 5064);
    v10 = *(_QWORD *)(a1 + 16);
    v21 = 0LL;
    v20 = v9;
    v22 = 0;
    v23 = 0LL;
    sub_1400403EC(v10, (__int64)&v19);
    v12 = *(__int16 **)(v11 + 6000);
    if ( v12 )
    {
      v26 = *(_OWORD *)(v12 + 12);
      v27 = *(_OWORD *)(v12 + 20);
      v28 = *((_QWORD *)v12 + 7);
      v21 = *((_QWORD *)v12 + 8);
      v23 = *(_OWORD *)(v12 + 2);
      v24 = *((_DWORD *)v12 + 5);
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      v13 = *(_QWORD *)(v11 + 6160);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 32);
        v15 = *(_DWORD *)(v13 + 36);
      }
      else
      {
        LOBYTE(v15) = -1;
        LOBYTE(v14) = -1;
      }
      if ( v12 )
      {
        v16 = v12[1];
        v17 = *v12;
      }
      else
      {
        LOBYTE(v16) = 0;
        LOBYTE(v17) = 0;
      }
      if ( !v13 || (v18 = *(const wchar_t **)(v13 + 24)) == 0LL )
        v18 = (const wchar_t *)&unk_140149394;
      sub_140057278(
        (a5 >> 9) & 7,
        &stru_14014A880,
        (__int64)v18,
        *(_DWORD *)(v11 + 56),
        (__int64)&v20,
        *((const wchar_t **)&v19 + 1),
        (const char *)&v23,
        v18,
        v17,
        v16,
        (const char *)&v26,
        (const char *)&v21,
        v15,
        v14,
        a2,
        a3,
        a4,
        a5 >> 1,
        (a5 >> 9) & 7,
        a6);
    }
  }
}
