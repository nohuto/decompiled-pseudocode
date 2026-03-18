/*
 * XREFs of ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x1801DDFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x18015F974 (-SetPositionInternal@CCursorState@@AEAAXMM_N@Z.c)
 */

void __fastcall CCursorState::SetPosition(CCursorState *this, float a2, float a3)
{
  EnterCriticalSection(&g_CursorManager);
  if ( !*((_BYTE *)this + 80) )
    CCursorState::SetPositionInternal(this, a2, a3, 1);
  LeaveCriticalSection(&g_CursorManager);
}
