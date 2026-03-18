/*
 * XREFs of RedirectDCEs @ 0x140059EA8
 * Callers:
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x140059FD0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall RedirectDCEs(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968);
  v7 = *(__int64 **)(v6 + 24);
  v9 = *(_QWORD *)(W32GetUserSessionState(v8, v6) + 56968) + 24LL;
  if ( v7 != (__int64 *)v9 )
  {
    while ( 1 )
    {
      v11 = *((_DWORD *)v7 + 12);
      if ( (v11 & 0x4400800) != 0 )
        goto LABEL_10;
      v9 = v7[10];
      if ( !v9 || (v11 & 0x1000) == 0 )
        goto LABEL_10;
      v10 = *(_QWORD *)(a1 + 24);
      v12 = 0LL;
      if ( v10 )
      {
        v13 = *(_QWORD *)(v10 + 8);
        if ( v13 )
          v12 = *(_QWORD *)(v13 + 24);
      }
      if ( a1 != v12 )
        break;
      if ( a1 == v9 )
        goto LABEL_15;
LABEL_10:
      v7 = (__int64 *)*v7;
      v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968) + 24LL;
      if ( v7 == (__int64 *)v10 )
        goto LABEL_11;
    }
    while ( a1 != v9 )
    {
      v10 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF;
      if ( (_DWORD)v10 == 669 )
        goto LABEL_10;
      v9 = *(_QWORD *)(v9 + 104);
    }
LABEL_15:
    UpdateRedirectedDCE((tagDCE *)v7);
    goto LABEL_10;
  }
LABEL_11:
  v14 = W32GetUserSessionState(v10, v9);
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v14 + 56968) + 48LL));
}
