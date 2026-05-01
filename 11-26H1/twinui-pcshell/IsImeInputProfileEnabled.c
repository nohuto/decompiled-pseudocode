/*
 * XREFs of IsImeInputProfileEnabled @ 0x1801BCFA8
 * Callers:
 *     ?IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1801BCE5C (-IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 *     ?OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z @ 0x1801BCF10 (-OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputPro.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801BD1D4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall IsImeInputProfileEnabled(__int64 *a1, __int64 a2, __int64 a3, const char *a4)
{
  int v5; // eax
  unsigned int i; // ebx
  const struct _tlgProvider_t *v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  const char *v14; // rax
  __int64 v15; // rcx
  const struct _tlgProvider_t *v16; // rax
  int v17; // r8d
  int v18; // r9d
  int v19; // [rsp+20h] [rbp-60h]
  unsigned int v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  const char *v24; // [rsp+58h] [rbp-28h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( !a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x16,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      a4);
  v20 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a1 + 56))(a1, &v20);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      (const char *)(unsigned int)v5,
      v19);
  for ( i = 0; ; ++i )
  {
    if ( i >= v20 )
    {
      v7 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v7 > 5u )
      {
        v22 = 0;
        v21 = v20;
        v24 = "InputAppPreloader::IsImeInputProfile";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (_DWORD)v7,
          (unsigned int)&unk_18080F301,
          v8,
          v9,
          (__int64)&v24,
          (__int64)&v21,
          (__int64)&v22);
      }
      return 0;
    }
    v11 = *a1;
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v11 + 48))(a1, i, &v23);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x41,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v12,
        v19);
    v25 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23 + 80LL))(v23, &v25);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x44,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v13,
        v19);
    v14 = (const char *)&unk_180788F60;
    do
    {
      v15 = *(_QWORD *)v14 - v25;
      if ( *(_QWORD *)v14 == (_QWORD)v25 )
        v15 = *((_QWORD *)v14 + 1) - *((_QWORD *)&v25 + 1);
      if ( !v15 )
        break;
      v14 += 16;
    }
    while ( v14 != "InputAppPreloader::IsImeInputProfile" );
    if ( v14 != "InputAppPreloader::IsImeInputProfile" )
      break;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  }
  v16 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v16 > 5u )
  {
    v21 = v25;
    v22 = v20;
    v24 = "InputAppPreloader::IsImeInputProfile";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v16,
      (unsigned int)&unk_18080F2C0,
      v17,
      v18,
      (__int64)&v24,
      (__int64)&v22,
      (__int64)&v21);
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return 1;
}
