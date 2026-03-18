/*
 * XREFs of ImpProcessSequence @ 0x1400BF3B4
 * Callers:
 *     ImpWorkerRoutine @ 0x1400BEB90 (ImpWorkerRoutine.c)
 * Callees:
 *     ImpRpcSendString @ 0x1400BF6DC (ImpRpcSendString.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall ImpProcessSequence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 InputMonitorSessionState; // rdi
  __int64 v15; // r8
  int v16; // eax
  int v17; // ebx
  unsigned __int16 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v27; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+72h] [rbp-8Eh]
  __int16 v29; // [rsp+76h] [rbp-8Ah]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  unsigned int *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  unsigned int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int16 *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  int *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
  v29 = 0;
  v27 = 2 * a4;
  v28 = (unsigned __int16)(2 * a4);
  v30 = a3;
  v16 = ImpRpcSendString(a1, a2, (unsigned int)&v27, a5, a6, a7, a8);
  v17 = 0;
  if ( v16 != 261 )
    v17 = v16;
  if ( v17 < 0 )
  {
    if ( (unsigned int)dword_1402AA1C0 > 2
      && (qword_1402AA1D0 & 0x400000000000LL) != 0
      && (qword_1402AA1D8 & 0x400000000000LL) == qword_1402AA1D8 )
    {
      v23 = *(_DWORD *)InputMonitorSessionState;
      v37 = &v23;
      v39 = (unsigned int *)&v22;
      v41 = &v25;
      *(_DWORD *)&EventDescriptor.Level = 2;
      UserData.Ptr = (ULONGLONG)off_1402AA1C8;
      v38 = 4LL;
      v22 = v17;
      v40 = 4LL;
      v25 = 0x1000000LL;
      v42 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
      v34 = &unk_14028EF8E;
      UserData.Reserved = 2;
      v35 = 62;
      v36 = 1;
      v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  else if ( (unsigned int)dword_1402AA1C0 > 5 )
  {
    v24 = *(unsigned __int8 *)(InputMonitorSessionState + 561);
    v38 = 4LL;
    v37 = (unsigned int *)&v24;
    v21 = *(_DWORD *)InputMonitorSessionState;
    v39 = &v21;
    v41 = &v31;
    v43 = &v32;
    v19 = a5;
    v45 = &v19;
    v47 = &v20;
    v49 = &v22;
    v51 = &v25;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1402AA1C8;
    v40 = 4LL;
    v31 = a1;
    v42 = 8LL;
    v32 = a2;
    v44 = 8LL;
    v46 = 2LL;
    v20 = a4;
    v48 = 2LL;
    v22 = a6;
    v50 = 4LL;
    v25 = a7;
    v52 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
    v34 = &unk_14028EEC8;
    UserData.Reserved = 2;
    v35 = 123;
    v36 = 1;
    v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  return (unsigned int)v17;
}
