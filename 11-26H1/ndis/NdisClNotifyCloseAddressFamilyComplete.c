/*
 * XREFs of NdisClNotifyCloseAddressFamilyComplete @ 0x1400D48B0
 * Callers:
 *     NdisCmOpenAddressFamilyComplete @ 0x140064B80 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCmNotifyCloseAddressFamily @ 0x140065A20 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCoRequestComplete @ 0x1400D7B00 (NdisCoRequestComplete.c)
 * Callees:
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisClNotifyCloseAddressFamilyComplete(NDIS_HANDLE NdisAfHandle, NDIS_STATUS Status)
{
  __int64 v3; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
  {
    v3 = *((_QWORD *)NdisAfHandle + 50);
    *(_QWORD *)(v3 + 60) = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 6),
      0LL,
      0LL,
      v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)NdisAfHandle + 4) + 136LL))(*((_QWORD *)NdisAfHandle + 6));
  }
  ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
}
