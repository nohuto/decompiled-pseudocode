/*
 * XREFs of ?ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140125618
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x140125818 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140125860 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessEvent(
        __int64 a1,
        const struct tagPOINT *a2,
        unsigned __int16 a3,
        __int64 a4,
        const struct tagINPUT_MESSAGE_SOURCE *a5)
{
  int v6; // ebx
  unsigned int *v7; // rdx
  const char *v8; // rax
  _BYTE *v9; // r8
  _DWORD *v10; // r10
  const char *v11; // rdx
  __int64 v12; // rcx
  int v13; // r11d
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  int v17; // [rsp+30h] [rbp-81h] BYREF
  int v18; // [rsp+34h] [rbp-7Dh] BYREF
  int v19; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v20[3]; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v21; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-51h] BYREF
  void *v24; // [rsp+70h] [rbp-41h]
  int v25; // [rsp+78h] [rbp-39h]
  int v26; // [rsp+7Ch] [rbp-35h]
  __int64 *v27; // [rsp+80h] [rbp-31h]
  __int64 v28; // [rsp+88h] [rbp-29h]
  _DWORD *v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+98h] [rbp-19h]
  int *v31; // [rsp+A0h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-9h]
  int *v33; // [rsp+B0h] [rbp-1h]
  __int64 v34; // [rsp+B8h] [rbp+7h]
  int *v35; // [rsp+C0h] [rbp+Fh]
  __int64 v36; // [rsp+C8h] [rbp+17h]
  const char *v37; // [rsp+D0h] [rbp+1Fh]
  int v38; // [rsp+D8h] [rbp+27h]
  int v39; // [rsp+DCh] [rbp+2Bh]
  _BYTE *v40; // [rsp+E0h] [rbp+2Fh]
  int v41; // [rsp+E8h] [rbp+37h]
  int v42; // [rsp+ECh] [rbp+3Bh]

  v6 = a3;
  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    InputTraceLogging::OriginIdToString(*((unsigned int *)a5 + 1));
    v8 = InputTraceLogging::DeviceTypeToString(*v7);
    v19 = v10[1];
    v11 = v8;
    v20[0] = *v10;
    v12 = -1LL;
    v17 = v13;
    v18 = v6;
    v21 = a1;
    if ( v9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v9[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v9 = &unk_140269890;
      v15 = 1;
    }
    v40 = v9;
    v41 = v15;
    v42 = 0;
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
      v16 = v12 + 1;
    }
    else
    {
      v11 = (const char *)&unk_140269890;
      v16 = 1;
    }
    v38 = v16;
    v35 = &v17;
    v37 = v11;
    v33 = &v18;
    v39 = 0;
    v31 = &v19;
    v29 = v20;
    v27 = &v21;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v36 = 4LL;
    v34 = 4LL;
    v32 = 4LL;
    v30 = 4LL;
    v28 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v24 = &unk_14028CAE4;
    UserData.Reserved = 2;
    v25 = 98;
    v26 = 1;
    v20[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
}
