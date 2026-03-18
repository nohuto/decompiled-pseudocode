/*
 * XREFs of ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetRegionOwner @ 0x14001EE60 (GreSetRegionOwner.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     HmgSwapLockedHandleContents @ 0x14002EEE0 (HmgSwapLockedHandleContents.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x140054820 (HmgShareUnlockRemoveObject.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     GreDecrementObjectReferenceCount @ 0x140149510 (GreDecrementObjectReferenceCount.c)
 *     HmgFree @ 0x1401EDCD0 (HmgFree.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1ED4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1F78 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2174 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F22AC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F237C (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall HANDLELOCK::HANDLELOCK(__int64 *a1, unsigned int *a2, unsigned int a3, char a4)
{
  unsigned int v6; // ebp
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned int *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v15; // rdx
  unsigned __int64 i; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v20; // r8
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  a1[2] = (__int64)a2;
  *a1 = 0LL;
  *((_DWORD *)a1 + 2) = 0;
  *((_WORD *)a1 + 6) = 0;
  v6 = (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000;
  v21 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v21);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && (v8 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
  {
    v9 = v8 + 8;
    if ( v8 != -8 )
    {
      v10 = *(_QWORD *)(v8 + 72);
      goto LABEL_6;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v10 = 0LL;
LABEL_6:
  v11 = (unsigned int *)a1[2];
  *((_DWORD *)a1 + 2) = 1;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v11 + 1) + 40LL))(*((_QWORD *)v11 + 1), v6);
  *a1 = v12;
  if ( v12 )
  {
    _m_prefetchw((const void *)(v12 + 8));
    if ( (a4 & 1) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 8) & 0xFFFFFFFE;
      if ( v13 != (v21 & 0xFFFFFFFC) && v13 && (!v10 || v13 != (unsigned int)UMPDGetThreadClientPID(v9)) )
      {
        if ( (a4 & 8) == 0 )
        {
LABEL_14:
          HANDLELOCK::vUnlock((HANDLELOCK *)a1);
          return a1;
        }
        v20 = 1LL;
LABEL_30:
        GrepCaptureLiveMemoryDump(400LL, 56LL, v20, 0LL, 0LL, 0);
        goto LABEL_14;
      }
    }
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 8) + 96LL))(
                       *(_QWORD *)(a1[2] + 8),
                       *(unsigned int *)*a1)
                   + 14) & 0x20) != 0 )
    {
      if ( v9 )
      {
        v15 = *(_QWORD *)(v9 + 328);
        if ( v15 )
        {
          if ( *(_BYTE *)(v15 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v15 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v15 + 40) + 4 * i) == v6 )
                return a1;
            }
          }
        }
      }
      *((_BYTE *)a1 + 12) = 1;
      if ( (a4 & 8) == 0 )
        goto LABEL_14;
      v20 = 6LL;
      goto LABEL_30;
    }
  }
  else
  {
    if ( (a4 & 8) != 0 )
      GrepCaptureLiveMemoryDump(400LL, 56LL, 0LL, 0LL, 0LL, 0);
    *((_DWORD *)a1 + 2) = 0;
    KeLeaveCriticalRegion();
  }
  return a1;
}
