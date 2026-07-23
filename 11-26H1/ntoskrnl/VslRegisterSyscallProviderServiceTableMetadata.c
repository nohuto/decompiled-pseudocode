/*
 * XREFs of VslRegisterSyscallProviderServiceTableMetadata @ 0x14079550C
 * Callers:
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140B49DCC (PsRegisterSyscallProviderServiceTableMetadata.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslRegisterSyscallProviderServiceTableMetadata(unsigned int a1, unsigned int a2, struct _MDL *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v9[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v10; // [rsp+88h] [rbp-80h]
  __int64 *v11; // [rsp+90h] [rbp-78h]
  __int64 *v12; // [rsp+98h] [rbp-70h]

  v4 = a1;
  memset_0(v9, 0, 0x68uLL);
  memset_0(v8, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v8, a3, a2, 0, 0);
  if ( (int)result >= 0 )
  {
    v11 = v8[0];
    v12 = v8[7];
    v10 = v4;
    v7 = VslpEnterIumSecureMode(2u, 0xEAu, 0, (__int64)v9);
    VslpUnlockPagesForTransfer(v8);
    return v7;
  }
  return result;
}
