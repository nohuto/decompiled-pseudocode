/*
 * XREFs of SepInitSystemDacls @ 0x140CE0608
 * Callers:
 *     SepVariableInitialization @ 0x140CE1170 (SepVariableInitialization.c)
 * Callees:
 *     RtlAddMandatoryAce @ 0x1409027C0 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS SepInitSystemDacls()
{
  int v0; // r9d
  int v1; // r8d
  ULONG v2; // r13d
  int v3; // ecx
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

  v0 = *(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL);
  v1 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v2 = 4 * (v1 + v0) + 48;
  v3 = *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL);
  v4 = *((unsigned __int8 *)SeRestrictedSid + 1);
  v5 = v2 + 4 * v3 + 20;
  v6 = *((unsigned __int8 *)SeLocalServiceSid + 1);
  v7 = v5 + 4 * (v4 + 5);
  v8 = 4 * (v0 + v1 + v6 + v3) + 88;
  v9 = 4 * (v0 + v1 + *((unsigned __int8 *)RtlpBootStatHandleLock.Teb + 1)) + 68;
  v10 = v9
      + 4
      * (v4
       + 25
       + *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.SystemCallNumber + 1LL)
       + v6
       + BYTE1(PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink->Flink)
       + *(unsigned __int8 *)(PspSiloMonitorLock.ThreadLock + 1));
  v11 = 4 * *((unsigned __int8 *)SeMediumMandatorySid + 1) + 28;
  PspSiloMonitorLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v5, 0x63416553u);
  SePublicDefaultUnrestrictedDacl = (PACL)ExAllocatePool2(288LL, v7, 0x63416553u);
  PspSiloMonitorLock.ApcState.Process = (_KPROCESS *)ExAllocatePool2(288LL, v5, 0x63416553u);
  PspSiloMonitorLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)ExAllocatePool2(288LL, v7, 0x63416553u);
  PspSiloMonitorLock.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v2, 0x63416553u);
  PspSiloMonitorLock.WaitBlockList = (_KWAIT_BLOCK *)ExAllocatePool2(288LL, v8, 0x63416553u);
  PspSiloMonitorLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v7, 0x63416553u);
  PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v9, 0x63416553u);
  SepDefaultRecoveryCapeDacl = (PACL)ExAllocatePool2(288LL, v10, 0x63416553u);
  PspSiloMonitorLock.SchedulerSharedSystemSlot = (void *)ExAllocatePool2(288LL, v11, 0x63416553u);
  SchedulerSharedSystemSlot = (ACL *)PspSiloMonitorLock.SchedulerSharedSystemSlot;
  RtlCreateAcl((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink, v5, 2u);
  RtlCreateAcl(SePublicDefaultUnrestrictedDacl, v7, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.ApcState.Process, v5, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.SchedulingGroup, v7, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink, v2, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.WaitBlockList, v8, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.WaitListEntry.Flink, v7, 2u);
  RtlCreateAcl((PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink, v9, 2u);
  RtlCreateAcl(SepDefaultRecoveryCapeDacl, v10, 2u);
  RtlCreateAcl(SchedulerSharedSystemSlot, v11, 2u);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink,
    2u,
    0x20000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    SePublicDefaultUnrestrictedDacl,
    2u,
    0x20000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.Process,
    2u,
    0xE0000000,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.SchedulingGroup,
    2u,
    0xE0000000,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitBlockList,
    2u,
    0x20000000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitListEntry.Flink,
    2u,
    0x20000u,
    *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink,
    2u,
    0x10000000u,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce(
    SePublicDefaultUnrestrictedDacl,
    2u,
    0x10000000u,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.Process,
    2u,
    0x10000000u,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.SchedulingGroup,
    2u,
    0x10000000u,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink,
    2u,
    0x10000000u,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitBlockList,
    2u,
    0x10000000u,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitListEntry.Flink,
    2u,
    0x1F0000u,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.ApcState.Process, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.SchedulingGroup, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink, 2u, 0xA0020000, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlockList, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitListEntry.Flink, 2u, 0x1F0000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x20000000u, SeRestrictedSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.SchedulingGroup, 2u, 0xA0000000, SeRestrictedSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitListEntry.Flink, 2u, 0x20000u, SeRestrictedSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlockList, 2u, 0x10000000u, SeLocalServiceSid);
  RtlAddAccessAllowedAce(
    (PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink,
    2u,
    0x1FFFFFu,
    *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink, 2u, 0x1FFFFFu, SeAliasAdminsSid);
  RtlAddAccessAllowedAce((PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink, 2u, 0, RtlpBootStatHandleLock.Teb);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0, RtlpBootStatHandleLock.Teb);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeLocalServiceSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, (PSID)PspSiloMonitorLock.ThreadLock);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeRestrictedSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1200A9u, *(PSID *)&RtlpBootStatHandleLock.SystemCallNumber);
  RtlAddMandatoryAce((PACL)PspSiloMonitorLock.SchedulerSharedSystemSlot, 2u, 0, SeMediumMandatorySid, 0x11u, 2u);
  PspSiloMonitorLock.WaitBlock[3].Thread = (struct _KTHREAD *)&unk_140FD86E0;
  RtlCreateSecurityDescriptor(&unk_140FD86E0, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD86E0, 1u, (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Blink, 0);
  SePublicDefaultUnrestrictedSd = (__int64)&unk_140FD8708;
  RtlCreateSecurityDescriptor(&unk_140FD8708, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD8708, 1u, SePublicDefaultUnrestrictedDacl, 0);
  *(_QWORD *)&PspSiloMonitorLock.SchedulerAssistPriorityFloor = &unk_140FD8690;
  RtlCreateSecurityDescriptor(&unk_140FD8690, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD8690, 1u, (PACL)PspSiloMonitorLock.ApcState.Process, 0);
  PspSiloMonitorLock.KernelShadowStack = &unk_140FD86B8;
  RtlCreateSecurityDescriptor(&unk_140FD86B8, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD86B8, 1u, (PACL)PspSiloMonitorLock.SchedulingGroup, 0);
  PspSiloMonitorLock.InGlobalUpdateVpThreadPriorityList = (unsigned __int64)&unk_140FD8668;
  RtlCreateSecurityDescriptor(&unk_140FD8668, 1u);
  RtlSetDaclSecurityDescriptor(
    PspSiloMonitorLock.GlobalUpdateVpThreadPriorityListEntry.Blink,
    1u,
    (PACL)PspSiloMonitorLock.ApcState.ApcListHead[1].Flink,
    0);
  PspSiloMonitorLock.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)&unk_140FD8640;
  RtlCreateSecurityDescriptor(&unk_140FD8640, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD8640, 1u, (PACL)PspSiloMonitorLock.WaitBlockList, 0);
  PspSiloMonitorLock.ThreadListEntry.Flink = (struct _LIST_ENTRY *)&unk_140FD8730;
  RtlCreateSecurityDescriptor(&unk_140FD8730, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD8730, 1u, (PACL)PspSiloMonitorLock.WaitListEntry.Flink, 0);
  PspSiloMonitorLock.WaitBlock[1].Thread = (struct _KTHREAD *)&unk_140FD8780;
  RtlCreateSecurityDescriptor(&unk_140FD8780, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD8780, 1u, (PACL)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Blink, 0);
  v13 = *(void **)((char *)&RtlpBootStatHandleLock.116 + 4);
  RtlSetOwnerSecurityDescriptor(&unk_140FD8780, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
  RtlSetGroupSecurityDescriptor(&unk_140FD8780, v13, 0);
  *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[64] = &unk_140FD8758;
  RtlCreateSecurityDescriptor(&unk_140FD8758, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140FD8758, 1u, SepDefaultRecoveryCapeDacl, 0);
  RtlSetOwnerSecurityDescriptor(&unk_140FD8758, v13, 0);
  RtlSetGroupSecurityDescriptor(&unk_140FD8758, v13, 0);
  PspSiloMonitorLock.UserWaitTime = (unsigned __int64)&unk_140FD8618;
  RtlCreateSecurityDescriptor(&unk_140FD8618, 1u);
  PspSiloMonitorLock.Timer.Dpc = (_KDPC *)&unk_140FD85F0;
  RtlCreateSecurityDescriptor(&unk_140FD85F0, 1u);
  RtlSetSaclSecurityDescriptor(&unk_140FD85F0, 1u, (PACL)PspSiloMonitorLock.SchedulerSharedSystemSlot, 0);
  RtlSetOwnerSecurityDescriptor(&unk_140FD85F0, v13, 0);
  return RtlSetGroupSecurityDescriptor(&unk_140FD85F0, v13, 0);
}
