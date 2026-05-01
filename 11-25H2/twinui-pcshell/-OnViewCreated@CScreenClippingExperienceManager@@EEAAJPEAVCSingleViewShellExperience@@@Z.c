/*
 * XREFs of ?OnViewCreated@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18029CC40
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18029CD28 (-SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?ShowExperienceWithoutFocus@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180394440 (-ShowExperienceWithoutFocus@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnViewCreated(
        CScreenClippingExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  const struct _tlgProvider_t *v4; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rax
  HWND v7; // rbx
  __int64 v8; // rdx
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v4,
      byte_1807C57FD,
      0LL);
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  v7 = v6;
  if ( v6 )
  {
    if ( !SetPropW(v6, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      v8 = 522LL;
LABEL_6:
      v9 = -2147467259;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    if ( !SetPropW(v7, L"NoAnimationOffscreenMovement", HANDLE_FLAG_INHERIT) )
    {
      v8 = 525LL;
      goto LABEL_6;
    }
  }
  v9 = CScreenClippingExperienceManager::SizeViewOnCreation((CScreenClippingExperienceManager *)((char *)this - 48));
  if ( v9 < 0 )
  {
    v8 = 528LL;
    goto LABEL_7;
  }
  v9 = CScreenClippingExperienceManager::ShowExperienceWithoutFocus((CScreenClippingExperienceManager *)((char *)this - 48));
  if ( v9 < 0 )
  {
    v8 = 529LL;
    goto LABEL_7;
  }
  return 0LL;
}
