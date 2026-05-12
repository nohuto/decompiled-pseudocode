/*
 * XREFs of sub_14006789C @ 0x14006789C
 * Callers:
 *     sub_14005BF0C @ 0x14005BF0C (sub_14005BF0C.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140057750 @ 0x140057750 (sub_140057750.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_14006789C(__int64 a1, char a2, char a3, char a4, char a5, char a6, unsigned __int16 a7, int a8)
{
  __int128 v11; // xmm0
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r11
  __int16 *v15; // rcx
  __int64 v16; // rdx
  int v17; // r9d
  __int64 v18; // r8
  __int16 v19; // r10
  __int16 v20; // bx
  const wchar_t *v21; // rdx
  __int64 v22; // rdx
  int v23; // r9d
  __int64 v24; // r8
  __int16 v25; // r10
  __int16 v26; // bx
  const wchar_t *v27; // rdx
  __int128 v29; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v30; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-60h] BYREF
  char v32; // [rsp+D8h] [rbp-58h]
  __int128 v33; // [rsp+E0h] [rbp-50h] BYREF
  int v34; // [rsp+F0h] [rbp-40h]
  char v35; // [rsp+F4h] [rbp-3Ch]
  __int128 v36; // [rsp+F8h] [rbp-38h] BYREF
  __int128 v37; // [rsp+108h] [rbp-28h]
  __int64 v38; // [rsp+118h] [rbp-18h]
  char v39; // [rsp+120h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v34 = 0;
    v29 = 0LL;
    v35 = 0;
    v36 = 0LL;
    v38 = 0LL;
    v37 = 0LL;
    v39 = 0;
    v11 = *(_OWORD *)(a1 + 5064);
    v12 = *(_QWORD *)(a1 + 16);
    v31 = 0LL;
    v30 = v11;
    v32 = 0;
    v33 = 0LL;
    LOWORD(v13) = sub_1400403EC(v12, (__int64)&v29);
    v15 = *(__int16 **)(v14 + 6000);
    if ( v15 )
    {
      v36 = *(_OWORD *)(v15 + 12);
      v37 = *(_OWORD *)(v15 + 20);
      v38 = *((_QWORD *)v15 + 7);
      v31 = *((_QWORD *)v15 + 8);
      v33 = *(_OWORD *)(v15 + 2);
      v13 = *((_DWORD *)v15 + 5);
      v34 = v13;
    }
    if ( a8 >= 0 )
    {
      if ( (byte_1401694F7 & 4) != 0 )
      {
        v22 = *(_QWORD *)(v14 + 6160);
        if ( v22 )
        {
          v23 = *(_DWORD *)(v22 + 32);
          v24 = *(unsigned int *)(v22 + 36);
        }
        else
        {
          v24 = 0xFFFFFFFFLL;
          LOBYTE(v23) = -1;
        }
        if ( v15 )
        {
          v25 = v15[1];
          v26 = *v15;
        }
        else
        {
          LOBYTE(v25) = 0;
          LOBYTE(v26) = 0;
        }
        if ( !v22 || (v27 = *(const wchar_t **)(v22 + 24)) == 0LL )
          v27 = (const wchar_t *)&unk_140149394;
        LOWORD(v13) = sub_140057750(
                        a7 >> 1,
                        &stru_14014A6C0,
                        v24,
                        *(_DWORD *)(v14 + 56),
                        (__int64)&v30,
                        *((const wchar_t **)&v29 + 1),
                        (const char *)&v33,
                        v27,
                        v26,
                        v25,
                        (const char *)&v36,
                        (const char *)&v31,
                        v24,
                        v23,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7 >> 1,
                        (a7 >> 9) & 7,
                        a8);
      }
    }
    else if ( (byte_1401694F9 & 2) != 0 )
    {
      v16 = *(_QWORD *)(v14 + 6160);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 32);
        v18 = *(unsigned int *)(v16 + 36);
      }
      else
      {
        v18 = 0xFFFFFFFFLL;
        LOBYTE(v17) = -1;
      }
      if ( v15 )
      {
        v19 = v15[1];
        v20 = *v15;
      }
      else
      {
        LOBYTE(v19) = 0;
        LOBYTE(v20) = 0;
      }
      if ( !v16 || (v21 = *(const wchar_t **)(v16 + 24)) == 0LL )
        v21 = (const wchar_t *)&unk_140149394;
      LOWORD(v13) = sub_140057750(
                      a7 >> 1,
                      &stru_14014AAA0,
                      v18,
                      *(_DWORD *)(v14 + 56),
                      (__int64)&v30,
                      *((const wchar_t **)&v29 + 1),
                      (const char *)&v33,
                      v21,
                      v20,
                      v19,
                      (const char *)&v36,
                      (const char *)&v31,
                      v18,
                      v17,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7 >> 1,
                      (a7 >> 9) & 7,
                      a8);
    }
  }
  return v13;
}
