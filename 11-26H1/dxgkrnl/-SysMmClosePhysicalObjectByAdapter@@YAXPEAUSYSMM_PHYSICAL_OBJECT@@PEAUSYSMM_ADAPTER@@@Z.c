/*
 * XREFs of ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x14003F3C4
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x14003F390 (DxgkFreePagesFromMdlCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x14007CAB0 (DxgkUnmapMdlFromIoMmuCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmClosePhysicalObject @ 0x14003F43C (SmmClosePhysicalObject.c)
 */

void __fastcall SysMmClosePhysicalObjectByAdapter(struct SYSMM_ADAPTER **a1, struct SYSMM_ADAPTER *a2)
{
  struct SYSMM_ADAPTER_OBJECT *v2; // rbx

  v2 = (struct SYSMM_ADAPTER_OBJECT *)(a1 + 8);
  if ( a1[10] != a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1368;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapterObject->Adapter == pAdapter",
      1368LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SmmClosePhysicalObject(v2);
}
