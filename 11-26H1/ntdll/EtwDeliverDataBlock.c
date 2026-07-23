/*
 * XREFs of EtwDeliverDataBlock @ 0x18003CB30
 * Callers:
 *     EtwpNotificationThread @ 0x18003AF40 (EtwpNotificationThread.c)
 *     EtwpSendSessionNotification @ 0x180064890 (EtwpSendSessionNotification.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x18003ADA0 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18003B0A0 (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x18003D030 (EtwpProcessNotification.c)
 *     RtlSetThreadSubProcessTag @ 0x18003E7A0 (RtlSetThreadSubProcessTag.c)
 *     EtwpFindGuidEntry @ 0x1800421B0 (EtwpFindGuidEntry.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpReferenceUmGuidEntry @ 0x180042BBC (EtwpReferenceUmGuidEntry.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180065050 (EtwProcessPrivateLoggerRequest.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18008D818 (EtwpDereferenceUmGuidEntry.c)
 *     _tlgKeywordOn @ 0x1800EAAF8 (_tlgKeywordOn.c)
 *     EtwpProcessInternalNotification @ 0x1800FA840 (EtwpProcessInternalNotification.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1801022C0 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x1801022EC (EtwpAllocateUmGuidEntry.c)
 *     EtwReplyNotification @ 0x18010ACF0 (EtwReplyNotification.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v1; // r15d
  char v2; // si
  char v4; // r12
  char v5; // r13
  ULONGLONG v6; // r14
  bool v7; // zf
  ULONG Timeout; // eax
  int Reserved2; // edx
  _RTL_SRWLOCK *Registration; // rax
  unsigned __int64 NextRegistration; // rbx
  void *v12; // rcx
  PVOID v13; // rax
  ETW_NOTIFICATION_TYPE NotificationType; // r8d
  void *v15; // r13
  __int16 v16; // cx
  ULONG v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 GuidEntry; // rsi
  char v23; // r9
  __int64 i; // rdx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 j; // rdx
  char v28; // [rsp+38h] [rbp-49h] BYREF
  BOOLEAN ReplyRequested; // [rsp+39h] [rbp-48h]
  ULONG v30; // [rsp+3Ch] [rbp-45h] BYREF
  ETW_NOTIFICATION_TYPE v31; // [rsp+40h] [rbp-41h] BYREF
  ULONGLONG v32; // [rsp+48h] [rbp-39h] BYREF
  __int64 v33[10]; // [rsp+58h] [rbp-29h] BYREF

  v1 = 0;
  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = Notification->NotificationType == EtwNotificationTypeEnable;
  ReplyRequested = Notification->ReplyRequested;
  Timeout = Notification->Timeout;
  v32 = 0LL;
  v30 = 0;
  v28 = 0;
  v31 = Timeout;
  if ( v7 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v5 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  Reserved2 = Notification->Reserved2;
  if ( Reserved2 != -1 )
  {
    Registration = EtwpFindRegistration(&Notification->DestinationGuid, Reserved2);
    NextRegistration = (unsigned __int64)Registration;
    if ( !Registration )
      goto LABEL_23;
    RtlAcquireSRWLockExclusive(Registration + 8);
    v4 = 1;
    v12 = (void *)*(unsigned int *)(NextRegistration + 248);
    *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    v13 = RtlSetThreadSubProcessTag(v12);
    NotificationType = Notification->NotificationType;
    v15 = v13;
    v16 = *(_WORD *)(NextRegistration + 86);
    if ( Notification->NotificationType == EtwNotificationTypeEnable )
    {
      if ( (unsigned __int16)((v16 & 0x3FFF) - 2) > 1u )
        goto LABEL_12;
      if ( (Notification[1].NotificationSize & 0x80000000) != 0 && PrivateLoggerNotificationEntry )
        v6 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
      else
        v6 = *(_QWORD *)(NextRegistration + 88);
      Notification->Reserved2 = v6;
      EtwpUpdateEnableInfoAndCallback(NextRegistration, Notification);
      goto LABEL_11;
    }
    if ( NotificationType == EtwNotificationTypePrivateLogger )
    {
      if ( (unsigned __int16)((v16 & 0x3FFF) - 2) <= 1u )
      {
        v6 = *(_QWORD *)(NextRegistration + 88);
        v1 = EtwProcessPrivateLoggerRequest(Notification, 0x3FFFLL);
        goto LABEL_11;
      }
    }
    else
    {
      if ( (v16 & 0x3FFF) == NotificationType )
      {
        v6 = *(_QWORD *)(NextRegistration + 88);
        Notification->Reserved2 = v6;
        v18 = (*(__int64 (__fastcall **)(PETW_NOTIFICATION_HEADER, _QWORD))(NextRegistration + 48))(
                Notification,
                *(_QWORD *)(NextRegistration + 56));
LABEL_20:
        v1 = v18;
LABEL_11:
        v2 = 1;
        goto LABEL_12;
      }
      if ( (v16 & 0x3FFF) == 0xA
        && NotificationType == EtwNotificationTypeSession
        && Notification->SourcePID == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
      {
        v18 = EtwpProcessInternalNotification(NextRegistration, Notification);
        goto LABEL_20;
      }
    }
LABEL_12:
    RtlSetThreadSubProcessTag(v15);
    if ( v2 )
      goto LABEL_13;
    goto LABEL_23;
  }
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
    goto LABEL_39;
  do
  {
    v21 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( !v21 )
      v21 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v21 )
      goto LABEL_31;
    if ( *(_DWORD *)(NextRegistration + 80) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(
                            NextRegistration,
                            (_DWORD)Notification,
                            (unsigned int)&v32,
                            (unsigned int)&v30,
                            (__int64)&v28) )
      break;
    if ( v4 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 0;
    }
LABEL_31:
    NextRegistration = EtwpGetNextRegistration((_RTL_SRWLOCK *)NextRegistration);
  }
  while ( NextRegistration );
  v1 = v30;
  if ( v28 )
  {
    v6 = v32;
    goto LABEL_13;
  }
LABEL_39:
  if ( !v5
    || !PrivateLoggerNotificationEntry
    || (v6 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88),
        Notification[1].NotificationType == EtwNotificationTypeLegacyEnable)
    || (GuidEntry = EtwpFindGuidEntry(&Notification->DestinationGuid)) == 0
    && (!Notification[1].NotificationType || (GuidEntry = EtwpAllocateUmGuidEntry(&Notification->DestinationGuid)) == 0) )
  {
LABEL_23:
    v1 = 4201;
    if ( ReplyRequested && (unsigned int)dword_1801C4700 > 3 && (unsigned __int8)tlgKeywordOn(&dword_1801C4700, 9LL) )
    {
      v33[5] = 16LL;
      v33[4] = (__int64)&Notification->DestinationGuid;
      v31 = Notification->NotificationType;
      v33[6] = (__int64)&v31;
      v30 = Notification->Reserved2;
      v33[8] = (__int64)&v30;
      v33[7] = 4LL;
      v33[9] = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_1801C4700, (int)&dword_18019B01B, v19, v20, 5u, (__int64)v33);
    }
    goto LABEL_14;
  }
  EtwpAcquireGuidEntryExclusive(GuidEntry);
  v23 = BYTE2(Notification[1].NotificationSize);
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    v25 = GuidEntry + 24 * i;
    if ( *(_BYTE *)(v25 + 76) && *(_BYTE *)(v25 + 78) == v23 )
    {
      v26 = v25 + 56;
      if ( v26 )
      {
LABEL_48:
        *(_QWORD *)v26 = Notification[1].Reserved2;
        *(_QWORD *)(v26 + 8) = *(_QWORD *)&Notification[1].Timeout;
        *(_BYTE *)(v26 + 21) = Notification[1].NotificationSize;
        *(_DWORD *)(v26 + 16) = Notification[1].Offset;
        *(_BYTE *)(v26 + 20) = Notification[1].NotificationType != 0;
        goto LABEL_49;
      }
      break;
    }
  }
  if ( Notification[1].NotificationType )
  {
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      if ( !*(_BYTE *)(GuidEntry + 24 * j + 76) )
      {
        if ( GuidEntry + 24 * j == -56 )
          break;
        *(_BYTE *)(GuidEntry + 24 * j + 78) = v23;
        EtwpReferenceUmGuidEntry(GuidEntry);
        goto LABEL_48;
      }
    }
  }
LABEL_49:
  if ( HIBYTE(Notification[1].TargetPID) == 1 )
  {
    *(_QWORD *)(GuidEntry + 152) = *(_QWORD *)&Notification[1].TargetPID;
    *(_DWORD *)(GuidEntry + 160) = Notification[1].NotificationType;
  }
  *(_DWORD *)(GuidEntry + 48) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(GuidEntry + 40));
  EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
LABEL_13:
  if ( ReplyRequested == 1 )
  {
    if ( v1 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
    }
    else if ( Notification->NotificationType != EtwNotificationTypeEnable )
    {
LABEL_65:
      Notification->Timeout = v31;
      Notification->ReplyRequested = 0;
      Notification->Reserved2 = v6;
      v1 = EtwReplyNotification(Notification);
      goto LABEL_14;
    }
    Notification->NotificationSize = 72;
    goto LABEL_65;
  }
LABEL_14:
  if ( v4 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v1;
}
