/*
 * XREFs of SmHwAcceleratorIssueRequest @ 0x140643658
 * Callers:
 *     SmStoreCompressBuffer @ 0x14024CEF0 (SmStoreCompressBuffer.c)
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 * Callees:
 *     AccelCompressBuffer @ 0x1406E2E00 (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x1406E2FB8 (AccelDecompressBuffer.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SmHwAcceleratorIssueRequest(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  __int64 result; // rax
  _QWORD v20[2]; // [rsp+28h] [rbp-91h] BYREF
  int v21; // [rsp+38h] [rbp-81h]
  __int64 v22; // [rsp+3Ch] [rbp-7Dh]
  __int64 v23; // [rsp+48h] [rbp-71h]
  __int64 v24; // [rsp+50h] [rbp-69h]
  __int64 v25; // [rsp+58h] [rbp-61h]
  int v26; // [rsp+60h] [rbp-59h]
  __int64 v27; // [rsp+68h] [rbp-51h]
  int v28; // [rsp+70h] [rbp-49h]
  int v29; // [rsp+88h] [rbp-31h] BYREF
  __int64 v30; // [rsp+90h] [rbp-29h]
  int v31; // [rsp+98h] [rbp-21h]
  __int64 v32; // [rsp+9Ch] [rbp-1Dh]
  __int64 v33; // [rsp+A8h] [rbp-11h]
  __int64 v34; // [rsp+B0h] [rbp-9h]
  __int64 v35; // [rsp+B8h] [rbp-1h]
  int v36; // [rsp+C0h] [rbp+7h]
  __int64 v37; // [rsp+C8h] [rbp+Fh]
  int v38; // [rsp+D0h] [rbp+17h]

  memset_0(&v29, 0, 0x60uLL);
  memset_0(v20, 0, 0x60uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = a2;
  v13 = *(_QWORD *)(v11 + 32);
  v14 = *(_DWORD *)(v13 + 40) * a2;
  v15 = *(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)(v13 + 4LL * *(int *)(v11 + 60) + 56) * v12);
  v16 = v14 + a1 + 32;
  if ( a3 )
  {
    v21 = 1;
    v22 = 1LL;
    v25 = a6;
    v26 = a7;
    v28 = a5;
    LODWORD(v20[0]) = 6291457;
    v20[1] = v14 + a1 + 32;
    v23 = v15;
    v24 = 5LL;
    v27 = a4;
  }
  else
  {
    v31 = 1;
    v32 = 1LL;
    v36 = a5;
    v37 = a6;
    v38 = a7;
    v29 = 6291457;
    v30 = v14 + a1 + 32;
    v33 = v15;
    v34 = 4LL;
    v35 = a4;
  }
  do
  {
    if ( a3 )
      v17 = AccelDecompressBuffer(v20, v16);
    else
      v17 = AccelCompressBuffer(&v29, v16);
    v18 = v17;
  }
  while ( v17 == -1058078719 );
  result = 259LL;
  if ( v18 < 0 )
    return (unsigned int)v18;
  return result;
}
