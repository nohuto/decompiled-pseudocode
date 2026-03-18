/*
 * XREFs of GreDwmStartup @ 0x1401D500C
 * Callers:
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x140095B18 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C14 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095D2C (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1401CC3AC (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?bDwmChildWindowDpiIsolationEnabled@@YAHXZ @ 0x1401D533C (-bDwmChildWindowDpiIsolationEnabled@@YAHXZ.c)
 *     ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x1401D547C (-bDwmDesktopOverlaysEnabled@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x1401D559C (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ.c)
 *     ?bDwmOverlayTestMode@@YAHXZ @ 0x1401D56DC (-bDwmOverlayTestMode@@YAHXZ.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1401D5B0C (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     ?bDwmResizeOptimizationOverride@@YAHPEAK00@Z @ 0x1401D5F34 (-bDwmResizeOptimizationOverride@@YAHPEAK00@Z.c)
 *     ?bDwmDeviceBitmapsEnabled@@YAHXZ @ 0x1401D6144 (-bDwmDeviceBitmapsEnabled@@YAHXZ.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1401D8698 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     GreSfmDwmStartup @ 0x14021C78C (GreSfmDwmStartup.c)
 */

__int64 __fastcall GreDwmStartup(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx
  BOOL v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rdx
  int v8; // ecx
  BOOL v9; // r14d
  _DWORD *v10; // rdi
  void *v11; // rcx
  __int64 RectRgn; // [rsp+30h] [rbp-69h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v15[16]; // [rsp+70h] [rbp-29h] BYREF
  HSEMAPHORE v16; // [rsp+80h] [rbp-19h] BYREF
  __int64 v17; // [rsp+88h] [rbp-11h] BYREF
  HSEMAPHORE v18; // [rsp+90h] [rbp-9h]
  HSEMAPHORE v19; // [rsp+98h] [rbp-1h] BYREF
  HSEMAPHORE v20; // [rsp+A0h] [rbp+7h] BYREF
  HSEMAPHORE v21; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned int v22; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v23; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v24; // [rsp+110h] [rbp+77h] BYREF
  Gre::Base *v25; // [rsp+118h] [rbp+7Fh] BYREF

  v25 = a1;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v2 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v15, v2);
  SEMOBJ<2>::SEMOBJ<2>(&v16, v2);
  SEMOBJ<3>::SEMOBJ<3>(&v17, v2);
  v18 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v18);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v19, v2);
  SEMOBJ<7>::SEMOBJ<7>(&v20, v2);
  SEMOBJ<8>::SEMOBJ<8>(&v21, (__int64)&v25);
  v3 = Win32AllocPoolZInit(344LL, 1935885383LL);
  v4 = v3;
  if ( !v3 )
  {
    EngSetLastError(8u);
LABEL_22:
    v6 = 0;
    goto LABEL_23;
  }
  *(_QWORD *)(v3 + 176) = a1;
  v5 = (int)GrepDwmCreateComposedEvent((struct DwmState *)v3) >= 0;
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(v4 + 184) = RectRgn;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)v4,
    (PRTL_GENERIC_COMPARE_ROUTINE)HwndLookupCompareTableData,
    HwndLookupAllocTableData,
    HwndLookupFreeTableData,
    0LL);
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v4 + 72));
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *(_QWORD *)(v4 + 80) = v4 + 80;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_QWORD *)(v4 + 112) = v4 + 104;
  *(_QWORD *)(v4 + 104) = v4 + 104;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)(v4 + 128) = v4 + 120;
  *(_QWORD *)(v4 + 120) = v4 + 120;
  *(_QWORD *)(v4 + 336) = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = 1;
  v9 = ZwCreateEvent((PHANDLE)(v4 + 336), 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
  if ( v5 && RectRgn && v9 )
  {
    *((_QWORD *)v2 + 17) = v4;
    v4 = 0LL;
    SpRenderHint(&v25, 0x10000LL, 0LL, 0LL);
    vAccNotify(
      (struct _SURFOBJ *)((*((_QWORD *)a1 + 318) + 24LL) & -(__int64)(*((_QWORD *)a1 + 318) != 0LL)),
      6u,
      (void *)1);
  }
  v10 = *(_DWORD **)(W32GetSessionState(v8, v7) + 96);
  v10[22] = bDwmDeviceBitmapsEnabled();
  v10[25] = bDwmDeviceBitmapsEnabledForMultiAdapter();
  *((_DWORD *)v2 + 32) = bDwmOverlayTestMode();
  *((_DWORD *)v2 + 33) = bDwmDesktopOverlaysEnabled();
  if ( (unsigned int)bDwmResizeOptimizationOverride(&v22, &v23, &v24) )
  {
    v10[27] = v22;
    v10[28] = v23;
    v10[29] = v24;
    v10[26] = 1;
  }
  v10[30] = bDwmChildWindowDpiIsolationEnabled();
  if ( v4 )
  {
    if ( RectRgn )
      GreDeleteObject(*(_QWORD *)(v4 + 184));
    if ( v5 )
    {
      v11 = *(void **)(v4 + 328);
      if ( v11 )
      {
        ObCloseHandle(v11, 0);
        *(_QWORD *)(v4 + 328) = 0LL;
      }
    }
    if ( v9 )
      ZwClose(*(HANDLE *)(v4 + 336));
    Win32FreePool((void *)v4);
  }
  if ( !v5 || !RectRgn || !v9 )
    goto LABEL_22;
  GreSfmDwmStartup();
LABEL_23:
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v15);
  return v6;
}
