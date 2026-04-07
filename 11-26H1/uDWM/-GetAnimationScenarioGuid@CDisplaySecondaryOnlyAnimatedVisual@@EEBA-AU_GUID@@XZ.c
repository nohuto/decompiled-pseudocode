/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplaySecondaryOnlyAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800B37C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplaySecondaryOnlyAnimatedVisual::GetAnimationScenarioGuid(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1800F8F68;
  return result;
}
