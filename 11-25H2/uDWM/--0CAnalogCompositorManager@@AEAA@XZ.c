/*
 * XREFs of ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180087874
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180067AF0 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180087A14 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180094A68 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180095C40 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180095CE0 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void_ @ 0x180099DE8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_68ab246ca29dbf1f5c5163.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_1fe009015b5481886de644cd00cd9360__void_ @ 0x180099E98 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_1fe009015b5481886de644.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A35AC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
CAnalogCompositorManager *__fastcall CAnalogCompositorManager::CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rax
  int AttachWatcher; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  int DetachWatcher; // eax
  int v9[34]; // [rsp+20h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  CAnalogCompositorManager *v11; // [rsp+B0h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+B8h] [rbp+10h]

  v11 = this;
  v12 = &qword_18011CB90;
  qword_18011CB90 = 0LL;
  Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_18011CB98);
  qword_18011CBC0 = 0LL;
  qword_18011CBC8 = 0LL;
  qword_18011CBD0 = 0LL;
  byte_18011CBD8 = 0;
  qword_18011CBE0 = 0LL;
  qword_18011CBE8 = 0LL;
  qword_18011CBF0 = 0LL;
  qword_18011CBF8 = 0LL;
  qword_18011CC00 = 0LL;
  qword_18011CC08 = 0LL;
  qword_18011CC10 = 0LL;
  dword_18011CC18 = 0;
  byte_18011CC1C = 0;
  word_18011CC1D = 0;
  byte_18011CC1F = 0;
  qword_18011CC20 = 0LL;
  LODWORD(v11) = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CAnalogCompositorManager **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 9)
                                                                                   + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
         L"DisableHologramCompositor",
         &v11) < 0
    || !(_DWORD)v11 )
  {
    v1 = Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_18011CB98);
    if ( v1 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v1,
        v9[0]);
    LOBYTE(v2) = 0;
    v3 = wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_1fe009015b5481886de644cd00cd9360__void_(
           v9,
           v2);
    AttachWatcher = Windows::Mirage::HolographicDriverDetectedWatcher::CreateAttachWatcher(&unk_18011CB98, v3);
    if ( AttachWatcher < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)AttachWatcher,
        v9[0]);
    LOBYTE(v5) = 0;
    v6 = wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void_(
           v9,
           v5);
    DetachWatcher = Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher(&unk_18011CB98, v6);
    if ( DetachWatcher < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)DetachWatcher,
        v9[0]);
  }
  return (CAnalogCompositorManager *)&qword_18011CB90;
}
