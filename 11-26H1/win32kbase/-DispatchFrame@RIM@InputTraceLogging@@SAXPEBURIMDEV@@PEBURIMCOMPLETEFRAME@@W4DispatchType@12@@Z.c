/*
 * XREFs of ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400958DC
 * Callers:
 *     rimProcessCompleteFrame @ 0x140074484 (rimProcessCompleteFrame.c)
 *     rimFindOtherQueuedFrames @ 0x1400962C0 (rimFindOtherQueuedFrames.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::DispatchFrame(__int64 a1, int *a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v6; // rcx
  const char *v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  __int64 *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  const char *v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  _DWORD *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]

  v3 = a2[6];
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 29) + 96LL);
  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v6 = *(_QWORD *)(a1 + 448);
    v9 = *(unsigned __int16 *)(v6 + 18);
    v10 = *(unsigned __int16 *)(v6 + 16);
    v11 = *a2;
    v12 = a2[49];
    v13[0] = v3;
    if ( a3 )
    {
      if ( a3 == 1 )
        v7 = "Queued";
      else
        v7 = "UNKNOWN";
    }
    else
    {
      v7 = "Immediate";
    }
    v14 = *((_QWORD *)a2 + 6);
    v39 = &v9;
    v37 = &v10;
    v35 = &v11;
    v33 = &v12;
    v31 = v13;
    v8 = -1LL;
    v15 = v4;
    v16 = a1;
    v40 = 4LL;
    v38 = 4LL;
    v36 = 4LL;
    v34 = 4LL;
    v32 = 4LL;
    do
      ++v8;
    while ( v7[v8] );
    v28 = v7;
    v29 = v8 + 1;
    v30 = 0;
    v26 = &v14;
    v27 = 8LL;
    v24 = &v15;
    v25 = 8LL;
    v22 = &v16;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v23 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 256LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v19 = &unk_140286BBC;
    UserData.Reserved = 2;
    v20 = 119;
    v21 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
  }
}
