/*
 * XREFs of ?UseDComposition@CStoryboard@@QEAA_NXZ @ 0x18003E8F0
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003E6A4 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CStoryboard::UseDComposition(CStoryboard *this)
{
  char v1; // dl
  unsigned int i; // r8d

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 30); ++i )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8LL * i) + 40LL) + 912LL) )
      return 1;
  }
  return v1;
}
