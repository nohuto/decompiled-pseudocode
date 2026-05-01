/*
 * XREFs of HampConnectionDeliverPayload @ 0x18000B160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall HampConnectionDeliverPayload(__int64 a1, ULONGLONG *a2, __int64 a3)
{
  ULONGLONG v4; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v7; // r15
  const struct _TraceLoggingMetadata_t *v8; // rdx
  __int64 v9; // rax
  char Ptr; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-95h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-91h] BYREF
  EVENT_DESCRIPTOR v14; // [rsp+48h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[4]; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-29h] BYREF
  void *v17; // [rsp+B0h] [rbp-19h]
  int v18; // [rsp+B8h] [rbp-11h]
  int v19; // [rsp+BCh] [rbp-Dh]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+C0h] [rbp-9h]
  __int64 v21; // [rsp+C8h] [rbp-1h]
  char *p_Ptr; // [rsp+D0h] [rbp+7h]
  __int64 v23; // [rsp+D8h] [rbp+Fh]

  v4 = a2[7];
  memset(v15, 0, sizeof(v15));
  if ( a3 )
  {
    v7 = (struct _EVENT_DATA_DESCRIPTOR *)a3;
    *(_QWORD *)(a3 + 8) = v4;
  }
  else
  {
    v7 = v15;
    v15[0].Ptr = a2[6];
    memset((char *)&v15[1].Ptr + 4, 0, 44);
    *(_QWORD *)&v15[0].Size = v4;
    LODWORD(v15[1].Ptr) = 3;
  }
  v8 = &TraceLoggingMetadata;
  if ( (unsigned int)dword_18002F038 > 5 && (byte_18002F048 & 1) != 0 && (qword_18002F050 & 1) == qword_18002F050 )
  {
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_18002F040;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18002F040;
    v17 = &unk_1800285F0;
    UserData.Reserved = 2;
    v18 = 21;
    v19 = 1;
    v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  LOBYTE(v9) = (*(__int64 (__fastcall **)(struct _EVENT_DATA_DESCRIPTOR *, const struct _TraceLoggingMetadata_t *))(a1 + 80))(
                 v7,
                 v8);
  if ( (unsigned int)dword_18002F038 > 4 && (byte_18002F048 & 3) != 0 )
  {
    v9 = qword_18002F050 & 3;
    if ( v9 == qword_18002F050 )
    {
      Ptr = v7[1].Ptr;
      *(_QWORD *)&EventDescriptor.Id = v7->Ptr;
      p_Ptr = &Ptr;
      p_EventDescriptor = &EventDescriptor;
      *(_DWORD *)&v14.Level = 516;
      UserData.Ptr = (ULONGLONG)off_18002F040;
      v23 = 1LL;
      v21 = 8LL;
      *(_DWORD *)&v14.Id = 184549376;
      v14.Keyword = 3LL;
      UserData.Size = *(unsigned __int16 *)off_18002F040;
      v17 = &unk_18002854C;
      UserData.Reserved = 2;
      v18 = 40;
      v19 = 1;
      v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LOBYTE(v9) = EventWriteTransfer(RegHandle, &v14, 0LL, 0LL, 4u, &UserData);
    }
  }
  if ( !a3 )
  {
    a2[6] = -1LL;
    LOBYTE(v9) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  return v9;
}
