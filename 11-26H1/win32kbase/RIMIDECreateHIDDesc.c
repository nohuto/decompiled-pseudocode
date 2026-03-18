/*
 * XREFs of RIMIDECreateHIDDesc @ 0x14020749C
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1400795B0 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14007966C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     IsProcessHidRawInputSupported @ 0x140079B40 (IsProcessHidRawInputSupported.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x140130784 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x140130948 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMIDEFreeInjectedInfo @ 0x1401323A0 (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidDesc @ 0x1401323EC (RIMFreeHidDesc.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140132544 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401690CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1401830EC (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMIsInteractiveCtrl @ 0x140190358 (RIMIsInteractiveCtrl.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int128 v4; // xmm1
  __int64 v6; // r13
  __int128 v7; // xmm0
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned __int16 epi16; // r15
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  BOOL v17; // r14d
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // r15
  char v23; // r12
  char v24; // r13
  __int64 v25; // rax
  int v26; // r8d
  char v27; // r14
  __int64 v28; // rax
  int v29; // edx
  int v30; // r8d
  char v31; // r12
  char v32; // r13
  __int64 v33; // rax
  USAGE Usage; // cx
  USAGE UsagePage; // eax^2
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  int v46; // r8d
  int v47; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v53; // rdx
  int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-D8h]
  bool v56; // [rsp+60h] [rbp-A0h]
  __m128i v59; // [rsp+78h] [rbp-88h]
  char v60[8]; // [rsp+88h] [rbp-78h] BYREF
  struct _HIDP_CAPS v61; // [rsp+90h] [rbp-70h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-30h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+100h] [rbp+0h]
  struct _HIDP_CAPS Capabilities; // [rsp+110h] [rbp+10h] BYREF
  struct _HIDP_DEVICE_DESC DeviceDescription; // [rsp+150h] [rbp+50h] BYREF

  v3 = a3;
  v4 = *(_OWORD *)(a3 + 56);
  v6 = a1;
  *(_OWORD *)&DeviceDescription.CollectionDesc = *(_OWORD *)(a3 + 24);
  v7 = *(_OWORD *)(a3 + 40);
  v8 = 0LL;
  *(_OWORD *)&DeviceDescription.Dbg.ErrorCode = v4;
  *(_OWORD *)&DeviceDescription.ReportIDs = v7;
  *(_OWORD *)&DeviceDescription.Dbg.Args[3] = *(_OWORD *)(a3 + 72);
  memset(&Capabilities, 0, sizeof(Capabilities));
  v62 = *(_OWORD *)&DeviceDescription.CollectionDesc->UsagePage;
  v59 = *(__m128i *)&DeviceDescription.CollectionDesc->Reserved[11];
  PreparsedData = DeviceDescription.CollectionDesc->PreparsedData;
  epi16 = _mm_extract_epi16(v59, 5);
  if ( HidP_GetCaps(PreparsedData, &Capabilities) < 0 )
    goto LABEL_7;
  if ( !Capabilities.InputReportByteLength )
    goto LABEL_7;
  if ( !epi16 )
    goto LABEL_7;
  v13 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
  v8 = v13;
  if ( !v13 )
    goto LABEL_7;
  v14 = *(_OWORD *)&Capabilities.Usage;
  *(_QWORD *)(a2 + 440) = v13;
  *(_OWORD *)(v13 + 40) = v14;
  *(_OWORD *)(v13 + 56) = *(_OWORD *)&Capabilities.Reserved[3];
  *(_OWORD *)(v13 + 72) = *(_OWORD *)&Capabilities.Reserved[11];
  *(_OWORD *)(v13 + 88) = *(_OWORD *)&Capabilities.NumberInputValueCaps;
  v15 = Win32AllocPoolZInitImpl(256LL, *(unsigned __int16 *)(v13 + 44), 0x6A6E6952u);
  *(_QWORD *)(v8 + 24) = v15;
  if ( v15 )
  {
    v16 = Win32AllocPoolZInitImpl(256LL, epi16, 0x6A6E6952u);
    *(_QWORD *)(v8 + 16) = v16;
    v17 = v16 == 0;
  }
  else
  {
LABEL_7:
    v17 = 1;
  }
  UserSessionState = W32GetUserSessionState(v10, v9, v11);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)v60,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( !v17 )
  {
    memmove(*(void **)(v8 + 16), PreparsedData, epi16);
    *(_DWORD *)(v8 + 112) = 0x10000;
    *(_DWORD *)(v8 + 104) = epi16;
    *(_DWORD *)(v8 + 108) = 0;
    v22 = (__int64)RIMSearchHidTLCInfo(Capabilities.UsagePage, Capabilities.Usage, v19);
    if ( v22 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v20 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v20 & 1) == 0)
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(v20, 0, v21);
        WPP_RECORDER_AND_TRACE_SF_DDq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v24,
          *(_QWORD *)(v25 + 19368),
          v54,
          v55,
          0xDu,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
      }
    }
    else
    {
      v22 = RIMAllocateAndLinkHidTLCInfo(Capabilities.UsagePage, Capabilities.Usage, v21);
      if ( !v22 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v27 = 0;
        }
        v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v26);
          LOBYTE(v29) = v27;
          LOBYTE(v30) = v56;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v30,
            *(_QWORD *)(v28 + 19368),
            3,
            1,
            14,
            (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
            a1);
        }
        v17 = 1;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v31 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v26);
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v32,
          *(_QWORD *)(v33 + 19368),
          4u,
          1u,
          0xFu,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
          v22,
          Capabilities.UsagePage,
          Capabilities.Usage);
      }
      if ( v17 )
      {
        v6 = a1;
        v3 = a3;
        goto LABEL_43;
      }
    }
    ++*(_DWORD *)(v22 + 20);
    Usage = Capabilities.Usage;
    UsagePage = Capabilities.UsagePage;
    *(_QWORD *)(a2 + 448) = v22;
    if ( UsagePage == 13 && Usage != 3 && Usage && Usage < 6u )
    {
      v3 = a3;
      v6 = a1;
      *(_OWORD *)&v61.Usage = v62;
      *(_QWORD *)&v61.Reserved[11] = PreparsedData;
      *(__m128i *)&v61.Reserved[3] = v59;
      if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, a3, v8, &v61) )
        v17 = 1;
    }
    else
    {
      v61 = Capabilities;
      LOBYTE(v36) = RIMIsInteractiveCtrl(&v61);
      v6 = a1;
      v3 = a3;
      if ( v36 )
        *(_DWORD *)(a2 + 184) |= 0x100u;
    }
  }
LABEL_43:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v60);
  if ( v17 )
    goto LABEL_59;
  if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v6, Capabilities.UsagePage, Capabilities.Usage) )
  {
    v38 = *(_DWORD *)(a2 + 168) & 0xFFFCFFFF | 0x10000;
    *(_DWORD *)(a2 + 184) |= 0x40u;
    *(_DWORD *)(a2 + 168) = v38;
  }
  else if ( *(_DWORD *)(v6 + 1056) )
  {
    v45 = IsProcessHidRawInputSupported(v37);
    v46 = Capabilities.Usage;
    v47 = Capabilities.UsagePage;
    *(_DWORD *)(a2 + 168) = ((v45 >= 0) << 17) | *(_DWORD *)(a2 + 168) & 0xFFFDFFFF;
    if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(_QWORD *)(v6 + 32), v47, v46) )
    {
      v17 = 1;
      goto LABEL_59;
    }
  }
  v40 = Win32AllocPoolZInitImpl(256LL, 0x60uLL, 0x6A6E6952u);
  if ( v40 )
  {
    v41 = Win32AllocPoolZInitImpl(256LL, 8LL * *(unsigned int *)(v3 + 96), 0x6A6E6952u);
    if ( v41 )
    {
      *(_QWORD *)(v40 + 72) = v41;
      goto LABEL_54;
    }
    GreDeleteFastMutex((char *)v40, v42, v43, v44);
  }
  v40 = 0LL;
LABEL_54:
  *(_QWORD *)(a2 + 368) = v40;
  if ( v40 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v39);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *(_QWORD *)(CurrentProcessWin32Process + 808) |= 0x200000uLL;
    *(_QWORD *)(*(_QWORD *)(a2 + 368) + 88LL) = CurrentProcessWin32Process;
  }
  else
  {
    v17 = 1;
  }
LABEL_59:
  *(_DWORD *)(v3 + 128) = 0;
  HidP_FreeCollectionDescription(&DeviceDescription);
  DeviceDescription.CollectionDesc = 0LL;
  if ( !v17 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc((_WORD *)v8, v49, v50, v51);
  v53 = *(_QWORD *)(a2 + 456);
  if ( v53 )
  {
    RIMFreePointerDevice(v6, v53);
    *(_QWORD *)(a2 + 456) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2, v53, v50, v51);
  return 0LL;
}
