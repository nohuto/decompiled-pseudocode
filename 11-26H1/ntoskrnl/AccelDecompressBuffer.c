/*
 * XREFs of AccelDecompressBuffer @ 0x1406E2FB8
 * Callers:
 *     SmHwAcceleratorIssueRequest @ 0x140643658 (SmHwAcceleratorIssueRequest.c)
 * Callees:
 *     AccelpSubmitWork @ 0x1402A1434 (AccelpSubmitWork.c)
 *     AccelBuildDescriptorMemoryDecompress @ 0x1406E2AF8 (AccelBuildDescriptorMemoryDecompress.c)
 *     AccelQueryCompletionInformation @ 0x1406E32D0 (AccelQueryCompletionInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelDecompressBuffer(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  _QWORD v5[2]; // [rsp+28h] [rbp-39h] BYREF
  int v6; // [rsp+38h] [rbp-29h]
  int v7; // [rsp+3Ch] [rbp-25h]
  int v8; // [rsp+40h] [rbp-21h]
  int v9; // [rsp+44h] [rbp-1Dh]
  __int64 v10; // [rsp+48h] [rbp-19h]
  __int64 v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h]
  int v13; // [rsp+60h] [rbp-1h]
  int v14; // [rsp+64h] [rbp+3h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  int v18; // [rsp+78h] [rbp+17h] BYREF
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  char v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+9Ch] [rbp+3Bh]

  v5[1] = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(_DWORD *)(a1 + 72);
  v15 = *(_QWORD *)(a1 + 48);
  v16 = *(_DWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 76);
  v5[0] = 5242881LL;
  v9 = 0;
  v14 = 0;
  v17 = v2;
  v3 = AccelBuildDescriptorMemoryDecompress((__int64)v5);
  if ( v3 >= 0 )
  {
    v3 = AccelpSubmitWork(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40));
    if ( v3 >= 0 && (*(_BYTE *)(a1 + 40) & 4) == 0 )
    {
      memset_0(&v18, 0, 0x40uLL);
      v19 = *(_QWORD *)(a1 + 8);
      v18 = 4194305;
      v20 = 1;
      v3 = AccelQueryCompletionInformation(&v18);
      if ( v3 >= 0 )
      {
        *(_DWORD *)(a1 + 80) = v21;
        *(_DWORD *)(a1 + 92) = v24;
        *(_BYTE *)(a1 + 88) = v23;
        *(_DWORD *)(a1 + 84) = v22;
      }
    }
  }
  return (unsigned int)v3;
}
