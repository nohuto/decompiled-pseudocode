/*
 * XREFs of ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801A29A0
 * Callers:
 *     ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180184170 (-v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@I.c)
 *     wil::details::lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___::_lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___ @ 0x180433CC4 (wil--details--lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___--_lambda_call__lambda_ddf5.c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator() @ 0x180433D1C (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator().c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x180441518 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180441610 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_048a96d3662c681a0b7978326510b206___ @ 0x180442C7C (Windows--Internal--ComTaskPool--QueueTask__lambda_048a96d3662c681a0b7978326510b206___.c)
 *     _lambda_048a96d3662c681a0b7978326510b206_::_lambda_048a96d3662c681a0b7978326510b206_ @ 0x180444B10 (_lambda_048a96d3662c681a0b7978326510b206_--_lambda_048a96d3662c681a0b7978326510b206_.c)
 *     _lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_ @ 0x180444B28 (_lambda_048a96d3662c681a0b7978326510b206_--__lambda_048a96d3662c681a0b7978326510b206_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+40h] [rbp+18h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( a2 != *(_DWORD *)(a1 + 468) )
  {
    *(_DWORD *)(a1 + 468) = a2;
    v5 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 280) + 152LL))(
                       *(_QWORD *)(a1 + 280),
                       &v11);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 64LL))(*v6, *(unsigned int *)(a1 + 352), a2);
      if ( v11 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else if ( a2 - 3 <= 1 )
    {
      v11 = 0LL;
      v7 = Windows::Internal::String::Initialize(&v11, (HSTRING *)(a1 + 312));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC67,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
      v8 = lambda_048a96d3662c681a0b7978326510b206_::_lambda_048a96d3662c681a0b7978326510b206_(&v12, &v11);
      Windows::Internal::ComTaskPool::QueueTask__lambda_048a96d3662c681a0b7978326510b206___(v9, v8);
      lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_(&v12);
      Windows::Internal::String::~String(&v11);
    }
    LOBYTE(v5) = a2 - 4 <= 1;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, 0LL, v5);
  }
  return result;
}
