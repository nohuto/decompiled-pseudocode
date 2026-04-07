/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayBlackCurtainAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800B3500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayBlackCurtainAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayBlackCurtainAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1800F8F58;
  return result;
}
