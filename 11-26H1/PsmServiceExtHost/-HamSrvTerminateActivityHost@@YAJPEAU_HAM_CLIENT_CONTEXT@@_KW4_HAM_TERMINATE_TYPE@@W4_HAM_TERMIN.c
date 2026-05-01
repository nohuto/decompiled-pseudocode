/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18000FD5C
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x18006AD00 (HamRpcSrvTerminateActivityHost.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180011700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012068 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateActivityHost(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r14d
  unsigned int v10; // r12d
  __int64 *v11; // r13
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r14
  int v18; // edi
  unsigned __int64 v19; // rbx
  int v20; // eax
  unsigned __int64 v21; // rax
  int v22; // edi
  DWORD v23; // r14d
  unsigned int v24; // r12d
  __int64 v25; // rsi
  _QWORD *Value; // rdi
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v30; // rax
  int v32; // eax
  unsigned int v33; // eax
  struct _HAM_ACTIVITY *FirstActivity; // r8
  int v35; // r9d
  int *v36; // r10
  struct _HAM_ACTIVITY *v37; // r11
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // [rsp+40h] [rbp-C0h] BYREF
  char v41; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v42; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v49[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+130h] [rbp+30h] BYREF
  void *v55; // [rsp+140h] [rbp+40h]
  int v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  __int64 *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  char *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  unsigned int *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  __int64 *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]

  v7 = a3;
  v40 = a3;
  v46 = a2;
  v43 = a4;
  v10 = a4;
  memset_0(v49, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v51 = &unk_1800CEC5A;
    UserData.Reserved = 2;
    v52 = 26;
    v53 = 1;
    v42 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v11 = a5;
  if ( a5 )
    v44 = *a5;
  else
    v44 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v49);
  if ( !HampClientIsActive((struct _HAM_CLIENT_CONTEXT *)a1) )
  {
    v22 = -1073741661;
    goto LABEL_30;
  }
  if ( v7 - 1 > 2 || v10 - 1 > 0x1AFE || a5 && !*a5 )
  {
    v22 = -1073741811;
    goto LABEL_30;
  }
  if ( v7 == 2 )
  {
    v33 = v10 & 0xFFFFFF00;
    if ( (v10 & 0xFFFFFF00) != 0x100 && v33 != 3328 && v33 != 5120 )
    {
      v22 = -1073741776;
      goto LABEL_30;
    }
  }
  else
  {
    v12 = a6;
    if ( a6 )
    {
      v22 = -1073741776;
      goto LABEL_31;
    }
  }
  v13 = a7;
  if ( (a7 & 1) != a7 )
  {
    v12 = a6;
    v22 = -1073741580;
    goto LABEL_51;
  }
  v14 = *(unsigned __int8 *)(a1 + 164);
  v15 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  v45 = a2;
  v16 = v15 - 48 * v14 + 424;
  v17 = v16 + 16;
  RtlAcquireSRWLockShared(v16 + 16);
  v18 = *(_BYTE *)(v16 + 8) & 1;
  if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
  {
    if ( !*(_QWORD *)v16 )
      goto LABEL_66;
    v19 = *(_QWORD *)v16 ^ v16;
  }
  else
  {
    v19 = *(_QWORD *)v16;
  }
  if ( v19 )
  {
    do
    {
      v20 = HampActCompareByHandle(&v45, (void *)v19);
      if ( v20 < 0 )
      {
        v21 = *(_QWORD *)v19;
      }
      else
      {
        if ( v20 <= 0 )
          break;
        v21 = *(_QWORD *)(v19 + 8);
      }
      if ( v18 && v21 )
        v19 ^= v21;
      else
        v19 = v21;
    }
    while ( v19 );
    v11 = a5;
    if ( v19 )
    {
      if ( *(_QWORD *)(v19 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_26;
      }
LABEL_66:
      v19 = 0LL;
    }
  }
LABEL_26:
  RtlReleaseSRWLockShared(v17);
  if ( !v19 )
  {
LABEL_29:
    LOBYTE(v7) = v40;
    v22 = -1073741275;
LABEL_30:
    v12 = a6;
LABEL_31:
    v13 = a7;
    goto LABEL_51;
  }
  if ( *(_QWORD *)(v19 + 64) != a1 )
  {
    CemRcObjectDereference(v19);
    goto LABEL_29;
  }
  v23 = HampLockTrackerId;
  v24 = 0;
  v25 = *(_QWORD *)(v19 + 80);
  v42 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(v25);
  if ( *(_BYTE *)(v19 + 562) == 4 )
  {
    v22 = -1073741275;
  }
  else if ( *(_QWORD *)(v19 + 512) )
  {
    if ( (*(_DWORD *)(v19 + 552) & 8) == 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        if ( (*(_DWORD *)(v19 + 112) & 0x10000) == 0 )
        {
          v22 = -1073741580;
          goto LABEL_41;
        }
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v25);
        while ( FirstActivity )
        {
          if ( FirstActivity != (struct _HAM_ACTIVITY *)v19
            && *((_QWORD *)FirstActivity + 64) == *(_QWORD *)(v25 + 808)
            && (*((_DWORD *)FirstActivity + 28) & 0x10000) != 0
            && (*((_BYTE *)FirstActivity + 552) & 0x10) == 0 )
          {
            v22 = -1058275328;
            *v36 = v35 | 0x10;
            goto LABEL_41;
          }
          v38 = *((_QWORD *)FirstActivity + 12);
          v39 = *((_QWORD *)FirstActivity + 10);
          FirstActivity = v37;
          if ( v38 != v39 + 608 )
            FirstActivity = (struct _HAM_ACTIVITY *)(v38 - 96);
        }
      }
      v12 = a6;
      LOBYTE(v7) = v40;
      v32 = HampHostQueueTerminateEx(v25, v40, v43, *(_QWORD *)(v19 + 64), 1, a6, v11, &v42);
      v24 = v42;
      v22 = v32;
      if ( v32 >= 0 )
        v22 = 0;
      goto LABEL_42;
    }
    v22 = -1058275327;
  }
  else
  {
    v22 = -1073741436;
  }
