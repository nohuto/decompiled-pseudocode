/*
 * XREFs of ?AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z @ 0x18018E1EC
 * Callers:
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF060 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$emplace@AEAPEAXAEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAXAEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180059A00 (--$emplace@AEAPEAXAEAV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@-$_Hash@V-$_U.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?attach@?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z @ 0x180095E18 (-attach@-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F9B48 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x180193C70 (--0PenInterface@@QEAA@PEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall HapticDeviceManager::AttachRIMDevice(HapticDeviceManager *this, void *a2, void *a3)
{
  float *v6; // rsi
  _QWORD *v7; // rax
  const char *v8; // r9
  bool v9; // al
  PenInterface *v10; // rbx
  PenInterface *v11; // rax
  const char *v12; // r9
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  void *v16; // [rsp+60h] [rbp+18h] BYREF
  PenInterface *v17; // [rsp+68h] [rbp+20h]

  v16 = a3;
  v6 = (float *)((char *)this + 96);
  v7 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
         (_QWORD *)this + 12,
         &v15,
         (const unsigned __int8 *)&v16);
  try
  {
    v9 = *v7 != *((_QWORD *)this + 13);
    v10 = 0LL;
    if ( v9 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\hapticdevicemanager.cpp",
        v8);
    v15 = 0LL;
    v11 = (PenInterface *)RefCountedObject::operator new(0xA8uLL);
    v17 = v11;
    if ( v11 )
      v10 = PenInterface::PenInterface(v11, a2, a3);
    wil::com_ptr_t<PenInterface,wil::err_exception_policy>::attach(&v15, (__int64)v10);
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::emplace<void * &,wil::com_ptr_t<PenInterface,wil::err_exception_policy> &>(
      v6,
      (__int64)v13,
      (unsigned __int8 *)&v16,
      &v15);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v15);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\hapticdevicemanager.cpp",
      v12);
  }
}
