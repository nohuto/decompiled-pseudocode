/*
 * XREFs of ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x140007D00 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     NtGdiMakeObjectXferable @ 0x1400D6FC0 (NtGdiMakeObjectXferable.c)
 *     prfntKillList @ 0x1400D7300 (prfntKillList.c)
 *     ?vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z @ 0x1400D7804 (-vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400D78E8 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140212898 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 *     GreSetPaletteEntries @ 0x14021B190 (GreSetPaletteEntries.c)
 *     CleanupHLSURF @ 0x140220E70 (CleanupHLSURF.c)
 *     NtGdiMakeObjectUnXferable @ 0x1402633B0 (NtGdiMakeObjectUnXferable.c)
 *     GreRealizePalette @ 0x140268A30 (GreRealizePalette.c)
 *     GreCancelDC @ 0x140332B90 (GreCancelDC.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

Gre::Base *__fastcall SEMOBJ<20>::SEMOBJ<20>(Gre::Base *a1)
{
  HSEMAPHORE v2; // rcx
  struct _GRETHREAD *v3; // rax
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // rcx
  char v6; // cl
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax

  v2 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 1512LL);
  *(_QWORD *)a1 = v2;
  GreAcquireSemaphoreInternal(v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFFFFFF00000uLL) != 0 && (v5 & 0x100000) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v5, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, (unsigned int)v10);
    }
    v6 = *((_BYTE *)v4 + 28);
    *((_BYTE *)v4 + 28) = v6 + 1;
    if ( !v6 )
      *(_QWORD *)v4 |= 0x100000uLL;
  }
  return a1;
}
