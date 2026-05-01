/*
 * XREFs of ?QueryInterface@?$weak_ref@$0A@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180440690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *a2 - winrt::impl::guid_v<winrt::impl::IWeakReference>;
  if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReference> )
    v3 = a2[1] - 0x46000000000000C0LL;
  if ( !v3 )
    goto LABEL_8;
  v4 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_8:
    *a3 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 28));
    return 0LL;
  }
}
