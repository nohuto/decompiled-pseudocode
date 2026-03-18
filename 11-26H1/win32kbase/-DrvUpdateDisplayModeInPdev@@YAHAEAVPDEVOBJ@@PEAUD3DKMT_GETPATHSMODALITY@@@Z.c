/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0
 * Callers:
 *     _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401F4764 (_DrvUpdateDisplayModeInMdev_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6748 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14018C9B0 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1401A03C4 (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401F4E24 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(struct PDEVOBJ *this, struct D3DKMT_GETPATHSMODALITY *a2)
{
  int v4; // r8d
  _DWORD *v5; // r8
  unsigned int i; // edx
  __int64 v7; // rcx
  struct _devicemodeW *v8; // rbx
  __int64 v9; // rcx
  unsigned int updated; // edi
  int v11; // r8d
  struct _ERESOURCE *v12; // rbx
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  struct _ERESOURCE *v15; // rbx
  struct _GRETHREAD *v16; // rax
  struct _ERESOURCE *v18; // rbx
  struct _GRETHREAD *v19; // rax
  struct _ERESOURCE *v20; // rbx
  struct _GRETHREAD *v21; // rax
  HSEMAPHORE v22; // [rsp+30h] [rbp+10h] BYREF
  HSEMAPHORE v23; // [rsp+40h] [rbp+20h] BYREF

  W32GetSessionState(this);
  SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v23, (__int64)this);
  SEMOBJ<8>::SEMOBJ<8>((struct _ERESOURCE **)&v22, (__int64)this);
  if ( !*(_QWORD *)(*(_QWORD *)this + 2584LL) )
  {
    WdLogSingleEntry1(4LL, 1LL);
    WdLogGlobalForLineNumber = 27562;
LABEL_31:
    v18 = (struct _ERESOURCE *)v22;
    if ( v22 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v22, v4);
      v19 = GreGetCurrentThreadCrossSessionCheck();
      if ( v19 )
      {
        v14 = (*((_BYTE *)v19 + 16))-- == 1;
        if ( v14 )
          *(_QWORD *)v19 &= ~0x100uLL;
      }
      GreReleaseSemaphoreSharedInternal(v18);
    }
    v20 = (struct _ERESOURCE *)v23;
    if ( v23 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v23, v4);
      v21 = GreGetCurrentThreadCrossSessionCheck();
      if ( v21 )
      {
        v14 = (*((_BYTE *)v21 + 12))-- == 1;
        if ( v14 )
          *(_QWORD *)v21 &= ~0x10uLL;
      }
      GreReleaseSemaphoreSharedInternal(v20);
    }
    return 0LL;
  }
  if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation(*(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)this + 2568LL)) )
  {
    WdLogSingleEntry1(4LL, 2LL);
    WdLogGlobalForLineNumber = 27573;
    goto LABEL_31;
  }
  v5 = *(_DWORD **)(*(_QWORD *)this + 2568LL);
  if ( (v5[40] & 0x6000008) != 0 )
  {
    WdLogSingleEntry1(4LL, 2LL);
    WdLogGlobalForLineNumber = 27585;
    goto LABEL_31;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *((unsigned __int16 *)a2 + 10) )
      goto LABEL_29;
    v7 = 296LL * i;
    if ( v5[62] == *(_DWORD *)((char *)a2 + v7 + 80)
      && v5[60] == *(_DWORD *)((char *)a2 + v7 + 72)
      && v5[61] == *(_DWORD *)((char *)a2 + v7 + 76)
      && !_bittest64((const signed __int64 *)((char *)a2 + v7 + 56), 0x24u) )
    {
      break;
    }
  }
  v8 = *(struct _devicemodeW **)((char *)a2 + v7 + 304);
  if ( !v8 )
  {
LABEL_29:
    WdLogSingleEntry1(4LL, 27606LL);
    WdLogGlobalForLineNumber = 27606;
    goto LABEL_31;
  }
  if ( !DevmodeAutoRotateCompatible(v8, *(const struct _devicemodeW **)(*(_QWORD *)this + 2584LL)) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 27616;
    goto LABEL_31;
  }
  updated = PDEVOBJ::UpdateDisplayMode(this, v8);
  if ( updated )
  {
    LOBYTE(v9) = 1;
    GreIncrementDisplaySettingsUniqueness(v9);
    WdLogSingleEntry1(4LL, 4LL);
    WdLogGlobalForLineNumber = 27629;
  }
  v12 = (struct _ERESOURCE *)v22;
  if ( v22 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v22, v11);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v14 = (*((_BYTE *)v13 + 16))-- == 1;
      if ( v14 )
        *(_QWORD *)v13 &= ~0x100uLL;
    }
    GreReleaseSemaphoreSharedInternal(v12);
  }
  v15 = (struct _ERESOURCE *)v23;
  if ( v23 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v23, v11);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v14 = (*((_BYTE *)v16 + 12))-- == 1;
      if ( v14 )
        *(_QWORD *)v16 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v15);
  }
  return updated;
}
