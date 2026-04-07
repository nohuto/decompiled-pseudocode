/*
 * XREFs of ?RegisterBitmap@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAXPEAUHWND__@@PEAVCBitmapSource@@@Z @ 0x1800D74F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@Z @ 0x18001BA84 (--4-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x1800306A4 (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??$_Extract@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@1@AEBQEAUHWND__@@@Z @ 0x1800D63BC (--$_Extract@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800D6560 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSour.c)
 *     ??$as@UIUserResizeVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUserResizeVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800D66D8 (--$as@UIUserResizeVisualNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::RegisterBitmap(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this,
        HWND a2,
        struct CBitmapSource *a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  HWND v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-30h]
  char v13; // [rsp+40h] [rbp-28h]

  v10 = a2;
  v5 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Extract<HWND__ *>(
         (_QWORD *)this + 14,
         (__int64)&v10);
  v6 = v5;
  if ( v5 )
  {
    v12 = v5;
  }
  else
  {
    v12 = 0LL;
    v13 = 0;
  }
  if ( v5 && (v7 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))v5[3]) != 0LL )
  {
    winrt::impl::as<IUserResizeVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      v11,
      v7);
    v8 = v11[0];
    (*(void (__fastcall **)(__int64, struct CBitmapSource *))(*(_QWORD *)v11[0] + 56LL))(v11[0], a3);
    if ( v8 )
      winrt::com_ptr<IBitmapManager>::unconditional_release_ref(v11);
  }
  else
  {
    v9 = std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Try_emplace<HWND__ * const &,>(
           (float *)this + 12,
           (__int64)v11,
           &v10);
    wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>::operator=((CBaseObject **)(*(_QWORD *)v9 + 24LL), a3);
  }
  if ( v6 )
  {
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v6 + 3);
    std::_Deallocate<16>(v6, 0x20uLL);
  }
}
