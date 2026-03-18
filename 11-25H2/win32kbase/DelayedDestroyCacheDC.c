/*
 * XREFs of DelayedDestroyCacheDC @ 0x1401371E0
 * Callers:
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 */

void __fastcall DelayedDestroyCacheDC(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // esi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rax

  v2 = a1;
  v3 = 1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v7 = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968) + 24LL);
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 56968) + 24LL;
  if ( v7 == (_QWORD *)v10 )
  {
LABEL_13:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    goto LABEL_17;
  }
  do
  {
    v12 = *((_DWORD *)v7 + 12);
    v13 = (_QWORD *)*v7;
    if ( v12 >= 0 )
    {
      if ( (v12 & 0x400000) == 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    v14 = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    if ( v14 && !*v14 )
      v14 = 0LL;
    if ( (_QWORD *)v7[8] == v14 )
    {
      if ( !v2 )
      {
        v3 = 0;
        goto LABEL_11;
      }
LABEL_10:
      DestroyCacheDC(v7);
    }
LABEL_11:
    v7 = v13;
    v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 56968) + 24LL;
  }
  while ( v13 != (_QWORD *)v11 );
  if ( v3 )
    goto LABEL_13;
LABEL_17:
  v16 = W32GetUserSessionState(v11, v10);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 48LL));
}
