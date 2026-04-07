/*
 * XREFs of ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x1800D0B14
 * Callers:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18008B0C0 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x18008617C (--0atomic_ref_count@impl@winrt@@QEAA@I@Z.c)
 *     ?get_marshaler@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@CA?AU?$com_ptr@UIMarshal@impl@winrt@@@4@XZ @ 0x1800D151C (-get_marshaler@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall `winrt::impl::make_marshaler'::`2'::marshaler::marshaler(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rdi

  v2 = a1 + 1;
  *a1 = `winrt::impl::make_marshaler'::`2'::marshaler::`vftable';
  a1[1] = 0LL;
  `winrt::impl::make_marshaler'::`2'::marshaler::get_marshaler(a1 + 2);
  winrt::impl::atomic_ref_count::atomic_ref_count((winrt::impl::atomic_ref_count *)(a1 + 3));
  if ( *v2 != a2 )
  {
    if ( *v2 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v2);
    *v2 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return a1;
}
