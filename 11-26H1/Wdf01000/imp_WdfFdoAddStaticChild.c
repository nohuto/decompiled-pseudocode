/*
 * XREFs of imp_WdfFdoAddStaticChild @ 0x1400680A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1400683A4 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfFdoAddStaticChild(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo, WDFDEVICE__ *Child)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  int v6; // ebx
  unsigned int *v8; // r9
  FxPkgPnp *v9; // rax
  FxPkgPnp *m_PkgPnp; // rcx
  FxStaticChildDescription description; // [rsp+40h] [rbp-10h] BYREF
  FxDevice *pFdo; // [rsp+70h] [rbp+20h] BYREF
  FxDevice *pPdo; // [rsp+88h] [rbp+38h] BYREF

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  *((_DWORD *)&description.Header + 1) = 0;
  pFdo = 0LL;
  pPdo = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Fdo, 0x1002u, (void **)&pFdo);
  if ( !pFdo->m_Legacy && pFdo->m_PkgPnp->m_Type == 4353 )
  {
    FxObjectHandleGetPtr(v3, (unsigned __int64)Child, 0x1002u, (void **)&pPdo);
    if ( !pPdo->m_Legacy && (v9 = pPdo->m_PkgPnp) != 0LL && v9->m_Type == 4354 )
    {
      m_PkgPnp = pFdo->m_PkgPnp;
      description.Pdo = pPdo;
      description.Header.IdentificationDescriptionSize = 16;
      v6 = FxChildList::Add(*(FxChildList **)&m_PkgPnp[1].m_Type, &description.Header, 0LL, v8);
      if ( v6 >= 0 )
        pFdo->SetDeviceTelemetryInfoFlags(pFdo, DeviceInfoHasStaticChildren);
    }
    else
    {
      v6 = -1073741811;
      WPP_IFR_SF_qd(pFdo->m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Child, -1073741811);
    }
  }
  else
  {
    v6 = -1073741811;
    WPP_IFR_SF_qd(pFdo->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo, -1073741811);
  }
  return (unsigned int)v6;
}
