/*
 * XREFs of RtlReportExceptionHelper @ 0x180088060
 * Callers:
 *     RtlpPossibleDeadlock @ 0x18007BA50 (RtlpPossibleDeadlock.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 * Callees:
 *     ReportExceptionInternal @ 0x180088674 (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x1800887B0 (WerpProcessId.c)
 *     WerpThreadId @ 0x180088800 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x180088850 (WerpWaitForCrashReporting.c)
 *     WerpSetProcessFaultInformation @ 0x1801117A0 (WerpSetProcessFaultInformation.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportExceptionHelper(_OWORD *a1, _OWORD *a2, int a3, __int64 a4)
{
  HANDLE v6; // r15
  int v7; // edi
  HANDLE v8; // r13
  char *v9; // r14
  int v10; // esi
  HANDLE v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // esi
  int v14; // eax
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rcx
  HANDLE v19; // [rsp+50h] [rbp-118h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-110h] BYREF
  HANDLE v21; // [rsp+60h] [rbp-108h] BYREF
  int v22; // [rsp+68h] [rbp-100h]
  HANDLE Handle; // [rsp+70h] [rbp-F8h] BYREF
  void *v24; // [rsp+78h] [rbp-F0h] BYREF
  HANDLE v25; // [rsp+80h] [rbp-E8h] BYREF
  void *v26; // [rsp+88h] [rbp-E0h]
  HANDLE v27; // [rsp+90h] [rbp-D8h]
  __int64 v28; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-C8h] BYREF
  _OWORD *v30; // [rsp+A8h] [rbp-C0h]
  __int64 v31; // [rsp+B0h] [rbp-B8h]
  _QWORD v32[4]; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-80h]
  __int64 v35; // [rsp+F0h] [rbp-78h]
  __int128 v36; // [rsp+F8h] [rbp-70h]
  __int128 v37; // [rsp+108h] [rbp-60h] BYREF
  __int64 v38; // [rsp+118h] [rbp-50h]
  __int64 v39; // [rsp+120h] [rbp-48h]
  __int128 v40; // [rsp+128h] [rbp-40h]

  v31 = a4;
  v30 = a1;
  v6 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v27 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v32, 0, sizeof(v32));
  v7 = 0;
  v26 = 0LL;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL);
  v21 = 0LL;
  v33 = 0x30uLL;
  v35 = 2LL;
  v34 = 0LL;
  v36 = 0LL;
  if ( (int)ZwCreateEvent(&v21, 2031619LL, &v33, 0LL, 0) < 0 )
  {
    v21 = 0LL;
  }
  else
  {
    v32[0] = v21;
    v7 = 1;
    v22 = 1;
  }
  Handle = 0LL;
  v24 = 0LL;
  v29 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v37 = 0x30uLL;
  v39 = 2LL;
  v38 = 0LL;
  v40 = 0LL;
  v28 = 1648LL;
  v10 = NtCreateSection(&Handle, 983047LL, &v37, &v28, 4, 0x8000000, 0LL);
  if ( v10 >= 0 && (v10 = ZwMapViewOfSection(Handle, -1LL, &v24, 0LL, 0LL, 0LL, &v29, 1, 0, 4), v10 >= 0) )
  {
    memset_thunk_772440563353939046(v24, 0, 0xF8uLL);
    v10 = 0;
    v8 = Handle;
    v27 = Handle;
    v11 = 0LL;
    Handle = 0LL;
    v9 = (char *)v24;
    v26 = v24;
    v24 = 0LL;
  }
  else
  {
    if ( v24 )
    {
      NtUnmapViewOfSection(-1LL, v24);
      v24 = 0LL;
    }
    v11 = Handle;
  }
  if ( v11 )
  {
    NtClose(v11);
    Handle = 0LL;
  }
  if ( v10 >= 0 )
  {
    v32[v7] = v8;
    v12 = (unsigned int)(v7 + 1);
    v22 = v12;
    if ( (int)ZwDuplicateObject(-1LL, -1LL, -1LL, &v19, 0x1FFFFF, 2, 0) < 0 )
    {
      v19 = 0LL;
    }
    else
    {
      v32[v12] = v19;
      v12 = (unsigned int)(v12 + 1);
      v22 = v12;
    }
    if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v20, 0x1FFFFF, 2, 0) < 0 )
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
    *((_QWORD *)v9 + 23) = v19;
    *((_QWORD *)v9 + 24) = v20;
    *((_QWORD *)v9 + 26) = v21;
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
    v10 = ReportExceptionInternal(v13, v8, v32, (unsigned int)v12, a3, &v25);
    v6 = v25;
    if ( v10 >= 0 )
    {
      if ( !v25 || (v10 = WerpWaitForCrashReporting(0LL, v21, v25, v31), v10 >= 0) )
        v10 = 0;
    }
  }
  if ( v9 )
  {
    NtUnmapViewOfSection(-1LL, v9);
    if ( v8 )
      NtClose(v8);
    if ( v6 )
      NtClose(v6);
  }
  if ( v19 )
  {
    NtClose(v19);
    v19 = 0LL;
  }
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0LL;
  }
  if ( v21 )
    NtClose(v21);
  return (unsigned int)v10;
}
