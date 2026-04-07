/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayExtendAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800B12C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayExtendAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayExtendAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1800F8E88;
  return result;
}
