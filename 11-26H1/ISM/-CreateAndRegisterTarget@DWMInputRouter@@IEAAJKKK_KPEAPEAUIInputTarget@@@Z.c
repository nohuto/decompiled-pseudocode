/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800290E8
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800142E0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800317F0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800291E4 (-Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x18002AAC8 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct IInputTarget **a6)
{
  __int64 **v8; // rcx
  __int64 *i; // rax
  struct IInputTarget *v10; // rbx
  int v11; // eax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInputTarget *v17; // [rsp+40h] [rbp+8h] BYREF

  v8 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v8; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v8 )
    {
      v10 = 0LL;
      goto LABEL_6;
    }
    if ( *((_DWORD *)i + 4) == a2 )
      break;
  }
  v10 = (struct IInputTarget *)i[7];
LABEL_6:
  v17 = v10;
  if ( v10 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v10 + 8LL))(v10);
    v13 = DWMFocusedInputTarget::Create(v10, a3, a4, a5, a6);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v13,
        v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      return 0LL;
    }
  }
  else
  {
    v11 = DWMLegacyInputTarget::Create(a2, a3, a4, a5, a6);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E2,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v11,
        v14);
      return 0LL;
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
