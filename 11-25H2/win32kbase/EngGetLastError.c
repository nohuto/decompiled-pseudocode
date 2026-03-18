/*
 * XREFs of EngGetLastError @ 0x1401C7A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG EngGetLastError(void)
{
  ULONG v0; // ebx
  _DWORD *CurrentThreadTeb; // rax

  v0 = 0;
  CurrentThreadTeb = PsGetCurrentThreadTeb();
  if ( CurrentThreadTeb )
    return CurrentThreadTeb[26];
  return v0;
}
