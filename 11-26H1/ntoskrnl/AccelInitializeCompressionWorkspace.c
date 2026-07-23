/*
 * XREFs of AccelInitializeCompressionWorkspace @ 0x1406E30D4
 * Callers:
 *     SmHwAcceleratorCreate @ 0x140820A74 (SmHwAcceleratorCreate.c)
 *     SmHwInitializeAccelDescriptor @ 0x140821C90 (SmHwInitializeAccelDescriptor.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelInitializeCompressionWorkspace(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // eax
  _QWORD *v5; // r8
  int v6; // r10d
  int v7; // ecx
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  int v11; // [rsp+28h] [rbp-31h]
  int v12; // [rsp+2Ch] [rbp-2Dh]
  _DWORD v13[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+38h] [rbp-21h]
  _QWORD *v15; // [rsp+40h] [rbp-19h]
  int v16; // [rsp+48h] [rbp-11h]
  __int128 v17; // [rsp+50h] [rbp-9h]
  __int64 v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+74h] [rbp+1Bh]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  int v24; // [rsp+80h] [rbp+27h]

  v13[1] = 0;
  memset_0(v13, 0, 0x7CuLL);
  v12 = 0;
  if ( !a1 )
    return 3221225485LL;
  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 36);
    if ( v4 == 3 || ((v4 - 2) & 0xFFFFFFFD) == 0 )
      return 3221225474LL;
  }
  if ( !*(_WORD *)a1 || *(_WORD *)(a1 + 2) < 0x48u )
    return 3221225561LL;
  v5 = *(_QWORD **)(a1 + 8);
  if ( !v5 )
    return 3221225485LL;
  v6 = *(_DWORD *)(a1 + 64);
  if ( v6 )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      return 3221225485LL;
  }
  v7 = *(_DWORD *)(a1 + 28);
  if ( v7 != 6 && v7 != 7 )
    return 3221225485LL;
  if ( (unsigned int)(v3 - 1) > 1 )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 36);
  if ( (unsigned int)(v8 - 1) > 3 )
    return 3221225485LL;
  v14 = *v5;
  v24 = *(_DWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 16);
  v20 = *(_DWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 56);
  v21 = v7;
  v22 = v3;
  v10 = v9;
  v13[0] = 514;
  v15 = v5;
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v23 = v8;
  v11 = v6;
  result = AccelpInternalOperationHandler((__int64)v13, (unsigned int *)&v10);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741789 )
    *(_DWORD *)(a1 + 64) = v11;
  return result;
}
