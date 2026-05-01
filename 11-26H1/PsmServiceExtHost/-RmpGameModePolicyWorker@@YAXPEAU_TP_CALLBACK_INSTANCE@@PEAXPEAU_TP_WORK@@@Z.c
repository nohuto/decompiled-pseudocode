/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeUnapplyUnusedGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000DAC0 (-RmpGameModeUnapplyUnusedGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z @ 0x18000DB48 (-RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z.c)
 *     ?RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z @ 0x18000E22C (-RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F9E4 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18005D8E4 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x1800634C0 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x1800644A0 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x180064E00 (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069AB4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18006E028 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006EC00 (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18006FDF4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x1800877B4 (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180087808 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087F18 (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpGameModePolicyWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_GAME_MODE_CONTEXT *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // r13
  char v5; // cl
  char v6; // al
  unsigned int v7; // edi
  char *v8; // rsi
  unsigned __int8 v9; // r14
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // edi
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v16; // rdi
  char *v17; // r11
  char *i; // r10
  unsigned __int64 v19; // rax
  bool v20; // zf
  char v21; // dl
  unsigned __int64 j; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // r10
  unsigned __int8 v25[8]; // [rsp+38h] [rbp-D0h] BYREF
  _LIST_ENTRY v26; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v28[144]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  void *v30; // [rsp+108h] [rbp+0h]
  int v31; // [rsp+110h] [rbp+8h]
  int v32; // [rsp+114h] [rbp+Ch]

  memset_0(v28, 0, 0x88uLL);
  v25[0] = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v30 = &unk_1800D2A82;
    UserData.Reserved = 2;
    v31 = 25;
    v32 = 1;
    *(_DWORD *)&v25[4] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *(_QWORD *)a2;
  v26.Blink = &v26;
  v26.Flink = &v26;
  RmpGameModeAcquireLock(a2);
  v5 = *((_BYTE *)a2 + 148);
  if ( (v5 & 1) != 0 )
  {
    while ( 1 )
    {
      v6 = v5 & 0xFE ^ (v5 & 0xFE ^ (2 * (v5 & 0xFE))) & 8;
      *((_BYTE *)a2 + 148) = v6;
      if ( (v6 & 8) != 0 )
      {
        v7 = 0;
      }
      else
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive((char *)a2 + 72);
        RmpSystemNotificationAcquireInputFocusLock((struct _RM_SYSTEM_NOTIFICATION_CONTEXT *)(v4 + 688));
        v7 = *(_DWORD *)(v4 + 752);
        *(_DWORD *)(v4 + 760) = 0;
        RtlReleaseSRWLockExclusive(v4 + 704);
        RmpGameModeAcquireLock(a2);
      }
      RmpGameModeDemoteActiveRecipients(a2, v7, (bool *)v25);
      RmpGameModeUnapplyUnusedGlobalPolicies(a2);
      RmpGameModeReleaseUnusedGlobalResources(a2);
      if ( !v25[0] && *((_BYTE *)a2 + 140) )
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive((char *)a2 + 72);
        if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          NotifyGameModeExtensionRecipientsPresent(0LL);
        *((_BYTE *)a2 + 140) = 0;
        RmpGameModeAcquireLock(a2);
      }
      if ( (*((_BYTE *)a2 + 148) & 8) != 0 )
        goto LABEL_14;
      v8 = (char *)*((_QWORD *)a2 + 11);
      v9 = *((_DWORD *)a2 + 34) != 0;
      v25[0] = v9;
      if ( v8 != (char *)a2 + 88 )
        break;
      RecipientProcessById = RmpGameModeFindRecipientProcessById(a2, v7);
      v11 = RecipientProcessById;
      if ( RecipientProcessById )
      {
        if ( (*((_BYTE *)RecipientProcessById + 170) & 5) == 1 && RmpGameModeIsProcessPrimary(RecipientProcessById) )
        {
          *((_BYTE *)v11 + 171) |= 1u;
          *((_DWORD *)v11 + 26) = 0;
          v14 = (struct _LIST_ENTRY *)((char *)v11 + 88);
          Blink = v26.Blink;
          if ( v26.Blink->Flink != &v26 )
            __fastfail(3u);
          *((_QWORD *)v11 + 12) = v26.Blink;
          v14->Flink = &v26;
          Blink->Flink = v14;
          v26.Blink = (struct _LIST_ENTRY *)((char *)v11 + 88);
          goto LABEL_36;
        }
        RmpGameModeDereferenceRecipientProcess(v11);
      }
LABEL_10:
      if ( v9 && *((_BYTE *)a2 + 140) != v9 )
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive((char *)a2 + 72);
        if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          NotifyGameModeExtensionRecipientsPresent(v9 != 0);
        *((_BYTE *)a2 + 140) = v9;
        RmpGameModeAcquireLock(a2);
      }
      if ( v26.Flink != &v26 )
      {
        RmpGameModeAcquireGlobalResources(a2, &v26);
        RmpGameModeApplyNewRecipientPolicies(a2, &v26);
        RmpGameModeApplyGlobalPolicies(a2);
        RmpGameModeReleaseUnusedGlobalResources(a2);
      }
LABEL_14:
      v12 = *((_QWORD *)a2 + 11);
      if ( (struct _RM_GAME_MODE_CONTEXT *)v12 == (struct _RM_GAME_MODE_CONTEXT *)((char *)a2 + 88)
        || (*(_BYTE *)(v12 + 56) & 0x10) != 0 )
      {
        v13 = 0;
      }
      else
      {
        v13 = *(_DWORD *)(v12 + 20);
      }
      if ( v13 != *((_DWORD *)a2 + 36) )
      {
        RmpSystemPublishGlobalGameModeState(v13);
        *((_DWORD *)a2 + 36) = v13;
      }
      v5 = *((_BYTE *)a2 + 148);
      if ( (v5 & 1) == 0 )
        goto LABEL_19;
    }
    v11 = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v8 - 88);
LABEL_36:
    v16 = *((_QWORD *)v11 + 9);
    if ( !v16 )
    {
LABEL_38:
      v17 = (char *)a2 + 24;
      for ( i = (char *)*((_QWORD *)a2 + 3); i != v17; i = *(char **)v24 )
      {
        if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(i - 56))
          && (*(_BYTE *)(v24 + 114) & 8) == 0 )
        {
          RmpGameModePromoteAuxiliaryProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v24 - 56), &v26);
        }
      }
      goto LABEL_10;
    }
    while ( 1 )
    {
LABEL_37:
      if ( (int)RmpGameModePromotePairedAuxiliaryNode((struct _RTL_BALANCED_NODE *)v16, &v26) < 0 )
        goto LABEL_38;
      v19 = *(_QWORD *)v16;
      if ( !*(_QWORD *)v16 )
        break;
      v20 = (*((_BYTE *)v11 + 80) & 1) == 0;
LABEL_42:
      if ( v20 )
        v16 = v19;
      else
        v16 ^= v19;
    }
    v19 = *(_QWORD *)(v16 + 8);
    v21 = *((_BYTE *)v11 + 80) & 1;
    if ( v19 )
    {
      v20 = v21 == 0;
      goto LABEL_42;
    }
    for ( j = v16; ; v16 = j )
    {
      j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v21 )
      {
        if ( !j )
          goto LABEL_38;
        j ^= v16;
      }
      if ( !j )
        goto LABEL_38;
      v23 = *(_QWORD *)(j + 8);
      if ( v21 )
      {
        if ( !v23 )
          continue;
        v23 ^= j;
      }
      if ( v23 && v23 != v16 )
      {
        v16 = v23;
        goto LABEL_37;
      }
    }
  }
LABEL_19:
  *((_DWORD *)a2 + 20) = 0;
  *((_BYTE *)a2 + 148) = v5 & 0xFD;
  RtlReleaseSRWLockExclusive((char *)a2 + 72);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v30 = &unk_1800D2D7C;
    UserData.Reserved = 2;
    v31 = 25;
    v32 = 1;
    *(_DWORD *)&v25[4] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
