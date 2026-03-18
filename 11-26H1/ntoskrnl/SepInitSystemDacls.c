/*
 * XREFs of SepInitSystemDacls @ 0x140CDA288
 * Callers:
 *     SepVariableInitialization @ 0x140CDADF0 (SepVariableInitialization.c)
 * Callees:
 *     RtlAddMandatoryAce @ 0x140926CB0 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409D8260 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AABBB0 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS SepInitSystemDacls()
{
  int v0; // r9d
  int v1; // r8d
  ULONG v2; // r13d
  int ControlWord_high; // ecx
  int v4; // r10d
  ULONG v5; // r14d
  int v6; // edx
  ULONG v7; // edi
  ULONG v8; // r15d
  ULONG v9; // r12d
  ULONG v10; // esi
  ULONG v11; // ebp
  ACL *SchedulerSharedSystemSlot; // rbx
  void *v13; // rbx

  v0 = *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL);
  v1 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v2 = 4 * (v1 + v0) + 48;
  ControlWord_high = HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord);
  v4 = *((unsigned __int8 *)SeRestrictedSid + 1);
  v5 = v2 + 4 * ControlWord_high + 20;
  v6 = *((unsigned __int8 *)SeLocalServiceSid + 1);
  v7 = v5 + 4 * (v4 + 5);
  v8 = 4 * (v0 + v1 + v6 + ControlWord_high) + 88;
  v9 = 4 * (v0 + v1 + BYTE1(RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink)) + 68;
  v10 = v9
      + 4
      * (v4
       + 25
       + *(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL)
       + v6
       + BYTE1(PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink->Flink)
       + *(unsigned __int8 *)(PspSiloMonitorLock.ThreadLock + 1));
  v11 = 4 * *((unsigned __int8 *)SeMediumMandatorySid + 1) + 28;
  PspSiloMonitorLock.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v5, 0x63416553u);
  SePublicDefaultUnrestrictedDacl = (PACL)ExAllocatePool2(288LL, v7, 0x63416553u);
  PspSiloMonitorLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v5, 0x63416553u);
  *(_QWORD *)&PspSiloMonitorLock.WaitRegister.Flags = ExAllocatePool2(288LL, v7, 0x63416553u);
  PspSiloMonitorLock.ApcState.Process = (_KPROCESS *)ExAllocatePool2(288LL, v2, 0x63416553u);
  PspSiloMonitorLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v8, 0x63416553u);
  PspSiloMonitorLock.WaitBlockList = (_KWAIT_BLOCK *)ExAllocatePool2(288LL, v7, 0x63416553u);
  PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v9, 0x63416553u);
  SepDefaultRecoveryCapeDacl = (PACL)ExAllocatePool2(288LL, v10, 0x63416553u);
  PspSiloMonitorLock.SchedulerSharedSystemSlot = (void *)ExAllocatePool2(288LL, v11, 0x63416553u);
  SchedulerSharedSystemSlot = (ACL *)PspSiloMonitorLock.SchedulerSharedSystemSlot;
  RtlCreateAcl((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink, v5, 2u);
  RtlCreateAcl(SePublicDefaultUnrestrictedDacl, v7, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink, v5, 2u);
  RtlCreateAcl(*(PACL *)&PspSiloMonitorLock.WaitRegister.Flags, v7, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.ApcState.Process, v2, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.WaitListEntry.Flink, v8, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.WaitBlockList, v7, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink, v9, 2u);
  RtlCreateAcl(SepDefaultRecoveryCapeDacl, v10, 2u);
  RtlCreateAcl(SchedulerSharedSystemSlot, v11, 2u);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink,
    2u,
    0x20000000u,
    RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x20000000u, RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink,
    2u,
    0xE0000000,
    RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce(
    *(PACL *)&PspSiloMonitorLock.WaitRegister.Flags,
    2u,
    0xE0000000,
    RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitListEntry.Flink,
    2u,
    0x20000000u,
    RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlockList, 2u, 0x20000u, RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink,
    2u,
    0x10000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    SePublicDefaultUnrestrictedDacl,
    2u,
    0x10000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink,
    2u,
    0x10000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    *(PACL *)&PspSiloMonitorLock.WaitRegister.Flags,
    2u,
    0x10000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.Process,
    2u,
    0x10000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitListEntry.Flink,
    2u,
    0x10000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitBlockList,
    2u,
    0x1F0000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(*(PACL *)&PspSiloMonitorLock.WaitRegister.Flags, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.ApcState.Process, 2u, 0xA0020000, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitListEntry.Flink, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlockList, 2u, 0x1F0000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x20000000u, SeRestrictedSid);
  RtlAddAccessAllowedAce(*(PACL *)&PspSiloMonitorLock.WaitRegister.Flags, 2u, 0xA0000000, SeRestrictedSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlockList, 2u, 0x20000u, SeRestrictedSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitListEntry.Flink, 2u, 0x10000000u, SeLocalServiceSid);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink,
    2u,
    0x1FFFFFu,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink, 2u, 0x1FFFFFu, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink,
    2u,
    0,
    RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0, RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeLocalServiceSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, (PSID)PspSiloMonitorLock.ThreadLock);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeRestrictedSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1200A9u, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddMandatoryAce(
    (unsigned __int8 *)PspSiloMonitorLock.SchedulerSharedSystemSlot,
    2u,
    0,
    (unsigned __int8 *)SeMediumMandatorySid,
    17,
    2);
  *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[160] = &unk_140FD7608;
  RtlCreateSecurityDescriptor(&unk_140FD7608, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD7608, 1u, (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink, 0);
  SePublicDefaultUnrestrictedSd = (__int64)&unk_140FD75E0;
  RtlCreateSecurityDescriptor(&unk_140FD75E0, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD75E0, 1u, SePublicDefaultUnrestrictedDacl, 0);
  PspSiloMonitorLock.InGlobalUpdateVpThreadPriorityList = (unsigned __int64)&unk_140FD7630;
  RtlCreateSecurityDescriptor(&unk_140FD7630, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD7630, 1u, (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink, 0);
  PspSiloMonitorLock.UserWaitTime = (unsigned __int64)&unk_140FD7658;
  RtlCreateSecurityDescriptor(&unk_140FD7658, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD7658, 1u, *(PACL *)&PspSiloMonitorLock.WaitRegister.Flags, 0);
  PspSiloMonitorLock.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)&unk_140FD7720;
  RtlCreateSecurityDescriptor(&unk_140FD7720, 1u);
  RtlSetDaclSecurityDescriptor(
    PspSiloMonitorLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
    1u,
    (PACL)PspSiloMonitorLock.ApcState.Process,
    0);
  PspSiloMonitorLock.KernelShadowStackBase = &unk_140FD76F8;
  RtlCreateSecurityDescriptor(&unk_140FD76F8, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD76F8, 1u, (PACL)PspSiloMonitorLock.WaitListEntry.Flink, 0);
  PspSiloMonitorLock.ThreadListEntry.Flink = (struct _LIST_ENTRY *)&unk_140FD7680;
  RtlCreateSecurityDescriptor(&unk_140FD7680, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD7680, 1u, (PACL)PspSiloMonitorLock.WaitBlockList, 0);
  PspSiloMonitorLock.WaitBlock[1].Thread = (struct _KTHREAD *)&unk_140FD76D0;
  RtlCreateSecurityDescriptor(&unk_140FD76D0, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD76D0, 1u, (PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink, 0);
  v13 = *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags;
  RtlSetOwnerSecurityDescriptor(&unk_140FD76D0, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  RtlSetGroupSecurityDescriptor(&unk_140FD76D0, v13, 0);
  *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[64] = &unk_140FD76A8;
  RtlCreateSecurityDescriptor(&unk_140FD76A8, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD76A8, 1u, SepDefaultRecoveryCapeDacl, 0);
  RtlSetOwnerSecurityDescriptor(&unk_140FD76A8, v13, 0);
  RtlSetGroupSecurityDescriptor(&unk_140FD76A8, v13, 0);
  PspSiloMonitorLock.KernelShadowStackInitial = &unk_140FD7770;
  RtlCreateSecurityDescriptor(&unk_140FD7770, 1u);
  PspSiloMonitorLock.WaitBlock[1].Object = &unk_140FD7748;
  RtlCreateSecurityDescriptor(&unk_140FD7748, 1u);
  RtlSetSaclSecurityDescriptor((__int64)&unk_140FD7748, 1, (__int64)PspSiloMonitorLock.SchedulerSharedSystemSlot, 0);
  RtlSetOwnerSecurityDescriptor(&unk_140FD7748, v13, 0);
  return RtlSetGroupSecurityDescriptor(&unk_140FD7748, v13, 0);
}
