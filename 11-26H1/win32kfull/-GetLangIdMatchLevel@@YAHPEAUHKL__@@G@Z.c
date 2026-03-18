/*
 * XREFs of ?GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z @ 0x1401D8850
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1401D875C (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetLangIdMatchLevel(__int64 a1, unsigned __int16 a2)
{
  int v3; // esi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 ArbitraryUserPointer_low; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax

  v3 = a1;
  v4 = 0;
  if ( !a2 )
    return 3LL;
  if ( ((**((_DWORD **)PtiCurrent(a1) + 64) >> 9) & 1) != 0 && (HIWORD(v3) & 0xF000) != 0xE000 )
    return 0LL;
  if ( (_WORD)v3 == a2 )
    return 3LL;
  ArbitraryUserPointer_low = LODWORD(KeGetPcr()->NtTib.Self[4].ArbitraryUserPointer);
  if ( (_WORD)ArbitraryUserPointer_low == a2 )
    return 2LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(ArbitraryUserPointer_low, v5) + 14300) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    ZwQueryDefaultLocale(0, (PLCID)(UserSessionState + 14300));
  }
  LOBYTE(v4) = *(_WORD *)(W32GetUserSessionState(v8, v7) + 14300) == a2;
  return v4;
}
