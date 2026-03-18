/*
 * XREFs of ChangeRedirectionParentInDCEs @ 0x140058438
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     UnredirectDCEs @ 0x1400587E0 (UnredirectDCEs.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402876B4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x140059FD0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall ChangeRedirectionParentInDCEs(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v6 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968) + 24LL);
  v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968) + 24LL;
  if ( v6 != (__int64 *)v9 )
  {
    while ( 1 )
    {
      v11 = *((unsigned int *)v6 + 12);
      if ( (v6[6] & 0x4404800) != 0x4000 )
        goto LABEL_10;
      v9 = v6[10];
      if ( !v9 || (v11 & 0x1000) == 0 )
        goto LABEL_10;
      v11 = *(_QWORD *)(a1 + 24);
      v12 = 0LL;
      if ( v11 )
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 )
          v12 = *(_QWORD *)(v13 + 24);
      }
      if ( a1 != v12 )
        break;
      if ( a1 == v9 )
        goto LABEL_15;
LABEL_10:
      v6 = (__int64 *)*v6;
      v10 = *(_QWORD *)(W32GetUserSessionState(v11, v9) + 56968) + 24LL;
      if ( v6 == (__int64 *)v10 )
        goto LABEL_11;
    }
    while ( a1 != v9 )
    {
      v11 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF;
      if ( (_DWORD)v11 == 669 )
        goto LABEL_10;
      v9 = *(_QWORD *)(v9 + 104);
    }
LABEL_15:
    UpdateRedirectedDCE((tagDCE *)v6);
    goto LABEL_10;
  }
LABEL_11:
  v14 = W32GetUserSessionState(v10, v9);
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v14 + 56968) + 48LL));
}
