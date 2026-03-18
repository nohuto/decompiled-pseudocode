/*
 * XREFs of UnredirectDCEs @ 0x1400587E0
 * Callers:
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x140058F0C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ChangeRedirectionParentInDCEs @ 0x140058438 (ChangeRedirectionParentInDCEs.c)
 *     UpdateRedirectedDCE @ 0x140059FD0 (UpdateRedirectedDCE.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 */

__int64 __fastcall UnredirectDCEs(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  tagDCE *i; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // r9

  if ( !GetStyleWindow(a1, 2848LL) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968);
    for ( i = *(tagDCE **)(v8 + 24); ; i = *(tagDCE **)i )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968) + 24LL;
      if ( i == (tagDCE *)v8 )
      {
        v10 = W32GetUserSessionState(v8, v7);
        return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v10 + 56968) + 48LL));
      }
      if ( (*((_DWORD *)i + 12) & 0x4400800) == 0 )
      {
        v7 = *((_QWORD *)i + 10);
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 24);
          v12 = 0LL;
          if ( v8 )
          {
            v13 = *(_QWORD *)(v8 + 8);
            if ( v13 )
              v12 = *(_QWORD *)(v13 + 24);
          }
          if ( a1 == v12 )
          {
            if ( a1 != v7 )
              continue;
          }
          else
          {
            while ( a1 != v7 )
            {
              v8 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF;
              if ( (_DWORD)v8 == 669 )
                goto LABEL_4;
              v7 = *(_QWORD *)(v7 + 104);
            }
          }
          if ( (*((_DWORD *)i + 12) & 0x1002) != 2 )
            UpdateRedirectedDCE(i);
        }
      }
LABEL_4:
      ;
    }
  }
  return ChangeRedirectionParentInDCEs(a1, 0LL);
}
