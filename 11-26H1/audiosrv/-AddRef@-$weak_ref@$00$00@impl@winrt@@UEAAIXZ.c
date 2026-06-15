/*
 * XREFs of ?AddRef@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800EB580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 28));
}
