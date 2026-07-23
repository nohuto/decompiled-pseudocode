/*
 * XREFs of EtwpPsProvTraceThread @ 0x140AAE1A0
 * Callers:
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PsGetCurrentThreadTeb @ 0x14049C0D0 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  unsigned int *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  __int16 v8; // cx
  char v9; // al
  int ULongFromUser; // eax
  __int64 v11; // r14
  ULONG v12; // r9d
  __int64 v14; // rcx
  _KPROCESS *v15; // rdx
  __int16 v16; // r8
  char v17; // al
  int ULong64FromUser; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-158h] BYREF
  int v20; // [rsp+30h] [rbp-128h] BYREF
  int v21; // [rsp+34h] [rbp-124h] BYREF
  int v22; // [rsp+38h] [rbp-120h] BYREF
  __int64 v23; // [rsp+40h] [rbp-118h]
  __int64 v24; // [rsp+48h] [rbp-110h] BYREF
  __int64 v25; // [rsp+50h] [rbp-108h] BYREF
  __int64 v26; // [rsp+58h] [rbp-100h] BYREF
  __int64 v27; // [rsp+60h] [rbp-F8h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-E8h] BYREF
  int *v30; // [rsp+80h] [rbp-D8h]
  __int64 v31; // [rsp+88h] [rbp-D0h]
  __int64 v32; // [rsp+90h] [rbp-C8h]
  __int64 v33; // [rsp+98h] [rbp-C0h]
  __int64 v34; // [rsp+A0h] [rbp-B8h]
  __int64 v35; // [rsp+A8h] [rbp-B0h]
  __int64 *v36; // [rsp+B0h] [rbp-A8h]
  __int64 v37; // [rsp+B8h] [rbp-A0h]
  __int64 *v38; // [rsp+C0h] [rbp-98h]
  __int64 v39; // [rsp+C8h] [rbp-90h]
  __int64 *v40; // [rsp+D0h] [rbp-88h]
  __int64 v41; // [rsp+D8h] [rbp-80h]
  __int64 *v42; // [rsp+E0h] [rbp-78h]
  __int64 v43; // [rsp+E8h] [rbp-70h]
  __int64 v44; // [rsp+F0h] [rbp-68h]
  __int64 v45; // [rsp+F8h] [rbp-60h]
  int *v46; // [rsp+100h] [rbp-58h]
  __int64 v47; // [rsp+108h] [rbp-50h]
  __int64 *v48; // [rsp+110h] [rbp-48h]
  __int64 v49; // [rsp+118h] [rbp-40h]

  v23 = a1;
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = (unsigned int *)PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      Process = KeGetCurrentThread()->Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_7;
      v8 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v8 == 332 || (v9 = 0, v8 == 452) )
        v9 = 1;
      if ( v9 )
        ULongFromUser = RtlReadULongFromUser(CurrentThreadTeb + 3032);
      else
LABEL_7:
        ULongFromUser = RtlReadULong64FromUser(CurrentThreadTeb + 1480);
      v20 = ULongFromUser;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)ThreadStop;
    v14 = *(_QWORD *)(a1 + 240);
    if ( v14 )
    {
      v15 = KeGetCurrentThread()->Process;
      if ( !v15[1].ReadyTime )
        goto LABEL_28;
      v16 = WORD2(v15[3].PerProcessorCycleTimes);
      if ( v16 == 332 || (v17 = 0, v16 == 452) )
        v17 = 1;
      if ( v17 )
        ULong64FromUser = RtlReadULongFromUser((unsigned int *)(v14 + 12128));
      else
LABEL_28:
        ULong64FromUser = RtlReadULong64FromUser((volatile void *)(v14 + 5920));
      v20 = ULong64FromUser;
    }
  }
  v21 = *(_DWORD *)(a1 + 1288);
  UserData.Ptr = (ULONGLONG)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v22 = *(_DWORD *)(a1 + 1296);
  v30 = &v22;
  v31 = 4LL;
  v32 = a1 + 56;
  v33 = 8LL;
  v34 = a1 + 48;
  v35 = 8LL;
  if ( a3 )
  {
    if ( a2 )
    {
      v24 = *(_QWORD *)(a2 + 16);
      v25 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 240);
    if ( v11 )
    {
      v24 = RtlReadULong64FromUser((volatile void *)(v11 + 8));
      v25 = RtlReadULong64FromUser((volatile void *)(v11 + 16));
    }
  }
  v36 = &v24;
  v37 = 8LL;
  v38 = &v25;
  v39 = 8LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 && (*(_DWORD *)(a1 + 1448) & 8) == 0 )
    _InterlockedOr(v19, 0);
  v40 = &v26;
  v41 = 8LL;
  v26 = *(_QWORD *)(a1 + 1376);
  v42 = &v26;
  v43 = 8LL;
  v44 = a1 + 240;
  v45 = 8LL;
  v46 = &v20;
  v47 = 4LL;
  v12 = 10;
  if ( !a3 )
  {
    v27 = *(_QWORD *)(a1 + 72);
    v48 = &v27;
    v49 = 8LL;
    v12 = 11;
  }
  return EtwWrite((REGHANDLE)stru_140F03830.Affinity, EventDescriptor, 0LL, v12, &UserData);
}
