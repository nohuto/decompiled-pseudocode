/*
 * XREFs of SmHwInitializeAccelDescriptor @ 0x140821C90
 * Callers:
 *     SmHwAcceleratorParitionCtxCreate @ 0x14082179C (SmHwAcceleratorParitionCtxCreate.c)
 * Callees:
 *     AccelInitializeCompressionWorkspace @ 0x1406E30D4 (AccelInitializeCompressionWorkspace.c)
 *     AccelInitializeDescriptor @ 0x1406E3224 (AccelInitializeDescriptor.c)
 *     AccelSetDescriptorAddressSpace @ 0x1406E3444 (AccelSetDescriptorAddressSpace.c)
 */

__int64 __fastcall SmHwInitializeAccelDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v8; // r13
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+38h] [rbp-38h]
  int v15; // [rsp+3Ch] [rbp-34h]
  int v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+44h] [rbp-2Ch]
  __int64 v18; // [rsp+4Ch] [rbp-24h]
  int v19; // [rsp+54h] [rbp-1Ch]
  __int64 v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a1 + 32;
  v5 = 0;
  if ( *(_DWORD *)(a2 + 64) )
  {
    v8 = a3;
    v9 = 7 - (a3 != 0);
    do
    {
      AccelInitializeDescriptor(*(_QWORD *)(a2 + 8 * v8 + 16), *(_DWORD *)(a2 + 40), v4);
      v10 = *(_DWORD *)(a2 + 4 * v8 + 56);
      v18 = 0LL;
      v19 = 0;
      v22 = 0;
      v13[2] = 0LL;
      v14 = 0;
      v16 = 1;
      v17 = 1LL;
      v13[0] = 4718593LL;
      v13[1] = v4;
      v15 = v9;
      v20 = v3;
      v21 = v10;
      AccelInitializeCompressionWorkspace((__int64)v13);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
      if ( v11 )
        AccelSetDescriptorAddressSpace(v4, v11);
      ++v5;
      v4 += *(unsigned int *)(a2 + 40);
      result = *(unsigned int *)(a2 + 4 * v8 + 56);
      v3 += result;
    }
    while ( v5 < *(_DWORD *)(a2 + 64) );
  }
  return result;
}
