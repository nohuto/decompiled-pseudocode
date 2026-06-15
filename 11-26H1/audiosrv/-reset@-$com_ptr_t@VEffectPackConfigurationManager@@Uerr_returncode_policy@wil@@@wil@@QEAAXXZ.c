/*
 * XREFs of ?reset@?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DBDE0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800DB86C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?Shutdown@CEndpointCharacteristicsCache@@UEAAXXZ @ 0x18013DDF0 (-Shutdown@CEndpointCharacteristicsCache@@UEAAXXZ.c)
 *     wil::details::lambda_call__lambda_d1a522299f442ad259eaf9e84c8754b2___::_lambda_call__lambda_d1a522299f442ad259eaf9e84c8754b2___ @ 0x1801407BC (wil--details--lambda_call__lambda_d1a522299f442ad259eaf9e84c8754b2___--_lambda_call__lambda_d1a5.c)
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x180142FE0 (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
