/*
 * XREFs of VslInitializeSecurePool @ 0x1405C3468
 * Callers:
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslInitializeSecurePool(struct _LIST_ENTRY *a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  struct _LIST_ENTRY *v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  ExSaPageGroupDescriptorArrayLock.WaitBlock[1].WaitListEntry.Flink = a1;
  ExSaPageGroupDescriptorArrayLock.WaitBlock[0].SparePtr = (char *)a1 + a2;
  v6 = a1;
  v7 = a2;
  return VslpEnterIumSecureMode(2u, 0xD6u, 0, (__int64)v5);
}
