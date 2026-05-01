/*
 * XREFs of ?CSnappedWindowModel_CreateInstanceWithRegions@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBU_GUID@@PEAPEAX@Z @ 0x1802BA474
 * Callers:
 *     ?_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1802BA310 (-_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV-$.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1805A4EC0 (--$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIAppl_ea_1805A4EC0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnappedWindowModel_CreateInstanceWithRegions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // [rsp+60h] [rbp+20h] BYREF
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF

  v17 = a3;
  v16 = a2;
  v12 = 1;
  v13 = 0LL;
  v7 = a7;
  *a7 = 0LL;
  v15 = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindowModel,CSnappedWindowModel,IApplicationView * &,IApplicationViewCollection * &,IImmersiveMonitorManager * &,enum SnappedWindowOcclusionModel &,std::deque<tagRECT> const &>(
         (unsigned int)&v15,
         (unsigned int)&v13,
         (unsigned int)&v16,
         (unsigned int)&v17,
         (__int64)&v12,
         a5);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( v15 )
    {
      v8 = (**v15)(v15, &GUID_c3fa9c5f_1c18_451b_8c77_5eba502c4f06, v7);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 205LL;
        goto LABEL_6;
      }
    }
    else
    {
      *v7 = 0LL;
    }
    v9 = 0;
    goto LABEL_9;
  }
  v10 = 204LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
    (const char *)(unsigned int)v8);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  return v9;
}
