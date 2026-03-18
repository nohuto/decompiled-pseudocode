/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1400685F0
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1401B77F0 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1400695E8 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x140087834 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x140087878 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x140087CBC (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x1400898F4 (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x1400899CC (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x140089A94 (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1400950E4 (TraceLoggingWriteMiracastSessionStart.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x14018ED68 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x140192584 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x14024C2F4 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x14024C71C (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x14024CEB8 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x14024D210 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1403E7010 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, struct _KEVENT *a2, int *a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  struct _KEVENT *v6; // r12
  __int64 v7; // rsi
  __int128 v8; // xmm0
  int v9; // r15d
  __int64 DeviceContextFromName; // rdi
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // r8d
  char v15; // r13
  char v16; // r12
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // r12d
  char *Pool2; // rax
  char *v22; // r13
  char *v23; // r12
  MIRACAST_CHUNK_LIST *v24; // rcx
  MIRACAST_CHUNK_LIST *v25; // rcx
  MIRACAST_CHUNK_LIST *v26; // rcx
  MIRACAST_CHUNK_LIST *v27; // rcx
  MIRACAST_CHUNK_LIST *v28; // rcx
  MIRACAST_CHUNK_LIST *v29; // rcx
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rax
  void *v33; // rdx
  int v34; // ecx
  int v35; // r8d
  int v36; // eax
  int v37; // edx
  int v38; // edx
  int v39; // r9d
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // edx
  _DWORD *v49; // r12
  int v50; // eax
  char v51; // bl
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // rax
  int v55; // ecx
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  int v59; // ecx
  MIRACAST_CHUNK_LIST *v60; // rcx
  _QWORD *v61; // rax
  MIRACAST_CHUNK_LIST *v62; // rax
  unsigned int v63; // r13d
  __int64 *v64; // r12
  unsigned int v65; // ecx
  PRKEVENT v66; // rax
  int v67; // ecx
  __int128 v68; // xmm0
  int v69; // edx
  struct _DXGK_DIAG_HEADER *v70; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  char v73; // [rsp+61h] [rbp-9Fh]
  char DeviceObject; // [rsp+63h] [rbp-9Dh] BYREF
  char v75; // [rsp+64h] [rbp-9Ch]
  char v76; // [rsp+65h] [rbp-9Bh]
  unsigned int v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+6Ch] [rbp-94h]
  PRKEVENT Event; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h]
  int *v84; // [rsp+98h] [rbp-68h]
  __int128 v85; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v86[20]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v87; // [rsp+C8h] [rbp-38h] BYREF
  __int64 (__fastcall *v88)(void *, struct DXGK_MIRACAST_CHUNK_INFO *, void *, unsigned int); // [rsp+D8h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v90[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v91; // [rsp+108h] [rbp+8h]
  __int128 v92; // [rsp+110h] [rbp+10h]
  __int64 v93; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+128h] [rbp+28h]
  int v95; // [rsp+130h] [rbp+30h]
  int v96; // [rsp+134h] [rbp+34h]
  int v97; // [rsp+138h] [rbp+38h]
  int v98; // [rsp+13Ch] [rbp+3Ch]

  LOWORD(v3) = 0;
  v82 = a1;
  v84 = a3;
  v88 = 0LL;
  v5 = 2;
  Event = a2;
  memset(v86, 0, sizeof(v86));
  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0LL;
  v81 = 0LL;
  v8 = *(_OWORD *)(a1 + 536);
  P = 0LL;
  v9 = 0;
  v85 = v8;
  LOBYTE(v77) = 0;
  v87 = 0LL;
  v75 = 0;
  v73 = 0;
  v76 = 0;
  DeviceObject = 0;
  Src = (void *)(a1 + 536);
  TraceLoggingWriteMiracastStartSessionEntry(&v85);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  if ( !DeviceContextFromName )
  {
    v11 = -1073741275;
    v9 = 2;
    v5 = -2147483642;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5951;
    goto LABEL_148;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v86) >= 0 && !v86[8] )
  {
    v85 = 0LL;
    v11 = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( v11 < 0 )
    {
      AcquireMiniportListMutex();
      v9 = 17;
      v5 = -2147483647;
      v15 = 0;
      v16 = 0;
      goto LABEL_28;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *(_DWORD *)(a1 + 524);
  v17 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(v17 + 2 * v18) );
  }
  else
  {
    LOWORD(v18) = 0;
  }
  v19 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v19 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v19 + 2 * v3) );
  }
  v78 = (unsigned __int16)v18;
  v20 = 2 * ((unsigned __int16)v18 + (unsigned __int16)v3) + 68;
  Pool2 = (char *)ExAllocatePool2(256LL, v20, 1953656900LL);
  P = Pool2;
  if ( Pool2 )
  {
    v22 = Pool2;
    memset(Pool2, 0, 2 * ((unsigned __int16)v18 + (unsigned int)(unsigned __int16)v3) + 68);
    *((_DWORD *)v22 + 1) = v20;
    *((_DWORD *)v22 + 10) = 0;
    v23 = v22 + 64;
    *((_QWORD *)v22 + 4) = 0LL;
    *(_DWORD *)v22 = 19;
    *((_QWORD *)v22 + 1) = 0LL;
    *((_OWORD *)v22 + 1) = 0LL;
    *((_WORD *)v22 + 30) = v18;
    *((_WORD *)v22 + 31) = v3;
    v15 = 0;
    if ( (_WORD)v18 )
      memmove(v23, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v18);
    if ( (_WORD)v3 )
      memmove(&v23[2 * (v78 + 1)], *(const void **)(DeviceContextFromName + 344), 2LL * (unsigned __int16)v3);
  }
  else
  {
    v15 = 0;
  }
  v7 = v81;
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(DeviceContextFromName + 184)) < 0 || !v81 )
  {
    v11 = -1073741637;
    v5 = -2147483647;
    v9 = 4;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6061;
    goto LABEL_27;
  }
  v16 = 1;
  v77 = 1;
  if ( *(_QWORD *)(v81 + 3368) )
  {
    v5 = -2147483647;
    v9 = 6;
    v11 = -1073741637;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6081;
LABEL_26:
    v15 = v73;
LABEL_27:
    v16 = v15;
    goto LABEL_28;
  }
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v81 + 64), (PVOID)DeviceContextFromName, File, 1u, 0x20u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
  if ( *(_DWORD *)(DeviceContextFromName + 408) )
  {
    v11 = -1073741661;
    v5 = -2147483647;
    v9 = 6;
    WdLogSingleEntry2(2LL, DeviceContextFromName, -2147483647LL);
    WdLogGlobalForLineNumber = 6119;
LABEL_53:
    v15 = 0;
    goto LABEL_28;
  }
  if ( !*(_QWORD *)(DeviceContextFromName + 400) )
  {
    v11 = -1073741275;
    v5 = -2147483642;
    v9 = 2;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 6141;
    goto LABEL_53;
  }
  *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
  *(_DWORD *)(DeviceContextFromName + 656) = 0;
  *(_BYTE *)(DeviceContextFromName + 590) = 0;
  *(_DWORD *)(DeviceContextFromName + 652) = 0;
  *(_DWORD *)(DeviceContextFromName + 664) = 0;
  *(_DWORD *)(DeviceContextFromName + 672) = dword_1401692B8;
  v32 = v82;
  *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
  *(_DWORD *)(DeviceContextFromName + 648) = 0;
  *(_BYTE *)(DeviceContextFromName + 591) = 0;
  *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
  *(_DWORD *)(DeviceContextFromName + 788) = *(_DWORD *)(v32 + 524);
  *(_DWORD *)(DeviceContextFromName + 700) = -1;
  *(_DWORD *)(DeviceContextFromName + 704) = 0;
  v73 = 1;
  memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
  v33 = Src;
  *(_DWORD *)(DeviceContextFromName + 776) = 256;
  memmove((void *)(DeviceContextFromName + 112), v33, 0x10uLL);
  if ( ++*(_DWORD *)(DeviceContextFromName + 440) >= 0xFFFFFFFE )
    *(_DWORD *)(DeviceContextFromName + 440) = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      v34,
      (unsigned int)&EventMiracastStartMiracastSession,
      v35,
      *(_QWORD *)(v7 + 48),
      *(_QWORD *)(DeviceContextFromName + 96),
      *(_QWORD *)(DeviceContextFromName + 152),
      *(_DWORD *)(DeviceContextFromName + 656),
      *(_DWORD *)(DeviceContextFromName + 664));
  *(_DWORD *)(DeviceContextFromName + 192) = *(_DWORD *)(v7 + 1124);
  *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)(v7 + 1128);
  v36 = *(_DWORD *)(v7 + 1120);
  if ( v36 == 1 )
  {
    v34 = (unsigned __int16)*(_DWORD *)(v7 + 1128);
    v37 = v34 | (*(_DWORD *)(v7 + 1124) << 16);
  }
  else if ( v36 == 2 )
  {
    v34 = *(char *)(v7 + 1128);
    if ( ((unsigned __int8)(*(_BYTE *)(v7 + 1128) - 48) <= 9u || (unsigned __int8)((v34 | 0x20) - 97) <= 5u)
      && ((v38 = *(char *)(v7 + 1129), (unsigned __int8)(*(_BYTE *)(v7 + 1129) - 48) <= 9u)
       || (unsigned __int8)((v38 | 0x20) - 97) <= 5u)
      && ((v35 = *(char *)(v7 + 1130), (unsigned __int8)(*(_BYTE *)(v7 + 1130) - 48) <= 9u)
       || (unsigned __int8)((v35 | 0x20) - 97) <= 5u)
      && ((v39 = *(char *)(v7 + 1131), (unsigned __int8)(*(_BYTE *)(v7 + 1131) - 48) <= 9u)
       || (unsigned __int8)((v39 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(v34 - 48) > 9u )
        v41 = ((_BYTE)v34 - 7) & 0xF;
      else
        v41 = v34 - 48;
      v42 = v41 << 12;
      if ( (unsigned __int8)(v38 - 48) > 9u )
        v43 = ((_BYTE)v38 - 7) & 0xF;
      else
        v43 = v38 - 48;
      v44 = v42 | (v43 << 8);
      v45 = *(char *)(v7 + 1130);
      LOBYTE(v35) = v35 - 48;
      if ( (unsigned __int8)v35 > 9u )
        v46 = ((_BYTE)v45 - 7) & 0xF;
      else
        v46 = v45 - 48;
      v47 = v44 | (16 * v46);
      if ( (unsigned __int8)(v39 - 48) > 9u )
        v34 = ((_BYTE)v39 - 7) & 0xF;
      else
        v34 = v39 - 48;
      v40 = v34 | v47;
    }
    else
    {
      v40 = *(unsigned __int16 *)(v7 + 1130);
    }
    LOBYTE(v34) = *(_BYTE *)(v7 + 1124);
    if ( (_BYTE)v34 == 32 || (_BYTE)v34 == 95 )
    {
      LOBYTE(v34) = *(_BYTE *)(v7 + 1125);
      if ( (_BYTE)v34 == 32 || (_BYTE)v34 == 95 )
        v48 = *(_DWORD *)(v7 + 1124) & 0xFFFF0000;
      else
        v48 = (*(_DWORD *)(v7 + 1124) & 0xFFFFFF00) << 8;
    }
    else
    {
      v48 = *(_DWORD *)(v7 + 1124) << 16;
    }
    v37 = v40 | v48;
  }
  else
  {
    v37 = 0;
  }
  *(_DWORD *)(DeviceContextFromName + 200) = v37;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000000LL) != 0 )
    McTemplateK0qqz_EtwWriteTransfer(
      v34,
      (unsigned int)&EventMiracastPerfTrackStartMiracastSession,
      v35,
      *(_DWORD *)(DeviceContextFromName + 440),
      v37,
      *(_QWORD *)(DeviceContextFromName + 352));
  *(_BYTE *)(DeviceContextFromName + 589) = 0;
  *((_QWORD *)&v87 + 1) = DpiMiracastCbSendUserModeMessage;
  v49 = (_DWORD *)(DeviceContextFromName + 456);
  *(_QWORD *)&v87 = DeviceContextFromName;
  v88 = DpiMiracastCbReportChunkInfo;
  v11 = DpiMiracastDdiMiracastCreateContext(v7, &v87, DeviceContextFromName + 448, DeviceContextFromName + 456);
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v14 = 0;
    WdLogGlobalForLineNumber = 6353;
    v12 = -1073740024;
    *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    *v49 = -1;
    v13 = -(v11 != -1073740024);
    LOBYTE(v9) = v11 != -1073740024;
    v9 += 7;
    v5 = v13 - 2147483646;
    v16 = v77;
    v15 = v77;
