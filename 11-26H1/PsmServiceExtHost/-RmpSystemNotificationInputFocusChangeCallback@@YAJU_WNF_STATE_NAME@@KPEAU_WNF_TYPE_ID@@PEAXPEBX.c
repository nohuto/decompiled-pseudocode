/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18000DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000E1EC (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z @ 0x18000E22C (-RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        int *a5)
{
  int v7; // eax
  char i; // cl
  void *v9; // rbx
  void *v10; // rdi
  int v11; // edi
  char *v12; // rbx
  char v13; // cl
  bool v15; // dl
  bool v16; // al
  int v17; // eax
  bool v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _WNF_STATE_NAME Buf1; // [rsp+38h] [rbp-C8h] BYREF
  __int64 Buf2; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[144]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+40h] BYREF
  void *v30; // [rsp+150h] [rbp+50h]
  int v31; // [rsp+158h] [rbp+58h]
  int v32; // [rsp+15Ch] [rbp+5Ch]
  struct _WNF_STATE_NAME *p_Buf1; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  int *v35; // [rsp+170h] [rbp+70h]
  __int64 v36; // [rsp+178h] [rbp+78h]
  int *v37; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]
  int *v39; // [rsp+190h] [rbp+90h]
  __int64 v40; // [rsp+198h] [rbp+98h]
  bool *v41; // [rsp+1A0h] [rbp+A0h]
  __int64 v42; // [rsp+1A8h] [rbp+A8h]

  memset_0(v28, 0, 0x88uLL);
  ProcessHandle = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  RmpSystemNotificationAcquireInputFocusLock((struct _RM_SYSTEM_NOTIFICATION_CONTEXT *)(a4 + 688));
  Buf2 = WNF_SHEL_FOCUS_CHANGE;
  Buf1 = a1;
  if ( !memcmp_0(&Buf1, &Buf2, 8uLL) )
  {
    if ( a5 )
      v7 = *a5;
    else
      v7 = 0;
    if ( v7 != *((_DWORD *)a4 + 184) )
    {
      *((_DWORD *)a4 + 184) = v7;
LABEL_6:
      a4[756] |= 1u;
    }
  }
  else
  {
    Buf2 = WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE;
    Buf1 = a1;
    if ( !memcmp_0(&Buf1, &Buf2, 8uLL) )
    {
      if ( a5 )
        v15 = *a5 == 1;
      else
        v15 = 0;
      if ( v15 != ((a4[756] & 4) != 0) )
        a4[756] = (4 * v15) | a4[756] & 0xFB | 1;
    }
    else
    {
      if ( a5 )
        v17 = a5[4];
      else
        v17 = 0;
      if ( v17 != *((_DWORD *)a4 + 185) )
      {
        *((_DWORD *)a4 + 185) = v17;
        goto LABEL_6;
      }
    }
  }
  if ( (a4[756] & 3) == 1 )
  {
    for ( i = a4[756] | 2; (i & 1) != 0; i = a4[756] )
    {
      v11 = *((_DWORD *)a4 + 188);
      v12 = a4 + 740;
      v13 = i & 0xFE;
      a4[756] = v13;
      if ( (v13 & 4) == 0 )
        v12 = a4 + 736;
      v9 = (void *)*(unsigned int *)v12;
      if ( (_DWORD)v9 != v11 )
      {
        if ( !(_DWORD)v9
          || (*(_QWORD *)&ObjectAttributes.Length = 48LL,
              ClientId.UniqueThread = 0LL,
              ClientId.UniqueProcess = v9,
              memset(&ObjectAttributes.RootDirectory, 0, 40),
              NtOpenProcess(&ProcessHandle, 0x2000u, &ObjectAttributes, &ClientId) >= 0)
          || (LODWORD(v9) = 0, v11) )
        {
          if ( (unsigned int)dword_1800E1278 > 5
            && (byte_1800E1288 & 1) != 0
            && (qword_1800E1290 & 1) == qword_1800E1290 )
          {
            v16 = (a4[756] & 4) != 0;
            Buf1.Data[0] = (unsigned int)v9;
            v18 = v16;
            v21 = *((_DWORD *)a4 + 185);
            v22 = *((_DWORD *)a4 + 184);
            v23 = *((_DWORD *)a4 + 188);
            v41 = &v18;
            v39 = &v21;
            v37 = &v22;
            v35 = &v23;
            p_Buf1 = &Buf1;
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = (ULONGLONG)off_1800E1280;
            v42 = 1LL;
            v40 = 4LL;
            v38 = 4LL;
            v36 = 4LL;
            v34 = 4LL;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_1800E1280;
            v30 = &unk_1800D2F0D;
            UserData.Reserved = 2;
            v31 = 104;
            v32 = 1;
            LODWORD(Buf2) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
          v10 = (void *)*((_QWORD *)a4 + 93);
          *((_QWORD *)a4 + 93) = ProcessHandle;
          *((_DWORD *)a4 + 188) = (_DWORD)v9;
          *((_DWORD *)a4 + 190) = 0;
          ProcessHandle = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 704);
          if ( v10 )
            NtClose(v10);
          RtlAcquireSRWLockExclusive(a4 + 2280);
          *((_DWORD *)a4 + 572) = GetCurrentThreadId();
          RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)(a4 + 2208));
          *((_DWORD *)a4 + 572) = 0;
          RtlReleaseSRWLockExclusive(a4 + 2280);
          RtlAcquireSRWLockExclusive(a4 + 704);
          *((_DWORD *)a4 + 190) = GetCurrentThreadId();
        }
      }
    }
    a4[756] = i & 0xFD;
  }
  *((_DWORD *)a4 + 190) = 0;
  RtlReleaseSRWLockExclusive(a4 + 704);
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
