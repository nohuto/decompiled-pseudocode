/*
 * XREFs of sub_1400675E4 @ 0x1400675E4
 * Callers:
 *     sub_14005BA74 @ 0x14005BA74 (sub_14005BA74.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400579EC @ 0x1400579EC (sub_1400579EC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_1400675E4(__int64 a1, char a2, char a3, char a4, char a5, unsigned __int16 a6, int a7)
{
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r11
  __int16 *v14; // rcx
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // r8
  __int16 v18; // r10
  __int16 v19; // bx
  const wchar_t *v20; // rdx
  __int64 v21; // rdx
  int v22; // r9d
  __int64 v23; // r8
  __int16 v24; // r10
  __int16 v25; // bx
  const wchar_t *v26; // rdx
  __int128 v28; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-60h] BYREF
  char v31; // [rsp+D8h] [rbp-58h]
  __int128 v32; // [rsp+E0h] [rbp-50h] BYREF
  int v33; // [rsp+F0h] [rbp-40h]
  char v34; // [rsp+F4h] [rbp-3Ch]
  __int128 v35; // [rsp+F8h] [rbp-38h] BYREF
  __int128 v36; // [rsp+108h] [rbp-28h]
  __int64 v37; // [rsp+118h] [rbp-18h]
  char v38; // [rsp+120h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v33 = 0;
    v28 = 0LL;
    v34 = 0;
    v35 = 0LL;
    v37 = 0LL;
    v36 = 0LL;
    v38 = 0;
    v10 = *(_OWORD *)(a1 + 5064);
    v11 = *(_QWORD *)(a1 + 16);
    v30 = 0LL;
    v29 = v10;
    v31 = 0;
    v32 = 0LL;
    LOWORD(v12) = sub_1400403EC(v11, (__int64)&v28);
    v14 = *(__int16 **)(v13 + 6000);
    if ( v14 )
    {
      v35 = *(_OWORD *)(v14 + 12);
      v36 = *(_OWORD *)(v14 + 20);
      v37 = *((_QWORD *)v14 + 7);
      v30 = *((_QWORD *)v14 + 8);
      v32 = *(_OWORD *)(v14 + 2);
      v12 = *((_DWORD *)v14 + 5);
      v33 = v12;
    }
    if ( a7 >= 0 )
    {
      if ( (byte_1401694F7 & 4) != 0 )
      {
        v21 = *(_QWORD *)(v13 + 6160);
        if ( v21 )
        {
          v22 = *(_DWORD *)(v21 + 32);
          v23 = *(unsigned int *)(v21 + 36);
        }
        else
        {
          v23 = 0xFFFFFFFFLL;
          LOBYTE(v22) = -1;
        }
        if ( v14 )
        {
          v24 = v14[1];
          v25 = *v14;
        }
        else
        {
          LOBYTE(v24) = 0;
          LOBYTE(v25) = 0;
        }
        if ( !v21 || (v26 = *(const wchar_t **)(v21 + 24)) == 0LL )
          v26 = (const wchar_t *)&unk_140149394;
        LOWORD(v12) = sub_1400579EC(
                        a6 >> 1,
                        &stru_14014B008,
                        v23,
                        *(_DWORD *)(v13 + 56),
                        (__int64)&v29,
                        *((const wchar_t **)&v28 + 1),
                        (const char *)&v32,
                        v26,
                        v25,
                        v24,
                        (const char *)&v35,
                        (const char *)&v30,
                        v23,
                        v22,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6 >> 1,
                        (a6 >> 9) & 7,
                        a7);
      }
    }
    else if ( (byte_1401694F9 & 2) != 0 )
    {
      v15 = *(_QWORD *)(v13 + 6160);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 32);
        v17 = *(unsigned int *)(v15 + 36);
      }
      else
      {
        v17 = 0xFFFFFFFFLL;
        LOBYTE(v16) = -1;
      }
      if ( v14 )
      {
        v18 = v14[1];
        v19 = *v14;
      }
      else
      {
        LOBYTE(v18) = 0;
        LOBYTE(v19) = 0;
      }
      if ( !v15 || (v20 = *(const wchar_t **)(v15 + 24)) == 0LL )
        v20 = (const wchar_t *)&unk_140149394;
      LOWORD(v12) = sub_1400579EC(
                      a6 >> 1,
                      &stru_140149D30,
                      v17,
                      *(_DWORD *)(v13 + 56),
                      (__int64)&v29,
                      *((const wchar_t **)&v28 + 1),
                      (const char *)&v32,
                      v20,
                      v19,
                      v18,
                      (const char *)&v35,
                      (const char *)&v30,
                      v17,
                      v16,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6 >> 1,
                      (a6 >> 9) & 7,
                      a7);
    }
  }
  return v12;
}
