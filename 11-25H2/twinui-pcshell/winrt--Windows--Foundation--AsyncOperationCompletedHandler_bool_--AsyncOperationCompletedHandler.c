/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_57788f35bdd9b54a58cb4d12640be97c___ @ 0x18063019C
 * Callers:
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x1806353EC (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_57788f35bdd9b54a58cb4d12640be97c___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *result; // rax
  char *v6; // [rsp+30h] [rbp+8h]

  v6 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 8));
  v4[2] = a2;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_1807332B8;
  result = a1;
  *a1 = v4;
  return result;
}
