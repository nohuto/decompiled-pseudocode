/*
 * XREFs of ?_GetHighestPriStoryboardNoRef@CAnimationScheduler@@AEAAPEAVCStoryboard@@W4StoryboardState@@@Z @ 0x18003E174
 * Callers:
 *     ?_GetStoryboardHighestPri@CAnimationScheduler@@AEAAHW4StoryboardState@@@Z @ 0x18003D694 (-_GetStoryboardHighestPri@CAnimationScheduler@@AEAAHW4StoryboardState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::_GetHighestPriStoryboardNoRef(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // r9

  v1 = *(_DWORD *)(a1 + 40);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 **)(a1 + 16);
    v4 = v1;
    do
    {
      if ( !*(_DWORD *)(*v3 + 24) && (!v2 || *(_DWORD *)(v2 + 64) < *(_DWORD *)(*v3 + 64)) )
        v2 = *v3;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