LABEL_41:
  v12 = a6;
  LOBYTE(v7) = v40;
LABEL_42:
  if ( HampLockTrackerId != -1 )
  {
    v27 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v28 = *v27;
    if ( (*v27 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v27[2]-- == 1 )
      *v27 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v25 + 8) = 0;
  RtlReleaseSRWLockExclusive(v25);
  if ( v24 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v25 + 704));
  if ( v22 >= 0 )
    v22 = 0;
  CemRcObjectDereference(v19);
  v13 = a7;
  v10 = v43;
LABEL_51:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v43 = v13;
    v30 = 0LL;
    v42 = v12;
    if ( v11 )
      v30 = *v11;
    v48 = v30;
    *(_QWORD *)&EventDescriptor.Id = v44;
    v72 = &v43;
    v70 = &v42;
    v68 = &v48;
    p_EventDescriptor = &EventDescriptor;
    v64 = &v40;
    v62 = &v41;
    v60 = &v46;
    v58 = &v45;
    v54.Ptr = (ULONGLONG)off_1800E12B8;
    v73 = 4LL;
    v71 = 4LL;
    v69 = 8LL;
    v67 = 8LL;
    v65 = 4LL;
    v61 = 8LL;
    v59 = 4LL;
    *(_QWORD *)&UserData.Size = 8LL;
    v40 = v10;
    v41 = v7;
    LODWORD(v45) = v22;
    v63 = 1LL;
    UserData.Ptr = 0x2040B000000LL;
    v54.Size = *(unsigned __int16 *)off_1800E12B8;
    v55 = &unk_1800CE042;
    v54.Reserved = 2;
    v56 = 138;
    v57 = 1;
    LODWORD(v44) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, (PCEVENT_DESCRIPTOR)&UserData, 0LL, 0LL, 0xAu, &v54);
  }
  return (unsigned int)v22;
}
