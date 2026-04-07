/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800B0450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayDuplicateAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayDuplicateAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1800FDA58;
  return result;
}
