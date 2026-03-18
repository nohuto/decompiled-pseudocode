/*
 * XREFs of DestroyCacheDCEntries @ 0x14003B704
 * Callers:
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 *     DestroyThreadsObjects @ 0x1400D0690 (DestroyThreadsObjects.c)
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 */

void __fastcall DestroyCacheDCEntries(__int64 a1)
{
  __int64 SessionState; // rax
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdi
  __int64 v19; // rax
  int v20; // eax

  SessionState = W32GetSessionState(a1);
  GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v3, v4);
  v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7, v8) + 56968);
  v10 = *(_QWORD **)(v9 + 24);
  v14 = *(_QWORD *)(W32GetUserSessionState(v11, v9, v12, v13) + 56968) + 24LL;
  if ( v10 != (_QWORD *)v14 )
  {
    do
    {
      v18 = (_QWORD *)*v10;
      if ( a1 == v10[7] )
      {
        v20 = *((_DWORD *)v10 + 12);
        if ( (v20 & 2) != 0 && v20 >= 0 )
          DestroyCacheDC(v10);
      }
      v10 = v18;
      v15 = *(_QWORD *)(W32GetUserSessionState(v15, v14, v16, v17) + 56968) + 24LL;
    }
    while ( v18 != (_QWORD *)v15 );
  }
  v19 = W32GetSessionState(v15);
  GrepUnlockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(v19 + 88));
}
