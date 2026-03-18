/*
 * XREFs of UserGetWindowRect @ 0x14017BF40
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x14005D774 (GreUpdateSpriteClipRgn.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall UserGetWindowRect(__int64 a1, _OWORD *a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 result; // rax

  v3 = a1;
  W32GetCurrentThreadNonPaged(a1, a2);
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
  if ( (unsigned __int64)(unsigned __int16)v3 >= *(_QWORD *)(v7 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19896) * (unsigned int)(unsigned __int16)v3
      + *(_QWORD *)(UserSessionState + 19888);
  v14 = HMPkheFromPhe(v11);
  LOWORD(v3) = HIWORD(v3) & 0x7FFF;
  if ( (HIWORD(v3) & 0x7FFF) != *(_WORD *)(v11 + 26)
    && (_WORD)v3 != 0x7FFF
    && ((_WORD)v3 || !PsGetCurrentProcessWow64Process(v13, v12)) )
  {
    return 0LL;
  }
  result = 1LL;
  if ( (*(_BYTE *)(v11 + 25) & 1) != 0 || *(_BYTE *)(v11 + 24) != 1 || !*(_QWORD *)v14 )
    return 0LL;
  *a2 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 40LL) + 88LL);
  return result;
}
