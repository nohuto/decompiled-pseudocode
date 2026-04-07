/*
 * XREFs of ?DisconnectObject@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHI@Z @ 0x1800D3880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::DisconnectObject(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  else
    return 2147942414LL;
}
