/*
 * XREFs of ?GetCurrentVelocity@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801A1B90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801A1C4C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18020145C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289EB0 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__m128 __fastcall CInteractionTracker::GetCurrentVelocity(_QWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm6
  int v5; // edx
  CScrollAnimation *v6; // rcx
  CScrollScaleKeyframeAnimation *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
      {
        v8 = (CScrollScaleKeyframeAnimation *)a1[70];
        if ( !v8 )
          return (__m128)v3;
        *(float *)&v2 = CScrollScaleKeyframeAnimation::GetScaleVelocity(v8);
        return (__m128)v2;
      }
      v6 = (CScrollAnimation *)a1[52];
LABEL_6:
      *(float *)&v2 = CScrollAnimation::GetVelocity(v6);
      return (__m128)v2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
    {
      v6 = (CScrollAnimation *)a1[54];
      goto LABEL_6;
    }
    v9 = a1[69];
    if ( v9 )
      return (__m128)*(unsigned int *)(CScrollPositionKeyframeAnimation::GetPositionVelocity(v9, v11) + 4);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
    {
      v6 = (CScrollAnimation *)a1[53];
      goto LABEL_6;
    }
    v10 = a1[69];
    if ( v10 )
      return (__m128)*(unsigned int *)CScrollPositionKeyframeAnimation::GetPositionVelocity(v10, v11);
  }
  return (__m128)v3;
}
