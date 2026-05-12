/*
 * XREFs of sub_1400C485C @ 0x1400C485C
 * Callers:
 *     sub_140188EAC @ 0x140188EAC (sub_140188EAC.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400BF390 @ 0x1400BF390 (sub_1400BF390.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400C485C(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // r11
  unsigned __int16 *v9; // rcx
  __int64 v10; // r8
  int v11; // r8d
  int v12; // r13d
  int v13; // r12d
  int v14; // r15d
  __int16 v15; // r9
  __int16 v16; // r10
  __int16 v17; // si
  __int16 v18; // r14
  int v19; // eax
  __int16 v20; // dx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  const wchar_t *v24; // rcx
  int v25; // [rsp+110h] [rbp-80h]
  int v26; // [rsp+114h] [rbp-7Ch]
  int v27; // [rsp+118h] [rbp-78h]
  int v28; // [rsp+11Ch] [rbp-74h]
  int v29; // [rsp+120h] [rbp-70h]
  int v30; // [rsp+124h] [rbp-6Ch]
  char v31; // [rsp+128h] [rbp-68h]
  int v32; // [rsp+12Ch] [rbp-64h]
  char v33; // [rsp+130h] [rbp-60h]
  char v34; // [rsp+134h] [rbp-5Ch]
  __int128 v37; // [rsp+148h] [rbp-48h] BYREF
  __int128 v38; // [rsp+158h] [rbp-38h] BYREF
  __int64 v39; // [rsp+168h] [rbp-28h] BYREF
  char v40; // [rsp+170h] [rbp-20h]
  __int128 v41; // [rsp+178h] [rbp-18h] BYREF
  int v42; // [rsp+188h] [rbp-8h]
  char v43; // [rsp+18Ch] [rbp-4h]
  __int128 v44; // [rsp+190h] [rbp+0h] BYREF
  __int128 v45; // [rsp+1A0h] [rbp+10h]
  __int64 v46; // [rsp+1B0h] [rbp+20h]
  char v47; // [rsp+1B8h] [rbp+28h]

  if ( byte_140168DAA )
  {
    v42 = 0;
    v37 = 0LL;
    v43 = 0;
    v44 = 0LL;
    v46 = 0LL;
    v45 = 0LL;
    v47 = 0;
    v6 = *(_OWORD *)(a1 + 5064);
    v7 = *(_QWORD *)(a1 + 16);
    v39 = 0LL;
    v38 = v6;
    v40 = 0;
    v41 = 0LL;
    sub_1400403EC(v7, (__int64)&v37);
    v9 = *(unsigned __int16 **)(v8 + 6000);
    v10 = 0LL;
    if ( v9 )
    {
      v44 = *(_OWORD *)(v9 + 12);
      v45 = *(_OWORD *)(v9 + 20);
      v46 = *((_QWORD *)v9 + 7);
      v39 = *((_QWORD *)v9 + 8);
      v41 = *(_OWORD *)(v9 + 2);
      v42 = *((_DWORD *)v9 + 5);
    }
    if ( (byte_1401694F9 & 1) != 0 )
    {
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 64);
        v12 = *(_DWORD *)(a2 + 40);
        v13 = *(_DWORD *)(a2 + 36);
        v14 = *(_DWORD *)(a2 + 32);
        v15 = *(_WORD *)(a2 + 26);
        v16 = *(_WORD *)(a2 + 24);
        v17 = *(_WORD *)(a2 + 22);
        v18 = *(_WORD *)(a2 + 20);
        v25 = *(_DWORD *)(a2 + 88);
        v26 = *(_DWORD *)(a2 + 84);
        v27 = *(_DWORD *)(a2 + 80);
        v28 = *(_DWORD *)(a2 + 76);
        v29 = *(_DWORD *)(a2 + 72);
        v30 = *(_DWORD *)(a2 + 68);
        v19 = *(_DWORD *)(a2 + 44);
        v32 = *(_DWORD *)(a2 + 60);
        v20 = *(_WORD *)(a2 + 8);
        v21 = *(_DWORD *)(a2 + 52);
        v31 = v11;
        v10 = 0LL;
        v34 = v20;
      }
      else
      {
        LOBYTE(v25) = 0;
        LOBYTE(v21) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v19) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v30) = 0;
        LOBYTE(v15) = 0;
        v31 = 0;
        LOBYTE(v16) = 0;
        LOBYTE(v32) = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v18) = 0;
        v34 = 0;
      }
      v33 = v19;
      if ( v9 )
      {
        v22 = v9[1];
        v10 = *v9;
      }
      else
      {
        v33 = v19;
        v22 = 0LL;
      }
      v23 = *(_QWORD *)(v8 + 6160);
      if ( !v23 || (v24 = *(const wchar_t **)(v23 + 24)) == 0LL )
        v24 = (const wchar_t *)&unk_140149394;
      sub_1400BF390(
        (__int64)v24,
        v22,
        v10,
        *(_DWORD *)(a1 + 56),
        (__int64)&v38,
        *((const wchar_t **)&v37 + 1),
        (const char *)&v41,
        v24,
        v10,
        v22,
        (const char *)&v44,
        (const char *)&v39,
        v34,
        v18,
        v17,
        v16,
        v15,
        v14,
        v13,
        v12,
        v33,
        v21,
        v32,
        v31,
        v30,
        v29,
        v28,
        v27,
        v26,
        v25,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
