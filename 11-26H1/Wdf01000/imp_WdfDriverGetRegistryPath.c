/*
 * XREFs of imp_WdfDriverGetRegistryPath @ 0x14007D710
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

wchar_t *__fastcall imp_WdfDriverGetRegistryPath(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDriver *pDriver; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDriver = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver,
    &pFxDriverGlobals);
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) >= 0 )
    return pDriver->m_RegistryPath.Buffer;
  else
    return 0LL;
}
