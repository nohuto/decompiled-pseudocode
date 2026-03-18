/*
 * XREFs of sub_140001B40 @ 0x140001B40
 * Callers:
 *     sub_140001810 @ 0x140001810 (sub_140001810.c)
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140001AB0 @ 0x140001AB0 (sub_140001AB0.c)
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_140001B40(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rsi
  __int64 v6; // rax
  unsigned int *v7; // r14
  __int64 v8; // r12
  unsigned __int8 v9; // r13
  unsigned __int8 v10; // cl
  __int64 v11; // r15
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int8 v22; // [rsp+38h] [rbp-29h]
  __int128 v23; // [rsp+40h] [rbp-21h] BYREF
  __int128 v24; // [rsp+50h] [rbp-11h]
  __int128 v25; // [rsp+60h] [rbp-1h] BYREF
  __int64 v26; // [rsp+70h] [rbp+Fh]
  int v27; // [rsp+78h] [rbp+17h]

  v2 = *(_BYTE *)(a2 + 2) == 40;
  v3 = *(_QWORD *)(a1 + 1560);
  v23 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0;
  v25 = 0LL;
  if ( v2 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = (unsigned int *)(a2 + 60);
    v8 = *(_QWORD *)(a2 + 64);
    v9 = *(_BYTE *)(v6 + a2 + 8);
    v10 = *(_BYTE *)(v6 + a2 + 10);
    v22 = *(_BYTE *)(v6 + a2 + 9);
  }
  else
  {
    v7 = (unsigned int *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_BYTE *)(a2 + 5);
    v10 = *(_BYTE *)(a2 + 7);
    v22 = *(_BYTE *)(a2 + 6);
  }
  LOWORD(v23) = v23 & 0x7F00;
  v11 = v10;
  BYTE3(v23) = BYTE3(v23) & 0xE0 | 0x12;
  BYTE2(v23) = 6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v10 + 1672) + 66LL) )
    BYTE5(v23) |= 1u;
  v12 = *(_OWORD *)(v3 + 24);
  BYTE7(v23) |= 2u;
  BYTE4(v23) = 55;
  v24 = v12;
  LODWORD(v25) = 538976288;
  *((_QWORD *)&v23 + 1) = 0x20202020654D564ELL;
  sub_140001AB0(v3, (__int64)&v25, 4u);
  if ( (*(_BYTE *)(v3 + 256) & 1) != 0 )
    HIWORD(v27) = -16129;
  v16 = *v7;
  if ( *v7 >= 0x3C )
  {
    v16 = 60;
  }
  else if ( !v16 )
  {
LABEL_10:
    LOBYTE(v15) = 36;
    LOBYTE(v14) = 5;
    LOBYTE(v13) = 48;
    sub_140002330(a2, v13, v14, v15);
    v17 = -1056964602;
    goto LABEL_11;
  }
  if ( !v8 )
    goto LABEL_10;
  sub_140032980(v8, &v23, v16);
  *v7 = v16;
  *(_BYTE *)(a2 + 3) = 1;
  v17 = 0;
LABEL_11:
  v18 = *(_DWORD *)(a1 + 212);
  if ( v18 )
  {
    v19 = *(unsigned __int16 *)(a1 + 330) * (*(unsigned __int16 *)(a1 + 326) - 1LL);
    if ( v19 >= 0xFFFFFFFF )
      v19 = 0xFFFFFFFFLL;
    v20 = *(unsigned int *)(a1 + 152);
    if ( (_DWORD)v20 && v19 >= v20 )
      LODWORD(v19) = *(_DWORD *)(a1 + 152);
    StorPortSetDeviceQueueDepth(a1, v9, v22, (unsigned __int8)v11, (unsigned int)v19 / v18);
  }
  StorPortExtendedFunction(
    46LL,
    a1,
    *(_QWORD *)(a1 + 8 * v11 + 1672),
    ~(unsigned __int8)(*(_DWORD *)(a1 + 56) >> 14) & 8);
  return v17;
}
