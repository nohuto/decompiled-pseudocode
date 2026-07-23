/*
 * XREFs of AccelCompressBuffer @ 0x1406E2E00
 * Callers:
 *     SmHwAcceleratorIssueRequest @ 0x140643658 (SmHwAcceleratorIssueRequest.c)
 * Callees:
 *     AccelpSubmitWork @ 0x1402A1434 (AccelpSubmitWork.c)
 *     AccelBuildDescriptorMemoryCompress @ 0x1406E29B4 (AccelBuildDescriptorMemoryCompress.c)
 *     AccelQueryCompletionInformation @ 0x1406E32D0 (AccelQueryCompletionInformation.c)
 *     AccelpBuildHuffmanEncoding @ 0x1406E3560 (AccelpBuildHuffmanEncoding.c)
 *     AccelpComputeHistogram @ 0x1406E3800 (AccelpComputeHistogram.c)
 *     AccelpWriteCompressionHeaderFormat @ 0x1406E5234 (AccelpWriteCompressionHeaderFormat.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelCompressBuffer(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // rax
  int *v4; // rdi
  int v5; // ecx
  __int64 *v6; // rsi
  _DWORD *v7; // r15
  bool v8; // zf
  int v10; // [rsp+38h] [rbp-59h] BYREF
  __int64 v11; // [rsp+40h] [rbp-51h]
  int v12; // [rsp+48h] [rbp-49h]
  int v13; // [rsp+4Ch] [rbp-45h]
  int v14; // [rsp+50h] [rbp-41h]
  __int64 v15; // [rsp+58h] [rbp-39h]
  __int64 v16; // [rsp+60h] [rbp-31h]
  __int64 v17; // [rsp+68h] [rbp-29h]
  int v18; // [rsp+70h] [rbp-21h]
  __int64 v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  char v21; // [rsp+84h] [rbp-Dh]
  int v22; // [rsp+88h] [rbp-9h] BYREF
  __int64 v23; // [rsp+90h] [rbp-1h]
  int v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A4h] [rbp+13h]
  char v27; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+ACh] [rbp+1Bh]

  v1 = (__int64 *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (int *)(a1 + 24);
  if ( (v3 & 4) != 0 && *v4 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 20) == 3 )
  {
    v5 = AccelpComputeHistogram(
           *(_QWORD *)(a1 + 8),
           *(_QWORD *)(a1 + 48),
           *(_DWORD *)(a1 + 56),
           *(_QWORD *)(a1 + 32),
           v3 & 0xFFFFFFFFFFFFFFFBuLL);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v5 = AccelpBuildHuffmanEncoding(*(_QWORD *)(a1 + 32));
    if ( v5 < 0 )
      return (unsigned int)v5;
    v6 = (__int64 *)(a1 + 40);
    v7 = (_DWORD *)(a1 + 24);
  }
  else
  {
    v6 = (__int64 *)(a1 + 40);
    v7 = (_DWORD *)(a1 + 24);
  }
  memset_0(&v10, 0, 0x50uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_DWORD *)(a1 + 16);
  v13 = *(_DWORD *)(a1 + 20);
  v14 = *v4;
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *v1;
  v17 = *(_QWORD *)(a1 + 48);
  v18 = *(_DWORD *)(a1 + 56);
  v19 = *(_QWORD *)(a1 + 64);
  v20 = *(_DWORD *)(a1 + 72);
  v21 = *(_BYTE *)(a1 + 76);
  v10 = 5242881;
  v5 = AccelBuildDescriptorMemoryCompress((__int64)&v10);
  if ( v5 >= 0 )
  {
    v5 = AccelpSubmitWork(*(_QWORD *)(a1 + 8), *v6);
    if ( v5 >= 0 && (*(_BYTE *)v6 & 4) == 0 )
    {
      memset_0(&v22, 0, 0x40uLL);
      v23 = *(_QWORD *)(a1 + 8);
      v22 = 4194305;
      v24 = 1;
      v5 = AccelQueryCompletionInformation(&v22);
      if ( v5 >= 0 )
      {
        v8 = *v7 == 0;
        *(_DWORD *)(a1 + 80) = v25;
        *(_DWORD *)(a1 + 92) = v28;
        *(_BYTE *)(a1 + 88) = v27;
        *(_DWORD *)(a1 + 84) = v26;
        if ( !v8 )
          return (unsigned int)AccelpWriteCompressionHeaderFormat(
                                 *(_QWORD *)(a1 + 32),
                                 a1 + 92,
                                 *(unsigned int *)(a1 + 56),
                                 *(_QWORD *)(a1 + 64));
      }
    }
  }
  return (unsigned int)v5;
}
