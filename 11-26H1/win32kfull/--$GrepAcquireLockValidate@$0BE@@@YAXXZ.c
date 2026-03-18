/*
 * XREFs of ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0
 * Callers:
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x140076628 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400C6A7C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z @ 0x1400C6B4C (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z.c)
 *     prfntKillList @ 0x1400F60E8 (prfntKillList.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140155A74 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 *     GreSetPaletteEntries @ 0x14017E780 (GreSetPaletteEntries.c)
 *     NtGdiMakeObjectXferable @ 0x1401974A0 (NtGdiMakeObjectXferable.c)
 *     NtGdiMakeObjectUnXferable @ 0x1401975E0 (NtGdiMakeObjectUnXferable.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1401D7B20 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     NtGdiResizePalette @ 0x140256060 (NtGdiResizePalette.c)
 *     CleanupHLSURF @ 0x140259B80 (CleanupHLSURF.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<20>()
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax

  result = GreGetCurrentThreadCrossSessionCheck();
  v2 = result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFF00000uLL) != 0 && (v3 & 0x100000) == 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 20 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v5);
    }
    LOBYTE(i) = *((_BYTE *)v2 + 28);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v2 + 28) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v2 |= 0x100000uLL;
  }
  return result;
}
