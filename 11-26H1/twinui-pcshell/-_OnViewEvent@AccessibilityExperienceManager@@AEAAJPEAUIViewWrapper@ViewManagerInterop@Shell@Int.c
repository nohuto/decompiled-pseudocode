/*
 * XREFs of ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18048E880
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4@Z @ 0x180009E98 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180251AD8 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180252228 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18048E24C (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_OnViewEvent(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  __int64 v3; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  int v19[2]; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v21; // [rsp+80h] [rbp+30h] BYREF
  const char *v22; // [rsp+88h] [rbp+38h] BYREF

  v3 = *(_QWORD *)a3;
  v21 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(v3 + 48))(
         a3,
         &v21);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x348,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v8;
  }
  if ( v21 )
  {
    if ( v21 == 4 )
    {
      v15 = GazeUITraceLogging::Provider(v7);
      if ( *(_DWORD *)v15 > 5u )
      {
        v18 = 0x1000000LL;
        v22 = "ViewDestroyed";
        *(_QWORD *)v19 = "AccessibilityExperienceManager::_OnViewEvent";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
          (__int64)v15,
          (__int64)&unk_1808110AB,
          v16,
          v17,
          (__int64)&v18,
          v19,
          &v22);
      }
      AccessibilityExperienceManager::_DismissView(this, (AccessibilityExperienceManager *)((char *)this + 368));
      if ( *((_BYTE *)this + 465) )
      {
        *((_BYTE *)this + 465) = 0;
        v13 = AccessibilityExperienceManager::RelaunchWithDelay(this);
        if ( v13 < 0 )
        {
          v14 = 861LL;
          goto LABEL_8;
        }
      }
    }
  }
  else
  {
    v10 = GazeUITraceLogging::Provider(v7);
    if ( *(_DWORD *)v10 > 5u )
    {
      *(_QWORD *)v19 = 0x1000000LL;
      v22 = "ViewCreated";
      v18 = (__int64)"AccessibilityExperienceManager::_OnViewEvent";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (__int64)v10,
        (__int64)&unk_180811072,
        v11,
        v12,
        (__int64)v19,
        &v18,
        &v22);
    }
    v13 = AccessibilityExperienceManager::_OnViewCreated(this, a2, (struct EventRegistrationToken)v11);
    if ( v13 < 0 )
    {
      v14 = 847LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  return 0LL;
}
