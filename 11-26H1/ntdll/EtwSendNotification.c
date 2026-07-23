/*
 * XREFs of EtwSendNotification @ 0x1800DE720
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800DE9A8 (EtwpReceiveReplyDataBlock.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // r14
  ULONG Timeout; // esi
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v13; // edi
  ULONG ReplyCount; // r15d
  void *Reserved2; // r14
  ULONG v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rax
  ETW_NOTIFICATION_TYPE v21; // [rsp+40h] [rbp-C0h]
  ULONG v22; // [rsp+50h] [rbp-B0h] BYREF
  ETW_NOTIFICATION_TYPE NotificationType; // [rsp+54h] [rbp-ACh] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp-A8h] BYREF
  ETW_NOTIFICATION_TYPE v25; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[128]; // [rsp+70h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR v29[2]; // [rsp+F0h] [rbp-10h] BYREF
  GUID *p_DestinationGuid; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  ETW_NOTIFICATION_TYPE *p_NotificationType; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  ULONG *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  ETW_NOTIFICATION_TYPE *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]

  ReplyRequested = DataBlock->ReplyRequested;
  Timeout = DataBlock->Timeout;
  v27 = (__int64)ReplyReceived;
  v26 = (__int64)ReplySizeNeeded;
  ReturnLength = 0;
  if ( ReplyRequested == 1 )
  {
    DataBlock->Reserved2 = 0LL;
    if ( !Timeout )
      Timeout = 60000;
  }
  v10 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v10 )
    v13 = RtlNtStatusToDosError(v10);
  else
    v13 = 0;
  if ( ReplyRequested )
  {
    ReplyCount = DataBlock->ReplyCount;
    if ( v13 )
    {
      if ( (unsigned int)dword_1801C4700 > 2
        && (byte_1801C4710 & 0xA) != 0
        && (qword_1801C4718 & 0xA) == qword_1801C4718 )
      {
        v31 = 16LL;
        p_DestinationGuid = &DataBlock->DestinationGuid;
        NotificationType = DataBlock->NotificationType;
        p_NotificationType = &NotificationType;
        v34 = &v22;
        v33 = 4LL;
        v22 = v13;
        v35 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(
          (__int64)&dword_1801C4700,
          (unsigned __int8 *)dword_18019B0E5,
          v11,
          v12,
          5u,
          v29);
      }
    }
    else
    {
      Reserved2 = (void *)DataBlock->Reserved2;
      if ( ReplyCount )
      {
        v17 = 120;
        memset_thunk_772440563353939046(v28, 0, 0x78uLL);
        if ( (unsigned int)dword_1801C4700 > 5
          && (byte_1801C4710 & 0xA) != 0
          && (qword_1801C4718 & 0xA) == qword_1801C4718 )
        {
          v31 = 16LL;
          p_DestinationGuid = &DataBlock->DestinationGuid;
          v25 = DataBlock->NotificationType;
          v34 = &v22;
          p_NotificationType = &v25;
          v36 = &NotificationType;
          v33 = 4LL;
          v22 = ReplyCount;
          v35 = 4LL;
          NotificationType = Timeout;
          v37 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (__int64)&dword_1801C4700,
            (unsigned __int8 *)dword_18019B078,
            v18,
            v19,
            6u,
            v29);
        }
        v20 = v28;
        v21 = DataBlock->NotificationType;
        if ( DataBlock->NotificationType != EtwNotificationTypeEnable )
          v17 = ReceiveDataBlockSize;
        if ( v21 != EtwNotificationTypeEnable )
          v20 = ReceiveDataBlock;
        LOBYTE(v18) = v21 == EtwNotificationTypeEnable;
        v13 = EtwpReceiveReplyDataBlock((int)Reserved2, Timeout, v18, ReplyCount, v20, v17, v27, v26, v21);
      }
      if ( Reserved2 )
        NtClose(Reserved2);
    }
  }
  return v13;
}
