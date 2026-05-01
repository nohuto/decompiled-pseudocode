/*
 * XREFs of ??4?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180551EA4
 * Callers:
 *     ?CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180552690 (-CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ?reset@?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180558EE0 (-reset@-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEA.c)
 */

__int64 *__fastcall wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != a2 )
  {
    wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::reset();
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    v7 = a1[1];
    a1[1] = 0LL;
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
      a1 + 1,
      a2 + 1);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
      a2 + 1,
      &v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    v5 = a1[2];
    a1[2] = a2[2];
    a2[2] = v5;
  }
  return a1;
}
