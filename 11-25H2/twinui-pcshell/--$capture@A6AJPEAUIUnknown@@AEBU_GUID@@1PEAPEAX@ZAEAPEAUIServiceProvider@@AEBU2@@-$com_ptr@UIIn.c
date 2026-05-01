/*
 * XREFs of ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIInputHostLayout@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x1800FBF58
 * Callers:
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800FBFD0 (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 *     ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x180568320 (-subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 winrt::com_ptr<IInputHostLayout>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
        __int64 *a1,
        __int64 (__fastcall *a2)(_QWORD, SID *, void *, __int64 *),
        _QWORD *a3,
        ...)
{
  bool v3; // zf
  unsigned int v7; // eax
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v9 = 0;
  v3 = *a1 == 0;
  v10 = 0LL;
  if ( !v3 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
  v7 = a2(*a3, &SID_InputHostLayout, &winrt::impl::guid_v<IInputHostLayout>, a1);
  return winrt::check_hresult(va, v7, &v9);
}
