/*
 * XREFs of _lambda_fcaf91f45d912a8af4ef843f26ff2189_::_lambda_fcaf91f45d912a8af4ef843f26ff2189_ @ 0x180363980
 * Callers:
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803679A4 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_fcaf91f45d912a8af4ef843f26ff2189_::_lambda_fcaf91f45d912a8af4ef843f26ff2189_(
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
