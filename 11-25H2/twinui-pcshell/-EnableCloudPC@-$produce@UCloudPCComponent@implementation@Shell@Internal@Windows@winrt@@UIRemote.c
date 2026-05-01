/*
 * XREFs of ?EnableCloudPC@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEAX000@Z @ 0x18061A240
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18061A290 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 */

__int64 winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>::EnableCloudPC(
        __int64 a1,
        ...)
{
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  va_list va; // [rsp+48h] [rbp+10h]
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  va_list va1; // [rsp+50h] [rbp+18h]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF
  va_list va2; // [rsp+58h] [rbp+20h]
  va_list va3; // [rsp+60h] [rbp+28h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  v1 = (winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)((a1 - 96) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::EnableCloudPC(
      v1,
      (const struct winrt::hstring *)va,
      (const struct winrt::hstring *)va1,
      (const struct winrt::hstring *)va2,
      (const struct winrt::hstring *)va3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
