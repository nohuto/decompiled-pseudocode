/*
 * XREFs of GrepDeleteDC @ 0x14003ECB0
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreDeleteDC @ 0x14014C670 (GreDeleteDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401948E0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1400384A8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     UserReleaseDC @ 0x14003AEA0 (UserReleaseDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14003BEB4 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLockIgnoreAttributes@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14003D840 (-vLockIgnoreAttributes@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x140040720 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400FE870 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepDeleteDC(HDC a1, int a2)
{
  HDC v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  DC *v15; // r14
  char v16; // bl
  DC *v17; // rcx
  __int128 v18; // kr00_16
  DC *v20; // rcx
  __int128 v21; // kr10_16
  unsigned int v22; // r13d
  int v23; // eax
  __int64 v24; // rdi
  unsigned int v25; // r13d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r15
  __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rax
  unsigned int *v30; // r15
  unsigned int v31; // ecx
  struct Gre::Base::SESSION_GLOBALS *v32; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  unsigned int CurrentProcessId; // eax
  DC *v38; // rdx
  unsigned int v39; // ebx
  char *v40; // rax
  struct _ENTRY *v41; // rax
  struct _DC_ATTR *v42; // rax
  ThreadRestrictNewHandlesRegion *v43; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // [rsp+20h] [rbp-49h] BYREF
  __int64 v47; // [rsp+28h] [rbp-41h]
  unsigned int *v48; // [rsp+30h] [rbp-39h] BYREF
  int v49; // [rsp+38h] [rbp-31h]
  __int16 v50; // [rsp+3Ch] [rbp-2Dh]
  struct Gre::Base::SESSION_GLOBALS *v51; // [rsp+40h] [rbp-29h]
  DC *v52; // [rsp+50h] [rbp-19h] BYREF
  int v53; // [rsp+58h] [rbp-11h]
  struct Gre::Base::SESSION_GLOBALS *v54; // [rsp+60h] [rbp-9h]
  __int64 v55; // [rsp+68h] [rbp-1h]
  __int128 v56; // [rsp+70h] [rbp+7h] BYREF
  __int128 v57; // [rsp+80h] [rbp+17h]
  struct Gre::Base::SESSION_GLOBALS *v59; // [rsp+E8h] [rbp+7Fh]

  v3 = a1;
  v4 = 0;
  v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v54 = (struct Gre::Base::SESSION_GLOBALS *)v5;
  v55 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v56 = 0LL;
  v57 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7, v6);
  if ( CurrentThreadWin32Thread )
    v9 = *CurrentThreadWin32Thread;
  else
    v9 = 0LL;
  v10 = v9 + 8;
  v11 = -v9;
  v12 = v10 & -(__int64)(v11 != 0);
  *(_QWORD *)&v57 = &v52;
  *((_QWORD *)&v57 + 1) = UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic;
  if ( v12 )
  {
    v13 = *(_QWORD *)((v10 & -(__int64)(v11 != 0)) + 0x58);
    if ( *(_QWORD *)(v13 + 8) != v12 + 88 )
      goto LABEL_5;
    *(_QWORD *)&v56 = *(_QWORD *)(v12 + 88);
    *((_QWORD *)&v56 + 1) = v12 + 88;
    *(_QWORD *)(v13 + 8) = &v56;
    v11 = (__int64)&v56;
    *(_QWORD *)(v12 + 88) = &v56;
  }
  else
  {
    *((_QWORD *)&v56 + 1) = &v56;
    *(_QWORD *)&v56 = &v56;
  }
  if ( *(_DWORD *)(v5 + 3112)
    || (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11)) == 0LL
    || !*CurrentProcessWin32Process )
  {
    DCOBJ::vLockIgnoreAttributes((DCOBJ *)&v52, v3);
    v15 = v52;
    goto LABEL_11;
  }
  v59 = v54;
  v15 = 0LL;
  v51 = v54;
  v22 = ((unsigned int)v3 >> 8) & 0xFF0000;
  v23 = (unsigned __int16)v3;
  v24 = 0LL;
  v25 = v23 | v22;
  v50 = 0;
  v46 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v46);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v24 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v27 = (v24 + 8) & -(__int64)(v24 != 0);
  if ( v27 )
    v47 = *(_QWORD *)(((v24 + 8) & -(__int64)(v24 != 0)) + 0x40);
  else
    v47 = 0LL;
  v28 = 1;
  v49 = 1;
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v59 + 1) + 40LL))(*((_QWORD *)v59 + 1), v25);
  v48 = (unsigned int *)v29;
  v30 = (unsigned int *)v29;
  if ( v29 )
  {
    _m_prefetchw((const void *)(v29 + 8));
    v31 = *(_DWORD *)(v29 + 8) & 0xFFFFFFFE;
    if ( v31 != (v46 & 0xFFFFFFFC) && v31 && (!v47 || v31 != (unsigned int)UMPDGetThreadClientPID(v27)) )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
      v32 = v51;
      v28 = v49;
      v30 = v48;
      goto LABEL_40;
    }
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v59 + 1) + 96LL))(
                       *((_QWORD *)v59 + 1),
                       *v30)
                   + 14) & 0x20) != 0
      && (!v27
       || (v43 = *(ThreadRestrictNewHandlesRegion **)(v27 + 328)) == 0LL
       || !*((_BYTE *)v43 + 80)
       || !ThreadRestrictNewHandlesRegion::InRegion(v43, v25)) )
    {
      LOBYTE(v50) = 1;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
      v32 = v51;
      v28 = v49;
      v30 = v48;
      goto LABEL_40;
    }
  }
  else
  {
    v28 = 0;
    KeLeaveCriticalRegion();
  }
  v32 = v59;
LABEL_40:
  if ( v28 )
  {
    if ( *((_BYTE *)v30 + 14) == 1 && *((_WORD *)v30 + 6) == WORD1(a1) )
    {
      CurrentThread = KeGetCurrentThread();
      v15 = (DC *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v32 + 1) + 96LL))(
                    *((_QWORD *)v32 + 1),
                    *v30);
      if ( !*((_WORD *)v15 + 6) || *((struct _KTHREAD **)v15 + 2) == CurrentThread )
      {
        _InterlockedAdd16((volatile signed __int16 *)v15 + 6, 1u);
        *((_QWORD *)v15 + 2) = CurrentThread;
      }
      else
      {
        v15 = 0LL;
      }
    }
    v34 = (__int64 *)*((_QWORD *)v32 + 1);
    v35 = *v34;
    v36 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v34 + 96))(v34, *v30);
    (*(void (__fastcall **)(__int64 *, __int64))(v35 + 48))(v34, v36);
    KeLeaveCriticalRegion();
  }
  v52 = v15;
  if ( v15 )
  {
    if ( *((_DWORD *)v15 + 534) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)v15 + 6);
      v15 = 0LL;
      v52 = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1
      && (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v15 = v52;
  }
  if ( !v15 )
    goto LABEL_26;
  if ( (*((_DWORD *)v15 + 11) & 2) == 0 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v38 = v52;
    v39 = CurrentProcessId & 0xFFFFFFFC;
    if ( *(_QWORD *)v52 )
    {
      v40 = (char *)HmgPentryFromPobj((__int64)v54);
    }
    else
    {
      v51 = 0LL;
      v40 = (char *)v52 + 2152;
      *(_OWORD *)((char *)v52 + 2152) = 0LL;
      *((_QWORD *)v38 + 271) = v51;
      *((_DWORD *)v38 + 540) = -2147483630;
      *((_QWORD *)v38 + 271) = 0LL;
    }
    if ( v39 == (*((_DWORD *)v40 + 2) & 0xFFFFFFFE) )
    {
      v41 = DC::PentryFromPobj(v52, v54);
      if ( v41 )
      {
        v42 = (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)v41 + 2));
        if ( v42 )
        {
          if ( !(unsigned int)DC::SaveAttributes(v52, v42) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)v52 + 6);
            v52 = 0LL;
            goto LABEL_26;
          }
        }
      }
    }
    *((_DWORD *)v52 + 11) |= 2u;
    v15 = v52;
    v53 = 1;
  }
  if ( (*((_DWORD *)v15 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v15);
    v15 = v52;
  }
  v3 = a1;
LABEL_11:
  if ( !v15 )
  {
LABEL_26:
    EngSetLastError(0xAAu);
    v20 = v52;
    if ( v52 )
    {
      if ( v53 && (*((_DWORD *)v52 + 11) & 2) != 0 )
      {
        DCOBJ::RestoreAttributesHelper((DCOBJ *)&v52);
        *((_DWORD *)v52 + 11) &= ~2u;
        v20 = v52;
        v53 = 0;
      }
      _InterlockedDecrement16((volatile signed __int16 *)v20 + 6);
      v52 = 0LL;
    }
    v21 = v56;
    if ( *(__int128 **)(v56 + 8) != &v56 || **((__int128 ***)&v56 + 1) != &v56 )
LABEL_5:
      __fastfail(3u);
    **((_QWORD **)&v56 + 1) = v56;
    *(_QWORD *)(v21 + 8) = *((_QWORD *)&v21 + 1);
    return 0LL;
  }
  if ( (a2 & 0x400000) != 0 )
  {
    *((_DWORD *)v15 + 9) &= ~8u;
    v15 = v52;
  }
  if ( (*((_DWORD *)v15 + 9) & 8) != 0 )
  {
    v16 = 1;
    XDCOBJ::bCleanDC(&v52, HIBYTE(a2) & 1);
    goto LABEL_17;
  }
  v16 = 0;
  if ( !XDCOBJ::bDelete(&v52, a2) )
  {
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v52);
    return 0LL;
  }
LABEL_17:
  v17 = v52;
  if ( v52 )
  {
    if ( v53 && (*((_DWORD *)v52 + 11) & 2) != 0 )
    {
      DCOBJ::RestoreAttributesHelper((DCOBJ *)&v52);
      *((_DWORD *)v52 + 11) &= ~2u;
      v17 = v52;
      v53 = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)v17 + 6);
    v52 = 0LL;
  }
  v18 = v56;
  if ( *(__int128 **)(v56 + 8) != &v56 || **((__int128 ***)&v56 + 1) != &v56 )
    goto LABEL_5;
  **((_QWORD **)&v56 + 1) = v56;
  *(_QWORD *)(v18 + 8) = *((_QWORD *)&v18 + 1);
  if ( !v16 )
    return 1LL;
  LOBYTE(v4) = (unsigned int)UserReleaseDC((__int64)v3) != 0;
  return v4;
}
