/*
 * XREFs of HampConnectionDeliverPayload @ 0x18000B1E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall HampConnectionDeliverPayload(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int128 *v7; // r15
  __int64 v8; // rax
  char v10; // [rsp+30h] [rbp-A9h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-A5h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v13; // [rsp+50h] [rbp-89h] BYREF
  __int128 v14; // [rsp+60h] [rbp-79h]
  __int128 v15; // [rsp+70h] [rbp-69h]
  __int128 v16; // [rsp+80h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-49h] BYREF
  void *v18; // [rsp+A0h] [rbp-39h]
  int v19; // [rsp+A8h] [rbp-31h]
  int v20; // [rsp+ACh] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+B0h] [rbp-29h] BYREF
  void *v22; // [rsp+C0h] [rbp-19h]
  int v23; // [rsp+C8h] [rbp-11h]
  int v24; // [rsp+CCh] [rbp-Dh]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+D0h] [rbp-9h]
  __int64 v26; // [rsp+D8h] [rbp-1h]
  char *v27; // [rsp+E0h] [rbp+7h]
  __int64 v28; // [rsp+E8h] [rbp+Fh]

  v4 = a2[7];
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( a3 )
  {
    v7 = (__int128 *)a3;
    *(_QWORD *)(a3 + 8) = v4;
  }
  else
  {
    v7 = &v13;
    *(_QWORD *)&v13 = a2[6];
    *((_QWORD *)&v13 + 1) = v4;
    LODWORD(v14) = 3;
  }
  if ( (unsigned int)dword_18002D038 > 5 && (byte_18002D048 & 1) != 0 && (qword_18002D050 & 1) == qword_18002D050 )
  {
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_18002D040;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18002D040;
    v18 = &unk_180026900;
    UserData.Reserved = 2;
    v19 = 21;
    v20 = 1;
    v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  LOBYTE(v8) = (*(__int64 (__fastcall **)(__int128 *))(a1 + 80))(v7);
  if ( (unsigned int)dword_18002D038 > 4 && (byte_18002D048 & 3) != 0 )
  {
    v8 = qword_18002D050 & 3;
    if ( v8 == qword_18002D050 )
    {
      v10 = *((_BYTE *)v7 + 16);
      *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)v7;
      v28 = 1LL;
      v27 = &v10;
      p_EventDescriptor = &EventDescriptor;
      v21.Ptr = (ULONGLONG)off_18002D040;
      v26 = 8LL;
      UserData.Ptr = 0x2040B000000LL;
      *(_QWORD *)&UserData.Size = 3LL;
      v21.Size = *(unsigned __int16 *)off_18002D040;
      v22 = &unk_18002685C;
      v21.Reserved = 2;
      v23 = 40;
      v24 = 1;
      v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LOBYTE(v8) = EventWriteTransfer(RegHandle, (PCEVENT_DESCRIPTOR)&UserData, 0LL, 0LL, 4u, &v21);
    }
  }
  if ( !a3 )
  {
    a2[6] = -1LL;
    LOBYTE(v8) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  return v8;
}
