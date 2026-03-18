/*
 * XREFs of hdcOpenDCW @ 0x140097720
 * Callers:
 *     NtGdiOpenDCW @ 0x140097540 (NtGdiOpenDCW.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DrvGetHDEV @ 0x14004D9C0 (DrvGetHDEV.c)
 *     DrvDestroyMDEV @ 0x14006E2AC (DrvDestroyMDEV.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140088EF8 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x140093094 (IsUMPD_ldevUnloadImageSupported.c)
 *     UMPD_ldevUnloadImageWrap @ 0x1400930CC (UMPD_ldevUnloadImageWrap.c)
 *     UserGetMonitorDC @ 0x1400A2330 (UserGetMonitorDC.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserGetCurrentDesktopId @ 0x1401AC244 (UserGetCurrentDesktopId.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

HDC __fastcall hdcOpenDCW(
        unsigned __int16 *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        HDC a6,
        ULONG64 a7,
        int a8)
{
  int v8; // r15d
  struct _devicemodeW *v9; // r13
  unsigned __int64 v10; // r12
  HDC MonitorDC; // rdi
  struct _MDEV *v12; // rbx
  PDEV *HDEV; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r13d
  __int64 UserSessionState; // r15
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdx
  PDEV *v23; // rax
  bool v24; // zf
  unsigned int v25; // r15d
  void *v26; // r14
  __int64 (*v27)(void); // rax
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 (__fastcall *v31)(__int64, __int64); // rax
  struct _LDEV *v32; // rbx
  unsigned __int16 *v33; // rcx
  signed __int32 v34; // ett
  _QWORD *v35; // r8
  _QWORD *v36; // rdx
  void *v38; // [rsp+60h] [rbp-58h] BYREF
  PDEV *v39; // [rsp+68h] [rbp-50h] BYREF
  struct _UNICODE_STRING v40; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int16 *v41; // [rsp+C0h] [rbp+8h] BYREF
  struct _devicemodeW *v42; // [rsp+C8h] [rbp+10h]
  unsigned int v43; // [rsp+D0h] [rbp+18h]
  int v44; // [rsp+D8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v41 = SourceString;
  v8 = a4;
  v9 = a2;
  v10 = (unsigned __int64)a6;
  MonitorDC = 0LL;
  LODWORD(a6) = a6 != 0LL;
  if ( !SourceString || v10 )
  {
    v25 = v43;
    goto LABEL_40;
  }
  v12 = 0LL;
  HDEV = 0LL;
  v40 = 0LL;
  RtlInitUnicodeString(&v40, SourceString);
  v16 = a8;
  if ( !a8 && v42 )
  {
    UserSessionState = W32GetUserSessionState(v15, v14);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v18 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v18 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
    v19 = v18;
    *(_QWORD *)(UserSessionState + 24) = v18;
    if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v19 )
      {
LABEL_14:
        v8 = v44;
        goto LABEL_15;
      }
      *(_BYTE *)(v19 + 1708) = 1;
    }
    if ( v19 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v19) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 19688);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19744);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19728);
    }
    goto LABEL_14;
  }
  EnterSharedCrit(1u, 1u);
LABEL_15:
  v21 = **(_QWORD **)(W32GetSessionState(v20) + 88) + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v21);
  if ( v16 )
  {
    HDEV = DrvGetHDEV(&v40);
    v9 = v42;
  }
  else
  {
    v9 = v42;
    if ( !v42 )
    {
      v23 = DrvGetHDEV(&v40);
      HDEV = v23;
      v24 = v8 == 0;
      v25 = v43;
      if ( !v24 && !v43 )
        MonitorDC = (HDC)UserGetMonitorDC(v23);
      goto LABEL_28;
    }
    v12 = DrvCreateMDEV(&v40, v42, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v12 )
    {
      v38 = 0LL;
      if ( (unsigned int)UserGetCurrentDesktopId(&v38) )
        v12 = DrvCreateMDEV(&v40, v9, v38, 3u, 0LL, 0, 0, 0, 0LL);
    }
    if ( v12 )
      HDEV = (PDEV *)*((_QWORD *)v12 + 5);
  }
  v25 = v43;
LABEL_28:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = GreCreateDisplayDC((HDEV)HDEV, 0, 0)) != 0LL || !v12 )
    {
      v39 = HDEV;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v39);
    }
    else
    {
      DrvDestroyMDEV((__int64 *)v12);
    }
  }
  if ( v12 )
    GreDeleteFastMutex((char *)v12);
  if ( v21 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v21);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v22);
LABEL_40:
  if ( !MonitorDC )
  {
    v26 = a5;
    if ( a5 )
    {
      if ( (v10 & -(__int64)(v10 != 0)) != 0 )
      {
        if ( v10
          && ((v27 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1512LL)) == 0LL
            ? (v28 = -1073741637)
            : (v28 = v27()),
              v28 >= 0
           && (v29 = *(_QWORD *)((v10 & -(__int64)(v10 != 0)) + 0x18),
               v30 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24),
               (v31 = *(__int64 (__fastcall **)(__int64, __int64))(v30 + 1520)) != 0LL)) )
        {
          LOBYTE(v30) = 2;
          v32 = (struct _LDEV *)v31(v29, v30);
        }
        else
        {
          v32 = 0LL;
        }
        if ( v32 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&v41,
            v32,
            v9,
            v41,
            *(const unsigned __int16 **)((v10 & -(__int64)(v10 != 0)) + 0x20),
            *(unsigned __int16 **)((v10 & -(__int64)(v10 != 0)) + 8),
            v26,
            0LL,
            0LL,
            (int)a6,
            0,
            0);
          v33 = v41;
          if ( v41 )
          {
            _m_prefetchw(v41 + 20);
            do
              v34 = *((_DWORD *)v33 + 10);
            while ( v34 != _InterlockedCompareExchange((volatile signed __int32 *)v33 + 10, v34 | 0x80, v34) );
            MonitorDC = GreCreateDisplayDC((HDEV)v41, v25, 1);
            a6 = MonitorDC;
            if ( MonitorDC )
            {
              if ( v10 )
              {
                v35 = (_QWORD *)a7;
                if ( a7 )
                {
                  v36 = (_QWORD *)a7;
                  if ( a7 >= MmUserProbeAddress )
                    v36 = (_QWORD *)MmUserProbeAddress;
                  *v36 = *v36;
                  *v35 = *((_QWORD *)v41 + 223);
                }
              }
            }
            PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v41);
          }
          else if ( v10 && (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
          {
            UMPD_ldevUnloadImageWrap((__int64)v32);
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
