/*
 * XREFs of RtlInitializeProcessorFeaturesBitMap @ 0x1800CC190
 * Callers:
 *     LdrpInitialize @ 0x1800CC108 (LdrpInitialize.c)
 * Callees:
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlInitializeProcessorFeaturesBitMap(int a1)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    RtlProcessorFeaturesBuffer = 0LL;
  }
  else
  {
    ReturnLength = 0;
    result = NtQuerySystemInformation(
               SystemProcessorFeaturesBitMapInformation,
               &RtlProcessorFeaturesBuffer,
               0x10u,
               &ReturnLength);
  }
  RtlProcessorFeaturesBitMap = 128LL;
  off_1801C4550 = &RtlProcessorFeaturesBuffer;
  return result;
}
