/*
 * XREFs of UserSetDelayedSwitchAction @ 0x1401EA910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserSetDelayedSwitchAction(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  result = W32GetUserGdiSessionState(a1);
  *(_DWORD *)(result + 16) = v1;
  return result;
}
