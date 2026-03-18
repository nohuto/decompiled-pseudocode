/*
 * XREFs of HmgDecrementShareReferenceCount @ 0x140019C10
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140011BA0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400121C4 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreIsRendering @ 0x1400196C0 (GreIsRendering.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     GreSetBitmapOwner @ 0x140026C00 (GreSetBitmapOwner.c)
 *     EngModifySurface @ 0x140027250 (EngModifySurface.c)
 *     bDfbSurfacesMigrated @ 0x14002EBF0 (bDfbSurfacesMigrated.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400346C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreSetBrushGlobal @ 0x14003470C (GreSetBrushGlobal.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400347AC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x140034A80 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     hCreateSolidBrushInternal @ 0x140034D00 (hCreateSolidBrushInternal.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x140035A40 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 *     EngDeletePalette @ 0x1400C2C10 (EngDeletePalette.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1400C497C (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     GreGetBounds @ 0x1400FCD60 (GreGetBounds.c)
 *     GreSetDCOrg @ 0x1400FD7E0 (GreSetDCOrg.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1400FEE38 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     EngUnlockSurface @ 0x140121ED0 (EngUnlockSurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x140153340 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     EngLockSurface @ 0x140166920 (EngLockSurface.c)
 *     ?vAltUnlock@DCOBJA@@QEAAXXZ @ 0x14016D160 (-vAltUnlock@DCOBJA@@QEAAXXZ.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x14017CDA0 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ?vUnreference@SURFREF@@QEAAXXZ @ 0x14018C740 (-vUnreference@SURFREF@@QEAAXXZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14019BAFC (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1401BFD9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1401C0AC8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1401ECC90 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXP.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VSURFACE@@@@QEAAXXZ @ 0x1401F1224 (-CleanupRoutine@-$HmgShareLockResult@VSURFACE@@@@QEAAXXZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1401F64D4 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402F4AF8 (bInitBrush.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCount(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edi
  __int64 v5; // r13
  unsigned int v6; // edi
  _QWORD *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  char v14; // al
  unsigned int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v22; // rdx
  unsigned __int64 i; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int *v27; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+28h] [rbp-40h]
  __int16 v29; // [rsp+2Ch] [rbp-3Ch]
  __int64 v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a2;
  v4 = *a2;
  v30 = a1;
  v5 = a1;
  v29 = 0;
  v6 = (unsigned __int16)v2 | (v4 >> 8) & 0xFF0000;
  v31 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (_QWORD *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v31);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v9 = *CurrentThreadWin32ThreadAndEnterCriticalRegion + 8LL;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 1;
  v28 = 1;
  v12 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, v6);
  v27 = v12;
  v13 = v12;
  if ( v12 )
  {
    _m_prefetchw(v12 + 2);
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 96LL))(
                       *(_QWORD *)(a1 + 8),
                       *v12)
                   + 14) & 0x20) != 0 )
    {
      if ( v9 )
      {
        v22 = *(_QWORD *)(v9 + 328);
        if ( v22 )
        {
          if ( *(_BYTE *)(v22 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v22 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v22 + 40) + 4 * i) == v6 )
                goto LABEL_7;
            }
          }
        }
      }
      LOBYTE(v29) = 1;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
      v5 = v30;
      v11 = v28;
      v13 = v27;
    }
  }
  else
  {
    v11 = 0;
    KeLeaveCriticalRegion();
  }
LABEL_7:
  if ( v11 )
  {
    v14 = *((_BYTE *)v13 + 14);
    v15 = a2[2];
    switch ( v14 )
    {
      case 5:
        v16 = *((_QWORD *)a2 + 85);
        v17 = 3LL;
        break;
      case 4:
        v16 = *((_QWORD *)a2 + 14);
        v17 = 2LL;
        break;
      case 16:
        v16 = *((_QWORD *)a2 + 17);
        v17 = 0LL;
        break;
      default:
        goto LABEL_11;
    }
    TrackObjectReferenceDecrement(a1, v17, v16);
LABEL_11:
    --a2[2];
    v18 = *(__int64 **)(v5 + 8);
    v19 = *v18;
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v18 + 96))(v18, *v13);
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 48))(v18, v20);
    KeLeaveCriticalRegion();
    return v15;
  }
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), a2);
  return 0LL;
}
