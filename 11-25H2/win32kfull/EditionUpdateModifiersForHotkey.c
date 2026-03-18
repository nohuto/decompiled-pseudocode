/*
 * XREFs of EditionUpdateModifiersForHotkey @ 0x1401CDD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUpdateModifiersForHotkey(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = a2;
  if ( (_DWORD)a1 )
  {
    result = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(result + 14008) &= ~v2;
  }
  else
  {
    result = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(result + 14008) |= v2;
  }
  return result;
}