LABEL_28:
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000000LL) != 0 )
      McTemplateK0qqqz_EtwWriteTransfer(
        v13,
        (unsigned int)&EventMiracastStartMiracastSessionFail,
        v14,
        v9,
        v11,
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352));
    if ( v15 && v5 < 0 )
    {
      *(_DWORD *)(DeviceContextFromName + 416) = v5;
      *(_DWORD *)(DeviceContextFromName + 784) = v9;
      if ( v75 )
      {
        DpiMiracastDdiMiracastDestroyContext(v7, *(_QWORD *)(DeviceContextFromName + 448));
        *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
        *(_DWORD *)(DeviceContextFromName + 456) = -1;
      }
      if ( v76 )
      {
        *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
        *(_QWORD *)(v7 + 3368) = 0LL;
        *(_QWORD *)(v7 + 3376) = 0LL;
        *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
        *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeFlushQueuedDpcs();
      }
      v24 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
      if ( v24 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v24, v12);
        *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
      }
      v25 = *(MIRACAST_CHUNK_LIST **)(v7 + 3392);
      if ( v25 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v25, v12);
        *(_QWORD *)(v7 + 3392) = 0LL;
      }
      v26 = *(MIRACAST_CHUNK_LIST **)(v7 + 3400);
      if ( v26 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v26, v12);
        *(_QWORD *)(v7 + 3400) = 0LL;
      }
      v27 = *(MIRACAST_CHUNK_LIST **)(v7 + 3408);
      if ( v27 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v27, v12);
        *(_QWORD *)(v7 + 3408) = 0LL;
      }
      v28 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
      if ( v28 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v28, v12);
        *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
      }
      v29 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
      if ( v29 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v29, v12);
        *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
      }
      KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000000LL) != 0 )
        McTemplateK0qqz_EtwWriteTransfer(
          v30,
          (unsigned int)&EventMiracastPerfTrackStartMiracastSessionFailed,
          v31,
          *(_DWORD *)(DeviceContextFromName + 440),
          *(_DWORD *)(DeviceContextFromName + 200),
          *(_QWORD *)(DeviceContextFromName + 352));
      TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
    }
    if ( !v16 )
      goto LABEL_142;
    goto LABEL_140;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0LL);
  v50 = *(_DWORD *)(v7 + 3360);
  v51 = v77;
  v75 = v77;
  if ( *v49 != v50 )
  {
    v11 = -1073741811;
    v5 = -2147483647;
    v9 = 9;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6373;
    goto LABEL_26;
  }
  *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(DeviceContextFromName + 588) = 0;
  *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
  *(_WORD *)(v7 + 3384) = 0;
  *(_DWORD *)(v7 + 3388) = 0;
  v52 = operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v52 )
  {
    v53 = *(_DWORD *)(v7 + 3352);
    *(_DWORD *)(v52 + 16) = 0;
    *(_DWORD *)(v52 + 20) = v53;
    *(_QWORD *)(v52 + 8) = v52;
    *(_QWORD *)v52 = v52;
  }
  else
  {
    v52 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 488) = v52;
  v54 = operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v54 )
  {
    v55 = *(_DWORD *)(v7 + 3352);
    *(_DWORD *)(v54 + 16) = 0;
    *(_DWORD *)(v54 + 20) = v55;
    *(_QWORD *)(v54 + 8) = v54;
    *(_QWORD *)v54 = v54;
  }
  else
  {
    v54 = 0LL;
  }
  *(_QWORD *)(v7 + 3392) = v54;
  v56 = operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v56 )
  {
    v57 = *(_DWORD *)(v7 + 3352);
    *(_DWORD *)(v56 + 16) = 0;
    *(_DWORD *)(v56 + 20) = v57;
    *(_QWORD *)(v56 + 8) = v56;
    *(_QWORD *)v56 = v56;
  }
  else
  {
    v56 = 0LL;
  }
  *(_QWORD *)(v7 + 3400) = v56;
  v58 = operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v58 )
  {
    v59 = *(_DWORD *)(v7 + 3352);
    *(_DWORD *)(v58 + 16) = 0;
    *(_DWORD *)(v58 + 20) = v59;
    *(_QWORD *)(v58 + 8) = v58;
    *(_QWORD *)v58 = v58;
  }
  else
  {
    v58 = 0LL;
  }
  *(_QWORD *)(v7 + 3408) = v58;
  if ( !*(_QWORD *)(DeviceContextFromName + 488)
    || (v60 = *(MIRACAST_CHUNK_LIST **)(v7 + 3392)) == 0LL
    || !*(_QWORD *)(v7 + 3400)
    || !v58 )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 10;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 6413;
    goto LABEL_26;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v60, 0x14u) )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 11;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 6426;
    goto LABEL_26;
  }
  *(_DWORD *)(v7 + 3388) = 20;
  v61 = (_QWORD *)operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v61 )
  {
    v61[2] = 0LL;
    v61[1] = v61;
    *v61 = v61;
  }
  else
  {
    v61 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 504) = v61;
  v62 = (MIRACAST_CHUNK_LIST *)operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v62 )
  {
    *((_QWORD *)v62 + 2) = 0LL;
    *((_QWORD *)v62 + 1) = v62;
    *(_QWORD *)v62 = v62;
  }
  else
  {
    v62 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 512) = v62;
  if ( !*(_QWORD *)(DeviceContextFromName + 504) || !v62 )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 10;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 6450;
    goto LABEL_26;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v62, 0x14u) )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 11;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 6463;
    goto LABEL_26;
  }
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_QWORD *)(DeviceContextFromName + 432) = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 3368) = DeviceContextFromName;
  *(_QWORD *)(v7 + 3376) = *(_QWORD *)(DeviceContextFromName + 96);
  *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)(v7 + 4960);
  *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)(v7 + 4968);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v63 = *(unsigned __int16 *)(v7 + 4992) + 72;
  v76 = v51;
  v64 = (__int64 *)ExAllocatePool2(256LL, v63, 1953656900LL);
  if ( !v64 )
  {
    v5 = -2147483647;
    v9 = 12;
    v11 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 6514;
    goto LABEL_26;
  }
  v65 = v77;
  _InterlockedAdd((volatile signed __int32 *)(DeviceContextFromName + 24), v77);
  _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
  *(_DWORD *)(DeviceContextFromName + 412) = *(_DWORD *)(DeviceContextFromName + 408);
  v66 = Event;
  *(_DWORD *)(DeviceContextFromName + 408) = v65;
  *(_QWORD *)(DeviceContextFromName + 472) = v66;
  dword_1401692A0 += v65;
  KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
  if ( Event )
    KeClearEvent(Event);
  memset(v64, 0, v63);
  v67 = *(_DWORD *)(DeviceContextFromName + 440);
  v68 = *(_OWORD *)(DeviceContextFromName + 112);
  *(__int64 *)((char *)v64 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
  *((_DWORD *)v64 + 2) = v67;
  *v64 = DeviceContextFromName;
  *(__int64 *)((char *)v64 + 20) = *(_QWORD *)(v7 + 2696);
  *(__int64 *)((char *)v64 + 28) = *(_QWORD *)&v86[12];
  *((_DWORD *)v64 + 10) = dword_1401692A4;
  *((_DWORD *)v64 + 9) = v67;
  *((_BYTE *)v64 + 44) = 0;
  *((_OWORD *)v64 + 3) = v68;
  memmove(v64 + 8, *(const void **)(v7 + 5000), *(unsigned __int16 *)(v7 + 4992));
  RemlockSize[0] = v63 - 12;
  v11 = DpiMiracastSendAsyncUserModeRequest(
          DeviceContextFromName,
          v69,
          2295812,
          (int)v64 + 12,
          *(size_t *)RemlockSize,
          0LL,
          0,
          (__int64)DpiMiracastStartSessionRequestCallback,
          (__int64)v64,
          (PDEVICE_OBJECT)&DeviceObject,
          DeviceContextFromName + 424);
  if ( v11 < 0 )
  {
    v5 = -2147483647;
    v9 = 13;
    WdLogSingleEntry1(2LL);
    *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
    --dword_1401692A0;
    WdLogGlobalForLineNumber = 6595;
    if ( !DeviceObject )
    {
      ExFreePoolWithTag(v64, 0);
      DpiMiracastReleaseMiracastDeviceContext((PVOID)DeviceContextFromName);
    }
    goto LABEL_26;
  }
  *(_DWORD *)(DeviceContextFromName + 416) = 2;
  DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_140:
  *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
  if ( v5 < 0 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 64), (PVOID)DeviceContextFromName, 0x20u);
