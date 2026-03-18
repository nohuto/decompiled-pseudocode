/*
 * XREFs of ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x14001AC48
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x14001AA44 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsStillWindowC(HWND a1)
{
  unsigned int v1; // edi
  int v2; // esi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 *v13; // r14

  v1 = 0;
  v2 = (int)a1;
  if ( !a1 || a1 == (HWND)-2LL || a1 == (HWND)1 || a1 == (HWND)-1LL )
    return 1LL;
  v4 = 0LL;
  PsGetCurrentThreadWin32Thread(a1);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19928) * (unsigned int)(unsigned __int16)v2
        + *(_QWORD *)(UserSessionState + 19920);
    v13 = (__int64 *)HMPkheFromPhe(v12);
    LOWORD(v2) = HIWORD(v2) & 0x7FFF;
    if ( ((HIWORD(v2) & 0x7FFF) == *(_WORD *)(v12 + 26)
       || (_WORD)v2 == 0x7FFF
       || !(_WORD)v2 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v12 + 25) & 1) == 0
      && *(_BYTE *)(v12 + 24) == 1 )
    {
      v4 = *v13;
    }
  }
  LOBYTE(v1) = v4 != 0;
  return v1;
}
