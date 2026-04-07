/*
 * XREFs of ?_AreAllStoryboardsAbandoned@CAnimationScheduler@@AEAA_NXZ @ 0x180027EC4
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x180027E60 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAnimationScheduler::_AreAllStoryboardsAbandoned(CAnimationScheduler *this)
{
  char v1; // dl
  __int64 i; // r8

  v1 = 1;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * i) + 24LL) != 4 )
      return 0;
  }
  return v1;
}
