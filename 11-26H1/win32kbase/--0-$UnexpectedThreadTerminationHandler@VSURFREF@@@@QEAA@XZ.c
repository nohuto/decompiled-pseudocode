/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400254D4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngModifySurface @ 0x140027250 (EngModifySurface.c)
 *     bDfbSurfacesMigrated @ 0x14002EBF0 (bDfbSurfacesMigrated.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x140153340 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     EngLockSurface @ 0x140166920 (EngLockSurface.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x14017CDA0 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x140195780 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngAssociateSurface @ 0x1401F0E20 (EngAssociateSurface.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F22AC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( a1 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread )
      v2 = *CurrentThreadWin32Thread;
    *(_QWORD *)(a1 + 16) = a1;
    *(_QWORD *)(a1 + 24) = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
    if ( ((v2 + 8) & -(__int64)(v2 != 0)) != 0 )
    {
      v5 = ((v2 + 8) & -(__int64)(v2 != 0)) + 88;
      v6 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
      if ( *(_QWORD *)(v6 + 8) != v5 )
        __fastfail(3u);
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(v6 + 8) = a1;
      *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58) = a1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a1;
      *(_QWORD *)a1 = a1;
    }
  }
  return a1;
}
