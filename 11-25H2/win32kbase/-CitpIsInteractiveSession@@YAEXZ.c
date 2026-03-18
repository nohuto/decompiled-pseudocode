/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x140132F7C
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1401329F0 (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x140132DD8 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

unsigned __int8 CitpIsInteractiveSession(void)
{
  int CurrentServiceSessionId; // ebx
  char v1; // cl
  char IsMultiSessionSku; // al

  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( (unsigned int)W32GetCurrentWin32kSessionId() != CurrentServiceSessionId )
    return 1;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  v1 = 0;
  if ( !IsMultiSessionSku )
    return 1;
  return v1;
}
