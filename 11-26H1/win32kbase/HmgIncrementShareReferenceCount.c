/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x140019050
 * Callers:
 *     ?vInc_cRef@SURFACE@@QEAAXXZ @ 0x140012190 (-vInc_cRef@SURFACE@@QEAAXXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400347AC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x140034A80 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8 (--0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z.c)
 *     EngLockSurface @ 0x140166920 (EngLockSurface.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x140188C04 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x140195780 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401F1028 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1401F64D4 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall HmgIncrementShareReferenceCount(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edi
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned int v7; // edi
  _QWORD *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  unsigned int *v13; // rax
  unsigned int *v14; // rsi
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int *v25; // [rsp+20h] [rbp-48h] BYREF
  int v26; // [rsp+28h] [rbp-40h]
  __int16 v27; // [rsp+2Ch] [rbp-3Ch]
  __int64 v28; // [rsp+30h] [rbp-38h]
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a2;
  v4 = *a2;
  v5 = a1;
  v27 = 0;
  v6 = 0LL;
  v28 = a1;
  v7 = (unsigned __int16)v2 | (v4 >> 8) & 0xFF0000;
  v29 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (_QWORD *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v29);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v10 = *CurrentThreadWin32ThreadAndEnterCriticalRegion + 8LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 1;
  v26 = 1;
  v13 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, v7);
  v25 = v13;
  v14 = v13;
  if ( v13 )
  {
    _m_prefetchw(v13 + 2);
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 96LL))(
                       *(_QWORD *)(a1 + 8),
                       *v13)
                   + 14) & 0x20) != 0 )
    {
      if ( v10 )
      {
        v21 = *(_QWORD *)(v10 + 328);
        if ( v21 )
        {
          if ( *(_BYTE *)(v21 + 80) )
          {
            while ( v6 < *(_QWORD *)(v21 + 32) )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v21 + 40) + 4 * v6) == v7 )
                goto LABEL_7;
              ++v6;
            }
          }
        }
      }
      LOBYTE(v27) = 1;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
      v5 = v28;
      v12 = v26;
      v14 = v25;
    }
  }
  else
  {
    v12 = 0;
    KeLeaveCriticalRegion();
  }
LABEL_7:
  if ( v12 )
  {
    v15 = *((_BYTE *)v14 + 14);
    switch ( v15 )
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
    TrackObjectReferenceIncrement(a1, v17, v16);
LABEL_11:
    ++a2[2];
    v18 = *(__int64 **)(v5 + 8);
    v19 = *v18;
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v18 + 96))(v18, *v14);
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 48))(v18, v20);
    KeLeaveCriticalRegion();
    return;
  }
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), a2);
}
