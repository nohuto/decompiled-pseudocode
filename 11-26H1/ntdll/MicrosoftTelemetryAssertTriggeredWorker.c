/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredUM @ 0x180107A00 (MicrosoftTelemetryAssertTriggeredUM.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 *     EtwEventWriteTransfer @ 0x18005A770 (EtwEventWriteTransfer.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 *     EtwEventProviderEnabled @ 0x18008D8A0 (EtwEventProviderEnabled.c)
 *     GetImageTuple @ 0x18008E3A0 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x18008EDEC (_tlgCreate1Sz_char.c)
 *     toupper @ 0x18012D5E0 (toupper.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016E69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // r14
  BOOL v4; // r13d
  unsigned int v5; // r15d
  __int64 v6; // r8
  __int64 v7; // rbx
  char v8; // r12
  __int64 v9; // rdi
  unsigned int v10; // r14d
  REGHANDLE v11; // rcx
  _QWORD *Heap_0; // rax
  __int64 v13; // rax
  int v14; // ecx
  const char *v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // r8
  REGHANDLE v18; // rcx
  const char *v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  char v26; // r8
  unsigned int v27; // r15d
  _BYTE *v28; // r12
  unsigned int v29; // ecx
  char v30; // dl
  __int64 v31; // rax
  LONG v32; // eax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  char ImageTuple; // [rsp+38h] [rbp-C8h]
  unsigned int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v43; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v46; // [rsp+80h] [rbp-80h]
  int v47; // [rsp+88h] [rbp-78h]
  int v48; // [rsp+8Ch] [rbp-74h]
  LARGE_INTEGER *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  _DWORD *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  int *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  int *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  _BYTE v57[16]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  _QWORD v62[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  int *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  BOOL *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER *p_DelayInterval; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  _BYTE v71[272]; // [rsp+150h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v34 = 0;
  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v7 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( g_MicrosoftTelemetryAssertsTriggeredList )
  {
    while ( *(_QWORD *)v7 != v2 )
    {
      v7 = *(_QWORD *)(v7 + 24);
      if ( !v7 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
    v7 = (__int64)Heap_0;
    if ( !Heap_0 )
      goto LABEL_17;
    *Heap_0 = v2;
    v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    v14 = ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - 60001;
    *(_QWORD *)(v7 + 12) = 0LL;
    *(_DWORD *)(v7 + 8) = v14;
    *(_QWORD *)(v7 + 24) = v13;
    g_MicrosoftTelemetryAssertsTriggeredList = v7;
  }
  ++*(_DWORD *)(v7 + 12);
  ++*(_DWORD *)(v7 + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(v7 + 8) > 0xEA60 )
  {
    v33 = 0;
    *(_DWORD *)(v7 + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v36 = 0;
    ImageTuple = GetImageTuple(v1, v71, v6, &v33, &v36);
    v8 = ImageTuple;
    if ( ImageTuple && v2 >= v1 && (v25 = v1 + v36, v25 > v1) && v2 <= v25 )
    {
      v10 = v2 - v1;
      v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
      v10 = 0;
    }
    if ( !*(_QWORD *)(a1 + 32) && ImageTuple )
      *(_QWORD *)(a1 + 32) = v71;
    if ( *(_DWORD *)(v7 + 16) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C4768) )
    {
      if ( dword_1801C4768 )
      {
        v26 = v71[0];
        v4 = 1;
        v34 = 1;
        v27 = 0;
        *(_DWORD *)&EventDescriptor.Id = 488056742;
        *(_DWORD *)&EventDescriptor.Level = 1311216328;
        EventDescriptor.Keyword = 0x9D548C458B0F69BCuLL;
        if ( v71[0] )
        {
          v28 = v71;
          do
          {
            *((_BYTE *)&EventDescriptor.Id + v9) += toupper(v26);
            v29 = v27 + 1;
            v30 = v28[1];
            v31 = v9 + 1;
            v27 = 0;
            ++v28;
            v26 = v30;
            if ( v29 < 0x10 )
              v27 = v29;
            v9 = 0LL;
            if ( v29 < 0x10 )
              v9 = v31;
          }
          while ( v30 );
          v8 = ImageTuple;
        }
        DelayInterval.QuadPart = 0LL;
        v32 = EtwNotificationRegister((LPCGUID)&EventDescriptor, 3u, 0LL, 0LL, (PREGHANDLE)&DelayInterval.QuadPart);
        if ( v32 )
        {
          RtlSetLastWin32Error(v32);
        }
        else
        {
          v4 = EtwEventProviderEnabled(DelayInterval.QuadPart, 0, 0LL) == 0;
          EtwNotificationUnregister(DelayInterval.QuadPart, 0LL);
        }
      }
      v11 = qword_1801C4788;
      qword_1801C4788 = 0LL;
      dword_1801C4768 = 0;
      EtwNotificationUnregister(v11, 0LL);
      v5 = v34;
    }
    if ( !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C47A0) )
    {
      if ( *(_BYTE *)(a1 + 24) )
      {
        if ( (unsigned int)dword_1801C47A0 > 5
          && (qword_1801C47B0 & 0x400000000000LL) != 0
          && (qword_1801C47B8 & 0x400000000000LL) == qword_1801C47B8 )
        {
          v38 = *(_DWORD *)a1;
          v49 = (LARGE_INTEGER *)&v38;
          v51 = &v39;
          v50 = 4LL;
          v39 = v10;
          v52 = 4LL;
          v54 = 4LL;
          if ( v8 )
          {
            v53 = &v33;
            v34 = v36;
          }
          else
          {
            v33 = 0;
            v53 = &v33;
            v34 = 0;
          }
          v56 = 4LL;
          v55 = &v34;
          v19 = v71;
          if ( !v8 )
            v19 = "<unknown>";
          tlgCreate1Sz_char(v57, v19);
          v20 = *(_DWORD *)(v7 + 12);
          v21 = *(_QWORD *)(a1 + 32);
          v58 = &v36;
          v40 = *(_DWORD *)(v7 + 16);
          v36 = v20;
          v60 = &v40;
          v59 = 4LL;
          v61 = 4LL;
          tlgCreate1Sz_char(v62, v21);
          v22 = *(_DWORD *)(a1 + 40);
          v63 = (unsigned int *)&v41;
          v42 = *(_DWORD *)(a1 + 44);
          v65 = &v42;
          v67 = &v43;
          p_DelayInterval = &DelayInterval;
          v41 = v22;
          v64 = 4LL;
          v66 = 4LL;
          v43 = v4;
          v68 = 4LL;
          DelayInterval.LowPart = v5;
          v70 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (__int64)&dword_1801C47A0,
            (unsigned __int8 *)dword_18019B134,
            v23,
            v24,
            0xEu,
            &UserData);
        }
      }
      else if ( (unsigned int)dword_1801C47A0 > 5
             && (qword_1801C47B0 & 0x400000000000LL) != 0
             && (qword_1801C47B8 & 0x400000000000LL) == qword_1801C47B8 )
      {
        DelayInterval.LowPart = *(_DWORD *)a1;
        v49 = &DelayInterval;
        v51 = &v43;
        v50 = 4LL;
        v43 = v10;
        v52 = 4LL;
        v54 = 4LL;
        if ( v8 )
        {
          v53 = &v33;
          v34 = v36;
        }
        else
        {
          v33 = 0;
          v53 = &v33;
          v34 = 0;
        }
        v56 = 4LL;
        v55 = &v34;
        v15 = v71;
        if ( !v8 )
          v15 = "<unknown>";
        tlgCreate1Sz_char(v57, v15);
        v16 = *(_DWORD *)(v7 + 12);
        v58 = (unsigned int *)&v42;
        v41 = *(_DWORD *)(v7 + 16);
        v60 = &v41;
        v62[0] = &v40;
        v63 = &v39;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (unsigned __int64)off_1801C47A8;
        v42 = v16;
        EventDescriptor.Keyword = v17;
        v59 = 4LL;
        v61 = 4LL;
        v40 = v4;
        v62[1] = 4LL;
        v39 = v5;
        v64 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_1801C47A8;
        v46 = &unk_18019B1FE;
        UserData.Reserved = 2;
        v47 = 118;
        v48 = 1;
        v38 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(qword_1801C47C0, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
      }
      v18 = qword_1801C47C0;
      qword_1801C47C0 = 0LL;
      dword_1801C47A0 = 0;
      EtwNotificationUnregister(v18, 0LL);
    }
    if ( v5 && v4 && *(_BYTE *)(a1 + 48) )
    {
      DelayInterval.QuadPart = -10000000LL;
      ZwDelayExecution(0, &DelayInterval);
    }
    *(_DWORD *)(v7 + 12) = 0;
  }
LABEL_17:
  RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
