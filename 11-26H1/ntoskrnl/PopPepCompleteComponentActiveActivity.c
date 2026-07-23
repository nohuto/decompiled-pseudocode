/*
 * XREFs of PopPepCompleteComponentActiveActivity @ 0x1403BB950
 * Callers:
 *     <none>
 * Callees:
 *     PopPepTriggerActivity @ 0x1403B9720 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1403BB820 (PopPepGetComponentPreferedIdleState.c)
 */

void __fastcall PopPepCompleteComponentActiveActivity(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int ComponentPreferedIdleState; // eax
  unsigned int i; // edx
  bool v7; // zf

  if ( a2 )
  {
    *(_QWORD *)(a2 + 136) = MEMORY[0xFFFFF78000000008];
    v4 = (unsigned int)(*(_DWORD *)(a2 + 188) - 1);
    *(_DWORD *)(a2 + 152) = v4;
    if ( !PopDirectedDripsDiagLock.SchedulerApcFill3[48] && (_DWORD)v4 )
    {
      do
      {
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 200) + 24 * v4 + 8) <= *(_QWORD *)(a2 + 120) )
          break;
        v7 = (_DWORD)v4 == 1;
        v4 = (unsigned int)(v4 - 1);
      }
      while ( !v7 );
    }
    *(_DWORD *)(a2 + 160) = v4;
    *(_DWORD *)(a2 + 4) &= ~1u;
    ComponentPreferedIdleState = PopPepGetComponentPreferedIdleState((_DWORD *)a2);
    if ( ComponentPreferedIdleState != *(_DWORD *)(a2 + 176) )
      PopPepTriggerActivity(a1, a2, 1, ComponentPreferedIdleState);
    for ( i = 1; i <= 3; ++i )
    {
      if ( **(_DWORD **)(a2 + 8LL * i + 56) )
        return;
    }
    if ( *(_DWORD *)(a2 + 176) == *(_DWORD *)(a2 + 188) - 1 )
    {
      *(_DWORD *)(a2 + 4) &= ~2u;
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 140));
    }
  }
}
