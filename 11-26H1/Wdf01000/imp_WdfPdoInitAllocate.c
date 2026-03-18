/*
 * XREFs of imp_WdfPdoInitAllocate @ 0x14003C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x14003BBC0 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x14003C2F8 (-SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 */

void __fastcall imp_WdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  _FX_DRIVER_GLOBALS *v2; // rbx
  unsigned __int16 v3; // r9
  bool v4; // zf
  ULONG Tag; // ecx
  void *v6; // rax
  FX_POOL **v7; // rax
  WDFDEVICE_INIT *v8; // rax
  __int64 v9; // rax
  __m128i v10; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+8h]
  FxDevice *pDevice; // [rsp+50h] [rbp+10h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ParentDevice,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  v2 = pFxDriverGlobals;
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) >= 0 )
  {
    if ( pDevice->m_PkgPnp->m_Type == 4353 )
    {
      v4 = v2->FxPoolTrackingOn == 0;
      Tag = v2->Tag;
      v10.m128i_i64[0] = 0LL;
      v10.m128i_i64[1] = 64LL;
      if ( v4 )
        v6 = 0LL;
      else
        v6 = retaddr;
      v7 = FxPoolAllocator(v2, &v2->FxPoolFrameworks, &v10, 0x3B0uLL, Tag, v6);
      if ( v7 )
      {
        WDFDEVICE_INIT::WDFDEVICE_INIT((WDFDEVICE_INIT *)v7, pDevice->m_Driver);
        if ( v8 )
        {
          WDFDEVICE_INIT::SetPdo(v8, pDevice);
          *(_BYTE *)(v9 + 901) = 1;
          return;
        }
      }
      v3 = 52;
    }
    else
    {
      v3 = 51;
    }
    WPP_IFR_SF_(v2, 2u, 0x12u, v3, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
}
