/*
 * XREFs of ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44
 * Callers:
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400254D4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreSetBitmapOwner @ 0x140026C00 (GreSetBitmapOwner.c)
 *     bDfbSurfacesMigrated @ 0x14002EBF0 (bDfbSurfacesMigrated.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1400FEE38 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall SURFREF::vLock(SURFREF *this, HSURF a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rax
  unsigned int *v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // r12
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  ThreadRestrictNewHandlesRegion *v20; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  unsigned int *v24; // [rsp+28h] [rbp-20h] BYREF
  int v25; // [rsp+30h] [rbp-18h]
  __int16 v26; // [rsp+34h] [rbp-14h]
  __int64 v27; // [rsp+38h] [rbp-10h]
  __int16 v29; // [rsp+9Ah] [rbp+52h]
  unsigned int v30; // [rsp+A0h] [rbp+58h]
  __int64 v31; // [rsp+A8h] [rbp+60h]

  v29 = WORD1(a2);
  v2 = (unsigned int)a2;
  v3 = 0LL;
  v4 = 0LL;
  v26 = 0;
  v31 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v5 = v31;
  v27 = v31;
  v23 = 0LL;
  v30 = (unsigned __int16)v2 | (v2 >> 8) & 0xFF0000;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v23);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v4 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v7 = v4 + 8;
  v8 = -v4;
  v9 = v7 & -(__int64)(v8 != 0);
  if ( v9 )
    v10 = *(_QWORD *)((v7 & -(__int64)(v8 != 0)) + 0x40);
  else
    v10 = 0LL;
  v11 = *(_QWORD *)(v31 + 8);
  v12 = 1;
  v25 = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, v30);
  v24 = (unsigned int *)v13;
  v14 = (unsigned int *)v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 8));
    v15 = *(_DWORD *)(v13 + 8) & 0xFFFFFFFE;
    if ( v15 == (v23 & 0xFFFFFFFC) || !v15 || v10 && v15 == (unsigned int)UMPDGetThreadClientPID(v9) )
    {
      v16 = v31;
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 8) + 96LL))(
                         *(_QWORD *)(v31 + 8),
                         *v14)
                     + 14) & 0x20) == 0 )
        goto LABEL_9;
      if ( v9 )
      {
        v20 = *(ThreadRestrictNewHandlesRegion **)(v9 + 328);
        if ( v20 )
        {
          if ( *((_BYTE *)v20 + 80) && ThreadRestrictNewHandlesRegion::InRegion(v20, v30) )
            goto LABEL_9;
        }
      }
      LOBYTE(v26) = 1;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
      v16 = v31;
    }
    v14 = v24;
    v12 = v25;
    v5 = v27;
LABEL_9:
    HIWORD(v2) = v29;
    goto LABEL_10;
  }
  v12 = 0;
  KeLeaveCriticalRegion();
  v16 = v31;
LABEL_10:
  if ( v12 )
  {
    if ( *((_BYTE *)v14 + 14) == 5 && *((_WORD *)v14 + 6) == HIWORD(v2) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 8) + 96LL))(*(_QWORD *)(v5 + 8), *v14);
      ++*(_DWORD *)(v3 + 8);
      TrackObjectReferenceIncrement(
        v16,
        3u,
        *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v3 + 680));
    }
    v17 = *(__int64 **)(v5 + 8);
    v18 = *v17;
    v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v17 + 96))(v17, *v14);
    (*(void (__fastcall **)(__int64 *, __int64))(v18 + 48))(v17, v19);
    KeLeaveCriticalRegion();
  }
  *((_QWORD *)this + 4) = v3;
}
