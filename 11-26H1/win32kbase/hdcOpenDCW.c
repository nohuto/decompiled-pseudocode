/*
 * XREFs of hdcOpenDCW @ 0x1400107D0
 * Callers:
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvGetHDEV @ 0x140027860 (DrvGetHDEV.c)
 *     UserGetMonitorDC @ 0x140035F78 (UserGetMonitorDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C72D0 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UMPD_ldevUnloadImageWrap @ 0x1400C79D8 (UMPD_ldevUnloadImageWrap.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1400C7A14 (IsUMPD_ldevUnloadImageSupported.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     DrvDestroyMDEV @ 0x1400C96A0 (DrvDestroyMDEV.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserGetCurrentDesktopId @ 0x1401CEA38 (UserGetCurrentDesktopId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

HDC __fastcall hdcOpenDCW(
        unsigned __int16 *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        __int64 a6,
        void *a7,
        int a8)
{
  struct _devicemodeW *v9; // r12
  HDC MonitorDC; // rdi
  __int64 v12; // r15
  struct Gre::Base::SESSION_GLOBALS *v13; // r14
  struct _MDEV *v14; // rsi
  HDEV HDEV; // r14
  int v16; // r12d
  __int64 UserSessionState; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  bool v22; // zf
  unsigned int v23; // r13d
  void *v24; // rsi
  __int64 (*v25)(void); // rax
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(__int64, __int64); // rax
  struct _LDEV *v30; // rbx
  unsigned __int16 *v31; // rcx
  signed __int32 v32; // ett
  struct Gre::Base::SESSION_GLOBALS *v34; // [rsp+60h] [rbp-68h]
  HDC v35[2]; // [rsp+68h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int16 *v37; // [rsp+D0h] [rbp+8h] BYREF
  struct _devicemodeW *v38; // [rsp+D8h] [rbp+10h]
  unsigned int v39; // [rsp+E0h] [rbp+18h]

  v39 = a3;
  v38 = a2;
  v37 = SourceString;
  v9 = a2;
  MonitorDC = 0LL;
  v12 = a6;
  LODWORD(a6) = a6 != 0;
  v13 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(SourceString) + 88);
  v34 = v13;
  v35[1] = (HDC)v13;
  if ( !SourceString || v12 )
  {
    v23 = v39;
    goto LABEL_34;
  }
  v14 = 0LL;
  HDEV = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v16 = a8;
  if ( a8 || !v38 )
  {
    EnterSharedCrit(1LL);
  }
  else
  {
    UserSessionState = W32GetUserSessionState();
    v18 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    *(_QWORD *)(UserSessionState + 24) = v18;
    if ( v18 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v18) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 19720);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19776);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19760);
    }
  }
  v20 = **(_QWORD **)(W32GetSessionState(v19) + 88) + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v20);
  if ( v16 )
  {
    HDEV = (HDEV)DrvGetHDEV(&DestinationString);
    v9 = v38;
LABEL_20:
    v23 = v39;
    goto LABEL_21;
  }
  v9 = v38;
  if ( v38 )
  {
    v14 = DrvCreateMDEV(&DestinationString, v38, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v14 )
    {
      v35[0] = 0LL;
      if ( (unsigned int)UserGetCurrentDesktopId(v35) )
        v14 = DrvCreateMDEV(&DestinationString, v9, v35[0], 3u, 0LL, 0, 0, 0, 0LL);
    }
    if ( v14 )
      HDEV = (HDEV)*((_QWORD *)v14 + 5);
    goto LABEL_20;
  }
  v21 = DrvGetHDEV(&DestinationString);
  HDEV = (HDEV)v21;
  v22 = a4 == 0;
  v23 = v39;
  if ( !v22 && !v39 )
    MonitorDC = (HDC)UserGetMonitorDC(v21);
LABEL_21:
  if ( !HDEV )
  {
LABEL_27:
    v13 = v34;
    goto LABEL_28;
  }
  if ( !MonitorDC )
  {
    MonitorDC = (HDC)GreCreateDisplayDC(HDEV, 0);
    if ( !MonitorDC )
    {
      if ( v14 )
      {
        DrvDestroyMDEV(v14);
        goto LABEL_27;
      }
    }
  }
  v35[0] = (HDC)HDEV;
  v13 = v34;
  PDEVOBJ::vUnreferencePdev((PDEVOBJ *)v35, v34);
LABEL_28:
  if ( v14 )
    GreDeleteFastMutex(v14);
  if ( v20 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v20);
  UserSessionSwitchLeaveCritWithNonPaged();
LABEL_34:
  if ( !MonitorDC )
  {
    v24 = a5;
    if ( a5 )
    {
      if ( v12 )
      {
        v25 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1472LL);
        if ( v25 )
          v26 = v25();
        else
          v26 = -1073741637;
        if ( v26 >= 0
          && (v27 = *(_QWORD *)(v12 + 24),
              v28 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24),
              (v29 = *(__int64 (__fastcall **)(__int64, __int64))(v28 + 1480)) != 0LL) )
        {
          LOBYTE(v28) = 2;
          v30 = (struct _LDEV *)v29(v27, v28);
        }
        else
        {
          v30 = 0LL;
        }
        if ( v30 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&v37,
            v30,
            v9,
            v37,
            *(const unsigned __int16 **)(v12 + 32),
            *(const unsigned __int16 **)(v12 + 8),
            v24,
            0LL,
            0LL,
            a6,
            0,
            0);
          v31 = v37;
          if ( v37 )
          {
            _m_prefetchw(v37 + 20);
            do
              v32 = *((_DWORD *)v31 + 10);
            while ( v32 != _InterlockedCompareExchange((volatile signed __int32 *)v31 + 10, v32 | 0x80, v32) );
            MonitorDC = (HDC)GreCreateDisplayDC((HDEV)v37, v23);
            v35[0] = MonitorDC;
            if ( MonitorDC && a7 )
            {
              a6 = *((_QWORD *)v37 + 223);
              GreProbeAndWriteToUntrustedVa(a7, 8uLL, &a6, 8uLL, 1uLL);
            }
            PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v37, v13);
          }
          else if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
          {
            UMPD_ldevUnloadImageWrap(v30);
          }
        }
        else
        {
          EngSetLastError(0x77u);
        }
      }
    }
  }
  return MonitorDC;
}
