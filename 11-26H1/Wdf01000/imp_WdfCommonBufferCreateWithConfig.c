/*
 * XREFs of imp_WdfCommonBufferCreateWithConfig @ 0x140081770
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x14001B238 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A6A0 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400ABE20 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int8 v9; // dl
  unsigned int _a2; // ecx
  unsigned int v11; // ebx
  unsigned int AlignmentRequirement; // eax
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *v14; // rdi
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  FX_POOL **v18; // rax
  FxObject *v19; // rax
  FxCommonBuffer *v20; // rsi
  int CommonBuffer; // edi
  unsigned __int64 v22; // rax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp-39h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+48h] [rbp-31h] BYREF
  void *handle; // [rsp+50h] [rbp-29h] BYREF
  _WDF_COMMON_BUFFER_CONFIG localConfig; // [rsp+58h] [rbp-21h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+4Fh]

  pDmaEnabler = 0LL;
  handle = 0LL;
  pFxDriverGlobals = 0LL;
  memset(&localConfig, 0, sizeof(localConfig));
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler,
    &pFxDriverGlobals);
  if ( !Config )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  IsEnabledDeviceUsageNoInline = Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline();
  _a2 = Config->Size;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( _a2 == 8 )
    {
      AlignmentRequirement = Config->AlignmentRequirement;
      *(_OWORD *)&localConfig.MinimumAddress.LowPart = 0LL;
      *(_QWORD *)&localConfig.CacheType = 6LL;
      Config = &localConfig;
      localConfig.Size = 32;
      localConfig.AlignmentRequirement = AlignmentRequirement;
    }
    else if ( _a2 != 32 )
    {
      v11 = -1073741820;
      WPP_IFR_SF_DDd(pFxDriverGlobals, v9, 0xFu, 0xCu, WPP_FxCommonBufferAPI_cpp_Traceguids, _a2, 0x20u, -1073741820);
      return v11;
    }
    if ( FxDmaEnabler::GetDmaDescription(pDmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3
      && (Config->MinimumAddress.QuadPart || Config->MaximumAddress.QuadPart || Config->CacheType != MmMaximumCacheType) )
    {
      WPP_IFR_SF_(pFxDriverGlobals, 2u, 0xFu, 0xDu, WPP_FxCommonBufferAPI_cpp_Traceguids);
      return 3221225485LL;
    }
  }
  else if ( _a2 != 8 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(pFxDriverGlobals, v9, 0xFu, 0xEu, WPP_FxCommonBufferAPI_cpp_Traceguids, _a2, 8u, -1073741820);
    return v11;
  }
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v14 = pFxDriverGlobals;
  v15 = pFxDriverGlobals;
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v15, 0);
  if ( (int)result >= 0 )
  {
    if ( !Length )
    {
      WPP_IFR_SF_D(v14, 2u, 0xFu, 0xFu, WPP_FxCommonBufferAPI_cpp_Traceguids, 0xC000000D);
      return 3221225485LL;
    }
    result = FxValidateObjectAttributes(v14, Attributes, 1);
    if ( (int)result < 0 )
      return result;
    v18 = FxObjectHandleAlloc2(v14, v16, 0xB8uLL, v17, Attributes, 0, FxObjectTypeExternal);
    if ( v18 )
    {
      FxCommonBuffer::FxCommonBuffer((FxCommonBuffer *)v18, v14, pDmaEnabler);
      v20 = (FxCommonBuffer *)v19;
      if ( v19 )
      {
        CommonBuffer = FxObject::Commit(v19, Attributes, &handle, pDmaEnabler, 1u);
        if ( CommonBuffer < 0 )
          goto LABEL_28;
        if ( !Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline() )
        {
          v22 = Config->AlignmentRequirement;
          Config = 0LL;
          v20->m_Alignment = v22;
        }
        CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v20, Length, Config);
        if ( CommonBuffer < 0 )
LABEL_28:
          FxObject::DeleteFromFailedCreate(v20);
        else
          *CommonBufferHandle = (WDFCOMMONBUFFER__ *)handle;
        return (unsigned int)CommonBuffer;
      }
    }
    v11 = -1073741670;
    WPP_IFR_SF_D(v14, 2u, 0xFu, 0x10u, WPP_FxCommonBufferAPI_cpp_Traceguids, 0xC000009A);
    return v11;
  }
  return result;
}
