/*
 * XREFs of ?GetBoundedEndpoint@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x180273320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801E085C (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__m128 __fastcall CInteractionTracker2::GetBoundedEndpoint(_QWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v5; // xmm6
  int v6; // ebx
  CScrollAnimation *v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
  {
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v7 = (CScrollAnimation *)a1[81];
      }
      else
      {
        v7 = (CScrollAnimation *)a1[83];
      }
    }
    else
    {
      v7 = (CScrollAnimation *)a1[82];
    }
    *(float *)&v2 = CScrollAnimation::GetBoundedEndpoint(v7);
    return (__m128)v2;
  }
  return (__m128)v5;
}
