/*
 * XREFs of _anonymous_namespace_::GetPromptText @ 0x1805EFA6C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18054A27C (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x1805F0E6C (_anonymous_namespace_--TruncateDisplayName.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall anonymous_namespace_::GetPromptText(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  int v11; // eax
  _QWORD *v12; // rax
  int v13; // eax
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v19; // [rsp+20h] [rbp-59h]
  int v20; // [rsp+20h] [rbp-59h]
  _QWORD v21[2]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h]
  __int128 v24; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25; // [rsp+68h] [rbp-11h]
  _QWORD v26[4]; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v27[5]; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v21[0] = a1;
  v24 = 0uLL;
  v25 = 0LL;
  v22 = 0uLL;
  v23 = 0LL;
  v4 = a2 + 7;
  std::wstring::operator std::basic_string_view<unsigned short>(a2 + 7, v21);
  if ( v21[1] )
  {
    std::wstring::operator std::basic_string_view<unsigned short>(v5, v21);
    v6 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v27, v21);
    if ( v6[3] > 7uLL )
      v6 = (_QWORD *)*v6;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
           (__int64)&v24,
           &_ImageBase,
           0x38A8u,
           v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEF,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v7,
        v19);
    std::wstring::_Tidy_deallocate(v27);
    std::wstring::operator std::basic_string_view<unsigned short>(v4, v21);
    v8 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v26, v21);
    v9 = v8;
    if ( v8[3] > 7uLL )
      v9 = (_QWORD *)*v8;
    std::wstring::operator std::basic_string_view<unsigned short>(a2, v21);
    v10 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v27, v21);
    if ( v10[3] > 7uLL )
      v10 = (_QWORD *)*v10;
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            (__int64)&v22,
            &_ImageBase,
            0x38B0u,
            v10,
            v9);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF4,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v11,
        v20);
    std::wstring::_Tidy_deallocate(v27);
  }
  else
  {
    std::wstring::operator std::basic_string_view<unsigned short>(a2, v21);
    v12 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v26, v21);
    if ( v12[3] > 7uLL )
      v12 = (_QWORD *)*v12;
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            (__int64)&v24,
            &_ImageBase,
            0x38AAu,
            v12);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE8,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v13,
        v19);
    std::wstring::_Tidy_deallocate(v26);
    std::wstring::operator std::basic_string_view<unsigned short>(a2, v21);
    v14 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v26, v21);
    if ( v14[3] > 7uLL )
      v14 = (_QWORD *)*v14;
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            (__int64)&v22,
            &_ImageBase,
            0x38B1u,
            v14);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEA,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v15,
        v19);
  }
  std::wstring::_Tidy_deallocate(v26);
  a1[1] = *((_QWORD *)&v22 + 1);
  a1[2] = v23;
  v16 = v22;
  v22 = 0uLL;
  v23 = 0LL;
  *a1 = v16;
  a1[4] = *((_QWORD *)&v24 + 1);
  a1[5] = v25;
  v17 = v24;
  v24 = 0uLL;
  v25 = 0LL;
  a1[3] = v17;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
  return a1;
}
