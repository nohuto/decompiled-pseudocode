/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18005AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::OnAcquired(HAM_ACTIVITY_RM_CONTEXT *this, void *a2)
{
  DWORD v4; // edi
  __int64 v5; // r14
  _QWORD *Value; // rbx
  __int64 v7; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  int v9; // eax
  char v10; // di
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v15; // rcx
  char v17; // [rsp+30h] [rbp-89h] BYREF
  char v18; // [rsp+31h] [rbp-88h] BYREF
  char v19; // [rsp+32h] [rbp-87h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-85h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  void *v22; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  void *v24; // [rsp+60h] [rbp-59h]
  int v25; // [rsp+68h] [rbp-51h]
  int v26; // [rsp+6Ch] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+70h] [rbp-49h] BYREF
  void *v28; // [rsp+80h] [rbp-39h]
  int v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+8Ch] [rbp-2Dh]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+90h] [rbp-29h]
  __int64 v32; // [rsp+98h] [rbp-21h]
  char *v33; // [rsp+A0h] [rbp-19h]
  __int64 v34; // [rsp+A8h] [rbp-11h]
  char *v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp-1h]
  char *v37; // [rsp+C0h] [rbp+7h]
  __int64 v38; // [rsp+C8h] [rbp+Fh]
  void **v39; // [rsp+D0h] [rbp+17h]
  __int64 v40; // [rsp+D8h] [rbp+1Fh]

  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v24 = &unk_1800D0AF3;
    UserData.Reserved = 2;
    v25 = 30;
    v26 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = HampLockTrackerId;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( a2 == *((void **)this + 2) )
  {
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 562) == 2 )
    {
      RtlQueryPerformanceCounter(*(_QWORD *)(v7 + 528) + 8LL);
      v8 = *(struct _RM_HAM_ACTIVITY_HOST **)(v7 + 80);
      *(_BYTE *)(v7 + 563) = 1;
      HampHostUpdateActivityState(v8);
      v9 = HampActTryStart(v7);
      v10 = v9;
      if ( v9 )
      {
        if ( (unsigned int)(v9 - 9) <= 6 )
          HampHostCheckQueueStateWorker(*(struct _RM_HAM_ACTIVITY_HOST **)(v7 + 80), 0);
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      v10 = 4;
    }
  }
  else
  {
    v10 = 1;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v12[2]-- == 1 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v11 + 8) = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v15 = *((_QWORD *)this + 1);
    v22 = a2;
    v40 = 8LL;
    v32 = 8LL;
    v17 = *(_BYTE *)(v15 + 563);
    v18 = *(_BYTE *)(v15 + 562);
    v19 = v10;
    *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)(v15 + 40);
    v39 = &v22;
    v37 = &v17;
    v35 = &v18;
    v33 = &v19;
    p_EventDescriptor = &EventDescriptor;
    v27.Ptr = (ULONGLONG)off_1800E12B8;
    *(_QWORD *)&UserData.Size = 8LL;
    v38 = 1LL;
    v36 = 1LL;
    v34 = 1LL;
    UserData.Ptr = 0x2040B000000LL;
    v27.Size = *(unsigned __int16 *)off_1800E12B8;
    v28 = &unk_1800D0B43;
    v27.Reserved = 2;
    v29 = 92;
    v30 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, (PCEVENT_DESCRIPTOR)&UserData, 0LL, 0LL, 7u, &v27);
  }
  return 0LL;
}
