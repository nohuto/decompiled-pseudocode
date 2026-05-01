/*
 * XREFs of ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180175910
 * Callers:
 *     ?RegisterForViewEvents@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1801758B0 (-RegisterForViewEvents@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@UViewEventRegistration@@$$V@std@@YA?AV?$shared_ptr@UViewEventRegistration@@@0@XZ @ 0x180175D1C (--$make_shared@UViewEventRegistration@@$$V@std@@YA-AV-$shared_ptr@UViewEventRegistration@@@0@XZ.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x180175D94 (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x180175F3C (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802E77A0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UwpWindowEventDispatcher::RegisterForViewEventsWithOptions(
        RTL_SRWLOCK *a1,
        __int64 a2,
        HSTRING a3,
        HSTRING a4,
        int a5,
        _QWORD *a6)
{
  const char *v10; // r9
  HSTRING *v11; // rdi
  HRESULT v12; // ebx
  HSTRING v13; // rcx
  __int64 v14; // rdi
  HRESULT v15; // ebx
  HSTRING v16; // rcx
  __int64 v17; // rdi
  HSTRING v18; // rax
  int AgileReference; // ebx
  HSTRING v20; // rdx
  __int64 v21; // rcx
  HSTRING **Ptr; // r12
  HSTRING **v23; // rax
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v26; // edi
  const WCHAR *v27; // rax
  char *v28; // rcx
  _QWORD *v29; // rcx
  const char *v30; // r9
  __int64 result; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-68h]
  HSTRING newString; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v35[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v36; // [rsp+48h] [rbp-40h] BYREF
  std::_Ref_count_base *v37; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    std::make_shared<ViewEventRegistration,>();
    v11 = (HSTRING *)v36;
    if ( !v36 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x819,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        v10);
    newString = 0LL;
    v12 = WindowsDuplicateString(a3, &newString);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x81A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        bIgnoreCase);
    v13 = *v11;
    *v11 = newString;
    WindowsDeleteString(v13);
    v14 = v36;
    newString = 0LL;
    v15 = WindowsDuplicateString(a4, &newString);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x81B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        bIgnoreCase);
    v16 = *(HSTRING *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = newString;
    WindowsDeleteString(v16);
    *(_DWORD *)(v36 + 16) = a5;
    v17 = v36;
    v18 = 0LL;
    newString = 0LL;
    AgileReference = 0;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&newString);
      AgileReference = RoGetAgileReference(0LL, &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, a2, &newString);
      v18 = newString;
    }
    v20 = 0LL;
    newString = 0LL;
    v21 = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(v17 + 24) = v18;
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v20 = newString;
    }
    if ( v20 )
    {
      newString = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x81D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference,
        bIgnoreCase);
    AcquireSRWLockExclusive(a1 + 58);
    v35[1] = a1 + 58;
    Ptr = (HSTRING **)a1[52].Ptr;
    v23 = (HSTRING **)a1[53].Ptr;
    v35[0] = v23;
    while ( Ptr != v23 )
    {
      StringLen = WindowsGetStringLen(*(HSTRING *)v36);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v36, 0LL);
      v26 = WindowsGetStringLen(**Ptr);
      v27 = WindowsGetStringRawBuffer(**Ptr, 0LL);
      if ( CompareStringOrdinal(v27, v26, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty((*Ptr)[1])
          || WindowsIsStringEmpty(*(HSTRING *)(v36 + 8))
          || (LODWORD(newString) = 0,
              WindowsCompareStringOrdinal((*Ptr)[1], *(HSTRING *)(v36 + 8), (INT32 *)&newString),
              !(_DWORD)newString) )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x83A,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)0x80070057LL,
            bIgnoreCasea);
        }
      }
      Ptr += 2;
      v23 = (HSTRING **)v35[0];
    }
    v28 = (char *)a1[51].Ptr;
    a1[51].Ptr = v28 + 1;
    *(_QWORD *)(v36 + 32) = v28;
    v29 = a1[53].Ptr;
    if ( v29 == a1[54].Ptr )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        &a1[52],
        a1[53].Ptr,
        &v36);
    }
    else
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v29, &v36);
      a1[53].Ptr = (char *)a1[53].Ptr + 16;
    }
    *a6 = *(_QWORD *)(v36 + 32);
    v35[0] = WindowsGetStringRawBuffer(a4, 0LL);
    newString = (HSTRING)WindowsGetStringRawBuffer(a3, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
      &newString,
      v35);
    if ( a1 != (RTL_SRWLOCK *)-464LL )
      ReleaseSRWLockExclusive(a1 + 58);
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x848,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v30);
  }
  return result;
}
