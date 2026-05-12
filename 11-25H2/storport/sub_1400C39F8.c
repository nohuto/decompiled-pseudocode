/*
 * XREFs of sub_1400C39F8 @ 0x1400C39F8
 * Callers:
 *     sub_1401875C8 @ 0x1401875C8 (sub_1401875C8.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400C0B80 @ 0x1400C0B80 (sub_1400C0B80.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_1400C39F8(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm0
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r11
  __int16 *v11; // rcx
  int v12; // edx
  __int64 v13; // r8
  __int16 v14; // r9
  __int16 v15; // r10
  __int64 v16; // rcx
  const wchar_t *v17; // rcx
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
    v7 = *(_OWORD *)(a1 + 5064);
    v8 = *(_QWORD *)(a1 + 16);
    v21 = 0LL;
    v20 = v7;
    v22 = 0;
    v23 = 0LL;
    LOWORD(v9) = sub_1400403EC(v8, (__int64)&v19);
    v11 = *(__int16 **)(a1 + 6000);
    if ( v11 )
    {
      v26 = *(_OWORD *)(v11 + 12);
      v27 = *(_OWORD *)(v11 + 20);
      v28 = *((_QWORD *)v11 + 7);
      v21 = *((_QWORD *)v11 + 8);
      v23 = *(_OWORD *)(v11 + 2);
      v9 = *((_DWORD *)v11 + 5);
      v24 = v9;
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      if ( v10 )
      {
        v12 = *(_DWORD *)(v10 + 16);
        v13 = *(unsigned int *)(v10 + 8);
      }
      else
      {
        LOBYTE(v12) = 0;
        v13 = 0LL;
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
      LOWORD(v9) = sub_1400C0B80(
                     (__int64)v17,
                     &stru_14014AE48,
                     v13,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v20,
                     *((const wchar_t **)&v19 + 1),
                     (const char *)&v23,
                     v17,
                     v15,
                     v14,
                     (const char *)&v26,
                     (const char *)&v21,
                     v13,
                     v12,
                     a3 >> 1,
                     (a3 >> 9) & 7,
                     a4);
    }
  }
  return v9;
}
