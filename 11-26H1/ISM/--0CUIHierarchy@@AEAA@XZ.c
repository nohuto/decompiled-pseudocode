/*
 * XREFs of ??0CUIHierarchy@@AEAA@XZ @ 0x1800A7AA4
 * Callers:
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x180098AE4 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 * Callees:
 *     ?CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x1800491D4 (-CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800A9008 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
CUIHierarchy *__fastcall CUIHierarchy::CUIHierarchy(CUIHierarchy *this)
{
  __int128 *Watcher; // rsi
  __int64 v2; // rax
  CUIHierarchy *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = this;
  try
  {
    v5 = &qword_180254E50;
    qword_180254E50 = 0LL;
    qword_180254E58 = 0LL;
    xmmword_180254E60 = 0LL;
    qword_180254E70 = 0LL;
    qword_180254E78 = 0LL;
    xmmword_180254E80 = 0LL;
    xmmword_180254E90 = 0LL;
    Watcher = (__int128 *)winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher((__int64)&v4);
    if ( (__int128 *)((char *)&xmmword_180254E90 + 8) != Watcher )
    {
      if ( *((_QWORD *)&xmmword_180254E90 + 1) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&xmmword_180254E90 + 1);
      v2 = *(_QWORD *)Watcher;
      *(_QWORD *)Watcher = 0LL;
      *((_QWORD *)&xmmword_180254E90 + 1) = v2;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v4);
  }
  catch ( ... )
  {
  }
  if ( *((_QWORD *)&xmmword_180254E90 + 1) )
    CUIHierarchy::StartWindowWatcher((CUIHierarchy *)&qword_180254E50);
  return (CUIHierarchy *)&qword_180254E50;
}
