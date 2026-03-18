/*
 * XREFs of ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180139210
 * Callers:
 *     ?GetManipulationVelocity@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801E3C50 (-GetManipulationVelocity@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationVelocity@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x180273710 (-GetManipulationVelocity@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__m128 __fastcall InteractionSourceManager::GetActiveManipulationVelocity(InteractionSourceManager *a1)
{
  __m128 v1; // xmm2
  InteractionSourceManager *v2; // rcx
  int v3; // r10d
  __int128 v5; // [rsp+A0h] [rbp-48h]

  v1 = 0LL;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    v5 = *((_OWORD *)InteractionSourceManager::TryGetActiveManipulation(v2) + 25);
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        if ( v3 == 2 )
        {
          v1 = (__m128)HIDWORD(v5);
          v1.m128_f32[0] = *((float *)&v5 + 3) * 1000.0;
          return v1;
        }
        return _mm_xor_ps(v1, (__m128)_xmm);
      }
      v1 = (__m128)DWORD1(v5);
    }
    else
    {
      v1 = (__m128)(unsigned int)v5;
    }
    v1.m128_f32[0] = v1.m128_f32[0] * 1000.0;
    return _mm_xor_ps(v1, (__m128)_xmm);
  }
  return v1;
}
