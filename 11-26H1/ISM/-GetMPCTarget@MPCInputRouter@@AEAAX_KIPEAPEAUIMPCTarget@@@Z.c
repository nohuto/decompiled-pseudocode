/*
 * XREFs of ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800FEAA8
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800FEF40 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002D364 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FDE5C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x180101558 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::GetMPCTarget(MPCInputRouter *this, __int64 a2, unsigned int a3, struct IMPCTarget **a4)
{
  char v6; // di
  _QWORD *v7; // rsi
  struct IMPCTarget *v8; // rbx
  void *v9; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  struct IMPCTarget *v16; // [rsp+88h] [rbp+48h] BYREF

  v15 = a2;
  v6 = 0;
  v7 = (_QWORD *)((char *)this + 768);
  v8 = *(struct IMPCTarget **)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                            (_QWORD *)this + 96,
                                            (__int64)v14,
                                            (unsigned __int8 *)&v15)
                             + 24LL);
  v16 = v8;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
  if ( !v8 )
  {
    v9 = RefCountedObject::operator new(0x50uLL);
    v14[0] = v9;
    if ( v9 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v11 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v13, 1u, v15);
      v6 = 1;
      v8 = (struct IMPCTarget *)MPCTarget::MPCTarget(v9, *v11, 2LL, a3);
    }
    else
    {
      v8 = 0LL;
    }
    v16 = v8;
    if ( (v6 & 1) != 0 )
    {
      v12 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                             v7,
                             (__int64)v14,
                             (unsigned __int8 *)&v15)
              + 24LL) = v8;
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
  *a4 = v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
}
