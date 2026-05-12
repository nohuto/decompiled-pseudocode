/*
 * XREFs of sub_140067B68 @ 0x140067B68
 * Callers:
 *     sub_14005DB44 @ 0x14005DB44 (sub_14005DB44.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140056FF8 @ 0x140056FF8 (sub_140056FF8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140067B68(__int64 a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r11
  __int16 *v11; // rcx
  __int64 v12; // rax
  __int16 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // r9d
  __int16 v17; // bx
  __int16 v18; // di
  const wchar_t *v19; // rdx
  __int128 v20; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-60h] BYREF
  char v23; // [rsp+C8h] [rbp-58h]
  __int128 v24; // [rsp+D0h] [rbp-50h] BYREF
  int v25; // [rsp+E0h] [rbp-40h]
  char v26; // [rsp+E4h] [rbp-3Ch]
  __int128 v27; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v28; // [rsp+F8h] [rbp-28h]
  __int64 v29; // [rsp+108h] [rbp-18h]
  char v30; // [rsp+110h] [rbp-10h]

  if ( byte_140168DAA )
  {
    v25 = 0;
    v20 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    v30 = 0;
    v8 = *(_OWORD *)(a1 + 5064);
    v9 = *(_QWORD *)(a1 + 16);
    v22 = 0LL;
    v21 = v8;
    v23 = 0;
    v24 = 0LL;
    sub_1400403EC(v9, (__int64)&v20);
    v11 = *(__int16 **)(v10 + 6000);
    if ( v11 )
    {
      v27 = *(_OWORD *)(v11 + 12);
      v28 = *(_OWORD *)(v11 + 20);
      v29 = *((_QWORD *)v11 + 7);
      v22 = *((_QWORD *)v11 + 8);
      v24 = *(_OWORD *)(v11 + 2);
      v25 = *((_DWORD *)v11 + 5);
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      v12 = *(_QWORD *)(v10 + 6152);
      if ( v12 )
        v13 = *(_WORD *)(v12 + 8);
      else
        LOBYTE(v13) = -1;
      v14 = *(_QWORD *)(v10 + 6160);
      if ( v14 )
      {
        v15 = *(unsigned int *)(v14 + 32);
        v16 = *(_DWORD *)(v14 + 36);
      }
      else
      {
        LOBYTE(v16) = -1;
        v15 = 0xFFFFFFFFLL;
      }
      if ( v11 )
      {
        v17 = v11[1];
        v18 = *v11;
      }
      else
      {
        LOBYTE(v17) = 0;
        LOBYTE(v18) = 0;
      }
      if ( !v14 || (v19 = *(const wchar_t **)(v14 + 24)) == 0LL )
        v19 = (const wchar_t *)&unk_140149394;
      sub_140056FF8(
        (a4 >> 9) & 7,
        (__int64)v19,
        v15,
        *(_DWORD *)(v10 + 56),
        (__int64)&v21,
        *((const wchar_t **)&v20 + 1),
        (const char *)&v24,
        v19,
        v18,
        v17,
        (const char *)&v27,
        (const char *)&v22,
        v16,
        v15,
        a2,
        a3,
        v13,
        a4 >> 1,
        (a4 >> 9) & 7,
        a5);
    }
  }
}
