/*
 * XREFs of ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x140195AA0
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015DFF0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     ?FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z @ 0x1401959E8 (-FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagHOTKEY::MatchHandle(tagHOTKEY *this, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *((_QWORD *)this + 2);
  if ( v2 == 1 )
    return a2 == (struct tagWND *)1;
  v3 = 0LL;
  if ( a2 )
    v3 = *(_QWORD *)a2;
  return v2 == v3;
}
