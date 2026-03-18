/*
 * XREFs of ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x180291F50
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18018A534 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetIsTrailEnabled(CCursorState *this, char a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((_BYTE *)this + 19) )
  {
    *((_BYTE *)this + 19) = a2;
    if ( a2 )
    {
      if ( *((int *)this + 6) > 0 )
        CCursorState::ScheduleCompositionPass(this);
    }
  }
  LeaveCriticalSection(&g_CursorManager);
}
