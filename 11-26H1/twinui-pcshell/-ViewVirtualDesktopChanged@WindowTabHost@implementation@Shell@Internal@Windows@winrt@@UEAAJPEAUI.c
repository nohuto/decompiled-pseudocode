/*
 * XREFs of ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x180047B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FA3C (-find@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uha.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ViewVirtualDesktopChanged(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2)
{
  unsigned __int64 WindowForView; // rbp
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rax
  _QWORD *Ptr; // rcx
  RTL_SRWLOCK *v8; // rdi
  RTL_SRWLOCK *v9; // r11
  RTL_SRWLOCK *v10; // rdx
  RTL_SRWLOCK *v11; // rdi
  PVOID v12; // rbp
  __int64 *v13; // r15
  _QWORD *v14; // r14
  _QWORD *i; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  char v23; // [rsp+60h] [rbp+18h] BYREF

  WindowForView = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, a2);
  v22 = WindowForView;
  v5 = this + 75;
  AcquireSRWLockShared(this + 75);
  if ( *(PVOID *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                   &this[76],
                   &v23,
                   &v22) == this[77].Ptr )
    goto LABEL_13;
  v6 = 2
     * ((__int64)this[82].Ptr & std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()((unsigned __int8 *)&v22));
  Ptr = this[79].Ptr;
  v8 = (RTL_SRWLOCK *)Ptr[v6 + 1];
  if ( v8 == v9 )
    goto LABEL_19;
  v10 = (RTL_SRWLOCK *)Ptr[v6];
  while ( 1 )
  {
    if ( (PVOID)WindowForView != v8[2].Ptr )
    {
      if ( v8 != v10 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( v8 )
      break;
LABEL_19:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_20:
    v8 = (RTL_SRWLOCK *)v8[1].Ptr;
  }
  v11 = v8 + 3;
  v12 = this[55].Ptr;
  v13 = (__int64 *)this[19].Ptr;
  AcquireSRWLockShared(v11);
  v14 = v11[4].Ptr;
  for ( i = (_QWORD *)*v14; i != v14; i = (_QWORD *)*i )
  {
    v16 = *v13;
    v22 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, unsigned __int64 *))(v16 + 48))(v13, *(_QWORD *)(i[4] + 32LL), &v22) < 0 )
      goto LABEL_9;
    v17 = v22;
    if ( v22 )
    {
      v19 = (*(__int64 (__fastcall **)(PVOID, unsigned __int64, struct IApplicationView *))(*(_QWORD *)v12 + 152LL))(
              v12,
              v22,
              a2);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC9,
          (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowdata.cpp",
          (const char *)(unsigned int)v19,
          v20);
LABEL_9:
      v17 = v22;
    }
    if ( v17 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v11 )
    ReleaseSRWLockShared(v11);
LABEL_13:
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
