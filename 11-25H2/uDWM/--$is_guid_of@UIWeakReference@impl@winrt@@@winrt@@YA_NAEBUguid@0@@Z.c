/*
 * XREFs of ??$is_guid_of@UIWeakReference@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800D3414
 * Callers:
 *     ?QueryInterface@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D3CE0 (-QueryInterface@-$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::impl::IWeakReference>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::impl::IWeakReference>;
  if ( *a1 == winrt::impl::guid_v<winrt::impl::IWeakReference> )
    v1 = a1[1] - 0x46000000000000C0LL;
  return v1 == 0;
}
