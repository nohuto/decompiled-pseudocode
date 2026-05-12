/*
 * XREFs of sub_14008F698 @ 0x14008F698
 * Callers:
 *     sub_14008A3E8 @ 0x14008A3E8 (sub_14008A3E8.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140086758 @ 0x140086758 (sub_140086758.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_14008F698(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r11
  __int16 *v8; // rcx
  __int16 v9; // r14
  __int16 v10; // r15
  __int64 v11; // rsi
  const wchar_t *v12; // rsi
  __int64 v13; // r11
  unsigned int v14; // edx
  __int128 v16; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v17; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-60h] BYREF
  char v19; // [rsp+D8h] [rbp-58h]
  __int128 v20; // [rsp+E0h] [rbp-50h] BYREF
  int v21; // [rsp+F0h] [rbp-40h]
  char v22; // [rsp+F4h] [rbp-3Ch]
  __int128 v23; // [rsp+F8h] [rbp-38h] BYREF
  __int128 v24; // [rsp+108h] [rbp-28h]
  __int64 v25; // [rsp+118h] [rbp-18h]
  char v26; // [rsp+120h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v21 = 0;
    v16 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v26 = 0;
    v4 = *(_OWORD *)(a1 + 5064);
    v5 = *(_QWORD *)(a1 + 16);
    v18 = 0LL;
    v17 = v4;
    v19 = 0;
    v20 = 0LL;
    LOWORD(v6) = sub_1400403EC(v5, (__int64)&v16);
    v8 = *(__int16 **)(a1 + 6000);
    if ( v8 )
    {
      v23 = *(_OWORD *)(v8 + 12);
      v24 = *(_OWORD *)(v8 + 20);
      v25 = *((_QWORD *)v8 + 7);
      v18 = *((_QWORD *)v8 + 8);
      v20 = *(_OWORD *)(v8 + 2);
      v6 = *((_DWORD *)v8 + 5);
      v21 = v6;
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      if ( v8 )
      {
        v9 = v8[1];
        v10 = *v8;
      }
      else
      {
        LOBYTE(v9) = 0;
        LOBYTE(v10) = 0;
      }
      v11 = *(_QWORD *)(a1 + 6160);
      if ( !v11 || (v12 = *(const wchar_t **)(v11 + 24)) == 0LL )
        v12 = (const wchar_t *)&unk_140149394;
      v13 = 2 * v7;
      v14 = *(unsigned __int8 *)(a2 + 8 * v13 + 17);
      LOWORD(v6) = sub_140086758(
                     *(unsigned __int8 *)(a2 + 8 * v13 + 16),
                     (v14 >> 1) & 1,
                     (v14 >> 2) & 1,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v17,
                     *((const wchar_t **)&v16 + 1),
                     (const char *)&v20,
                     v12,
                     v10,
                     v9,
                     (const char *)&v23,
                     (const char *)&v18,
                     *(_BYTE *)(a2 + 8 * v13 + 16),
                     v14 & 1,
                     (v14 & 2) != 0,
                     (v14 & 4) != 0,
                     (v14 & 8) != 0,
                     (v14 & 0x10) != 0,
                     *(_DWORD *)(a2 + 8 * v13 + 20),
                     *(_DWORD *)(a2 + 8 * v13 + 24),
                     *(_DWORD *)(a2 + 8 * v13 + 28));
    }
  }
  return v6;
}
