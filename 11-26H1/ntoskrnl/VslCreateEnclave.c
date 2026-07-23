/*
 * XREFs of VslCreateEnclave @ 0x140B3BF58
 * Callers:
 *     PsCreateVsmEnclave @ 0x1407754E8 (PsCreateVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     VslCloseSecureHandle @ 0x1404E7AA0 (VslCloseSecureHandle.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VslCreateSecureProcess @ 0x140B3C0D8 (VslCreateSecureProcess.c)
 */

__int64 __fastcall VslCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned int a7,
        unsigned __int8 a8,
        _QWORD *a9)
{
  unsigned __int64 v13; // rax
  int v14; // ebx
  __int64 result; // rax
  __int64 v16; // rcx
  signed __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v18[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  __int64 *v24; // [rsp+B8h] [rbp-48h]
  __int64 *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]

  v17 = 0LL;
  memset_0(v19, 0, 0x68uLL);
  memset_0(v18, 0, 0x48uLL);
  if ( !*(_QWORD *)(a2 + 368) )
  {
    result = VslCreateSecureProcess(a2, a3, &v17);
    if ( (int)result < 0 )
      return result;
    v16 = v17;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 368), v17, 0LL) )
      VslCloseSecureHandle(v16);
  }
  if ( !a7 || (result = VslpLockPagesForTransfer((__int64)v18, a6, a7, 0, 0), (int)result >= 0) )
  {
    v13 = *(_QWORD *)(a2 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
    v21 = a4;
    v20 = v13;
    v22 = a5;
    v24 = v18[0];
    v25 = v18[7];
    v26 = a8;
    v23 = a1;
    v14 = VslpEnterIumSecureMode(2u, 0x2Fu, 0, (__int64)v19);
    if ( v18[0] )
      VslpUnlockPagesForTransfer(v18);
    if ( v14 >= 0 )
      *a9 = v21;
    return (unsigned int)v14;
  }
  return result;
}
