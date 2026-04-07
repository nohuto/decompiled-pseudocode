/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayExtendToDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800B18D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayExtendToDuplicateAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayExtendToDuplicateAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1800F8EE8;
  return result;
}
