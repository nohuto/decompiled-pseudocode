/*
 * XREFs of AccelQueryCompletionInformation @ 0x1406E32D0
 * Callers:
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 *     AccelCompressBuffer @ 0x1406E2E00 (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x1406E2FB8 (AccelDecompressBuffer.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelQueryCompletionInformation(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  int v4; // ecx
  _QWORD v6[2]; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v7[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h]
  _QWORD *v9; // [rsp+40h] [rbp-19h]
  int v10; // [rsp+48h] [rbp-11h]
  __int64 v11; // [rsp+50h] [rbp-9h]
  __int64 v12; // [rsp+58h] [rbp-1h]
  __int64 v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]

  v7[1] = 0;
  memset_0(v7, 0, 0x7CuLL);
  v2 = 0;
  v6[1] = 0LL;
  if ( a1 )
  {
    if ( *(_WORD *)a1 && *(_WORD *)(a1 + 2) >= 0x40u )
    {
      v3 = *(_QWORD **)(a1 + 8);
      v4 = *(_DWORD *)(a1 + 16);
      v7[0] = 4;
      v9 = v3;
      v8 = *v3;
      v11 = v3[6];
      v12 = v3[7];
      v6[0] = a1 + 24;
      v10 = 0;
      v13 = 0LL;
      v14 = v4;
      if ( v4 != 7 && v4 != 1 )
        return (unsigned int)AccelpInternalOperationHandler((__int64)v7, (unsigned int *)v6);
      *(_QWORD *)(a1 + 56) = v3[5];
      if ( v4 != 7 )
        return (unsigned int)AccelpInternalOperationHandler((__int64)v7, (unsigned int *)v6);
    }
    else
    {
      return (unsigned int)-1073741735;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
