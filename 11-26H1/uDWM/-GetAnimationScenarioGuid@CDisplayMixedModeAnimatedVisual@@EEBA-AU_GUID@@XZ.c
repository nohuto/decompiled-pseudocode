/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayMixedModeAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800B25B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayMixedModeAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayMixedModeAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1800F8EF8;
  return result;
}
