/*
 * XREFs of sub_1400C4254 @ 0x1400C4254
 * Callers:
 *     sub_140188328 @ 0x140188328 (sub_140188328.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400C06A4 @ 0x1400C06A4 (sub_1400C06A4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_1400C4254(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  __int16 *v11; // r11
  int v12; // r9d
  __int64 v13; // rcx
  __int16 v14; // r10
  __int16 v15; // r11
  __int64 v16; // rdx
  const wchar_t *v17; // rdx
  __int128 v19; // [rsp+90h] [rbp-80h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-60h] BYREF
  char v22; // [rsp+B8h] [rbp-58h]
  __int128 v23; // [rsp+C0h] [rbp-50h] BYREF
  int v24; // [rsp+D0h] [rbp-40h]
  char v25; // [rsp+D4h] [rbp-3Ch]
  __int128 v26; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-28h]
  __int64 v28; // [rsp+F8h] [rbp-18h]
  char v29; // [rsp+100h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v24 = 0;
    v19 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v29 = 0;
    v8 = *(_OWORD *)(a1 + 5064);
    v9 = *(_QWORD *)(a1 + 16);
    v21 = 0LL;
    v20 = v8;
    v22 = 0;
    v23 = 0LL;
    LOWORD(v10) = sub_1400403EC(v9, (__int64)&v19);
    v11 = *(__int16 **)(a1 + 6000);
    if ( v11 )
    {
      v26 = *(_OWORD *)(v11 + 12);
      v27 = *(_OWORD *)(v11 + 20);
      v28 = *((_QWORD *)v11 + 7);
      v21 = *((_QWORD *)v11 + 8);
      v23 = *(_OWORD *)(v11 + 2);
      v10 = *((_DWORD *)v11 + 5);
      v24 = v10;
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      if ( a2 )
      {
        v12 = *(_DWORD *)(a2 + 12);
        v13 = (unsigned int)(*(_DWORD *)(a2 + 4) - 16);
      }
      else
      {
        v13 = 0LL;
        LOBYTE(v12) = 0;
      }
      if ( v11 )
      {
        v14 = v11[1];
        v15 = *v11;
      }
      else
      {
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
      }
      v16 = *(_QWORD *)(a1 + 6160);
      if ( !v16 || (v17 = *(const wchar_t **)(v16 + 24)) == 0LL )
        v17 = (const wchar_t *)&unk_140149394;
      LOWORD(v10) = sub_1400C06A4(
                      v13,
                      &stru_14014A9C8,
                      (a2 + 16) & -(__int64)(a2 != 0),
                      *(_DWORD *)(a1 + 56),
                      (__int64)&v20,
                      *((const wchar_t **)&v19 + 1),
                      (const char *)&v23,
                      v17,
                      v15,
                      v14,
                      (const char *)&v26,
                      (const char *)&v21,
                      v12,
                      v13,
                      (a2 + 16) & -(__int64)(a2 != 0),
                      a3 >> 1,
                      (a3 >> 9) & 7,
                      a4);
    }
  }
  return v10;
}
