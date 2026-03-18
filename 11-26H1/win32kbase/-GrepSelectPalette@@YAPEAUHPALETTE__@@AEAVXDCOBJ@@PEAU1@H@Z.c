/*
 * XREFs of ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     GreSelectPalette @ 0x1400C2C90 (GreSelectPalette.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400C33B0 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     W32GetCurrentThreadAndEnterCriticalRegion @ 0x1400C36A0 (W32GetCurrentThreadAndEnterCriticalRegion.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C3724 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C37DC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1400C5A40 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

HPALETTE __fastcall GrepSelectPalette(struct XDCOBJ *a1, struct _ERESOURCE *a2, int a3)
{
  struct _ERESOURCE *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 SessionState; // rax
  __int64 v9; // rdi
  __int64 CurrentThreadAndEnterCriticalRegion; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  unsigned int *v15; // r15
  unsigned int v16; // edi
  struct _ERESOURCE **v17; // rcx
  int v18; // r8d
  __int64 *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  struct _GRETHREAD *v23; // rax
  bool v24; // zf
  HPALETTE v26; // rbx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  struct _GRETHREAD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // r8d
  ThreadRestrictNewHandlesRegion *v37; // rcx
  __int64 v38; // rax
  int v39; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v41; // [rsp+30h] [rbp-38h]
  __int64 v42; // [rsp+38h] [rbp-30h]
  struct _ERESOURCE **v43; // [rsp+40h] [rbp-28h]
  unsigned int *v44; // [rsp+48h] [rbp-20h] BYREF
  int v45; // [rsp+50h] [rbp-18h]
  __int16 v46; // [rsp+54h] [rbp-14h]
  __int64 v47; // [rsp+58h] [rbp-10h]
  __int64 v48; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v49; // [rsp+B8h] [rbp+50h] BYREF
  int v50; // [rsp+C0h] [rbp+58h]
  HSEMAPHORE v51; // [rsp+C8h] [rbp+60h] BYREF

  v50 = a3;
  v43 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v5 = *v43 + 3;
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<13>();
  v6 = 0LL;
  v46 = 0;
  SessionState = W32GetSessionState(v7);
  v49 = 0LL;
  v9 = *(_QWORD *)(SessionState + 88);
  v42 = v9;
  LODWORD(v48) = (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000;
  v47 = v9;
  CurrentThreadAndEnterCriticalRegion = W32GetCurrentThreadAndEnterCriticalRegion(&v49);
  v11 = (CurrentThreadAndEnterCriticalRegion + 8) & -(__int64)(CurrentThreadAndEnterCriticalRegion != 0);
  v41 = v11;
  if ( v11 )
    v51 = *(HSEMAPHORE *)(v11 + 64);
  else
    v51 = 0LL;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 1;
  v45 = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(
          v12,
          (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000);
  v44 = (unsigned int *)v14;
  v15 = (unsigned int *)v14;
  if ( !v14 )
  {
    v13 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_6;
  }
  _m_prefetchw((const void *)(v14 + 8));
  v16 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
  if ( v16 != (v49 & 0xFFFFFFFC) && v16 && (!v51 || v16 != (unsigned int)UMPDGetThreadClientPID(v41)) )
    goto LABEL_47;
  v9 = v42;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v42 + 8) + 96LL))(
                     *(_QWORD *)(v42 + 8),
                     *v15)
                 + 14) & 0x20) != 0
    && (!v41
     || (v37 = *(ThreadRestrictNewHandlesRegion **)(v41 + 328)) == 0LL
     || !*((_BYTE *)v37 + 80)
     || !ThreadRestrictNewHandlesRegion::InRegion(v37, v48)) )
  {
    LOBYTE(v46) = 1;
LABEL_47:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v44);
    v15 = v44;
    v13 = v45;
    v9 = v47;
  }
LABEL_6:
  if ( v13 )
  {
    if ( *((_BYTE *)v15 + 14) == 8 && *((_WORD *)v15 + 6) == WORD1(a2) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 8) + 96LL))(*(_QWORD *)(v9 + 8), *v15);
      ++*(_DWORD *)(v6 + 8);
    }
    v19 = *(__int64 **)(v9 + 8);
    v20 = *v19;
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v19 + 96))(v19, *v15);
    (*(void (__fastcall **)(__int64 *, __int64))(v20 + 48))(v19, v21);
    KeLeaveCriticalRegion();
  }
  v22 = *(_QWORD *)a1;
  v48 = v6;
  if ( !v6 )
  {
LABEL_12:
    if ( v5 )
    {
      if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer((_DWORD)v17, (unsigned int)&LockRelease, v18, (_DWORD)v5, (__int64)L"Palette");
      goto LABEL_14;
    }
    return 0LL;
  }
  if ( !v22 || (*(_DWORD *)(v6 + 24) & 0x100) == 0 )
  {
    v31 = W32GetSessionState(v17);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v31 + 88), (unsigned int *)v6);
    goto LABEL_12;
  }
  if ( !v50 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v17 = v43;
    v43[471] = (struct _ERESOURCE *)CurrentProcessWin32Process;
    v43[470] = a2;
  }
  v26 = *(HPALETTE *)(*(_QWORD *)a1 + 80LL);
  if ( v26 != (HPALETTE)a2 )
  {
    v49 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
    v32 = *(_QWORD *)(W32GetSessionState(v17) + 88);
    if ( v6 != *(_QWORD *)(v32 + 3872) )
    {
      v33 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      if ( *(_QWORD *)(v6 + 48) != v33 )
      {
        if ( *(_DWORD *)(v6 + 56) )
        {
          v38 = W32GetSessionState(v32);
          HmgDecrementShareReferenceCount(*(_QWORD *)(v38 + 88), (unsigned int *)v6);
          if ( v5 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v5, v39);
LABEL_14:
            v23 = GreGetCurrentThreadCrossSessionCheck();
            if ( v23 )
            {
              v24 = (*((_BYTE *)v23 + 21))-- == 1;
              if ( v24 )
                *(_QWORD *)v23 &= ~0x2000uLL;
            }
            GreReleaseSemaphoreSharedInternal(v5);
          }
          return 0LL;
        }
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v48);
        *(_QWORD *)(v6 + 48) = v33;
      }
    }
    SEMOBJ<20>::SEMOBJ<20>(&v51);
    XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v49, a1);
    *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
    *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v6;
    v34 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    *(_DWORD *)(v34 + 152) |= 0xFu;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) && v6 != *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v34) + 88) + 3872LL) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 176LL) = a2;
    XEPALOBJ::vAddToList((XEPALOBJ *)&v48, a1);
    SEMOBJ<20>::vUnlock(&v51, v35, v36);
  }
  v27 = W32GetSessionState(v17);
  HmgDecrementShareReferenceCount(*(_QWORD *)(v27 + 88), (unsigned int *)v6);
  if ( v5 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v28, (unsigned int)&LockRelease, v29, (_DWORD)v5, (__int64)L"Palette");
    v30 = GreGetCurrentThreadCrossSessionCheck();
    if ( v30 )
    {
      v24 = (*((_BYTE *)v30 + 21))-- == 1;
      if ( v24 )
        *(_QWORD *)v30 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v5);
  }
  return v26;
}
