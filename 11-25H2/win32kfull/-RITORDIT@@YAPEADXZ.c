/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x14027B8C4
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1402286D8 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char *__fastcall RITORDIT(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v9; // al
  void *v10; // rcx

  v2 = PtiCurrent(a1, a2);
  if ( v2 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v4, v3) + 18648) )
    return "Rit";
  v9 = IsInputThread(v6, v5, v7);
  v10 = &unk_140351139;
  if ( v9 )
    return "Mit";
  return (char *)v10;
}
