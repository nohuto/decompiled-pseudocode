/*
 * XREFs of sub_140067384 @ 0x140067384
 * Callers:
 *     sub_14005B648 @ 0x14005B648 (sub_14005B648.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400574EC @ 0x1400574EC (sub_1400574EC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140067384(__int64 a1, char a2, char a3, unsigned __int16 a4, int a5)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r11
  __int16 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  __int16 v15; // r9
  __int16 v16; // r10
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // edx
  __int16 v21; // r9
  __int16 v22; // r10
  const wchar_t *v23; // rcx
  __int128 v24; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-60h] BYREF
  char v27; // [rsp+C8h] [rbp-58h]
  __int128 v28; // [rsp+D0h] [rbp-50h] BYREF
  int v29; // [rsp+E0h] [rbp-40h]
  char v30; // [rsp+E4h] [rbp-3Ch]
  __int128 v31; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v32; // [rsp+F8h] [rbp-28h]
  __int64 v33; // [rsp+108h] [rbp-18h]
  char v34; // [rsp+110h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v29 = 0;
    v24 = 0LL;
    v30 = 0;
    v31 = 0LL;
    v33 = 0LL;
    v32 = 0LL;
    v34 = 0;
    v8 = *(_OWORD *)(a1 + 5064);
    v9 = *(_QWORD *)(a1 + 16);
    v26 = 0LL;
    v25 = v8;
    v27 = 0;
    v28 = 0LL;
    sub_1400403EC(v9, (__int64)&v24);
    v11 = *(__int16 **)(v10 + 6000);
    if ( v11 )
    {
      v31 = *(_OWORD *)(v11 + 12);
      v32 = *(_OWORD *)(v11 + 20);
      v33 = *((_QWORD *)v11 + 7);
      v26 = *((_QWORD *)v11 + 8);
      v28 = *(_OWORD *)(v11 + 2);
      v29 = *((_DWORD *)v11 + 5);
    }
    if ( a5 >= 0 )
    {
      if ( (byte_1401694F7 & 4) != 0 )
      {
        v18 = *(_QWORD *)(v10 + 6160);
        if ( v18 )
        {
          v19 = *(unsigned int *)(v18 + 32);
          v20 = *(_DWORD *)(v18 + 36);
        }
        else
        {
          LOBYTE(v20) = -1;
          v19 = 0xFFFFFFFFLL;
        }
        if ( v11 )
        {
          v21 = v11[1];
          v22 = *v11;
        }
        else
        {
          LOBYTE(v21) = 0;
          LOBYTE(v22) = 0;
        }
        if ( !v18 || (v23 = *(const wchar_t **)(v18 + 24)) == 0LL )
          v23 = (const wchar_t *)&unk_140149394;
        sub_1400574EC(
          (__int64)v23,
          &stru_140149D50,
          v19,
          *(_DWORD *)(v10 + 56),
          (__int64)&v25,
          *((const wchar_t **)&v24 + 1),
          (const char *)&v28,
          v23,
          v22,
          v21,
          (const char *)&v31,
          (const char *)&v26,
          v20,
          v19,
          a2,
          a3,
          a4 >> 1,
          (a4 >> 9) & 7,
          a5);
      }
    }
    else if ( (byte_1401694F9 & 2) != 0 )
    {
      v12 = *(_QWORD *)(v10 + 6160);
      if ( v12 )
      {
        v13 = *(unsigned int *)(v12 + 32);
        v14 = *(_DWORD *)(v12 + 36);
      }
      else
      {
        LOBYTE(v14) = -1;
        v13 = 0xFFFFFFFFLL;
      }
      if ( v11 )
      {
        v15 = v11[1];
        v16 = *v11;
      }
      else
      {
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
      }
      if ( !v12 || (v17 = *(const wchar_t **)(v12 + 24)) == 0LL )
        v17 = (const wchar_t *)&unk_140149394;
      sub_1400574EC(
        (__int64)v17,
        &stru_14014A3F0,
        v13,
        *(_DWORD *)(v10 + 56),
        (__int64)&v25,
        *((const wchar_t **)&v24 + 1),
        (const char *)&v28,
        v17,
        v16,
        v15,
        (const char *)&v31,
        (const char *)&v26,
        v14,
        v13,
        a2,
        a3,
        a4 >> 1,
        (a4 >> 9) & 7,
        a5);
    }
  }
}
