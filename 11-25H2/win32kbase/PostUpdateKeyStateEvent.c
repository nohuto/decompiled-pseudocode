/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1400943F0
 * Callers:
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     UpdateAsyncKeyState @ 0x14018CE40 (UpdateAsyncKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x140219624 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ProcessUpdateKeyStateEvent @ 0x140094550 (ProcessUpdateKeyStateEvent.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x140094860 (ApiSetEditionPostUpdateKeyStateEvent.c)
 *     SetWakeBit @ 0x1400948E8 (SetWakeBit.c)
 *     CoalesceUpdateKeyStateEventMsg @ 0x140094930 (CoalesceUpdateKeyStateEventMsg.c)
 */

void __fastcall PostUpdateKeyStateEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  _OWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  _OWORD *v11; // rax
  __int64 v12; // rax

  if ( (*(_DWORD *)(a1 + 412) & 1) != 0 )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18648);
    if ( *(_QWORD *)(a1 + 104) != v3 )
    {
      if ( !*(_QWORD *)(a1 + 24) )
      {
        UserSessionState = W32GetUserSessionState(v4, v3);
        v6 = (_OWORD *)(a1 + 224);
        ProcessUpdateKeyStateEvent(a1, UserSessionState + 14336, a1 + 224);
LABEL_5:
        *v6 = 0LL;
        v6[1] = 0LL;
        *(_DWORD *)(a1 + 412) &= ~1u;
        return;
      }
      v7 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v7 + 96) == 4 )
      {
        v12 = W32GetUserSessionState(v4, v3);
        v6 = (_OWORD *)(a1 + 224);
        CoalesceUpdateKeyStateEventMsg(v7, v12 + 14336, a1 + 224);
        SetWakeBit(*(_QWORD *)(a1 + 104), 8256LL);
        goto LABEL_5;
      }
      v10 = Win32AllocPoolZInitImpl(256LL, 0x60uLL, 0x736B7355u);
      if ( v10 )
      {
        v11 = (_OWORD *)W32GetUserSessionState(v9, v8);
        v6 = (_OWORD *)(a1 + 224);
        *(_OWORD *)v10 = v11[896];
        *(_OWORD *)(v10 + 16) = v11[897];
        *(_OWORD *)(v10 + 32) = v11[898];
        *(_OWORD *)(v10 + 48) = v11[899];
        *(_OWORD *)(v10 + 64) = *(_OWORD *)(a1 + 224);
        *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 240);
        if ( !(unsigned int)ApiSetEditionPostUpdateKeyStateEvent(a1, v10) )
        {
          GreDeleteFastMutex((char *)v10);
          return;
        }
        goto LABEL_5;
      }
    }
  }
}
