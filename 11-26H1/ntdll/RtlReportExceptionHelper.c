/*
 * XREFs of RtlReportExceptionHelper @ 0x18007F3E0
 * Callers:
 *     RtlpPossibleDeadlock @ 0x18006A270 (RtlpPossibleDeadlock.c)
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 * Callees:
 *     ReportExceptionInternal @ 0x18007F9F4 (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x18007FB30 (WerpProcessId.c)
 *     WerpThreadId @ 0x18007FB80 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x18007FBD0 (WerpWaitForCrashReporting.c)
 *     WerpSetProcessFaultInformation @ 0x180111320 (WerpSetProcessFaultInformation.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportExceptionHelper(_OWORD *a1, _OWORD *a2, int a3, __int64 a4)
{
  HANDLE v6; // r15
  int v7; // edi
  HANDLE v8; // r13
  char *v9; // r14
  NTSTATUS v10; // esi
  HANDLE v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // esi
  int v14; // eax
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rcx
  HANDLE TargetHandle; // [rsp+50h] [rbp-118h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-110h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-108h] BYREF
  int v22; // [rsp+68h] [rbp-100h]
  HANDLE SectionHandle; // [rsp+70h] [rbp-F8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-E8h] BYREF
  PVOID v26; // [rsp+88h] [rbp-E0h]
  HANDLE v27; // [rsp+90h] [rbp-D8h]
  LARGE_INTEGER MaximumSize; // [rsp+98h] [rbp-D0h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-C8h] BYREF
  _OWORD *v30; // [rsp+A8h] [rbp-C0h]
  __int64 v31; // [rsp+B0h] [rbp-B8h]
  _QWORD v32[4]; // [rsp+B8h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES v34; // [rsp+108h] [rbp-60h] BYREF

  v31 = a4;
  v30 = a1;
  v6 = 0LL;
  Handle = 0LL;
  EventHandle = 0LL;
  v27 = 0LL;
  TargetHandle = 0LL;
  v20 = 0LL;
  memset(v32, 0, sizeof(v32));
  v7 = 0;
  v26 = 0LL;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL);
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 2;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    EventHandle = 0LL;
  }
  else
  {
    v32[0] = EventHandle;
    v7 = 1;
    v22 = 1;
  }
  memset(&v34.Length + 1, 0, 20);
  memset(&v34.Attributes + 1, 0, 20);
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v34.Length = 48;
  v34.Attributes = 2;
  MaximumSize.QuadPart = 1648LL;
  v10 = NtCreateSection(&SectionHandle, 0xF0007u, &v34, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v10 >= 0
    && (v10 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                &ViewSize,
                ViewShare,
                0,
                4u),
        v10 >= 0) )
  {
    memset_thunk_772440563353939046(BaseAddress, 0, 0xF8uLL);
    v10 = 0;
    v8 = SectionHandle;
    v27 = SectionHandle;
    v11 = 0LL;
    SectionHandle = 0LL;
    v9 = (char *)BaseAddress;
    v26 = BaseAddress;
    BaseAddress = 0LL;
  }
  else
  {
    if ( BaseAddress )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      BaseAddress = 0LL;
    }
    v11 = SectionHandle;
  }
  if ( v11 )
  {
    NtClose(v11);
    SectionHandle = 0LL;
  }
  if ( v10 >= 0 )
  {
    v32[v7] = v8;
    v12 = (unsigned int)(v7 + 1);
    v22 = v12;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      TargetHandle = 0LL;
    }
    else
    {
      v32[v12] = TargetHandle;
      v12 = (unsigned int)(v12 + 1);
      v22 = v12;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &v20,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      v20 = 0LL;
    }
    else
    {
      v32[v12] = v20;
      LODWORD(v12) = v12 + 1;
      v22 = v12;
    }
    v13 = WerpProcessId(-1LL);
    v14 = WerpThreadId(-2LL);
    *(_DWORD *)v9 = 248;
    *((_QWORD *)v9 + 21) = 1LL;
    *((_DWORD *)v9 + 1) = v13;
    *((_DWORD *)v9 + 2) = v14;
    *((_QWORD *)v9 + 23) = TargetHandle;
    *((_QWORD *)v9 + 24) = v20;
    *((_QWORD *)v9 + 26) = EventHandle;
    *((_QWORD *)v9 + 28) = 0LL;
    *((_DWORD *)v9 + 58) = -1073741823;
    *((_DWORD *)v9 + 59) = a3;
    *((_DWORD *)v9 + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v15 = v9 + 416;
    *((_QWORD *)v9 + 31) = 1LL;
    *((_QWORD *)v9 + 32) = 1LL;
    v16 = v30;
    *(_OWORD *)(v9 + 264) = *v30;
    *(_OWORD *)(v9 + 280) = v16[1];
    *(_OWORD *)(v9 + 296) = v16[2];
    *(_OWORD *)(v9 + 312) = v16[3];
    *(_OWORD *)(v9 + 328) = v16[4];
    *(_OWORD *)(v9 + 344) = v16[5];
    *(_OWORD *)(v9 + 360) = v16[6];
    *(_OWORD *)(v9 + 376) = v16[7];
    *(_OWORD *)(v9 + 392) = v16[8];
    *((_QWORD *)v9 + 51) = *((_QWORD *)v16 + 18);
    v17 = 9LL;
    do
    {
      *v15 = *a2;
      v15[1] = a2[1];
      v15[2] = a2[2];
      v15[3] = a2[3];
      v15[4] = a2[4];
      v15[5] = a2[5];
      v15[6] = a2[6];
      v15 += 8;
      *(v15 - 1) = a2[7];
      a2 += 8;
      --v17;
    }
    while ( v17 );
    *v15 = *a2;
    v15[1] = a2[1];
    v15[2] = a2[2];
    v15[3] = a2[3];
    v15[4] = a2[4];
    v10 = ReportExceptionInternal(v13, v8, v32, (unsigned int)v12, a3, &Handle);
    v6 = Handle;
    if ( v10 >= 0 )
    {
      if ( !Handle || (v10 = WerpWaitForCrashReporting(0LL, EventHandle, Handle, v31), v10 >= 0) )
        v10 = 0;
    }
  }
  if ( v9 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v9);
    if ( v8 )
      NtClose(v8);
    if ( v6 )
      NtClose(v6);
  }
  if ( TargetHandle )
  {
    NtClose(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0LL;
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return (unsigned int)v10;
}
