/*
 * XREFs of ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830
 * Callers:
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreIsRendering @ 0x1400196C0 (GreIsRendering.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngModifySurface @ 0x140027250 (EngModifySurface.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x14003A7C0 (GreDCSelectBrush.c)
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreGetBounds @ 0x1400FCD60 (GreGetBounds.c)
 *     GreSetDCOrg @ 0x1400FD7E0 (GreSetDCOrg.c)
 *     GreReferenceObjectIgnoreOwner @ 0x1401489F0 (GreReferenceObjectIgnoreOwner.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x140153340 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     GreReferenceObjectCheckOwner @ 0x140154080 (GreReferenceObjectCheckOwner.c)
 *     EngLockSurface @ 0x140166920 (EngLockSurface.c)
 *     ?vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x14016C468 (-vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x14017CDA0 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     EngAssociateSurface @ 0x1401F0E20 (EngAssociateSurface.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1ED4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1F78 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2174 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F22AC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F237C (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1402F4C30 (bInitICM.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgShareLock(__int64 a1, unsigned int a2, char a3, int a4)
{
  __int64 v5; // r14
  unsigned int v6; // r15d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // r13d
  __int64 v14; // rax
  unsigned __int8 *v15; // rsi
  unsigned int v16; // ebx
  __int64 v17; // rbx
  char v18; // di
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebp
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v29; // rdx
  unsigned __int64 i; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v34; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v35; // [rsp+38h] [rbp-50h] BYREF
  int v36; // [rsp+40h] [rbp-48h]
  __int16 v37; // [rsp+44h] [rbp-44h]
  __int64 v38; // [rsp+48h] [rbp-40h]
  __int64 v40; // [rsp+98h] [rbp+10h] BYREF
  int v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v5 = 0LL;
  v38 = a1;
  v6 = (unsigned __int16)a2 | (a2 >> 8) & 0xFF0000;
  v37 = 0;
  v40 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v40);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && (v10 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
  {
    v11 = v10 + 8;
    if ( v10 != -8 )
    {
      v34 = *(_QWORD *)(v10 + 72);
      goto LABEL_6;
    }
  }
  else
  {
    v11 = 0LL;
  }
  v34 = 0LL;
LABEL_6:
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 1;
  v36 = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, v6);
  v35 = (unsigned __int8 *)v14;
  v15 = (unsigned __int8 *)v14;
  if ( v14 )
  {
    _m_prefetchw((const void *)(v14 + 8));
    if ( (v41 & 1) != 0
      || (v16 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE, v16 == (v40 & 0xFFFFFFFC))
      || !v16
      || v34 && v16 == (unsigned int)UMPDGetThreadClientPID(v11) )
    {
      v17 = a1;
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 96LL))(
                         *(_QWORD *)(a1 + 8),
                         *(unsigned int *)v15)
                     + 14) & 0x20) == 0 )
      {
LABEL_10:
        v18 = v41;
        goto LABEL_11;
      }
      if ( v11 )
      {
        v29 = *(_QWORD *)(v11 + 328);
        if ( v29 )
        {
          if ( *(_BYTE *)(v29 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v29 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v29 + 40) + 4 * i) == v6 )
                goto LABEL_10;
            }
          }
        }
      }
      LOBYTE(v37) = 1;
      v18 = v41;
      if ( (v41 & 8) != 0 )
        GrepCaptureLiveMemoryDump(400LL, 56LL, 6LL, 0LL, 0LL, 0);
    }
    else
    {
      v18 = v41;
      if ( (v41 & 8) != 0 )
        GrepCaptureLiveMemoryDump(400LL, 56LL, 1LL, 0LL, 0LL, 0);
      v17 = a1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v35);
    v13 = v36;
    v15 = v35;
  }
  else
  {
    v18 = v41;
    if ( (v41 & 8) != 0 )
      GrepCaptureLiveMemoryDump(400LL, 56LL, 0LL, 0LL, 0LL, 0);
    v13 = 0;
    KeLeaveCriticalRegion();
    v17 = a1;
  }
LABEL_11:
  if ( v13 )
  {
    if ( v15[14] == a3 )
    {
      v19 = v15[13];
      v20 = v15[12];
      v21 = HIWORD(a2);
      if ( (v18 & 0x10) != 0 )
        v22 = ((v21 ^ (v20 | (v19 << 8))) & 0xFFFFFF7F) == 0;
      else
        v22 = ((unsigned __int16)v20 | (unsigned __int16)((_WORD)v19 << 8)) == (_WORD)v21;
      v23 = v38;
      if ( v22 )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v38 + 8) + 96LL))(
                *(_QWORD *)(v38 + 8),
                *(unsigned int *)v15);
        v5 = v24;
        ++*(_DWORD *)(v24 + 8);
        switch ( a3 )
        {
          case 5:
            TrackObjectReferenceIncrement(v17, 3LL, *(_QWORD *)(v24 + 680));
            break;
          case 4:
            TrackObjectReferenceIncrement(v17, 2LL, *(_QWORD *)(v24 + 112));
            break;
          case 16:
            TrackObjectReferenceIncrement(v17, 0LL, *(_QWORD *)(v24 + 136));
            break;
        }
      }
    }
    else
    {
      v23 = v38;
    }
    v25 = *(__int64 **)(v23 + 8);
    v26 = *v25;
    v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v25 + 96))(v25, *(unsigned int *)v15);
    (*(void (__fastcall **)(__int64 *, __int64))(v26 + 48))(v25, v27);
    KeLeaveCriticalRegion();
  }
  return v5;
}
