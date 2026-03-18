/*
 * XREFs of ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450
 * Callers:
 *     HmgAllocateDcAttr @ 0x14000D8F8 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x1400C6218 (-vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     GreDecQuotaCount @ 0x1400CF5E0 (GreDecQuotaCount.c)
 *     GreIncQuotaCount @ 0x1400CF610 (GreIncQuotaCount.c)
 *     HmgNextGarbageCollectible @ 0x140155D88 (HmgNextGarbageCollectible.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1401994C4 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     GreGetBrushColor @ 0x1401ECF40 (GreGetBrushColor.c)
 *     EngDeleteSafeSemaphore @ 0x1401F36D0 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1401F38A0 (EngInitializeSafeSemaphore.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1401FB31C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<20>::SEMOBJ<20>(HSEMAPHORE *a1)
{
  HSEMAPHORE v2; // rcx
  struct _GRETHREAD *v3; // rax
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // rdx
  char v6; // cl
  HSEMAPHORE *result; // rax
  unsigned __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax

  v2 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 1512LL);
  *a1 = v2;
  GreAcquireSemaphoreInternal(v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v4 = v3;
  if ( !v3 )
    return a1;
  v5 = *(_QWORD *)v3;
  if ( (*(_QWORD *)v3 & 0xFFFFFFDFFFF00000uLL) != 0 && (v5 & 0x100000) == 0 )
  {
    v8 = 0LL;
    v9 = 38;
    do
    {
      v10 = v8;
      if ( ((1LL << v8) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
        v10 = v9;
      ++v8;
      v9 = v10;
    }
    while ( v8 < 0x40 );
    if ( v10 > 20 && v10 != 38 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v5, (unsigned int)v10);
  }
  v6 = *((_BYTE *)v4 + 28);
  *((_BYTE *)v4 + 28) = v6 + 1;
  result = a1;
  if ( !v6 )
    *(_QWORD *)v4 |= 0x100000uLL;
  return result;
}
