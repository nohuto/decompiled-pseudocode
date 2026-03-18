/*
 * XREFs of ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038
 * Callers:
 *     GreRestoreDC @ 0x140037280 (GreRestoreDC.c)
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     GreSelectPalette @ 0x1400C2C90 (GreSelectPalette.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400C6780 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400FE730 (NtGdiGetDeviceCapsAll.c)
 *     GreSetLayout @ 0x140140EE0 (GreSetLayout.c)
 *     GreCleanDC @ 0x140148000 (GreCleanDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x140168CE0 (GreCleanDCAndSetOwnerEx.c)
 *     GreSelectBrush @ 0x14016EC90 (GreSelectBrush.c)
 *     NtGdiCreateMetafileDC @ 0x14016F900 (NtGdiCreateMetafileDC.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     GreSelectPen @ 0x1401926B0 (GreSelectPen.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401F1BC8 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1400384A8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x140040510 (-SaveAttributesHelper@DCOBJ@@AEAAHXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400FE870 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

APIDCOBJ *__fastcall APIDCOBJ::APIDCOBJ(APIDCOBJ *this, HDC a2)
{
  __int64 v2; // r13
  unsigned int v3; // r15d
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdi
  unsigned int v15; // r12d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r15
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  int v20; // edi
  __int64 v21; // rax
  unsigned int *v22; // r15
  unsigned int v23; // r12d
  __int64 v24; // rdx
  DC *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  ThreadRestrictNewHandlesRegion *v42; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int *v45; // [rsp+20h] [rbp-28h] BYREF
  int v46; // [rsp+28h] [rbp-20h]
  __int16 v47; // [rsp+2Ch] [rbp-1Ch]
  __int64 v48; // [rsp+30h] [rbp-18h]
  unsigned int v49; // [rsp+90h] [rbp+48h]
  __int16 v50; // [rsp+9Ah] [rbp+52h]
  __int64 v51; // [rsp+A0h] [rbp+58h]
  __int64 v52; // [rsp+A8h] [rbp+60h] BYREF

  v50 = WORD1(a2);
  v2 = 0LL;
  v3 = (unsigned int)a2;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v5 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 2) = *(_QWORD *)(W32GetSessionState(this) + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  if ( this != (APIDCOBJ *)-32LL )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7, v6);
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    *((_QWORD *)this + 6) = (unsigned __int64)this & -(__int64)((APIDCOBJ *)((char *)this + 32) != 0LL);
    v10 = (v9 + 8) & -(__int64)(v9 != 0);
    *((_QWORD *)this + 7) = UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic;
    if ( v10 )
    {
      v11 = (_QWORD *)(v10 + 88);
      v12 = *(_QWORD *)(((v9 + 8) & -(__int64)(v9 != 0)) + 0x58);
      if ( *(_QWORD *)(v12 + 8) != v10 + 88 )
        goto LABEL_36;
      *v5 = v12;
      *((_QWORD *)this + 5) = v11;
      *(_QWORD *)(v12 + 8) = v5;
      *v11 = v5;
    }
    else
    {
      *((_QWORD *)this + 5) = (char *)this + 32;
      *v5 = v5;
    }
  }
  v51 = *((_QWORD *)this + 2);
  v13 = 0LL;
  v48 = v51;
  v14 = 0LL;
  v15 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  v47 = 0;
  v49 = v15;
  v52 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v52);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v14 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v17 = v14 + 8;
  v18 = -v14;
  v19 = v17 & -(__int64)(v18 != 0);
  if ( v19 )
    v2 = *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 0x40);
  v20 = 1;
  v46 = 1;
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v51 + 8) + 40LL))(*(_QWORD *)(v51 + 8), v15);
  v45 = (unsigned int *)v21;
  v22 = (unsigned int *)v21;
  if ( !v21 )
  {
    v20 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
  _m_prefetchw((const void *)(v21 + 8));
  v23 = *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
  if ( v23 != (v52 & 0xFFFFFFFC) && v23 && (!v2 || v23 != (unsigned int)UMPDGetThreadClientPID(v19)) )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v45);
    v27 = v48;
    v20 = v46;
    v22 = v45;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v51 + 8) + 96LL))(
                     *(_QWORD *)(v51 + 8),
                     *v22)
                 + 14) & 0x20) == 0
    || v19
    && (v42 = *(ThreadRestrictNewHandlesRegion **)(v19 + 328)) != 0LL
    && *((_BYTE *)v42 + 80)
    && ThreadRestrictNewHandlesRegion::InRegion(v42, v49) )
  {
LABEL_15:
    v27 = v51;
    goto LABEL_16;
  }
  LOBYTE(v47) = 1;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v45);
  v27 = v48;
  v20 = v46;
  v22 = v45;
LABEL_16:
  if ( v20 )
  {
    if ( *((_BYTE *)v22 + 14) == 1 && *((_WORD *)v22 + 6) == v50 )
    {
      CurrentThread = KeGetCurrentThread();
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v27 + 8) + 96LL))(*(_QWORD *)(v27 + 8), *v22);
      v13 = v29;
      if ( !*(_WORD *)(v29 + 12) || *(struct _KTHREAD **)(v29 + 16) == CurrentThread )
      {
        _InterlockedAdd16((volatile signed __int16 *)(v29 + 12), 1u);
        *(_QWORD *)(v29 + 16) = CurrentThread;
      }
      else
      {
        v13 = 0LL;
      }
    }
    v30 = *(__int64 **)(v27 + 8);
    v31 = *v30;
    v32 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v30 + 96))(v30, *v22);
    (*(void (__fastcall **)(__int64 *, __int64))(v31 + 48))(v30, v32);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = v13;
  if ( v13 )
  {
    if ( *(_DWORD *)(v13 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v13 + 12));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1
         && (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      v33 = (unsigned int)DCOBJ::SaveAttributesHelper(this) == 0;
      v34 = *(_QWORD *)this;
      if ( v33 )
      {
        _InterlockedDecrement16((volatile signed __int16 *)(v34 + 12));
        *(_QWORD *)this = 0LL;
        goto LABEL_31;
      }
      *(_DWORD *)(v34 + 44) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    v25 = *(DC **)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(v25);
  }
LABEL_31:
  v35 = (_QWORD *)((char *)this + 64);
  *((_OWORD *)this + 4) = 0LL;
  *((_OWORD *)this + 5) = 0LL;
  if ( this != (APIDCOBJ *)-64LL )
  {
    v36 = (__int64 *)PsGetCurrentThreadWin32Thread(v25, v24);
    if ( v36 )
      v37 = *v36;
    else
      v37 = 0LL;
    v38 = v37 + 8;
    *((_QWORD *)this + 10) = (unsigned __int64)this & -(__int64)((APIDCOBJ *)((char *)this + 64) != 0LL);
    v25 = (DC *)-v37;
    v24 = v38 & -(__int64)(v25 != 0LL);
    *((_QWORD *)this + 11) = UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic;
    if ( v24 )
    {
      v39 = (_QWORD *)(v24 + 88);
      v25 = *(DC **)(v24 + 88);
      if ( *((_QWORD *)v25 + 1) != v24 + 88 )
LABEL_36:
        __fastfail(3u);
      *v35 = v25;
      *((_QWORD *)this + 9) = v39;
      *((_QWORD *)v25 + 1) = v35;
      *v39 = v35;
    }
    else
    {
      *((_QWORD *)this + 9) = (char *)this + 64;
      *v35 = v35;
    }
  }
  v40 = *(_QWORD *)this;
  *((_BYTE *)this + 96) = 1;
  if ( v40 )
  {
    if ( *(_WORD *)(v40 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
      DCOBJ::vUnlock(this);
  }
  return this;
}
