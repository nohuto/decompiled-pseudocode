/*
 * XREFs of ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x18008617C
 * Callers:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180086164 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x1800D0B14 (--0marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 * Callees:
 *     ??0?$atomic@H@std@@QEAA@H@Z @ 0x180086194 (--0-$atomic@H@std@@QEAA@H@Z.c)
 */

__int64 __fastcall winrt::impl::atomic_ref_count::atomic_ref_count(winrt::impl::atomic_ref_count *this)
{
  __int64 v1; // rcx

  std::atomic<int>::atomic<int>(this);
  return v1;
}
