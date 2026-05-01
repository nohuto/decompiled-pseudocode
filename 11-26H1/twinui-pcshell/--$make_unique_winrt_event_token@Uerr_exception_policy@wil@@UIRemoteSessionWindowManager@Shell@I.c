/*
 * XREFs of ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@ZPEAU786@@details@wil@@YA?AV?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@1@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@Z1@Z @ 0x180550598
 * Callers:
 *     ?CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180552690 (-CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ??_9CPinnedList@@$BJI@AA @ 0x1803644D0 (--_9CPinnedList@@$BJI@AA.c)
 *     ??$com_weak_query_failfast@AEAPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@Z @ 0x1805504E4 (--$com_weak_query_failfast@AEAPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@YA-A.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::IRemoteSessionWindowManager,long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  int v5; // eax
  __int64 *v6; // rax
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  v11 = a3;
  v12 = 0LL;
  v5 =  CPinnedList::`vcall'{152,{flat}}((__int64)a2);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C89,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v5,
      v8);
  v11 = a2;
  *a1 = v12;
  a1[1] = 0LL;
  a1[2] =  winrt::impl::abi<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,void>::type::`vcall'{160,{flat}};
  v6 = wil::com_weak_query_failfast<Windows::Internal::Shell::IRemoteSessionWindowManager * &>(v9, &v11);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    a1 + 1,
    v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  return a1;
}
