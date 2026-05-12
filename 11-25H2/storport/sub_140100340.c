/*
 * XREFs of sub_140100340 @ 0x140100340
 * Callers:
 *     sub_14019D5FC @ 0x14019D5FC (sub_14019D5FC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_140100340(__int64 a1, wchar_t **a2)
{
  __int64 v2; // r9
  wchar_t *v5; // rbx
  __int64 result; // rax
  unsigned __int16 *v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  __int128 *v12; // rax
  __int128 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  _BYTE v17[8]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v18[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v19; // [rsp+60h] [rbp-19h] BYREF
  char v20; // [rsp+68h] [rbp-11h]
  __int128 v21; // [rsp+70h] [rbp-9h] BYREF
  int v22; // [rsp+80h] [rbp+7h]
  char v23; // [rsp+84h] [rbp+Bh]
  __int128 v24; // [rsp+88h] [rbp+Fh] BYREF
  __int128 v25; // [rsp+98h] [rbp+1Fh]
  __int64 v26; // [rsp+A8h] [rbp+2Fh]
  char v27; // [rsp+B0h] [rbp+37h]

  v18[4] = 0;
  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  v17[4] = 0;
  v22 = 0;
  v23 = 0;
  v21 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0;
  v25 = 0LL;
  v20 = 0;
  v5 = (wchar_t *)sub_1400143E0(256LL, 240LL, 1229218130LL, v2);
  if ( !v5 )
    return 3221225495LL;
  v7 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 592LL);
  v8 = *v7;
  v18[3] = a0123456789abcd[*v7 & 0xF];
  v18[2] = a0123456789abcd[(unsigned __int8)v8 >> 4];
  v18[1] = a0123456789abcd[((unsigned int)v8 >> 8) & 0xF];
  v18[0] = a0123456789abcd[v8 >> 12];
  v9 = v7[1];
  v17[3] = a0123456789abcd[v7[1] & 0xF];
  v17[2] = a0123456789abcd[(unsigned __int8)v9 >> 4];
  v17[1] = a0123456789abcd[((unsigned int)v9 >> 8) & 0xF];
  v10 = a0123456789abcd[v9 >> 12];
  v11 = 20LL;
  v17[0] = v10;
  v21 = *(_OWORD *)(v7 + 2);
  v22 = *((_DWORD *)v7 + 5);
  v12 = &v21;
  do
  {
    if ( *(_BYTE *)v12 == 32 )
      *(_BYTE *)v12 = 0;
    v12 = (__int128 *)((char *)v12 + 1);
    --v11;
  }
  while ( v11 );
  v13 = &v24;
  v14 = 40LL;
  v24 = *(_OWORD *)(v7 + 12);
  v25 = *(_OWORD *)(v7 + 20);
  v26 = *((_QWORD *)v7 + 7);
  do
  {
    if ( *(_BYTE *)v13 == 32 )
      *(_BYTE *)v13 = 0;
    v13 = (__int128 *)((char *)v13 + 1);
    --v14;
  }
  while ( v14 );
  v15 = 8LL;
  v19 = *((_QWORD *)v7 + 8);
  v16 = &v19;
  do
  {
    if ( *(_BYTE *)v16 == 32 )
      *(_BYTE *)v16 = 0;
    v16 = (__int64 *)((char *)v16 + 1);
    --v15;
  }
  while ( v15 );
  sub_14003BCD4(
    v5,
    120LL,
    L"NVME\\%hs&Ven_%hs&SUBSYS_%hs&MN_%hs&SN_%hs&REV_%hs",
    "NVMeDisk",
    v18,
    v17,
    &v24,
    &v21,
    &v19);
  sub_1401B1FF0(v5, 0LL, 120LL);
  result = 0LL;
  *a2 = v5;
  return result;
}
