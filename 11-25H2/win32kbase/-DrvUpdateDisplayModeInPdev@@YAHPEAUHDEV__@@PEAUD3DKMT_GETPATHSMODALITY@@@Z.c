/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14015DE94
 * Callers:
 *     _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401C9B1C (_DrvUpdateDisplayModeInMdev_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086C28 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x14015E588 (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401CB604 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HDEV a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  struct _ERESOURCE *v4; // rbx
  struct _GRETHREAD *v5; // rax
  struct _GRETHREAD *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax
  char v11; // cl
  __int64 v12; // rdi
  _DWORD *v13; // r8
  unsigned int i; // edx
  __int64 v15; // rcx
  struct _devicemodeW *v16; // rbp
  __int64 v17; // rcx
  unsigned int updated; // esi
  struct _GRETHREAD *v19; // rax
  bool v20; // zf
  struct _GRETHREAD *v22; // rax
  HDEV v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = a1;
  W32GetSessionState(a1);
  v4 = (struct _ERESOURCE *)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v4);
  v5 = GreGetCurrentThreadCrossSessionCheck();
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)v5;
    if ( (*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v7 & 0x10) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v7, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v11 = *((_BYTE *)v6 + 12);
    *((_BYTE *)v6 + 12) = v11 + 1;
    if ( !v11 )
      *(_QWORD *)v6 |= 0x10uLL;
  }
  v12 = *((_QWORD *)a1 + 6);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v12);
  if ( !*((_QWORD *)a1 + 323) )
  {
    WdLogSingleEntry1(4LL, 1LL);
    WdLogGlobalForLineNumber = 28918;
    goto LABEL_39;
  }
  if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation(*((struct tagGRAPHICS_DEVICE **)a1 + 321)) )
  {
    WdLogSingleEntry1(4LL, 2LL);
    WdLogGlobalForLineNumber = 28928;
LABEL_39:
    if ( v12 )
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v12);
    if ( v4 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v4);
      v22 = GreGetCurrentThreadCrossSessionCheck();
      if ( v22 )
      {
        v20 = (*((_BYTE *)v22 + 12))-- == 1;
        if ( v20 )
          *(_QWORD *)v22 &= ~0x10uLL;
      }
      GreReleaseSemaphoreSharedInternal(v4);
    }
    return 0LL;
  }
  v13 = (_DWORD *)*((_QWORD *)a1 + 321);
  if ( (v13[40] & 0x6000008) != 0 )
  {
    WdLogSingleEntry1(4LL, 2LL);
    WdLogGlobalForLineNumber = 28940;
    goto LABEL_39;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *((unsigned __int16 *)a2 + 10) )
      goto LABEL_36;
    v15 = 296LL * i;
    if ( v13[62] == *(_DWORD *)((char *)a2 + v15 + 80)
      && v13[60] == *(_DWORD *)((char *)a2 + v15 + 72)
      && v13[61] == *(_DWORD *)((char *)a2 + v15 + 76)
      && !_bittest64((const signed __int64 *)((char *)a2 + v15 + 56), 0x24u) )
    {
      break;
    }
  }
  v16 = *(struct _devicemodeW **)((char *)a2 + v15 + 304);
  if ( !v16 )
  {
LABEL_36:
    WdLogSingleEntry1(4LL, 28961LL);
    WdLogGlobalForLineNumber = 28961;
    goto LABEL_39;
  }
  if ( !DevmodeAutoRotateCompatible(v16, *((const struct _devicemodeW **)a1 + 323)) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 28971;
    goto LABEL_39;
  }
  updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v23, v16);
  if ( updated )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v17) + 88) + 1768LL)
                                                    + 1573008LL));
    DisplayScenarioJournalDisplayUniquenessIncremented();
    WdLogSingleEntry1(4LL, 4LL);
    WdLogGlobalForLineNumber = 28986;
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v12);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v4);
    v19 = GreGetCurrentThreadCrossSessionCheck();
    if ( v19 )
    {
      v20 = (*((_BYTE *)v19 + 12))-- == 1;
      if ( v20 )
        *(_QWORD *)v19 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v4);
  }
  return updated;
}
