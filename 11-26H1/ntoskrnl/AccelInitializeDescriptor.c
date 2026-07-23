/*
 * XREFs of AccelInitializeDescriptor @ 0x1406E3224
 * Callers:
 *     MiInitializeAcceleratorDescriptor @ 0x140714428 (MiInitializeAcceleratorDescriptor.c)
 *     SmHwAcceleratorCreate @ 0x140820A74 (SmHwAcceleratorCreate.c)
 *     SmHwInitializeAccelDescriptor @ 0x140821C90 (SmHwInitializeAccelDescriptor.c)
 * Callees:
 *     AccelQueryDescriptorSize @ 0x1406E33A0 (AccelQueryDescriptorSize.c)
 */

__int64 __fastcall AccelInitializeDescriptor(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ecx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  result = AccelQueryDescriptorSize(a1, &v8);
  if ( (int)result < 0 )
    return result;
  if ( a2 < v8 )
    return 3221225485LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  *(_QWORD *)(a3 + 48) = a3 + 64;
  *(_DWORD *)(a3 + 24) = v7;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 56) = -(__int64)*(unsigned int *)(*(_QWORD *)(a1 + 16) + 284LL) & (a3
                                                                                    + *(unsigned int *)(*(_QWORD *)(a1 + 16) + 284LL)
                                                                                    + *(unsigned int *)(*(_QWORD *)(a1 + 16) + 276LL)
                                                                                    + 63LL);
  return 0LL;
}
