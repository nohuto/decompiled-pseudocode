/*
 * XREFs of KeSecureProcess @ 0x1405E82A0
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     VslInitializeSecureProcess @ 0x1405C5D68 (VslInitializeSecureProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  bool v13; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v14[3]; // [rsp+48h] [rbp-60h] BYREF

  v13 = 0;
  memset(v14, 0, sizeof(v14));
  KiStackAttachProcess(a1, 0, (__int64)v14);
  v11 = VslInitializeSecureProcess(a1->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL, a2, a3, a4, a5, a6, a7, &v13);
  KiUnstackDetachProcess((__int64)v14, 0);
  if ( v13 )
    a1->SecureState.EntireField |= 2uLL;
  return v11;
}
