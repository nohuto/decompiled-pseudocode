/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredUM @ 0x180108000 (MicrosoftTelemetryAssertTriggeredUM.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18000F040 (EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 *     EtwEventProviderEnabled @ 0x18006D450 (EtwEventProviderEnabled.c)
 *     GetImageTuple @ 0x18006DF50 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x18006E99C (_tlgCreate1Sz_char.c)
 *     toupper @ 0x18012D870 (toupper.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

struct _TEB *__fastcall MicrosoftTelemetryAssertTriggeredWorker(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r14
  BOOL v5; // r13d
  int v6; // r15d
  __int64 v7; // r8
  __int64 v8; // rbx
  char v9; // r12
  __int64 v10; // rdi
  int v11; // r14d
  __int64 v12; // rcx
  _QWORD *Heap_0; // rax
  __int64 v15; // rax
  int v16; // ecx
  const char *v17; // rdx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rcx
  const char *v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  char v28; // r8
  unsigned int v29; // r15d
  _BYTE *v30; // r12
  unsigned int v31; // ecx
  char v32; // dl
  __int64 v33; // rax
  unsigned int v34; // eax
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+34h] [rbp-CCh] BYREF
  char ImageTuple; // [rsp+38h] [rbp-C8h]
  unsigned int v38; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+54h] [rbp-ACh] BYREF
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v45; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _SLIST_ENTRY v46; // [rsp+60h] [rbp-A0h] BYREF
  void *v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+7Ch] [rbp-84h]
  void *v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h]
  int v52; // [rsp+8Ch] [rbp-74h]
  unsigned int *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  BOOL *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  int *v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  int *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  _BYTE v61[16]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  int *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  _QWORD v66[2]; // [rsp+100h] [rbp+0h] BYREF
  int *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  int *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  BOOL *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  __int64 *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  _BYTE v75[272]; // [rsp+150h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v36 = 0;
  v5 = 0;
  v6 = 0;
  RtlAcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock, a2);
  v8 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( g_MicrosoftTelemetryAssertsTriggeredList )
  {
    while ( *(_QWORD *)v8 != v3 )
    {
      v8 = *(_QWORD *)(v8 + 24);
      if ( !v8 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    Heap_0 = (_QWORD *)RtlAllocateHeap_0();
    v8 = (__int64)Heap_0;
    if ( !Heap_0 )
      return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
    *Heap_0 = v3;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    v16 = ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - 60001;
    *(_QWORD *)(v8 + 12) = 0LL;
    *(_DWORD *)(v8 + 8) = v16;
    *(_QWORD *)(v8 + 24) = v15;
    g_MicrosoftTelemetryAssertsTriggeredList = v8;
  }
  ++*(_DWORD *)(v8 + 12);
  ++*(_DWORD *)(v8 + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(v8 + 8) > 0xEA60 )
  {
    v35 = 0;
    *(_DWORD *)(v8 + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v38 = 0;
    ImageTuple = GetImageTuple(v2, v75, v7, &v35, &v38);
    v9 = ImageTuple;
    if ( ImageTuple && v3 >= v2 && (v27 = v2 + v38, v27 > v2) && v3 <= v27 )
    {
      v11 = v3 - v2;
      v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
      v11 = 0;
    }
    if ( !*(_QWORD *)(a1 + 32) && ImageTuple )
      *(_QWORD *)(a1 + 32) = v75;
    if ( *(_DWORD *)(v8 + 16) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C5768) )
    {
      if ( dword_1801C5768 )
      {
        v28 = v75[0];
        v5 = 1;
        v36 = 1;
        v29 = 0;
        v46.Next = (_SLIST_ENTRY *)0x4E2792C81D1727A6LL;
        *((_QWORD *)&v46.Next + 1) = 0x9D548C458B0F69BCuLL;
        if ( v75[0] )
        {
          v30 = v75;
          do
          {
            *((_BYTE *)&v46.Next + v10) += toupper(v28);
            v31 = v29 + 1;
            v32 = v30[1];
            v33 = v10 + 1;
            v29 = 0;
            ++v30;
            v28 = v32;
            if ( v31 < 0x10 )
              v29 = v31;
            v10 = 0LL;
            if ( v31 < 0x10 )
              v10 = v33;
          }
          while ( v32 );
          v9 = ImageTuple;
        }
        v39 = 0LL;
        v34 = EtwNotificationRegister(&v46, 3, 0LL, 0LL, (unsigned __int64 *)&v39);
        if ( v34 )
        {
          RtlSetLastWin32Error(v34);
        }
        else
        {
          v5 = EtwEventProviderEnabled(v39, 0, 0LL) == 0;
          EtwNotificationUnregister(v39, 0LL);
        }
      }
      v12 = qword_1801C5788;
      qword_1801C5788 = 0LL;
      dword_1801C5768 = 0;
      EtwNotificationUnregister(v12, 0LL);
      v6 = v36;
    }
    if ( !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C57A0) )
    {
      if ( *(_BYTE *)(a1 + 24) )
      {
        if ( (unsigned int)dword_1801C57A0 > 5
          && (qword_1801C57B0 & 0x400000000000LL) != 0
          && (qword_1801C57B8 & 0x400000000000LL) == qword_1801C57B8 )
        {
          v40 = *(_DWORD *)a1;
          v53 = &v40;
          v55 = &v41;
          v54 = 4LL;
          v41 = v11;
          v56 = 4LL;
          v58 = 4LL;
          if ( v9 )
          {
            v57 = &v35;
            v36 = v38;
          }
          else
          {
            v35 = 0;
            v57 = &v35;
            v36 = 0;
          }
          v60 = 4LL;
          v59 = &v36;
          v21 = v75;
          if ( !v9 )
            v21 = "<unknown>";
          tlgCreate1Sz_char(v61, v21);
          v22 = *(_DWORD *)(v8 + 12);
          v23 = *(_QWORD *)(a1 + 32);
          v62 = &v38;
          v42 = *(_DWORD *)(v8 + 16);
          v38 = v22;
          v64 = &v42;
          v63 = 4LL;
          v65 = 4LL;
          tlgCreate1Sz_char(v66, v23);
          v24 = *(_DWORD *)(a1 + 40);
          v67 = &v43;
          v44 = *(_DWORD *)(a1 + 44);
          v69 = &v44;
          v71 = &v45;
          v73 = &v39;
          v43 = v24;
          v68 = 4LL;
          v70 = 4LL;
          v45 = v5;
          v72 = 4LL;
          LODWORD(v39) = v6;
          v74 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801C57A0, byte_18019C11C, v25, v26, 14, (__int64)&v47);
        }
      }
      else if ( (unsigned int)dword_1801C57A0 > 5
             && (qword_1801C57B0 & 0x400000000000LL) != 0
             && (qword_1801C57B8 & 0x400000000000LL) == qword_1801C57B8 )
      {
        LODWORD(v39) = *(_DWORD *)a1;
        v53 = (unsigned int *)&v39;
        v55 = &v45;
        v54 = 4LL;
        v45 = v11;
        v56 = 4LL;
        v58 = 4LL;
        if ( v9 )
        {
          v57 = &v35;
          v36 = v38;
        }
        else
        {
          v35 = 0;
          v57 = &v35;
          v36 = 0;
        }
        v60 = 4LL;
        v59 = &v36;
        v17 = v75;
        if ( !v9 )
          v17 = "<unknown>";
        tlgCreate1Sz_char(v61, v17);
        v18 = *(_DWORD *)(v8 + 12);
        v62 = (unsigned int *)&v44;
        v43 = *(_DWORD *)(v8 + 16);
        v64 = &v43;
        v66[0] = &v42;
        v67 = &v41;
        v47 = off_1801C57A8;
        v44 = v18;
        *((_QWORD *)&v46.Next + 1) = v19;
        v63 = 4LL;
        v65 = 4LL;
        v42 = v5;
        v66[1] = 4LL;
        v41 = v6;
        v68 = 4LL;
        v46.Next = (_SLIST_ENTRY *)0x50B000000LL;
        v48 = *(unsigned __int16 *)off_1801C57A8;
        v50 = &unk_18019C1E6;
        v49 = 2;
        v51 = 118;
        v52 = 1;
        v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(qword_1801C57C0, (__int128 *)&v46, 0LL, 0LL, 11, (__int64)&v47);
      }
      v20 = qword_1801C57C0;
      qword_1801C57C0 = 0LL;
      dword_1801C57A0 = 0;
      EtwNotificationUnregister(v20, 0LL);
    }
    if ( v6 && v5 && *(_BYTE *)(a1 + 48) )
    {
      v39 = -10000000LL;
      ZwDelayExecution(0LL, &v39);
    }
    *(_DWORD *)(v8 + 12) = 0;
  }
  return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
