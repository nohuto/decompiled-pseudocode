/*
 * XREFs of DestroyCacheDCEntries @ 0x140046CF0
 * Callers:
 *     DestroyThreadsObjects @ 0x140038840 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 */

void __fastcall DestroyCacheDCEntries(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968);
  v7 = *(_QWORD **)(v6 + 24);
  v9 = *(_QWORD *)(W32GetUserSessionState(v8, v6) + 56968) + 24LL;
  if ( v7 != (_QWORD *)v9 )
  {
    do
    {
      v11 = (_QWORD *)*v7;
      if ( a1 == v7[7] && (v7[6] & 0x80000002) == 2 )
        DestroyCacheDC(v7);
      v7 = v11;
      v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968) + 24LL;
    }
    while ( v11 != (_QWORD *)v10 );
  }
  v12 = W32GetUserSessionState(v10, v9);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v12 + 56968) + 48LL));
}
