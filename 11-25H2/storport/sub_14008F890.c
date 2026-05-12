/*
 * XREFs of sub_14008F890 @ 0x14008F890
 * Callers:
 *     sub_1400C1AB0 @ 0x1400C1AB0 (sub_1400C1AB0.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400869EC @ 0x1400869EC (sub_1400869EC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_14008F890(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r11
  unsigned __int16 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  const wchar_t *v11; // rcx
  int v13; // [rsp+A0h] [rbp-90h]
  __int128 v14; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v15; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-60h] BYREF
  char v17; // [rsp+D8h] [rbp-58h]
  __int128 v18; // [rsp+E0h] [rbp-50h] BYREF
  int v19; // [rsp+F0h] [rbp-40h]
  char v20; // [rsp+F4h] [rbp-3Ch]
  __int128 v21; // [rsp+F8h] [rbp-38h] BYREF
  __int128 v22; // [rsp+108h] [rbp-28h]
  __int64 v23; // [rsp+118h] [rbp-18h]
  char v24; // [rsp+120h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v19 = 0;
    v14 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v24 = 0;
    v3 = *(_OWORD *)(a1 + 5064);
    v4 = *(_QWORD *)(a1 + 16);
    v16 = 0LL;
    v15 = v3;
    v17 = 0;
    v18 = 0LL;
    LOWORD(v5) = sub_1400403EC(v4, (__int64)&v14);
    v7 = *(unsigned __int16 **)(v6 + 6000);
    if ( v7 )
    {
      v21 = *(_OWORD *)(v7 + 12);
      v22 = *(_OWORD *)(v7 + 20);
      v23 = *((_QWORD *)v7 + 7);
      v16 = *((_QWORD *)v7 + 8);
      v18 = *(_OWORD *)(v7 + 2);
      v5 = *((_DWORD *)v7 + 5);
      v19 = v5;
    }
    if ( (byte_1401694F7 & 8) != 0 )
    {
      if ( v7 )
      {
        v8 = v7[1];
        v9 = *v7;
      }
      else
      {
        v8 = 0LL;
        v9 = 0LL;
      }
      v10 = *(_QWORD *)(v6 + 6160);
      if ( !v10 || (v11 = *(const wchar_t **)(v10 + 24)) == 0LL )
        v11 = (const wchar_t *)&unk_140149394;
      LOWORD(v5) = sub_1400869EC(
                     (__int64)v11,
                     v8,
                     v9,
                     *(_DWORD *)(v6 + 56),
                     (__int64)&v15,
                     *((const wchar_t **)&v14 + 1),
                     (const char *)&v18,
                     v11,
                     v9,
                     v8,
                     (const char *)&v21,
                     (const char *)&v16,
                     *(_QWORD *)a2,
                     *(_WORD *)(a2 + 8),
                     *(_WORD *)(a2 + 10),
                     *(_WORD *)(a2 + 12),
                     *(_QWORD *)(a2 + 16),
                     *(_DWORD *)(a2 + 24),
                     *(_BYTE *)(a2 + 28),
                     *(_QWORD *)(a2 + 32),
                     v13,
                     a2);
    }
  }
  return v5;
}
