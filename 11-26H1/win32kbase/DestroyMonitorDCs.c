/*
 * XREFs of DestroyMonitorDCs @ 0x14007F970
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081F70 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSelectRedirectionBitmap @ 0x14012A6F0 (GreSelectRedirectionBitmap.c)
 *     HdevFromMonitor @ 0x14017C240 (HdevFromMonitor.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 */

void __fastcall DestroyMonitorDCs(__int64 a1)
{
  __int64 SessionState; // rax
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 *v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // eax
  int v20; // eax

  SessionState = W32GetSessionState(a1);
  GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v2, v3);
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 56968);
  v8 = *(__int64 **)(v7 + 24);
  v12 = *(_QWORD *)(W32GetUserSessionState(v7, v9, v10) + 56968) + 24LL;
  if ( v8 != (__int64 *)v12 )
  {
    do
    {
      v14 = v8[9];
      v15 = (__int64 *)*v8;
      if ( v14 && (unsigned int)HdevFromMonitor() == -1 )
      {
        v19 = *((_DWORD *)v8 + 12);
        if ( v19 >= 0 )
        {
          DestroyCacheDC(v8);
        }
        else
        {
          v20 = v19 | 0x4000000;
          v8[9] = 0LL;
          *((_DWORD *)v8 + 12) = v20;
          if ( (v20 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap(v8[2], 0LL);
            *((_DWORD *)v8 + 12) &= ~0x4000u;
            tagDCE::SetPwndRedirect((tagDCE *)v8, 0LL);
          }
        }
      }
      v8 = v15;
      v12 = *(_QWORD *)(W32GetUserSessionState(v14, v11, v13) + 56968) + 24LL;
    }
    while ( v15 != (__int64 *)v12 );
  }
  v16 = W32GetSessionState(v12);
  GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v16 + 88), v17, v18);
}
