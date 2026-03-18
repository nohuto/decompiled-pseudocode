/*
 * XREFs of DelayedDestroyCacheDC @ 0x1401867E4
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 */

void __fastcall DelayedDestroyCacheDC(__int64 a1)
{
  int v1; // ebp
  int v2; // edi
  __int64 SessionState; // rax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  _DWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rax

  v1 = a1;
  v2 = 1;
  SessionState = W32GetSessionState(a1);
  GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v4, v5);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 56968);
  v10 = *(_DWORD **)(v9 + 24);
  v13 = *(_QWORD *)(W32GetUserSessionState(v11, v9, v12) + 56968) + 24LL;
  if ( v10 != (_DWORD *)v13 )
  {
    while ( 1 )
    {
      v16 = v10[12];
      v17 = *(_DWORD **)v10;
      if ( v16 < 0 )
        break;
      if ( (v16 & 0x400000) != 0 )
        goto LABEL_4;
LABEL_5:
      v10 = v17;
      v14 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 56968) + 24LL;
      if ( v17 == (_DWORD *)v14 )
      {
        if ( !v2 )
          goto LABEL_7;
        goto LABEL_13;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
    {
      v13 = -*(_QWORD *)CurrentProcessWin32Process;
      v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v15;
    }
    if ( *((_QWORD *)v10 + 8) != CurrentProcessWin32Process )
      goto LABEL_5;
    if ( !v1 )
    {
      v2 = 0;
      goto LABEL_5;
    }
LABEL_4:
    DestroyCacheDC(v10);
    goto LABEL_5;
  }
LABEL_13:
  v22 = PsGetCurrentProcessWin32Process(v14);
  if ( v22 )
  {
    v14 = -*(_QWORD *)v22;
    v22 &= -(__int64)(*(_QWORD *)v22 != 0LL);
  }
  *(_DWORD *)(v22 + 12) &= ~0x200u;
LABEL_7:
  v18 = W32GetSessionState(v14);
  GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v18 + 88), v19, v20);
}
