/*
 * XREFs of ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x140085DF4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     ulIndexToRGB @ 0x140090D30 (ulIndexToRGB.c)
 *     bDeletePalette @ 0x1400C0AD0 (bDeletePalette.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NXZ @ 0x1401C5B00 (-bGarbageCollect@XEPALOBJ2@@QEAA_NXZ.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBA50 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _ERESOURCE **__fastcall SEMOBJ<13>::SEMOBJ<13>(struct _ERESOURCE **a1, struct _ERESOURCE **a2)
{
  struct _ERESOURCE *v3; // rcx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  __int64 v6; // rdx
  char v7; // cl
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // eax

  v3 = *a2 + 3;
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFFFFFE000uLL) != 0 && (v6 & 0x2000) == 0 )
    {
      v9 = 0LL;
      v10 = 37;
      do
      {
        v11 = v9;
        if ( !_bittest64(&v6, v9) )
          v11 = v10;
        ++v9;
        v10 = v11;
      }
      while ( v9 < 0x40 );
      if ( v11 > 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v7 = *((_BYTE *)v5 + 21);
    *((_BYTE *)v5 + 21) = v7 + 1;
    if ( !v7 )
      *(_QWORD *)v5 |= 0x2000uLL;
  }
  return a1;
}
