/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800ED4D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x180064B0C (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800ED500 (RtlpFcRemoveChangeRegistration.c)
 */

__int64 __fastcall RtlUnregisterFeatureConfigurationChangeNotification(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1801CB8C8 )
  {
    RtlpFcRemoveChangeRegistration(a1, a1);
    return RtlpFcFreeChangeRegistration(a1);
  }
  return result;
}
