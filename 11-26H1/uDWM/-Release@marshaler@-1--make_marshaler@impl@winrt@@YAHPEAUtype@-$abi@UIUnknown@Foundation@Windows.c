/*
 * XREFs of ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800D1310
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18002FBE8 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@XZ @ 0x1800D0BCC (--1marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::Release(void *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((__int64)a1 + 24);
  if ( !v2 && a1 )
  {
    `winrt::impl::make_marshaler'::`2'::marshaler::~marshaler((__int64)a1);
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
