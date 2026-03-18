/*
 * XREFs of ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC
 * Callers:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x140157684 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     GreSetPaletteEntries @ 0x14017E780 (GreSetPaletteEntries.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1401895FC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 *     GreRealizeDefaultPalette @ 0x14021B5C0 (GreRealizeDefaultPalette.c)
 *     NtGdiResizePalette @ 0x140256060 (NtGdiResizePalette.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     NtGdiUnrealizeObject @ 0x14032BF10 (NtGdiUnrealizeObject.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140331348 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140334D0C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140347AD0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<13>::SEMOBJ<13>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  __int64 v6; // r8
  char v7; // cl
  int v9; // edx
  unsigned __int64 i; // rcx
  int v11; // eax

  v3 = (HSEMAPHORE)(*a2 + 312LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFDFFFFFE000uLL) != 0 && (*(_QWORD *)v4 & 0x2000LL) == 0 )
    {
      v9 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v11 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v6) == 0 )
          v11 = v9;
        v9 = v11;
      }
      if ( v11 > 13 && v11 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v11);
    }
    v7 = *((_BYTE *)v5 + 21);
    *((_BYTE *)v5 + 21) = v7 + 1;
    if ( !v7 )
      *(_QWORD *)v5 |= 0x2000uLL;
  }
  return a1;
}
