/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x140249528
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x140249234 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char *__fastcall RITORDIT(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v8; // al
  void *v9; // rcx

  v1 = PtiCurrent(a1);
  if ( v1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v3, v2) + 18696) )
    return "Rit";
  v8 = IsInputThread(v5, v4, v6);
  v9 = &unk_14035E7E1;
  if ( v8 )
    return "Mit";
  return (char *)v9;
}
