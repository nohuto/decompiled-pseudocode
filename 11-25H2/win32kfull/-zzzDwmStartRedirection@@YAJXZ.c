/*
 * XREFs of ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4
 * Callers:
 *     NtUserDwmKernelStartup @ 0x14019CE10 (NtUserDwmKernelStartup.c)
 * Callees:
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     _GetProcessWindowStation @ 0x140111060 (_GetProcessWindowStation.c)
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     StopFade @ 0x1401F4CB0 (StopFade.c)
 *     DwmAsyncDesktopFree @ 0x1402181B8 (DwmAsyncDesktopFree.c)
 *     GreDwmShutdown @ 0x140267064 (GreDwmShutdown.c)
 *     DwmAsyncDesktopCreate @ 0x14026B0C4 (DwmAsyncDesktopCreate.c)
 *     DwmNotifyChildrenAddRemove @ 0x14026D92C (DwmNotifyChildrenAddRemove.c)
 *     DwmAsyncNotifyForegroundChange @ 0x140324B3C (DwmAsyncNotifyForegroundChange.c)
 *     DwmAsyncWindowNotificationsEnabled @ 0x1403253EC (DwmAsyncWindowNotificationsEnabled.c)
 *     DwmAsyncWindowNotificationsStateSynced @ 0x14032546C (DwmAsyncWindowNotificationsStateSynced.c)
 */

__int64 zzzDwmStartRedirection(void)
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  int RedirectionBitmap; // r14d
  HSURF v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rsi
  __int64 **v10; // rax
  __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 j; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 k; // rsi
  __int64 **v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  void *v34; // rax
  HSURF v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  void *v50; // rax
  void *v51; // rax
  void *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 m; // rbx
  HSURF v59; // rbx
  __int64 v60; // rax
  _OWORD v62[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v63; // [rsp+40h] [rbp-10h]
  int v64; // [rsp+48h] [rbp-8h]
  HSURF v65; // [rsp+80h] [rbp+30h] BYREF

  v65 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() )
    return (unsigned int)-1073741790;
  v2 = *(unsigned int *)(ProcessWindowStation + 64);
  if ( (v2 & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v2, v1);
    RedirectionBitmap = CreateOrGetRedirectionBitmap(
                          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19144) + 8LL) + 24LL),
                          1,
                          0,
                          &v65);
    if ( RedirectionBitmap >= 0 )
    {
      v6 = v65;
      *(_QWORD *)(ProcessWindowStation + 120) = v65;
      if ( *(_QWORD *)(W32GetUserSessionState(v6, v4) + 19144) )
      {
        v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19144);
        for ( i = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v10 = *(__int64 ***)(i + 8);
          v11 = **v10;
          v12 = (void *)ReferenceDwmApiPort(*v10, v7);
          DwmAsyncDesktopCreate(v12, v11);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 1);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 43000) )
        StopFade(v14, v13);
      v15 = W32GetUserSessionState(v14, v13);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v15 + 56968) + 48LL), 0LL, 0LL, 0);
      v18 = W32GetUserSessionState(v17, v16);
      if ( (unsigned int)GreDwmStartup(*(Gre::Base **)(*(_QWORD *)(v18 + 56968) + 48LL)) )
      {
        zzzEnableDwmPointerSupport(1LL, 0LL);
        if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19144) )
        {
          v24 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19144);
          for ( j = *(_QWORD *)(*(_QWORD *)(v24 + 40) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j, v23);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              v29 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19144);
              for ( k = *(_QWORD *)(*(_QWORD *)(v29 + 40) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k, 0);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k, 0);
                v31 = *(__int64 ***)(k + 8);
                v32 = **v31;
                v34 = (void *)ReferenceDwmApiPort(*v31, v33);
                DwmAsyncDesktopFree(v34, v32);
              }
              v35 = *(HSURF *)(ProcessWindowStation + 120);
              if ( v35 )
              {
                v36 = W32GetUserSessionState(v29, v28);
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 19144) + 8LL) + 24LL), v35, 1);
              }
              v37 = W32GetUserSessionState(v29, v28);
              GreDwmShutdown(*(Gre::Base **)(*(_QWORD *)(v37 + 56968) + 48LL));
              v40 = W32GetUserSessionState(v39, v38);
              bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v40 + 56968) + 48LL), 0LL, 0LL, 0);
              break;
            }
          }
        }
        v42 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19144);
        if ( (*(_DWORD *)(v42 + 48) & 0x400) != 0 )
        {
          v43 = (void *)ReferenceDwmApiPort(v42, v41);
          DwmAsyncWindowNotificationsEnabled(v43);
          if ( *(_QWORD *)(W32GetUserSessionState(v45, v44) + 18888) )
          {
            v47 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 18888);
            if ( *(_QWORD *)(v47 + 128) )
            {
              v48 = W32GetUserSessionState(v47, v46);
              v50 = (void *)ReferenceDwmApiPort(*(_QWORD *)(v48 + 18888), v49);
              DwmAsyncNotifyForegroundChange(v50);
            }
          }
          v51 = (void *)ReferenceDwmApiPort(v47, v46);
          DwmAsyncWindowNotificationsStateSynced(v51);
        }
        v52 = (void *)ReferenceDwmApiPort(v42, v41);
        if ( v52 )
        {
          v64 = 1073741896;
          v63 = 0LL;
          memset(v62, 0, sizeof(v62));
          LODWORD(v62[0]) = 2883588;
          WORD2(v62[0]) = 0x8000;
          LpcRequestPort(v52, v62);
          ObfDereferenceObject(v52);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 64) |= 0x200u;
      }
      else
      {
        v53 = W32GetUserSessionState(v20, v19);
        bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v53 + 56968) + 48LL), 0LL, 0LL, 0);
        if ( *(_QWORD *)(W32GetUserSessionState(v55, v54) + 19144) )
        {
          v57 = *(_QWORD *)(W32GetUserSessionState(v57, v56) + 19144);
          for ( m = *(_QWORD *)(*(_QWORD *)(v57 + 40) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m, 0);
        }
        v59 = *(HSURF *)(ProcessWindowStation + 120);
        if ( v59 )
        {
          v60 = W32GetUserSessionState(v57, v56);
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 19144) + 8LL) + 24LL), v59, 1);
        }
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
