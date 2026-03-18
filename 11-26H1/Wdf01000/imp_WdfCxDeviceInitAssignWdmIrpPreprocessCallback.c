/*
 * XREFs of imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x140076E00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x14004C3E4 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     FxValiateCx @ 0x140077070 (FxValiateCx.c)
 *     WPP_IFR_SF_Dd @ 0x1400803F8 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        int (__fastcall *EvtCxDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 _a1; // r15
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned int v11; // edi
  FxIrpPreprocessInfo **p_PreprocessInfo; // rsi
  bool v13; // zf
  ULONG Tag; // ecx
  void *v15; // rax
  FX_POOL **v16; // rax
  FxIrpPreprocessInfo *v17; // rax
  FxIrpPreprocessInfo **v18; // r14
  unsigned __int16 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // r15
  ULONG v22; // ecx
  void *v23; // rax
  unsigned __int8 *v24; // rcx
  __int64 v25; // rcx
  __m128i v27; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  _a1 = MajorFunction;
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v6, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  v11 = FxValiateCx(ClientDriverGlobals, v6);
  if ( (v11 & 0x80000000) == 0 )
  {
    if ( !EvtCxDeviceWdmIrpPreprocess )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( NumMinorFunctions && !MinorFunctions )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( (unsigned __int8)_a1 >= 0x1Cu )
    {
      v11 = -1073741811;
      WPP_IFR_SF_Dd(ClientDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a1, -1073741811);
      return v11;
    }
    p_PreprocessInfo = &CxDeviceInit->PreprocessInfo;
    if ( !CxDeviceInit->PreprocessInfo )
    {
      v13 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      Tag = ClientDriverGlobals->Tag;
      v27.m128i_i64[0] = 0LL;
      v27.m128i_i64[1] = 64LL;
      if ( v13 )
        v15 = 0LL;
      else
        v15 = retaddr;
      v16 = FxPoolAllocator(ClientDriverGlobals, &ClientDriverGlobals->FxPoolFrameworks, &v27, 0x2B8uLL, Tag, v15);
      if ( v16 )
      {
        FxIrpPreprocessInfo::FxIrpPreprocessInfo((FxIrpPreprocessInfo *)v16);
        *p_PreprocessInfo = v17;
        if ( v17 )
        {
          v17->ClassExtension = 1;
          v18 = &CxDeviceInit->PreprocessInfo;
          goto LABEL_23;
        }
      }
      else
      {
        *p_PreprocessInfo = 0LL;
      }
      v11 = -1073741670;
      v19 = 12;
LABEL_20:
      WPP_IFR_SF_D(ClientDriverGlobals, 2u, 0x12u, v19, WPP_FxCxDeviceInitApi_cpp_Traceguids, 0xC000009A);
      return v11;
    }
    v18 = &CxDeviceInit->PreprocessInfo;
LABEL_23:
    v20 = _a1;
    if ( NumMinorFunctions )
    {
      v21 = _a1;
      if ( (*p_PreprocessInfo)->Dispatch[v21].NumMinorFunctions )
      {
        v11 = -1073741808;
        WPP_IFR_SF_D(ClientDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxCxDeviceInitApi_cpp_Traceguids, 0xC0000010);
        return v11;
      }
      v13 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      v22 = ClientDriverGlobals->Tag;
      v27.m128i_i64[0] = 0LL;
      v27.m128i_i64[1] = 64LL;
      if ( v13 )
        v23 = 0LL;
      else
        v23 = retaddr;
      (*v18)->Dispatch[v21].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                  ClientDriverGlobals,
                                                                  &ClientDriverGlobals->FxPoolFrameworks,
                                                                  &v27,
                                                                  NumMinorFunctions,
                                                                  v22,
                                                                  v23);
      v24 = (*v18)->Dispatch[v21].MinorFunctions;
      if ( !v24 )
      {
        v11 = -1073741670;
        v19 = 14;
        goto LABEL_20;
      }
      memmove(v24, MinorFunctions, NumMinorFunctions);
      (*v18)->Dispatch[v21].NumMinorFunctions = NumMinorFunctions;
    }
    v25 = v20;
    v11 = 0;
    (*v18)->Dispatch[v25].EvtDevicePreprocess = EvtCxDeviceWdmIrpPreprocess;
  }
  return v11;
}
