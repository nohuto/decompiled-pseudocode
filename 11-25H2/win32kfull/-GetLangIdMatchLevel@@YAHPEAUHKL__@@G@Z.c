/*
 * XREFs of ?GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z @ 0x1401A1EA8
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1401A1CAC (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetLangIdMatchLevel(__int64 a1, __int64 a2)
{
  __int16 v2; // di
  int v3; // esi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 ArbitraryUserPointer_low; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  unsigned __int16 v11; // [rsp+70h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  v11 = a2;
  v4 = 0;
  if ( !(_WORD)a2 )
    return 3LL;
  if ( ((**((_DWORD **)PtiCurrent(a1, a2) + 65) >> 9) & 1) != 0 && (HIWORD(v3) & 0xF000) != 0xE000 )
    return 0LL;
  if ( (_WORD)v3 == v2 )
    return 3LL;
  ArbitraryUserPointer_low = LODWORD(KeGetPcr()->NtTib.Self[4].ArbitraryUserPointer);
  if ( (_WORD)ArbitraryUserPointer_low == v2 )
    return 2LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(ArbitraryUserPointer_low, v5) + 14308) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    ZwQueryDefaultLocale(0, (PLCID)(UserSessionState + 14308));
  }
  LOBYTE(v4) = *(_WORD *)(W32GetUserSessionState(v9, v8) + 14308) == v11;
  return v4;
}
