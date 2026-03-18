/*
 * XREFs of VslPrepareDriverForPatch @ 0x1405C3728
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  __int64 result; // rax
  void **p_StackBase; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]

  memset_0(v4, 0, 0x68uLL);
  _InterlockedIncrement((volatile signed __int32 *)&VslpReservedTransferLock.StackLimit);
  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 0x4Fu, 0, (__int64)v4);
  p_StackBase = (void **)((char *)&VslpReservedTransferLock.StackLimit + 4);
  if ( (int)result < 0 )
    p_StackBase = &VslpReservedTransferLock.StackBase;
  _InterlockedIncrement((volatile signed __int32 *)p_StackBase);
  return result;
}
