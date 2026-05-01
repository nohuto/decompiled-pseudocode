/*
 * XREFs of ?GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18054B10C (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::GetGraphicsCaptureItemForAllDisplays(
        ScreenClippingBrokerImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  try
  {
    anonymous_namespace_::CreateGraphicsCaptureItem(
      (winrt *)&v9,
      (__int64)a2,
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a3);
    v5 = (**v9)(v9, a2, a3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F,
                           (int)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
                           v6);
  }
  return result;
}
