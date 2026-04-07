/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayExtendAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800B1960
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
  *retstr = (struct _GUID)xmmword_1800FDB08;
  return result;
}
