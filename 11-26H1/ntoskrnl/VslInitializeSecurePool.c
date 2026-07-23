/*
 * XREFs of VslInitializeSecurePool @ 0x1405C5CD8
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslInitializeSecurePool(char *a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  char *v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Object = a1;
  ExSaPageGroupDescriptorArrayLock.WaitBlock[0].SparePtr = &a1[a2];
  v6 = a1;
  v7 = a2;
  return VslpEnterIumSecureMode(2u, 0xD6u, 0, (__int64)v5);
}
