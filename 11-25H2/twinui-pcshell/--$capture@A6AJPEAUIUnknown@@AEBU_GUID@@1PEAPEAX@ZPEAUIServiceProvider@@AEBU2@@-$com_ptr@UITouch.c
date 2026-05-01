/*
 * XREFs of ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU2@@?$com_ptr@UITouchSwipe@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180568800
 * Callers:
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18056887C (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::com_ptr<ITouchSwipe>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        __int64 *a1,
        __int64 (__fastcall *a2)(_QWORD, __int64, void *, __int64 *),
        _QWORD *a3,
        __int64 a4)
{
  bool v4; // zf
  int v9; // eax
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0;
  v4 = *a1 == 0;
  v12 = 0LL;
  if ( !v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
  v9 = a2(*a3, a4, &winrt::impl::guid_v<ITouchSwipe>, a1);
  return winrt::check_hresult(&v13, v9, (__int64)&v11);
}
