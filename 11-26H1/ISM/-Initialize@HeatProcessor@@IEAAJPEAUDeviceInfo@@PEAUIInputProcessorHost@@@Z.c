/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801BDD48
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801BDC00 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18004607C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x18006575C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z @ 0x1801975F0 (-AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z.c)
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x180197930 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x1801A0198 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1801BDE40 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     ?OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x1801BDF04 (-OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatProcessor::Initialize(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3,
        const char *a4)
{
  int v7; // eax
  __int64 v8; // rdx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  void (__fastcall ***v10)(_QWORD); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  InputProcessManager *v13; // [rsp+48h] [rbp+20h] BYREF

  if ( HeatProcessor::HeatCoreProcessingEnabled(this, (__int64)a2, (__int64)a3, a4) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
    v7 = ISMHeatFrameworkHost::Create(a3, (struct ISMHeatFrameworkHost **)this + 12);
    if ( v7 < 0 )
    {
      v8 = 71LL;
LABEL_11:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)v7);
      return 0LL;
    }
    v7 = HeatProcessor::LoadAndInitializeHeatCore(this);
    if ( v7 < 0 )
    {
      v8 = 74LL;
      goto LABEL_11;
    }
    v7 = ISMHeatFrameworkHost::AttachHeatFramework(
           *((ISMHeatFrameworkHost **)this + 12),
           *((struct IHeatFramework **)this + 11));
    if ( v7 < 0 )
    {
      v8 = 78LL;
      goto LABEL_11;
    }
  }
  else
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                                          + 31)
                                                                                        + 8LL)
                                                                            + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                                     + 31) + 8LL);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v13,
      v10);
    InputProcessManager::StartProcess(v13);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v13);
  }
  v7 = HeatProcessor::OnDeviceArrival(this, a2);
  if ( v7 < 0 )
  {
    v8 = 87LL;
    goto LABEL_11;
  }
  return 0LL;
}
