/*
 * XREFs of _lambda_ae9cec3a14ef2935a6b3ef14574371c5_::_lambda_ae9cec3a14ef2935a6b3ef14574371c5_ @ 0x18035CBAC
 * Callers:
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x180360908 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_ae9cec3a14ef2935a6b3ef14574371c5_::_lambda_ae9cec3a14ef2935a6b3ef14574371c5_(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  v3 = *a3;
  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_OWORD *)(a1 + 8) = v3;
  return result;
}
