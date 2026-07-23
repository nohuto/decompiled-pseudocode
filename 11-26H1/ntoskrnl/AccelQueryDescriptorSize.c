/*
 * XREFs of AccelQueryDescriptorSize @ 0x1406E33A0
 * Callers:
 *     AccelInitializeDescriptor @ 0x1406E3224 (AccelInitializeDescriptor.c)
 *     SmHwAcceleratorCreate @ 0x140820A74 (SmHwAcceleratorCreate.c)
 *     MiQueryAcceleratorHandle @ 0x140885EB0 (MiQueryAcceleratorHandle.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelQueryDescriptorSize(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v6[4]; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+34h] [rbp-25h]
  __int64 v8; // [rsp+38h] [rbp-21h]
  int v9; // [rsp+48h] [rbp-11h]
  __int128 v10; // [rsp+50h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp+7h]

  v7 = 0;
  memset_0(v6, 0, 0x7CuLL);
  v5 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v8 = a1;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  result = AccelpInternalOperationHandler((__int64)v6, (unsigned int *)&v5);
  if ( (int)result >= 0 )
    *a2 = DWORD1(v5) + v5 + DWORD2(v5) + 63;
  return result;
}
