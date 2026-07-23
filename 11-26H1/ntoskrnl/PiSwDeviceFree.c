/*
 * XREFs of PiSwDeviceFree @ 0x140A8C768
 * Callers:
 *     PiSwDeviceDereference @ 0x140A8C538 (PiSwDeviceDereference.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1409516F0 (PnpFreeDevPropertyArray.c)
 *     PiSwQueuedCreateInfoFree @ 0x140A8BFD0 (PiSwQueuedCreateInfoFree.c)
 *     PiSwPnPInfoFree @ 0x140A8C830 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x140A8C8D4 (PiSwFreeInterfaceList.c)
 *     PiSwFreePdoAssociationsList @ 0x140A8C918 (PiSwFreePdoAssociationsList.c)
 *     PiSwInstanceInfoFree @ 0x140A8D4D0 (PiSwInstanceInfoFree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  char *v3; // rcx
  void *v4; // rcx
  PVOID *v5; // rdx

  PiSwInstanceInfoFree(a1 + 8);
  PiSwPnPInfoFree(a1 + 24);
  v2 = *(void **)(a1 + 80);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_OWORD *)(a1 + 72) = 0LL;
  }
  v3 = *(char **)(a1 + 88);
  if ( v3 )
  {
    PiSwQueuedCreateInfoFree(v3);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(PVOID **)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 176), v5, 0x57706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList(a1 + 184);
  return PiSwFreePdoAssociationsList(a1 + 128);
}
