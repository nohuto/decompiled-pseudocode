/*
 * XREFs of ?reset@?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x1805352B8
 * Callers:
 *     ??1?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAA@XZ @ 0x18052E754 (--1-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAA@XZ.c)
 *     ??4?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18052EB00 (--4-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::reset(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
      &v6);
    if ( v6 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 16))(v6, *(_QWORD *)a1);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8C8,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
          (const char *)(unsigned int)v3,
          v4);
    }
    *(_QWORD *)a1 = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 8));
    *(_QWORD *)(a1 + 16) = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
  }
}
