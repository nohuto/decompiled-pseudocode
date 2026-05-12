/*
 * XREFs of sub_140100974 @ 0x140100974
 * Callers:
 *     sub_14019D5FC @ 0x14019D5FC (sub_14019D5FC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140040228 @ 0x140040228 (sub_140040228.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401B1FF0 @ 0x1401B1FF0 (sub_1401B1FF0.c)
 */

__int64 __fastcall sub_140100974(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  _WORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  int v14; // eax
  _WORD *v15; // rcx
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r10d
  _WORD *v20; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v22[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h] BYREF
  char v24; // [rsp+70h] [rbp+7h]
  __int128 v25; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v26; // [rsp+88h] [rbp+1Fh]
  __int64 v27; // [rsp+98h] [rbp+2Fh]
  char v28; // [rsp+A0h] [rbp+37h]

  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  v22[4] = 0;
  v27 = 0LL;
  v28 = 0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v5 = (_WORD *)sub_1400143E0(256LL, 718LL, 1229218130LL, v2);
  if ( !v5 )
    return 3221225495LL;
  v7 = *(_QWORD *)(a1 + 16);
  v21 = 359LL;
  v20 = v5;
  v8 = *(unsigned __int16 **)(v7 + 592);
  v9 = *v8;
  v22[3] = a0123456789abcd[*v8 & 0xF];
  v22[2] = a0123456789abcd[(unsigned __int8)v9 >> 4];
  v22[1] = a0123456789abcd[((unsigned int)v9 >> 8) & 0xF];
  LOBYTE(v7) = a0123456789abcd[v9 >> 12];
  v10 = 40LL;
  v22[0] = v7;
  v11 = &v25;
  v25 = *(_OWORD *)(v8 + 12);
  v26 = *(_OWORD *)(v8 + 20);
  v27 = *((_QWORD *)v8 + 7);
  do
  {
    if ( *(_BYTE *)v11 == 32 )
      *(_BYTE *)v11 = 0;
    v11 = (__int128 *)((char *)v11 + 1);
    --v10;
  }
  while ( v10 );
  v12 = 8LL;
  v23 = *((_QWORD *)v8 + 8);
  v13 = &v23;
  do
  {
    if ( *(_BYTE *)v13 == 32 )
      *(_BYTE *)v13 = 0;
    v13 = (__int64 *)((char *)v13 + 1);
    --v12;
  }
  while ( v12 );
  v14 = sub_140040228(
          v5,
          0x167uLL,
          &v20,
          &v21,
          0,
          (const int *)L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
          "NVMeDisk",
          v22,
          &v25,
          &v23);
  v15 = v20 + 1;
  v16 = v21 - 1;
  ++v20;
  --v21;
  if ( v14 >= 0 )
  {
    v17 = sub_140040228(v15, v16, &v20, &v21, 0, (const int *)L"NVME\\%hs_%8.8hs%40.40hs", "NVMeDisk", v22, &v25);
    v15 = v20 + 1;
    v16 = v21 - 1;
    ++v20;
    --v21;
    if ( v17 >= 0 )
    {
      v18 = sub_140040228(v15, v16, &v20, &v21, 0, (const int *)L"NVME\\%hs_%8.8hs", "NVMeDisk", v22);
      v15 = v20;
      if ( v18 >= 0 )
      {
        ++v20;
        sub_140040228(v20, v21 - 1, &v20, &v21, 0, (const int *)L"%hs", "GenNvmeDisk");
        v15 = v20 + 1;
      }
    }
  }
  *v15 = 0;
  LOBYTE(v16) = 1;
  sub_1401B1FF0(v5, v16, 359LL);
  result = v19;
  *a2 = v5;
  return result;
}
