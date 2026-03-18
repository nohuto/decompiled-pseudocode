/*
 * XREFs of RIMIDECreateHIDDesc @ 0x14002A1AC
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMSearchHidTLCInfo @ 0x14002A7D0 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     IsProcessHidRawInputSupported @ 0x14002A95C (IsProcessHidRawInputSupported.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x14002A994 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14002AA58 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E6C70 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     RIMIDEFreeInjectedInfo @ 0x14013553C (RIMIDEFreeInjectedInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x14014B4A8 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMIsInteractiveCtrl @ 0x140156990 (RIMIsInteractiveCtrl.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1401A2690 (RIMIDEAllocateInjectedInfo.c)
 *     RIMFreeHidDesc @ 0x1401E0854 (RIMFreeHidDesc.c)
 *     RIMFreePointerDevice @ 0x1401E3C1C (RIMFreePointerDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E68A4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void **__fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int128 v4; // xmm1
  __int64 v6; // r13
  __int128 v7; // xmm0
  void **v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 epi16; // r12
  char *v13; // rax
  char *v14; // r14
  __int128 v15; // xmm0
  void *v16; // rax
  void *v17; // rax
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // r14
  bool v23; // r12
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  USAGE Usage; // r8
  USAGE UsagePage; // eax^2
  __int64 v30; // rax
  char v31; // si
  bool v32; // r13
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v36; // r14
  bool v37; // r12
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // r14
  __int64 v42; // r8
  unsigned int v43; // eax
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v49; // r8
  __m128i v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+80h] [rbp-80h] BYREF
  _HIDP_CAPS v55; // [rsp+90h] [rbp-70h] BYREF
  __int128 v56; // [rsp+D0h] [rbp-30h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+100h] [rbp+0h]
  _HIDP_CAPS Capabilities; // [rsp+110h] [rbp+10h] BYREF
  _HIDP_DEVICE_DESC DeviceDescription; // [rsp+150h] [rbp+50h] BYREF

  v3 = 0;
  v4 = *(_OWORD *)(a3 + 56);
  v6 = a1;
  *(_OWORD *)&DeviceDescription.CollectionDesc = *(_OWORD *)(a3 + 24);
  v7 = *(_OWORD *)(a3 + 40);
  v8 = 0LL;
  v9 = 0LL;
  *(_OWORD *)&DeviceDescription.Dbg.ErrorCode = v4;
  *(_OWORD *)&DeviceDescription.ReportIDs = v7;
  *(_OWORD *)&DeviceDescription.Dbg.Args[3] = *(_OWORD *)(a3 + 72);
  memset(&Capabilities, 0, sizeof(Capabilities));
  v56 = *(_OWORD *)&DeviceDescription.CollectionDesc->UsagePage;
  v53 = *(__m128i *)&DeviceDescription.CollectionDesc->Reserved[11];
  PreparsedData = DeviceDescription.CollectionDesc->PreparsedData;
  epi16 = _mm_extract_epi16(v53, 5);
  if ( HidP_GetCaps(PreparsedData, &Capabilities) >= 0 && Capabilities.InputReportByteLength && epi16 )
  {
    v13 = (char *)Win32AllocPoolZInitImpl(0x100uLL, 0x78uLL, 0x44687352u);
    v8 = (void **)v13;
    v14 = v13;
    if ( !v13 )
      goto LABEL_6;
    v15 = *(_OWORD *)&Capabilities.Usage;
    *(_QWORD *)(a2 + 440) = v13;
    *(_OWORD *)(v13 + 40) = v15;
    *(_OWORD *)(v13 + 56) = *(_OWORD *)&Capabilities.Reserved[3];
    *(_OWORD *)(v13 + 72) = *(_OWORD *)&Capabilities.Reserved[11];
    *(_OWORD *)(v13 + 88) = *(_OWORD *)&Capabilities.NumberInputValueCaps;
    v16 = Win32AllocPoolZInitImpl(0x100uLL, *((unsigned __int16 *)v13 + 22), 0x6A6E6952u);
    *((_QWORD *)v14 + 3) = v16;
    if ( !v16 || (v17 = Win32AllocPoolZInitImpl(0x100uLL, epi16, 0x6A6E6952u), (*((_QWORD *)v14 + 2) = v17) == 0LL) )
LABEL_6:
      v3 = 1;
  }
  else
  {
    v3 = 1;
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v54,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( !v3 )
  {
    memmove(v8[2], PreparsedData, epi16);
    v8[13] = (void *)epi16;
    *((_DWORD *)v8 + 28) = 0x10000;
    v9 = RIMSearchHidTLCInfo(Capabilities.UsagePage, Capabilities.Usage);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v21 = *((unsigned int *)WPP_GLOBAL_Control + 11), v20 = 1LL, (v21 & 1) == 0)
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(v21, v20);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_DDq(*((_QWORD *)WPP_GLOBAL_Control + 3), v26, v25, *(_QWORD *)(v24 + 19336));
      }
      goto LABEL_19;
    }
    v30 = RIMAllocateAndLinkHidTLCInfo(Capabilities.UsagePage, Capabilities.Usage);
    v19 = 0LL;
    v9 = v30;
    if ( !v30 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v31 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v31;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(v33 + 19336),
          3,
          1,
          14,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          a1);
        v19 = 0LL;
      }
      v6 = a1;
      v3 = 1;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v36 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v36;
      WPP_RECORDER_AND_TRACE_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(v38 + 19336),
        4,
        1,
        15,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
        v9,
        Capabilities.UsagePage,
        Capabilities.Usage);
    }
  }
  if ( v3 )
  {
    v41 = a3;
LABEL_41:
    v42 = *(_QWORD *)&Capabilities.Usage;
    goto LABEL_42;
  }
LABEL_19:
  ++*(_DWORD *)(v9 + 20);
  Usage = Capabilities.Usage;
  UsagePage = Capabilities.UsagePage;
  *(_QWORD *)(a2 + 448) = v9;
  if ( UsagePage == 13 && ((unsigned __int16)(Usage - 1) <= 1u || (unsigned __int16)(Usage - 4) <= 1u) )
  {
    v41 = a3;
    *(_OWORD *)&v55.Usage = v56;
    *(_QWORD *)&v55.Reserved[11] = PreparsedData;
    *(__m128i *)&v55.Reserved[3] = v53;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(v6, a2, a3, v8, &v55) )
      v3 = 1;
    goto LABEL_41;
  }
  v55 = Capabilities;
  v41 = a3;
  if ( (unsigned int)RIMIsInteractiveCtrl(&v55) )
    *(_DWORD *)(a2 + 184) |= 0x100u;
LABEL_42:
  if ( v54 )
  {
    RIMUnlockExclusive(v54, v19, v42);
    v42 = *(_QWORD *)&Capabilities.Usage;
  }
  if ( !v3 )
  {
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v6, Capabilities.UsagePage, v42) )
    {
      v43 = *(_DWORD *)(a2 + 168) & 0xFFFCFFFF | 0x10000;
      *(_DWORD *)(a2 + 184) |= 0x40u;
      *(_DWORD *)(a2 + 168) = v43;
    }
    else if ( *(_DWORD *)(v6 + 1056) )
    {
      v44 = IsProcessHidRawInputSupported();
      v45 = Capabilities.Usage;
      v46 = Capabilities.UsagePage;
      *(_DWORD *)(a2 + 168) = ((v44 >= 0) << 17) | *(_DWORD *)(a2 + 168) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(_QWORD *)(v6 + 32), v46, v45) )
        goto LABEL_56;
    }
    v47 = RIMIDEAllocateInjectedInfo(v41);
    *(_QWORD *)(a2 + 368) = v47;
    if ( !v47 )
    {
LABEL_56:
      v3 = 1;
      goto LABEL_60;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v49 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v49 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    *(_QWORD *)(v49 + 808) |= 0x200000uLL;
    *(_QWORD *)(*(_QWORD *)(a2 + 368) + 88LL) = v49;
  }
LABEL_60:
  *(_DWORD *)(v41 + 136) = 0;
  HidP_FreeCollectionDescription(&DeviceDescription);
  DeviceDescription.CollectionDesc = 0LL;
  if ( !v3 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc(v8);
  if ( *(_QWORD *)(a2 + 456) )
  {
    RIMFreePointerDevice(v6);
    *(_QWORD *)(a2 + 456) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
