/*
 * XREFs of ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800B2104
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800914D8 (--4-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAE.c)
 *     ?attach@?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z @ 0x180095E18 (-attach@-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z.c)
 *     ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x1800B17A4 (--$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VMPCG.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800B194C (--$_Try_emplace@AEBK$$V@-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace(MPCGestureHandlerManager *this, int a2)
{
  __int64 v3; // rdx
  const char *v4; // r9
  MPCGestureHandler **v5; // rax
  __int64 v6; // rdx
  MPCGestureHandler *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  int v13; // [rsp+58h] [rbp+28h] BYREF
  MPCGestureHandler *v14; // [rsp+60h] [rbp+30h] BYREF
  struct IInputProcessorHost *v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = a2;
  v12 = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( *((_QWORD *)this + 5) == v3 )
  {
    v15 = (struct IInputProcessorHost *)*((_QWORD *)MPCHolographicInputManager::GetInstance() + 412);
    v5 = Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost *>(&v14, &v15);
    v6 = (__int64)*v5;
    *v5 = 0LL;
    wil::com_ptr_t<PenInterface,wil::err_exception_policy>::attach(&v12, v6);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::operator=(
      &v12,
      (__int64 *)(v3 - 8));
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 6) - 8LL));
    *((_QWORD *)this + 6) -= 8LL;
  }
  v8 = v12;
  if ( !v12 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v4);
  v9 = std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
         (__int64 *)this + 1,
         (__int64)v10,
         &v13);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::operator=(
    (__int64 *)(*(_QWORD *)v9 + 40LL),
    &v12);
  *(_DWORD *)(v8 + 912) = v13;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v12);
}
