/*
 * XREFs of ?MarshalInterface@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHPEAXAEBUguid@4@2I2I@Z @ 0x1800D1100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::MarshalInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // rcx

  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, __int64, int))(*(_QWORD *)v7 + 40LL))(
             v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 2147942414LL;
}
