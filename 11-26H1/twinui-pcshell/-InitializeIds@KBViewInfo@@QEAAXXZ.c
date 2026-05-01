/*
 * XREFs of ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18014531C
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180062930 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180191ADC (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1801454B8 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180145528 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180145B94 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180145D34 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802AF5CC (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@2@AEBI@Z @ 0x1804754C8 (-find@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KBViewInfo::InitializeIds(KBViewInfo *this)
{
  _QWORD *v2; // r15
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, _QWORD *); // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v6; // rax
  const struct _tlgProvider_t *v7; // rbx
  _QWORD *ViewTypesString; // rax
  HSTRING v9; // rcx
  int v10; // r8d
  int v11; // r9d
  int ViewTypeFromExperienceId; // [rsp+48h] [rbp-9h] BYREF
  _QWORD *v13; // [rsp+50h] [rbp-1h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp+1Fh] BYREF

  if ( !*((_QWORD *)this + 7) || *((_DWORD *)this + 26) == -1 )
  {
    v2 = (_QWORD *)((char *)this + 112);
    if ( !*((_QWORD *)this + 14) )
    {
      v3 = *(_QWORD *)this;
      v4 = *(void (__fastcall **)(__int64, _QWORD *))(**(_QWORD **)this + 616LL);
      WindowsDeleteString(0LL);
      *v2 = 0LL;
      v4(v3, v2);
    }
    if ( !KBViewInfo::IsAppDefaultView(this) )
    {
      ViewTypeFromExperienceId = anonymous_namespace_::GetViewTypeFromExperienceId(v2);
      if ( ViewTypeFromExperienceId != -1
        && *(_QWORD *)std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::find(
                        (char *)this + 40,
                        v15,
                        &ViewTypeFromExperienceId) == *((_QWORD *)this + 6) )
      {
        std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
          (char *)this + 40,
          v15,
          &ViewTypeFromExperienceId);
      }
      v6 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)this, v5);
      if ( v6 )
        *((_DWORD *)this + 26) = v6;
      v7 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v7 > 5u )
      {
        ViewTypesString = (_QWORD *)KBViewInfo::GetViewTypesString(this, v16);
        if ( ViewTypesString[3] > 7uLL )
          ViewTypesString = (_QWORD *)*ViewTypesString;
        v9 = (HSTRING)*((_QWORD *)this + 14);
        v13 = ViewTypesString;
        ViewTypeFromExperienceId = *((_DWORD *)this + 26);
        StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
        v15[0] = "InitializeIds:ApplicationViewId initialized";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          (_DWORD)v7,
          (unsigned int)&unk_1808083F7,
          v10,
          v11,
          (__int64)v15,
          (__int64)&StringRawBuffer,
          (__int64)&ViewTypeFromExperienceId,
          (__int64)&v13);
        std::wstring::_Tidy_deallocate(v16);
      }
    }
  }
}
