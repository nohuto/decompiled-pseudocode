/*
 * XREFs of ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x14018D44C
 * Callers:
 *     ?FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z @ 0x14018D090 (-FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z.c)
 *     DestroyWindowsHotKeys @ 0x14018D328 (DestroyWindowsHotKeys.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018D468 (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagHOTKEY::MatchHandle(tagHOTKEY *this, struct tagWND *a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)a2;
  return *((_QWORD *)this + 2) == v2;
}
