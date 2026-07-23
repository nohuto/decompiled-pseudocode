/*
 * XREFs of IdnaMemAlloc @ 0x1800AAD50
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIdnToUnicode @ 0x1800AACC0 (RtlIdnToUnicode.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IdnaMemAlloc(SIZE_T Size)
{
  return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, Size);
}
