/*
 * XREFs of DestroyMonitorDCs @ 0x1400ABCF0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089F20 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1400E0E64 (GreSelectRedirectionBitmap.c)
 *     HdevFromMonitor @ 0x140146250 (HdevFromMonitor.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 */

void __fastcall DestroyMonitorDCs(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 56968);
  v6 = *(__int64 **)(v5 + 24);
  v9 = *(_QWORD *)(W32GetUserSessionState(v5, v7) + 56968) + 24LL;
  if ( v6 != (__int64 *)v9 )
  {
    do
    {
      v10 = v6[9];
      v11 = (__int64 *)*v6;
      if ( v10 && (unsigned int)HdevFromMonitor() == -1 )
      {
        v13 = *((_DWORD *)v6 + 12);
        if ( v13 >= 0 )
        {
          DestroyCacheDC(v6);
        }
        else
        {
          v6[9] = 0LL;
          v14 = v13 | 0x4000000;
          *((_DWORD *)v6 + 12) = v14;
          if ( (v14 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap(v6[2], 0LL);
            *((_DWORD *)v6 + 12) &= ~0x4000u;
            tagDCE::SetPwndRedirect((tagDCE *)v6, 0LL);
          }
        }
      }
      v6 = v11;
      v9 = *(_QWORD *)(W32GetUserSessionState(v10, v8) + 56968) + 24LL;
    }
    while ( v11 != (__int64 *)v9 );
  }
  v12 = W32GetUserSessionState(v9, v8);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v12 + 56968) + 48LL));
}
