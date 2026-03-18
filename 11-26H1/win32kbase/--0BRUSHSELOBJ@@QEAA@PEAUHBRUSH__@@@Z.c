/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushGlobal @ 0x14003470C (GreSetBrushGlobal.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1401ECF40 (GreGetBrushColor.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x140014660 (IsThreadCrossSessionAttached.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x140033F3C (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x140033FE8 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  __int64 v3; // r12
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 SessionState; // rax
  int v7; // esi
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rax
  unsigned int *v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // r12
  __int64 *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  ThreadRestrictNewHandlesRegion *v24; // rcx
  unsigned int *v25; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+28h] [rbp-20h]
  __int16 v27; // [rsp+2Ch] [rbp-1Ch]
  __int64 v28; // [rsp+30h] [rbp-18h]
  unsigned int v29; // [rsp+90h] [rbp+48h]
  __int16 v30; // [rsp+9Ah] [rbp+52h]
  __int64 v31; // [rsp+A0h] [rbp+58h]
  __int64 v32; // [rsp+A8h] [rbp+60h] BYREF

  v30 = WORD1(a2);
  v3 = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = (unsigned int)a2;
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 16);
  SessionState = W32GetSessionState(v5);
  v27 = 0;
  v7 = (v4 >> 8) & 0xFF0000;
  v32 = 0LL;
  v8 = 0LL;
  v31 = *(_QWORD *)(SessionState + 88);
  v9 = v31;
  v28 = v31;
  LODWORD(SessionState) = (unsigned __int16)v4;
  v10 = 0LL;
  v11 = SessionState | v7;
  v29 = v11;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v32);
  if ( !IsThreadCrossSessionAttached() && CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v10 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  v13 = (v10 + 8) & -(__int64)(v10 != 0);
  if ( v13 )
    v3 = *(_QWORD *)(v13 + 64);
  v14 = *(_QWORD *)(v31 + 8);
  v15 = 1;
  v26 = 1;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, v11);
  v25 = (unsigned int *)v16;
  v17 = (unsigned int *)v16;
  if ( v16 )
  {
    _m_prefetchw((const void *)(v16 + 8));
    v18 = *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
    if ( v18 == (v32 & 0xFFFFFFFC) || !v18 || v3 && v18 == (unsigned int)UMPDGetThreadClientPID(v13) )
    {
      v19 = v31;
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 8) + 96LL))(
                         *(_QWORD *)(v31 + 8),
                         *v17)
                     + 14) & 0x20) == 0 )
        goto LABEL_9;
      if ( v13 )
      {
        v24 = *(ThreadRestrictNewHandlesRegion **)(v13 + 328);
        if ( v24 )
        {
          if ( *((_BYTE *)v24 + 80) && ThreadRestrictNewHandlesRegion::InRegion(v24, v29) )
            goto LABEL_9;
        }
      }
      LOBYTE(v27) = 1;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
      v19 = v31;
    }
    v17 = v25;
    v15 = v26;
LABEL_9:
    v9 = v28;
    goto LABEL_10;
  }
  v15 = 0;
  KeLeaveCriticalRegion();
  v19 = v31;
LABEL_10:
  if ( v15 )
  {
    if ( *((_BYTE *)v17 + 14) == 16 && *((_WORD *)v17 + 6) == v30 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 8) + 96LL))(*(_QWORD *)(v9 + 8), *v17);
      ++*(_DWORD *)(v8 + 8);
      TrackObjectReferenceIncrement(
        v19,
        0,
        *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 136));
    }
    v20 = *(__int64 **)(v9 + 8);
    v21 = *v20;
    v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v20 + 96))(v20, *v17);
    (*(void (__fastcall **)(__int64 *, __int64))(v21 + 48))(v20, v22);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = v8;
  if ( v8 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCount(v19, *(unsigned int **)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