LABEL_142:
  if ( (_BYTE)v77 )
  {
    if ( *(_BYTE *)(v7 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 64), (PVOID)v7, 0x20u);
  }
  if ( v5 >= 0 )
  {
    ReleaseMiniportListMutex();
    goto LABEL_151;
  }
  DpiMiracastReleaseMiracastDeviceContext((PVOID)DeviceContextFromName);
  ReleaseMiniportListMutex();
  v6 = Event;
LABEL_148:
  if ( v6 )
  {
    KeSetEvent(v6, 0, 0);
    ObfDereferenceObject(v6);
  }
LABEL_151:
  v70 = (struct _DXGK_DIAG_HEADER *)P;
  *v84 = v11;
  if ( v70 )
  {
    *((_DWORD *)v70 + 12) = v11;
    *((_DWORD *)v70 + 13) = v5;
    *((_DWORD *)v70 + 14) = v9;
    DxgkWriteDiagEntry(v70, 0x200000000uLL);
    ExFreePoolWithTag(v70, 0);
  }
  else
  {
    v94 = 0LL;
    v90[0] = 6;
    v91 = 0LL;
    v92 = 0LL;
    v90[1] = 64;
    v93 = 0LL;
    v95 = 69;
    v96 = v11;
    v97 = v5;
    v98 = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v90, 0x200000000uLL);
  }
  return (unsigned int)v5;
}
