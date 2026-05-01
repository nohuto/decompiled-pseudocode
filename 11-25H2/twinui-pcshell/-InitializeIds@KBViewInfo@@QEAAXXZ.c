/*
 * XREFs of ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x180097F14
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18006BDAC (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180198A5C (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x180098100 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180098170 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800987DC (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180099060 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802B6584 (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KBViewInfo::InitializeIds(KBViewInfo *this)
{
  _QWORD *v2; // r14
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, _QWORD *); // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v6; // rdx
  unsigned __int64 i; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  const struct _tlgProvider_t *v13; // rbx
  _QWORD *ViewTypesString; // rax
  HSTRING v15; // rcx
  int v16; // r8d
  int v17; // r9d
  _DWORD v18[2]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-1h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp+Fh] BYREF
  void *v22[4]; // [rsp+68h] [rbp+1Fh] BYREF

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
      v18[0] = anonymous_namespace_::GetViewTypeFromExperienceId(v2);
      if ( v18[0] != -1 )
      {
        v6 = 0xCBF29CE484222325uLL;
        for ( i = 0LL; i < 4; ++i )
        {
          v8 = *((unsigned __int8 *)v18 + i);
          v6 = 0x100000001B3LL * (v8 ^ v6);
        }
        v9 = v6 & *((_QWORD *)this + 11);
        v5 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 8);
        v10 = 2 * v9;
        v11 = *((_QWORD *)v5 + v10 + 1);
        if ( v11 == *((_QWORD *)this + 6) )
        {
LABEL_11:
          v11 = 0LL;
        }
        else
        {
          v5 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)v5 + v10);
          while ( v18[0] != *(_DWORD *)(v11 + 16) )
          {
            if ( (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v11 == v5 )
              goto LABEL_11;
            v11 = *(_QWORD *)(v11 + 8);
          }
        }
        if ( !v11 || v11 == *((_QWORD *)this + 6) )
          std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
            (char *)this + 40,
            v21,
            v18,
            v18[0]);
      }
      v12 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)this, v5);
      if ( v12 )
        *((_DWORD *)this + 26) = v12;
      v13 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v13 > 5u )
      {
        ViewTypesString = (_QWORD *)KBViewInfo::GetViewTypesString(this, v22);
        if ( ViewTypesString[3] > 7uLL )
          ViewTypesString = (_QWORD *)*ViewTypesString;
        v15 = (HSTRING)*((_QWORD *)this + 14);
        v19 = ViewTypesString;
        v18[0] = *((_DWORD *)this + 26);
        StringRawBuffer = WindowsGetStringRawBuffer(v15, 0LL);
        v21[0] = "InitializeIds:ApplicationViewId initialized";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          (_DWORD)v13,
          (unsigned int)&unk_1807D1C5B,
          v16,
          v17,
          (__int64)v21,
          (__int64)&StringRawBuffer,
          (__int64)v18,
          (__int64)&v19);
        std::wstring::_Tidy_deallocate(v22);
      }
    }
  }
}
