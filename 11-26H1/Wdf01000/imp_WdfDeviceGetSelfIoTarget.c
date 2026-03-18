/*
 * XREFs of imp_WdfDeviceGetSelfIoTarget @ 0x140075080
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFIOTARGET__ *__fastcall imp_WdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPnp *m_PkgPnp; // rax
  WDFIOTARGET__ *result; // rax
  __int64 v4; // rax
  __int16 v5; // cx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp )
    return 0LL;
  if ( m_PkgPnp->m_Type != 4353 )
    return 0LL;
  v4 = *(_QWORD *)&m_PkgPnp[1].m_ObjectFlags;
  if ( !v4 )
    return 0LL;
  v5 = *(_WORD *)(v4 + 10);
  result = (WDFIOTARGET__ *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v5 )
    return 0LL;
  return result;
}
