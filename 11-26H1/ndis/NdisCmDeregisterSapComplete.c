/*
 * XREFs of NdisCmDeregisterSapComplete @ 0x140041980
 * Callers:
 *     NdisClDeregisterSap @ 0x14006E510 (NdisClDeregisterSap.c)
 * Callees:
 *     ?ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z @ 0x1400419E0 (-ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmDeregisterSapComplete(NDIS_STATUS Status, NDIS_HANDLE NdisSapHandle)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *((_QWORD *)NdisSapHandle + 2);
  v4 = *((_QWORD *)NdisSapHandle + 1);
  if ( *(_DWORD *)(v2 + 396) >= 6u )
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 272))(Status, v4);
  else
    (*(void (__fastcall **)(NDIS_STATUS, __int64))(v2 + 120))(Status, v4);
  if ( !Status )
  {
    ndisDereferenceAf(*((PVOID *)NdisSapHandle + 2));
    ndisDereferenceSap(NdisSapHandle);
  }
}
