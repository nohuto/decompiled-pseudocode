/*
 * XREFs of ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B8BF8
 * Callers:
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x1800B8980 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1801C87D4 (-GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802B91CC (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18047CCB0 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 v4; // r14d
  char v5; // al
  int Focus; // ebx
  __int64 v7; // rdx
  _QWORD *ModalityString; // rax
  HSTRING v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int32 v15; // [rsp+38h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v17; // [rsp+58h] [rbp-11h]
  _BYTE v18[24]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  _QWORD v20[4]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = *a2;
  if ( *a2 )
  {
    v5 = *(_BYTE *)(a1 + 500);
    *(_BYTE *)(a1 + 500) = 1;
    if ( !v5 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus((KeyboardHosting::TabTipAdapter *)a1);
      if ( Focus < 0 )
      {
        v7 = 3122LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)Focus);
        return (unsigned int)Focus;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 504) != v4 )
  {
    ModalityString = (_QWORD *)KeyboardHosting::TabTipAdapter::GetModalityString(a1, v20, v4);
    if ( ModalityString[3] > 7uLL )
      ModalityString = (_QWORD *)*ModalityString;
    v13[0] = ModalityString;
    v10 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v18, v13) + 24);
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LastInputModality", 0x12u, 0x11u);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v17, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC37,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11);
    v17 = 0LL;
    v19 = 0LL;
    std::wstring::_Tidy_deallocate(v20);
    _InterlockedExchange((volatile __int32 *)(a1 + 504), v4);
  }
  if ( !*(_QWORD *)(a1 + 120) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC3C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x80070490LL);
  v12 = *(_QWORD *)(a1 + 120);
  if ( v12 )
  {
    LODWORD(v13[0]) = 0;
    v14 = *(_QWORD *)a2;
    v15 = a2[2];
    Focus = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v12 + 208LL))(v12, &v14, v13);
    if ( Focus < 0 )
    {
      v7 = 3136LL;
      goto LABEL_5;
    }
    if ( LODWORD(v13[0]) == 2 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(a1, 2LL, *(unsigned int *)(a1 + 496));
      if ( Focus < 0 )
      {
        v7 = 3140LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
