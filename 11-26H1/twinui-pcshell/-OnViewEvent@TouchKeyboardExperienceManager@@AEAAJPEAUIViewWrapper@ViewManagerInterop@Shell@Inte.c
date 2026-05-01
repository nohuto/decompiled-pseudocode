/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800626E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180062930 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1801CA448 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801CC134 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801DE468 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?ViewVisibilityRevokedChanged@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18021B114 (-ViewVisibilityRevokedChanged@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x180465060 (--$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___ @ 0x1804658D8 (wil--ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  struct EventRegistrationToken v6; // r8
  unsigned int v7; // ebx
  struct IUnknown ***Ptr; // rbx
  struct IUnknown ***v10; // r14
  __int64 v11; // rax
  int v12; // eax
  std::_Ref_count_base *v13; // rbx
  const struct _tlgProvider_t *v14; // rax
  int v15; // r8d
  int v16; // r9d
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp-30h] BYREF
  int v22[2]; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v23[2]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v25; // [rsp+B0h] [rbp+40h] BYREF
  const char *v26; // [rsp+B8h] [rbp+48h] BYREF

  v25 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v25);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( v25 )
    {
      if ( v25 == 4 )
      {
        *(_OWORD *)v23 = 0LL;
        AcquireSRWLockExclusive(this + 53);
        *(_QWORD *)v22 = this + 53;
        Ptr = (struct IUnknown ***)this[54].Ptr;
        v10 = (struct IUnknown ***)this[55].Ptr;
        while ( Ptr != v10 && !(unsigned int)SHIsSameObject(**Ptr, a2) )
          Ptr += 2;
        v26 = (const char *)Ptr;
        if ( Ptr != this[55].Ptr )
        {
          std::shared_ptr<FlyoutView>::operator=(v23, Ptr);
          v11 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v22, this, &v26);
          v12 = wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___(v11);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10A0,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v12);
        }
        if ( this != (RTL_SRWLOCK *)-424LL )
          ReleaseSRWLockExclusive(this + 53);
        v13 = v23[0];
        v14 = TouchKeyboardExperienceTraceLogging::Provider();
        if ( v13 )
        {
          v17 = (int)v14;
          if ( *(_DWORD *)v14 > 5u )
          {
            LODWORD(v26) = *((_DWORD *)v13 + 26);
            StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v13 + 14), 0LL);
            *(_QWORD *)v22 = "viewInfo destroyed";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v17,
              (unsigned int)&unk_180808288,
              v18,
              v19,
              (__int64)v22,
              (__int64)&StringRawBuffer,
              (__int64)&v26);
          }
          v20 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, v13);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10AB,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v20);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[73].Ptr + 16) + 216LL))(
            *((_QWORD *)this[73].Ptr + 16),
            *((unsigned int *)v13 + 26));
        }
        else if ( *(_DWORD *)v14 > 5u )
        {
          v26 = "viewInfo destroyed - no matching viewInfo";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (_DWORD)v14,
            (unsigned int)&unk_1808082C7,
            v15,
            v16,
            (__int64)&v26);
        }
        if ( v23[1] )
          std::_Ref_count_base::_Decref(v23[1]);
      }
      else if ( v25 == 7 )
      {
        TouchKeyboardExperienceTelemetryLogger::ViewVisibilityRevokedChanged();
      }
    }
    else
    {
      LODWORD(v26) = TouchKeyboardExperienceManager::OnViewCreated(
                       (TouchKeyboardExperienceManager *)this,
                       (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
                       v6);
      if ( (int)v26 < 0 )
        TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>(&v26);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
