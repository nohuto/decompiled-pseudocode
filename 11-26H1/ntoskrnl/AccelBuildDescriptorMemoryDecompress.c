/*
 * XREFs of AccelBuildDescriptorMemoryDecompress @ 0x1406E2AF8
 * Callers:
 *     AccelDecompressBuffer @ 0x1406E2FB8 (AccelDecompressBuffer.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelBuildDescriptorMemoryDecompress(__int64 a1)
{
  __int64 *v2; // rsi
  _DWORD *v3; // rdi
  _DWORD v5[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v6; // [rsp+30h] [rbp-21h]
  __int64 *v7; // [rsp+38h] [rbp-19h]
  int v8; // [rsp+40h] [rbp-11h]
  __int64 v9; // [rsp+48h] [rbp-9h]
  __int64 v10; // [rsp+50h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+7h]
  __int64 v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+78h] [rbp+27h]
  _DWORD *v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+8Ch] [rbp+3Bh]
  int v19; // [rsp+90h] [rbp+3Fh]
  __int64 v20; // [rsp+A0h] [rbp+4Fh]

  v5[1] = 0;
  memset_0(v5, 0, 0x7CuLL);
  v2 = *(__int64 **)(a1 + 8);
  if ( !v2 )
    return 3221225485LL;
  v3 = *(_DWORD **)(a1 + 32);
  if ( !v3 || v3[1] != 7 || v3[2] != *(_DWORD *)(a1 + 16) || v3[3] != *(_DWORD *)(a1 + 20) )
    return 3221225485LL;
  memset_0((void *)v2[6], 0, *(unsigned int *)(*(_QWORD *)(*v2 + 16) + 276LL));
  memset_0((void *)v2[7], 0, *(unsigned int *)(*(_QWORD *)(*v2 + 16) + 280LL));
  v6 = *v2;
  v8 = *((_DWORD *)v2 + 6);
  v9 = v2[6];
  v10 = v2[7];
  v2[5] = 0LL;
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_DWORD *)(a1 + 56);
  v14 = *(_QWORD *)(a1 + 64);
  v15 = *(_DWORD *)(a1 + 72);
  v17 = *(_DWORD *)(a1 + 16);
  v18 = *(_DWORD *)(a1 + 20);
  v19 = *(_DWORD *)(a1 + 24);
  v20 = a1 + 76;
  v5[0] = 513;
  v7 = v2;
  v16 = v3;
  return AccelpInternalOperationHandler((__int64)v5, 0LL);
}
