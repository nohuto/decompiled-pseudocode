/*
 * XREFs of ?CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z @ 0x1400A233C
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x1400A2084 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 * Callees:
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1400A268C (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::CommitPosition(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // r8
  _BYTE *v4; // rdx
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // [rsp+30h] [rbp-59h] BYREF
  int v10; // [rsp+34h] [rbp-55h] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  __int64 *v18; // [rsp+80h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp-1h]
  _DWORD *v20; // [rsp+90h] [rbp+7h]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  int *v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]
  _BYTE *v24; // [rsp+B0h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+2Fh]
  int v26; // [rsp+BCh] [rbp+33h]
  int *v27; // [rsp+C0h] [rbp+37h]
  __int64 v28; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    v9 = a3;
    v4 = (_BYTE *)InputTraceLogging::CommitMousePosAndMoveResultToString(a3, a2, a2);
    v10 = v3[1];
    v11[0] = *v3;
    v12 = v6;
    v27 = (int *)&v9;
    v28 = v5;
    if ( v4 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v4[v7] );
      v8 = v7 + 1;
    }
    else
    {
      v4 = &unk_140269890;
      v8 = 1;
    }
    v25 = v8;
    v26 = 0;
    v22 = &v10;
    v20 = v11;
    v18 = &v12;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v24 = v4;
    v23 = v5;
    v21 = v5;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v15 = &unk_14028C92F;
    v17 = 1;
    UserData.Reserved = 2;
    v16 = 124;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
