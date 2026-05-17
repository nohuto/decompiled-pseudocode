/*
 * XREFs of IdnaMemAlloc @ 0x1800ABC20
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIdnToUnicode @ 0x1800ABB90 (RtlIdnToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 IdnaMemAlloc()
{
  return RtlAllocateHeap_0();
}
