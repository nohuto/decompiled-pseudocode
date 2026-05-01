/*
 * XREFs of ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18041C830
 * Callers:
 *     ?RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x18041C7E0 (-RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@Vie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$make_shared@UViewEventRegistration@@$$V@std@@YA?AV?$shared_ptr@UViewEventRegistration@@@0@XZ @ 0x180175D1C (--$make_shared@UViewEventRegistration@@$$V@std@@YA-AV-$shared_ptr@UViewEventRegistration@@@0@XZ.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x180175D94 (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x180175F3C (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ?CompareOrdinal@String@Internal@Windows@@QEBAHAEBV123@@Z @ 0x1801E89F8 (-CompareOrdinal@String@Internal@Windows@@QEBAHAEBV123@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802E77A0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 WindowEventDispatcher::RegisterForViewEventsWithOptions(__int64 a1, __int64 a2, ...)
{
  HSTRING v2; // r12
  const char *v5; // r9
  int v6; // eax
  int v7; // eax
  Windows::Internal::String *v8; // rsi
  PCWSTR v9; // rax
  int AgileReference; // ebx
  HSTRING **v11; // r15
  PCWSTR v12; // rax
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v15; // ebx
  const WCHAR *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  const char *v19; // r9
  __int64 result; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-68h]
  PCWSTR v23; // [rsp+30h] [rbp-58h] BYREF
  PCWSTR v24; // [rsp+38h] [rbp-50h] BYREF
  RTL_SRWLOCK *v25; // [rsp+40h] [rbp-48h] BYREF
  Windows::Internal::String *v26; // [rsp+48h] [rbp-40h] BYREF
  std::_Ref_count_base *v27; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  HSTRING string; // [rsp+A0h] [rbp+18h] BYREF
  va_list stringa; // [rsp+A0h] [rbp+18h]
  HSTRING v31; // [rsp+A8h] [rbp+20h] BYREF
  va_list va1; // [rsp+A8h] [rbp+20h]
  __int64 v33; // [rsp+B0h] [rbp+28h]
  _QWORD *v34; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(stringa, a2);
  string = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v31 = va_arg(va2, HSTRING);
  v33 = va_arg(va2, _QWORD);
  v34 = va_arg(va2, _QWORD *);
  v2 = v31;
  try
  {
    std::make_shared<ViewEventRegistration,>(&v26);
    if ( !v26 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        1801LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v5);
    v6 = Windows::Internal::String::Initialize((HSTRING *)v26, (HSTRING *)stringa);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x70A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        bIgnoreCase);
    v7 = Windows::Internal::String::Initialize((HSTRING *)v26 + 1, (HSTRING *)va1);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x70B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        bIgnoreCase);
    *((_DWORD *)v26 + 4) = v33;
    v8 = v26;
    v9 = 0LL;
    v23 = 0LL;
    AgileReference = 0;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      AgileReference = RoGetAgileReference(0LL, &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, a2, &v23);
      v9 = v23;
    }
    v23 = 0LL;
    v24 = (PCWSTR)*((_QWORD *)v8 + 3);
    *((_QWORD *)v8 + 3) = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x70D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference,
        bIgnoreCase);
    wil::AcquireSRWLockExclusive(&v25, (RTL_SRWLOCK *)(a1 + 448));
    v11 = *(HSTRING ***)(a1 + 400);
    v12 = *(PCWSTR *)(a1 + 408);
    v24 = v12;
    while ( v11 != (HSTRING **)v12 )
    {
      StringLen = WindowsGetStringLen(*(HSTRING *)v26);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v26, 0LL);
      v15 = WindowsGetStringLen(**v11);
      v16 = WindowsGetStringRawBuffer(**v11, 0LL);
      if ( CompareStringOrdinal(v16, v15, StringRawBuffer, StringLen, 1) == 2
        && (WindowsIsStringEmpty((*v11)[1])
         || WindowsIsStringEmpty(*((HSTRING *)v26 + 1))
         || !(unsigned int)Windows::Internal::String::CompareOrdinal(*v11 + 1, (HSTRING *)v26 + 1)) )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x72A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)0x80070057LL,
          bIgnoreCasea);
      }
      v11 += 2;
      v12 = v24;
    }
    v17 = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = v17 + 1;
    *((_QWORD *)v26 + 4) = v17;
    v18 = *(_QWORD **)(a1 + 408);
    if ( v18 == *(_QWORD **)(a1 + 416) )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        (_QWORD *)(a1 + 400),
        *(char **)(a1 + 408),
        &v26);
    }
    else
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v18, &v26);
      *(_QWORD *)(a1 + 408) += 16LL;
    }
    *v34 = *((_QWORD *)v26 + 4);
    v24 = WindowsGetStringRawBuffer(v2, 0LL);
    v23 = WindowsGetStringRawBuffer(string, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
      (__int64 *)&v23,
      (__int64 *)&v24);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x738,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v19);
  }
  return result;
}
