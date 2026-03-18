/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x14016BE78
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x14016B80C (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x14016BC30 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

unsigned __int8 CitpIsInteractiveSession(void)
{
  int CurrentServiceSessionId; // ebx
  __int64 v1; // rcx
  char v2; // cl
  char IsMultiSessionSku; // al

  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( (unsigned int)W32GetCurrentWin32kSessionId(v1) != CurrentServiceSessionId )
    return 1;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  v2 = 0;
  if ( !IsMultiSessionSku )
    return 1;
  return v2;
}
