/*
 * XREFs of ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x140074980
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x140079908 (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::CompleteFrame(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE *v6; // r8
  __int64 v7; // r9
  int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // rax
  int v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v15[3]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  __int64 *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  _DWORD *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  _BYTE *v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  int v40; // [rsp+10Ch] [rbp+Ch]

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v4 = InputTraceLogging::CompletionReasonToString(a3);
    v5 = *(_QWORD *)(a1 + 448);
    v6 = (_BYTE *)v4;
    v12 = *(unsigned __int16 *)(v5 + 18);
    v13 = *(unsigned __int16 *)(v5 + 16);
    v14 = *(_DWORD *)(v7 + 196);
    v16 = *(_QWORD *)(v7 + 48);
    v15[0] = v8;
    v17 = v9;
    v18 = a1;
    if ( v4 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v6 = &unk_140269890;
      v11 = 1;
    }
    v39 = v11;
    v38 = v6;
    v36 = &v12;
    v40 = 0;
    v34 = &v13;
    v32 = &v14;
    v30 = v15;
    v28 = &v16;
    v26 = &v17;
    v24 = &v18;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 8LL;
    v27 = 8LL;
    v25 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 256LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v21 = &unk_14028636A;
    v23 = 1;
    UserData.Reserved = 2;
    v22 = 110;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
}
