/*
 * XREFs of ?GetCurrentVelocity@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x180273540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801A1C4C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18020145C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289EB0 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__m128 __fastcall CInteractionTracker2::GetCurrentVelocity(_QWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm6
  int v5; // edx
  CScrollAnimation *v6; // rcx
  CScrollScaleKeyframeAnimation *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rcx
  _BYTE v15[16]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
      {
        v6 = (CScrollAnimation *)a1[81];
LABEL_16:
        *(float *)&v2 = CScrollAnimation::GetVelocity(v6);
        return (__m128)v2;
      }
      v7 = (CScrollScaleKeyframeAnimation *)a1[99];
      if ( v7 )
      {
        *(float *)&v2 = CScrollScaleKeyframeAnimation::GetScaleVelocity(v7);
        return (__m128)v2;
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
      {
        v6 = (CScrollAnimation *)a1[83];
        goto LABEL_16;
      }
      v10 = a1[98];
      if ( v10 )
        return (__m128)*(unsigned int *)(CScrollPositionKeyframeAnimation::GetPositionVelocity(
                                           v10,
                                           (__int64)v15,
                                           v8,
                                           v9)
                                       + 4);
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
    {
      v6 = (CScrollAnimation *)a1[82];
      goto LABEL_16;
    }
    v13 = a1[98];
    if ( v13 )
      return (__m128)*(unsigned int *)CScrollPositionKeyframeAnimation::GetPositionVelocity(v13, (__int64)v15, v11, v12);
  }
  return (__m128)v3;
}
