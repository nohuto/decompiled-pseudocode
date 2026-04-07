/*
 * XREFs of ?GetCurrentTransformValue@CTopLevelWindow3D@@AEAAMW4WindowTransformAttribute@1@M@Z @ 0x180056DC4
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CTopLevelWindow3D::GetCurrentTransformValue(__int64 a1, int a2, double a3)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 288);
  if ( v3 )
    *(__m128 *)&a3 = _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(v3 + 48));
  return *(__m128 *)&a3;
}
