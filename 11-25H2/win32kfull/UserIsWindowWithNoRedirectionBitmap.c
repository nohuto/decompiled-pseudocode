/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x14009DBE4
 * Callers:
 *     GreGetDxSharedSurface @ 0x14009D7B0 (GreGetDxSharedSurface.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // edi
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
  __int64 v14; // r14

  v2 = a1;
  v3 = 0;
  W32GetCurrentThreadNonPaged(a1, a2);
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
  if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(v7 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19896) * (unsigned int)(unsigned __int16)v2
        + *(_QWORD *)(UserSessionState + 19888);
    v14 = HMPkheFromPhe(v11);
    LOWORD(v2) = HIWORD(v2) & 0x7FFF;
    if ( ((HIWORD(v2) & 0x7FFF) == *(_WORD *)(v11 + 26)
       || (_WORD)v2 == 0x7FFF
       || !(_WORD)v2 && PsGetCurrentProcessWow64Process(v13, v12))
      && (*(_BYTE *)(v11 + 25) & 1) == 0
      && *(_BYTE *)(v11 + 24) == 1
      && *(_QWORD *)v14
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14 + 40LL) + 26LL) & 0x20) != 0 )
    {
      return 1;
    }
  }
  return v3;
}
