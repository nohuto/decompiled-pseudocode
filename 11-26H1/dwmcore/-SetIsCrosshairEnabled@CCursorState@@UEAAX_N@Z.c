/*
 * XREFs of ?SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z @ 0x180291E90
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18018A534 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetIsCrosshairEnabled(CCursorState *this, char a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((_BYTE *)this + 17) )
  {
    *((_BYTE *)this + 17) = a2;
    *((_BYTE *)this + 16) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
