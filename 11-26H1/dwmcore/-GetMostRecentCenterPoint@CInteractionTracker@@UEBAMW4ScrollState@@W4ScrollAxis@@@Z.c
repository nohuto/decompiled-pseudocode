/*
 * XREFs of ?GetMostRecentCenterPoint@CInteractionTracker@@UEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1801D7310
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CInteractionTracker::GetMostRecentCenterPoint(__int64 a1, int a2, int a3)
{
  int v4; // edx
  __int64 v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v5 = 268LL;
  }
  else
  {
    v5 = 260LL;
  }
  if ( !a3 )
    return *(float *)(a1 + v5);
  if ( a3 != 1 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return *(float *)(a1 + v5 + 4);
}
