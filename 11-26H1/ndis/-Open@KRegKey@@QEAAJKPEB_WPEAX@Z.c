/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060
 * Callers:
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140139988 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     GetModuleParameters @ 0x14014829C (GetModuleParameters.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B540 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014B680 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x14014B9A8 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x14014C594 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x14014C6EC (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x14014CB5C (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x14014CCB4 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x14014CE0C (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x14014CF64 (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisIsBindPathEnabled @ 0x14014E564 (ndisIsBindPathEnabled.c)
 *     ndisLoadNamedFilterAltitudes @ 0x14014E884 (ndisLoadNamedFilterAltitudes.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x14014EC40 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EDB4 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14014FFB0 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140150410 (-Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x14015DF30 (ndisWdfOpenConfigurationKey.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015E360 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 *     ndisBindBuilderLoadSettings @ 0x1401919DC (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015F0B0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, unsigned int a2, wchar_t *a3, void *a4)
{
  __int64 result; // rax
  __int64 v5; // r11
  wchar_t *v6; // rax
  __int16 v7; // r11
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  if ( !a3 )
    return KRegKey::Open(this, a2, &v8, a4);
  v5 = 0x7FFFLL;
  v6 = a3;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = 3221225485LL;
  if ( v5 )
  {
    result = 0LL;
    v7 = 2 * v5;
    v8.Buffer = a3;
    v8.Length = -2 - v7;
    v8.MaximumLength = -v7;
  }
  if ( (int)result >= 0 )
    return KRegKey::Open(this, a2, &v8, a4);
  return result;
}
