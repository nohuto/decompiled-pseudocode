/*
 * XREFs of HmgInsertObjectInternal @ 0x14001F910
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001EEB0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001F7EC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14001F8B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140098640 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x1400EF790 (GreCreateRectRgn.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x14014C7D0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x14003C908 (EtwTraceGdiCreateHandle.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x14004AC30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1400D90D0 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14015E824 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1401771A0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgDecProcessHandleCount @ 0x140179250 (HmgDecProcessHandleCount.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C83D4 (HmgIncProcessHandleCountExFast.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, int a2, unsigned __int8 a3)
{
  struct HOBJ__ *v3; // r12
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  int (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  struct _ERESOURCE *v15; // rbx
  struct _GRETHREAD *v16; // rax
  struct _GRETHREAD *v17; // r15
  __int64 v18; // r8
  int v19; // edx
  unsigned __int64 i; // rcx
  int v21; // eax
  char v22; // cl
  int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int EtwGdiHandleType; // eax
  __int64 v29; // rcx
  int v30; // r8d
  bool v31; // zf
  struct _GRETHREAD *v32; // rax
  unsigned int v35; // [rsp+3Ch] [rbp-55h] BYREF
  int v36; // [rsp+40h] [rbp-51h] BYREF
  __int64 v37; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v40; // [rsp+78h] [rbp-19h]
  int v41; // [rsp+80h] [rbp-11h]
  int v42; // [rsp+84h] [rbp-Dh]
  int *v43; // [rsp+88h] [rbp-9h]
  __int64 v44; // [rsp+90h] [rbp-1h]
  __int64 *v45; // [rsp+98h] [rbp+7h]
  __int64 v46; // [rsp+A0h] [rbp+Fh]

  v3 = 0LL;
  v36 = a2;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v6 = 0LL;
  if ( !CurrentThreadWin32Thread )
    goto LABEL_9;
  v31 = *CurrentThreadWin32Thread == 0LL;
  v7 = *CurrentThreadWin32Thread + 8LL;
  if ( !v31 )
    v6 = v7;
  if ( v6
    && *(_QWORD *)(v6 + 64)
    && (v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1544LL)) != 0LL
    && v8() >= 0 )
  {
    LODWORD(v11) = UMPDGetThreadClientPID(v6, v9);
  }
  else
  {
LABEL_9:
    v11 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  v12 = *(_QWORD *)(W32GetSessionState(v10) + 88);
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    v14 = (_QWORD *)v12;
  else
    v14 = *(_QWORD **)(W32GetSessionState(v13) + 88);
  v15 = (struct _ERESOURCE *)(*v14 + 1512LL);
  GreAcquireSemaphoreInternal(v15);
  v16 = GreGetCurrentThreadCrossSessionCheck();
  v17 = v16;
  if ( v16 )
  {
    v18 = *(_QWORD *)v16;
    if ( (*(_QWORD *)v16 & 0xFFFFFFFFFFF00000uLL) != 0 && (v18 & 0x100000) == 0 )
    {
      v19 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v21 = i;
        if ( !_bittest64(&v18, i) )
          v21 = v19;
        v19 = v21;
      }
      if ( v21 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v21, v18);
    }
    v22 = *((_BYTE *)v17 + 28);
    *((_BYTE *)v17 + 28) = v22 + 1;
    if ( !v22 )
      *(_QWORD *)v17 |= 0x100000uLL;
  }
  v23 = v36 & 8;
  if ( (v36 & 8) != 0
    || (!(unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline()
      ? (v25 = *(_QWORD *)(W32GetSessionState(v24) + 88))
      : (v25 = v12),
        (unsigned int)HmgIncProcessHandleCountExFast(v25, (unsigned int)v11, 0LL)) )
  {
    v35 = 0;
    if ( HmgpAcquireHandleIndex((struct Gre::Base::SESSION_GLOBALS *)v12, (struct _GRETHREAD *)v6, &v35) )
    {
      v3 = ENTRYOBJ::hSetup(a1, a3, v36, v35);
      if ( a3 == 5 )
      {
        v26 = *((_QWORD *)a1 + 85);
        v27 = 0LL;
      }
      else
      {
        if ( a3 != 16 )
        {
LABEL_35:
          if ( v23 )
            LODWORD(v11) = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(a3);
          EtwTraceGdiCreateHandle(v3, EtwGdiHandleType, (unsigned int)v11);
          goto LABEL_46;
        }
        v26 = *((_QWORD *)a1 + 17);
        v27 = 2LL;
      }
      TrackObjectReferenceInitialization(v27, v26, *((unsigned int *)a1 + 2));
      goto LABEL_35;
    }
    if ( !v23 )
      HmgDecProcessHandleCount((unsigned int)v11);
    if ( !*(_BYTE *)(v12 + 5664)
      && *(_DWORD *)(*(_QWORD *)(v12 + 5672) + 4LL) >= *(_DWORD *)(*(_QWORD *)(v12 + 5672) + 8LL) )
    {
      *(_BYTE *)(v12 + 5664) = 1;
      if ( (unsigned int)dword_14029EF38 > 5
        && (qword_14029EF48 & 0x400000000000LL) != 0
        && (qword_14029EF50 & 0x400000000000LL) == qword_14029EF50 )
      {
        v36 = *(_DWORD *)(v12 + 1752);
        EventDescriptor.Keyword = 0x400000000000LL;
        v45 = &v37;
        v37 = 0x1000000LL;
        v43 = &v36;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_14029EF40;
        v46 = 8LL;
        v44 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_14029EF40;
        v40 = &unk_14027991C;
        UserData.Reserved = 2;
        v41 = 67;
        v42 = 1;
        v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
LABEL_46:
  if ( v15 )
  {
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    {
      v31 = gbLockEtw == 0;
    }
    else
    {
      v29 = *(_QWORD *)(W32GetSessionState(v29) + 88);
      v31 = *(_DWORD *)(v29 + 16) == 0;
    }
    if ( !v31 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v29, (unsigned int)&LockRelease, v30, (_DWORD)v15, (__int64)L"Hmgr");
    v32 = GreGetCurrentThreadCrossSessionCheck();
    if ( v32 )
    {
      v31 = (*((_BYTE *)v32 + 28))-- == 1;
      if ( v31 )
        *(_QWORD *)v32 &= ~0x100000uLL;
    }
    GreReleaseSemaphoreSharedInternal((HSEMAPHORE)v15);
  }
  return v3;
}
