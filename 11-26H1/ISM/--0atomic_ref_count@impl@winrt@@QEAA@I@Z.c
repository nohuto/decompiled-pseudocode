/*
 * XREFs of ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x18007D690
 * Callers:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800A6B70 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 * Callees:
 *     ??0?$atomic@W4GestureOperationState@@@std@@QEAA@W4GestureOperationState@@@Z @ 0x18007D6A8 (--0-$atomic@W4GestureOperationState@@@std@@QEAA@W4GestureOperationState@@@Z.c)
 */

__int64 __fastcall winrt::impl::atomic_ref_count::atomic_ref_count(winrt::impl::atomic_ref_count *this)
{
  __int64 v1; // rcx

  std::atomic<enum GestureOperationState>::atomic<enum GestureOperationState>(this);
  return v1;
}
