/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x140019FE0 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x140009C04 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidGetSrbIoctlFromIrp @ 0x14001CB38 (RaidGetSrbIoctlFromIrp.c)
 *     IsDmarEnabled @ 0x14001CD00 (IsDmarEnabled.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidAdapterScatterGatherExecute @ 0x14002A660 (RaidAdapterScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x14002B9D4 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x14005C878 (RaidFreeRemappedScatterGatherListMdl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterMapUsermodeNvmeDoorbellAddress @ 0x140063F88 (RaidAdapterMapUsermodeNvmeDoorbellAddress.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        int a6)
{
  _BYTE *v6; // r14
  __int64 v9; // r12
  __int64 v10; // rdi
  int SrbIoctlFromIrp; // eax
  int v12; // ebx
  __int64 v13; // rbx
  __int64 Pool2; // r15
  _DWORD *v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v19; // r9d
  __int64 v20; // r10
  __int64 ContiguousNodeMemory; // rbx
  ULONG v22; // edx
  PVOID v23; // rax
  struct _MDL *Mdl; // rax
  unsigned __int8 v25; // r8
  char v26; // r9
  char v27; // r10
  KIRQL CurrentIrql; // al
  _DWORD *v29; // r8
  int v30; // ecx
  _QWORD *UnitAtDirql; // rcx
  _DWORD *v32; // rcx
  ULONG v33; // eax
  _BYTE *v34; // rdx
  signed __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  bool v45; // bl
  __int64 v46; // rcx
  __int64 v47; // rax
  void (__fastcall *v48)(__int64, _QWORD, bool); // rax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // al
  _QWORD *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  struct _MDL *v61; // rcx
  bool v62; // zf
  int v63; // edx
  char *v64; // rcx
  char v65; // al
  __int64 v67; // rax
  KIRQL v68; // al
  __int64 v69; // rcx
  __int64 v70; // rdx
  void (__fastcall *v71)(__int64, _QWORD, _QWORD); // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  void (__fastcall *v75)(__int64, __int64, _QWORD); // rax
  __int64 v76; // rax
  unsigned int v77; // eax
  _DWORD *v78; // rax
  unsigned int v79; // ecx
  __int64 v80; // rbx
  __int16 IoPriorityHint; // ax
  signed __int64 v82; // r8
  unsigned int v83; // ecx
  KIRQL v84; // bl
  __int64 v85; // rax
  __int64 v86; // r9
  __int64 v87; // rax
  void (__fastcall *v88)(__int64, _QWORD, bool); // rax
  __int64 Unit; // rax
  __int64 v90; // rcx
  __int64 v91; // rdx
  char v92; // si
  unsigned __int8 v93; // r8
  char v94; // r9
  char v95; // di
  char v96; // r11
  bool v97; // r15
  unsigned __int8 *v98; // r10
  unsigned int v99; // ecx
  __int64 v100; // rax
  _QWORD *v101; // rcx
  unsigned __int64 v102; // r8
  signed __int32 v103; // eax
  signed __int32 v104; // ett
  __int64 v105; // rax
  unsigned __int64 v106; // r12
  int v107; // ecx
  int v108; // ecx
  unsigned __int64 v109; // rcx
  char v110; // al
  char v111; // r10
  char *v112; // r11
  unsigned int v113; // eax
  int Irp; // [rsp+20h] [rbp-C9h]
  KIRQL v115; // [rsp+60h] [rbp-89h]
  KIRQL v116; // [rsp+60h] [rbp-89h]
  unsigned int v117; // [rsp+64h] [rbp-85h]
  ULONG Length; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v119; // [rsp+6Ch] [rbp-7Dh] BYREF
  unsigned int v120; // [rsp+70h] [rbp-79h]
  __int64 v121; // [rsp+78h] [rbp-71h]
  _QWORD *v122; // [rsp+80h] [rbp-69h]
  signed __int64 v123; // [rsp+88h] [rbp-61h]
  int v124; // [rsp+90h] [rbp-59h]
  int v125; // [rsp+94h] [rbp-55h]
  __int64 v126; // [rsp+98h] [rbp-51h]
  __int64 v127; // [rsp+A0h] [rbp-49h]
  __int64 v128; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v129; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-29h] BYREF
  PVOID VirtualAddress[2]; // [rsp+D8h] [rbp-11h] BYREF

  v6 = 0LL;
  v125 = a4;
  v124 = a3;
  VirtualAddress[0] = 0LL;
  Length = 0;
  v119 = 0;
  v126 = 0LL;
  v127 = 0LL;
  v120 = 0;
  v9 = 0LL;
  v122 = 0LL;
  v10 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp(
                      a2,
                      (unsigned int)VirtualAddress,
                      (unsigned int)&Length,
                      (unsigned int)&v119,
                      2);
  v12 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    *(_DWORD *)(a2 + 48) = SrbIoctlFromIrp;
    v57 = 0LL;
    goto LABEL_74;
  }
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v126 = a1 + 176;
  }
  else if ( *(_DWORD *)a1 == 1094997074 )
  {
    v126 = a1 + 384;
  }
  else
  {
    v126 = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v126 + 98) != 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( !Pool2 && v13 )
      RaidLogAllocationFailure(v13, 64, 88, 1918067026, 0x80000000);
    goto LABEL_7;
  }
  v58 = ExAllocatePool2(64LL, 144LL, 1918067026LL);
  v9 = v58;
  if ( !v58 && v13 )
  {
    RaidLogAllocationFailure(v13, 64, 144, 1918067026, 0x80000000);
    goto LABEL_159;
  }
  Pool2 = v58;
  if ( !v58 )
  {
LABEL_7:
    v9 = Pool2;
    if ( Pool2 )
      goto LABEL_8;
LABEL_159:
    v12 = -1073741801;
    v57 = 0LL;
    goto LABEL_74;
  }
  *(_WORD *)v58 = 8;
  *(_DWORD *)(v58 + 12) = 1;
  *(_BYTE *)(v58 + 2) = 40;
  *(_DWORD *)(v58 + 8) = 1397899864;
  *(_DWORD *)(v58 + 16) = 144;
  *(_DWORD *)(v58 + 20) = 2;
  *(_WORD *)(v58 + 36) = 2;
  *(_QWORD *)(v58 + 52) = 128LL;
  *(_WORD *)(v58 + 128) = 1;
  *(_DWORD *)(v58 + 132) = 4;
LABEL_8:
  v15 = (_DWORD *)(a1 + 316);
  if ( *(_DWORD *)a1 != 1314275652 )
    v15 = (_DWORD *)(a1 + 524);
  v16 = *(_QWORD *)(a1 + 4368);
  v17 = (*v15 + 7) & 0xFFFFFFF8;
  v130 = 0LL;
  v117 = v17 + 1200;
  v121 = *(_QWORD *)(a1 + 896);
  v129 = *(_QWORD *)(a1 + 4376);
  v128 = *(_QWORD *)(a1 + 4384);
  IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
  v19 = v117;
  if ( !IsEnabledDeviceUsageNoInline && *(_QWORD *)(a1 + 5688) )
  {
    v19 = v117 + 24;
    v117 += 24;
  }
  v123 = v19;
  if ( (unsigned __int8)IsDmarEnabled(a1) )
  {
    Irp = 0;
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)(v121 + 8) + 272LL))(
                             v121,
                             &v129,
                             &v128);
  }
  else
  {
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(v20, v129, v128, v16, 4, 0x80000000);
  }
  v121 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_QWORD *)(ContiguousNodeMemory + 840) = 0LL;
      if ( *(_QWORD *)(a1 + 5680) )
      {
        v85 = ContiguousNodeMemory + 856;
        goto LABEL_191;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 5688) )
      {
        v85 = ContiguousNodeMemory + v123 - 24;
LABEL_191:
        *(_QWORD *)(ContiguousNodeMemory + 840) = v85;
        *(_OWORD *)v85 = 0LL;
        *(_QWORD *)(v85 + 16) = 0LL;
        goto LABEL_192;
      }
      *(_QWORD *)(ContiguousNodeMemory + 840) = 0LL;
    }
LABEL_192:
    *(_QWORD *)(ContiguousNodeMemory + 24) = v130;
    *(_DWORD *)(ContiguousNodeMemory + 16) = v117;
    goto LABEL_17;
  }
  v121 = 0LL;
  if ( !*(_QWORD *)(a1 + 120) )
    goto LABEL_72;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 1u) )
    goto LABEL_72;
  ContiguousNodeMemory = *(_QWORD *)(a1 + 120);
  v121 = ContiguousNodeMemory;
  if ( !ContiguousNodeMemory )
    goto LABEL_72;
LABEL_17:
  v10 = ContiguousNodeMemory + 48;
  v22 = Length;
  *(_BYTE *)(ContiguousNodeMemory + 64) &= 0x1Cu;
  *(_BYTE *)(ContiguousNodeMemory + 65) &= 0x70u;
  *(_WORD *)(ContiguousNodeMemory + 68) = -1;
  *(_WORD *)(ContiguousNodeMemory + 828) = -1;
  v23 = VirtualAddress[0];
  *(_DWORD *)(ContiguousNodeMemory + 48) = 523124044;
  *(_QWORD *)(ContiguousNodeMemory + 56) = 0LL;
  *(_BYTE *)(ContiguousNodeMemory + 70) = -1;
  *(_DWORD *)(ContiguousNodeMemory + 72) = 0;
  *(_QWORD *)(ContiguousNodeMemory + 152) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 160) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 184) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 200) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 192) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 240) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 208) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 216) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 264) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 272) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 168) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 744) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 752) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 760) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 768) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 792) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 808) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 816) = 0LL;
  *(_DWORD *)(ContiguousNodeMemory + 824) = 0;
  *(_QWORD *)(ContiguousNodeMemory + 832) = 0LL;
  *(_DWORD *)(ContiguousNodeMemory + 848) = -1;
  *(_DWORD *)(ContiguousNodeMemory + 856) = 0;
  *(_DWORD *)(ContiguousNodeMemory + 864) = 0;
  *(_QWORD *)(ContiguousNodeMemory + 872) = 0LL;
  *(_OWORD *)(ContiguousNodeMemory + 880) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 896) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 904) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 912) = 0LL;
  *(_QWORD *)(ContiguousNodeMemory + 920) = 0LL;
  *(_DWORD *)(ContiguousNodeMemory + 928) = -1;
  v123 = (signed __int64)v23;
  Mdl = IoAllocateMdl(v23, v22, 0, 0, 0LL);
  *(_QWORD *)(ContiguousNodeMemory + 152) = Mdl;
  if ( !Mdl )
  {
LABEL_72:
    v12 = -1073741801;
LABEL_73:
    v57 = v121;
    goto LABEL_74;
  }
  *(_BYTE *)(ContiguousNodeMemory + 64) |= 1u;
  MmBuildMdlForNonPagedPool(Mdl);
  v25 = a5;
  v26 = v124;
  v27 = v125;
  BYTE2(v120) = a5;
  LOBYTE(v120) = v124;
  BYTE1(v120) = v125;
  if ( a6 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      if ( (unsigned int)CurrentIrql >= *(_DWORD *)(a1 + 872) )
      {
        UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, v120);
        v122 = UnitAtDirql;
      }
      else
      {
        v84 = RaidAdapterAcquireInterruptLock(a1);
        v122 = RaidAdapterFindUnitAtDirql(a1, v120);
        RaidAdapterReleaseInterruptLock(a1, v84);
        UnitAtDirql = v122;
        ContiguousNodeMemory = v121;
      }
    }
    else
    {
      v122 = 0LL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v29 = *(_DWORD **)(a1 + 144);
      VirtualAddress[0] = v29;
      if ( v29 != (_DWORD *)(a1 + 144) )
      {
        do
        {
          v30 = v29[10];
          v122 = v29 - 16;
          if ( (BYTE2(v30) | ((((unsigned __int8)v30 << 8) | BYTE1(v30)) << 8)) == (a5 | (((unsigned __int8)v125 | ((unsigned __int8)v124 << 8)) << 8)) )
            break;
          v29 = *(_DWORD **)v29;
        }
        while ( v29 != (_DWORD *)(a1 + 144) );
        VirtualAddress[0] = v29;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      UnitAtDirql = 0LL;
      if ( VirtualAddress[0] != (PVOID)(a1 + 144) )
        UnitAtDirql = v122;
      v122 = UnitAtDirql;
    }
    v25 = a5;
    v26 = v124;
    v27 = v125;
    *(_QWORD *)(v10 + 224) = UnitAtDirql;
  }
  v32 = (_DWORD *)(Pool2 + 24);
  if ( *(_BYTE *)(v126 + 98) == 1 )
  {
    v80 = *(unsigned int *)(Pool2 + 52);
    *v32 = 192;
    v127 = Pool2;
    *(_QWORD *)(Pool2 + 96) = v10;
    *(_QWORD *)(Pool2 + 80) = a2;
    *(_DWORD *)(Pool2 + 20) = 2;
    IoPriorityHint = IoGetIoPriorityHint((PIRP)a2);
    v82 = v123;
    v32 = (_DWORD *)(Pool2 + 64);
    *(_WORD *)(Pool2 + 36) = IoPriorityHint;
    v34 = (_BYTE *)(Pool2 + 2);
    *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(v82 + 12);
    *(_DWORD *)(Pool2 + 60) = Length;
    LOBYTE(IoPriorityHint) = v124;
    *(_QWORD *)(Pool2 + 64) = v82;
    *(_BYTE *)(v80 + Pool2 + 8) = IoPriorityHint;
    *(_BYTE *)(v80 + Pool2 + 9) = v125;
    *(_BYTE *)(v80 + Pool2 + 10) = a5;
    ContiguousNodeMemory = v121;
    *(_QWORD *)(v10 + 168) = Pool2;
    v36 = *(_QWORD *)(Pool2 + 80);
  }
  else
  {
    v33 = Length;
    v34 = (_BYTE *)(Pool2 + 2);
    *(_BYTE *)(Pool2 + 7) = v25;
    v35 = v123;
    *(_DWORD *)(Pool2 + 16) = v33;
    *(_QWORD *)(Pool2 + 48) = v10;
    *(_WORD *)Pool2 = 88;
    *(_BYTE *)(Pool2 + 2) = 2;
    *(_BYTE *)(Pool2 + 5) = v26;
    *(_BYTE *)(Pool2 + 6) = v27;
    *(_DWORD *)(Pool2 + 12) = 192;
    *(_QWORD *)v32 = v35;
    *(_DWORD *)(Pool2 + 20) = *(_DWORD *)(v35 + 12);
    v36 = a2;
    *(_QWORD *)(v10 + 168) = Pool2;
  }
  *(_QWORD *)(v10 + 176) = v36;
  v37 = ContiguousNodeMemory + 1200;
  *(_QWORD *)(v10 + 184) = *(_QWORD *)v32;
  v38 = 316LL;
  v39 = *(_DWORD *)a1;
  if ( *v34 == 40 )
  {
    if ( v39 != 1314275652 )
      v38 = 524LL;
    if ( ((*(_DWORD *)(v38 + a1) + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(Pool2 + 104) = v37;
  }
  else
  {
    if ( v39 != 1314275652 )
      v38 = 524LL;
    if ( ((*(_DWORD *)(v38 + a1) + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(Pool2 + 56) = v37;
  }
  KeInitializeEvent((PRKEVENT)(v10 + 664), NotificationEvent, 0);
  *(_QWORD *)(v10 + 656) = RaidXrbSignalCompletion;
  if ( *(_QWORD *)(a1 + 5024) )
  {
    if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5344));
      if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5352));
    }
    v40 = 5LL;
    if ( !*(_DWORD *)(a1 + 92) )
      v40 = 1LL;
    PoFxActivateComponent(**(_QWORD **)(a1 + 5024), 0LL, v40);
  }
  if ( *(_BYTE *)(a1 + 4434) )
  {
    v115 = KfRaiseIrql(2u);
    if ( *(_BYTE *)(a1 + 4434) )
    {
      v42 = *(_QWORD *)(v10 + 168);
      v43 = 24LL;
      if ( *(_BYTE *)(v42 + 2) != 40 )
        v43 = 12LL;
      if ( (*(_BYTE *)(a1 + 4435) & 4) != 0 )
      {
        v44 = a1 + 896;
        v45 = (*(_DWORD *)(v43 + v42) & 0x40) != 0;
        if ( *(_QWORD *)(v10 + 104) )
        {
          if ( a1 != -896 )
          {
            v46 = *(_QWORD *)v44;
            if ( *(_QWORD *)v44 )
            {
              v47 = *(_QWORD *)(v46 + 8);
              if ( v47 )
              {
                if ( *(int *)(a1 + 924) >= 3 && (v48 = *(void (__fastcall **)(__int64, _QWORD, bool))(v47 + 240)) != 0LL )
                {
                  v48(v46, *(_QWORD *)(v10 + 104), v45);
                }
                else
                {
                  LOBYTE(v41) = 1;
                  KeFlushIoBuffers(*(_QWORD *)(v10 + 104), v45, v41);
                }
                v44 = a1 + 896;
              }
            }
          }
        }
        v49 = *(_QWORD *)(v10 + 136);
        if ( v49 )
        {
          if ( v44 )
          {
            v86 = *(_QWORD *)v44;
            if ( *(_QWORD *)v44 )
            {
              v87 = *(_QWORD *)(v86 + 8);
              if ( v87 )
              {
                if ( *(int *)(v44 + 28) >= 3 && (v88 = *(void (__fastcall **)(__int64, _QWORD, bool))(v87 + 240)) != 0LL )
                {
                  v88(v86, *(_QWORD *)(v10 + 136), v45);
                }
                else
                {
                  LOBYTE(v41) = 1;
                  KeFlushIoBuffers(v49, v45, v41);
                }
              }
            }
          }
        }
      }
      else
      {
        if ( *(_QWORD *)(v10 + 136) )
        {
          v50 = RaidAdapterScatterGatherExecuteBidirectionalRequest(a1, v10, v41);
          goto LABEL_55;
        }
        if ( (*(_DWORD *)(v43 + v42) & 0xC0) != 0 )
        {
          v50 = RaidAdapterScatterGatherExecute(a1, v10);
          goto LABEL_55;
        }
      }
    }
    v50 = RaidAdapterPostScatterGatherExecute(a1, v10);
LABEL_55:
    v12 = v50;
    KeLowerIrql(v115);
    goto LABEL_56;
  }
  v12 = RaidAdapterPostScatterGatherExecute(a1, v10);
LABEL_56:
  if ( v12 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 664), Executive, 0, 0, 0LL);
    v12 = RaidSrbStatusToNtStatus(*(unsigned __int8 *)(Pool2 + 3), v51, v52, v53);
  }
  v54 = *(_BYTE *)(v10 + 17);
  if ( (v54 & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v10 + 748));
    *(_BYTE *)(v10 + 17) &= ~1u;
    v54 = *(_BYTE *)(v10 + 17);
  }
  if ( (v54 & 2) != 0 )
  {
    if ( a6 == 1 )
    {
      v90 = (__int64)v122;
      if ( !v122 )
        goto LABEL_61;
    }
    else
    {
      Unit = RaidAdapterFindUnit(a1, v120);
      v122 = (_QWORD *)Unit;
      if ( !Unit || (unsigned int)RaUnitAcquireRemoveLock(Unit, a2, 1) )
        goto LABEL_61;
      v90 = (__int64)v122;
    }
    RaidUnitPoFxIdleComponentFromMiniport(v90, *(_DWORD *)(v10 + 748));
    *(_BYTE *)(v10 + 17) &= ~2u;
    if ( a6 != 1 )
    {
      v101 = v122;
      v102 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v103 = *(_DWORD *)(v102 + v122[5]);
      while ( (v103 & 1) == 0 )
      {
        v104 = v103;
        v103 = _InterlockedCompareExchange((volatile signed __int32 *)(v102 + v101[5]), v103 - 2, v103);
        if ( v104 == v103 )
          goto LABEL_61;
        v101 = v122;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v101 + 258, 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v101 + 65), 0, 0);
    }
  }
LABEL_61:
  v55 = *(_QWORD **)(a1 + 5024);
  if ( v55 )
    PoFxIdleComponent(*v55, 0LL, 0LL);
  if ( v12 < 0 )
    goto LABEL_73;
  if ( *(_QWORD *)(v123 + 4) != 0x5551455441455243LL || (*(_DWORD *)(v123 + 68) & 0x30) != 0x10 )
  {
    v56 = v127;
    v57 = v121;
    goto LABEL_135;
  }
  v12 = RaidAdapterMapUsermodeNvmeDoorbellAddress(a1, a2);
  v9 = Pool2;
  v57 = v121;
  v56 = v127;
  if ( v12 < 0 )
  {
LABEL_74:
    v59 = 0LL;
    goto LABEL_75;
  }
LABEL_135:
  if ( *(_BYTE *)(v9 + 2) == 40 )
  {
    v83 = *(_DWORD *)(v56 + 60);
    if ( v119 < v83 )
      v83 = v119;
    v59 = v83;
  }
  else
  {
    v79 = *(_DWORD *)(v9 + 16);
    if ( v119 < v79 )
      v79 = v119;
    v59 = v79;
  }
LABEL_75:
  *(_QWORD *)(a2 + 56) = v59;
  if ( !v57 )
    goto LABEL_86;
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 112) )
    {
      v67 = *(_QWORD *)(v10 + 168);
      if ( *(_BYTE *)(v67 + 2) == 40 )
      {
        v77 = *(_DWORD *)(v67 + 24) >> 6;
        LOBYTE(v77) = (v77 & 1) == 0;
        v119 = v77;
      }
      else
      {
        LOBYTE(v119) = (*(_BYTE *)(v67 + 12) & 0x40) == 0;
      }
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl(v10);
      v68 = KfRaiseIrql(2u);
      v116 = v68;
      if ( *(_QWORD *)(v10 + 216) != -896LL )
      {
        v69 = *(_QWORD *)(*(_QWORD *)(v10 + 216) + 896LL);
        if ( v69 )
        {
          v70 = *(_QWORD *)(v69 + 8);
          if ( v70 )
          {
            v71 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v70 + 96);
            if ( v71 )
              v71(v69, *(_QWORD *)(v10 + 112), (unsigned __int8)v119);
            v68 = v116;
          }
        }
      }
      v72 = *(_QWORD *)(v10 + 152);
      *(_QWORD *)(v10 + 112) = 0LL;
      *(_QWORD *)(v10 + 144) = 0LL;
      if ( v72 )
      {
        if ( *(_QWORD *)(v10 + 216) != -896LL )
        {
          v73 = *(_QWORD *)(*(_QWORD *)(v10 + 216) + 896LL);
          if ( v73 )
          {
            v74 = *(_QWORD *)(v73 + 8);
            if ( v74 )
            {
              v75 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v74 + 96);
              if ( v75 )
                v75(v73, v72, 0LL);
            }
          }
        }
        v68 = v116;
        *(_QWORD *)(v10 + 152) = 0LL;
      }
      KeLowerIrql(v68);
    }
    v60 = *(_QWORD *)(v10 + 104);
    if ( v60 && (*(_BYTE *)(v10 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v60 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v60);
      IoFreeMdl(*(PMDL *)(v10 + 104));
      *(_BYTE *)(v10 + 16) &= ~1u;
      *(_QWORD *)(v10 + 104) = 0LL;
    }
    v61 = *(struct _MDL **)(v10 + 136);
    if ( v61 )
    {
      MmUnlockPages(v61);
      IoFreeMdl(*(PMDL *)(v10 + 136));
      *(_QWORD *)(v10 + 136) = 0LL;
    }
  }
  if ( v57 == *(_QWORD *)(a1 + 120) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
    goto LABEL_86;
  }
  if ( *(_DWORD *)a1 != 1094997074 )
  {
    if ( *(_DWORD *)a1 == 1314275652 && *(_BYTE *)(a1 + 1168) && *(_DWORD *)(a1 + 1188) == 3 )
      goto LABEL_183;
LABEL_85:
    MmFreeContiguousMemory((PVOID)v57);
    goto LABEL_86;
  }
  if ( !*(_BYTE *)(a1 + 904) || *(_DWORD *)(a1 + 924) != 3 )
    goto LABEL_85;
LABEL_183:
  LOBYTE(Irp) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 896),
    *(unsigned int *)(v57 + 16),
    *(_QWORD *)(v57 + 24),
    v57,
    Irp);
LABEL_86:
  if ( v9 )
  {
    if ( *(_BYTE *)(v126 + 98) == 1 )
    {
      v76 = v127;
      if ( !v127 )
        v76 = v9;
      *(_QWORD *)(v76 + 80) = 0LL;
      *(_QWORD *)(v76 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x72536152u);
  }
  v62 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v12;
  if ( v62 )
    goto LABEL_93;
  *(_OWORD *)VirtualAddress = 0LL;
  IoGetActivityIdIrp(a2, VirtualAddress);
  v64 = *(char **)(a2 + 184);
  v65 = *v64;
  if ( *v64 != 15 )
  {
    if ( v65 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(
          v64,
          &EventNonReadWriteRequestComplete,
          VirtualAddress,
          a2,
          *(_DWORD *)(a2 + 48));
    }
    else if ( v65 == 27 )
    {
      if ( v64[1] != 7 || *((_DWORD *)v64 + 2) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v64, &EventPnpRequestComplete, VirtualAddress, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v78 = *(_DWORD **)(a2 + 56);
        if ( v78 )
          LODWORD(v6) = *v78;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)v64,
          v63,
          (unsigned int)VirtualAddress,
          a2,
          (char)v6,
          *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_93;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_93;
  v91 = *((_QWORD *)v64 + 1);
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  if ( *(_BYTE *)(v91 + 2) != 40 )
  {
    LODWORD(v109) = *(unsigned __int8 *)(v91 + 72);
    v6 = *(_BYTE **)(v91 + 32);
    v93 = *(_BYTE *)(v91 + 11);
    v92 = *(_BYTE *)(v91 + 4);
    if ( *(_BYTE *)(v91 + 2) )
      goto LABEL_93;
LABEL_226:
    LOBYTE(v109) = v109 - 8;
    if ( (v109 & 0x5D) != 0 )
      goto LABEL_93;
    if ( *(_BYTE *)(v91 + 3) == 1 || !v6 || !v93 )
      goto LABEL_244;
    v110 = *v6 & 0x7F;
    if ( v110 == 114 || v110 == 115 )
    {
      v109 = (unsigned __int64)&v6[v93];
      v111 = 0;
      if ( (unsigned __int64)(v6 + 8) <= v109 )
      {
        v95 = v6[2];
        v94 = v6[1] & 0xF;
        v96 = v6[3];
LABEL_242:
        v111 = 1;
      }
    }
    else
    {
      v109 = (unsigned __int64)&v6[v93];
      v111 = 0;
      if ( (unsigned __int64)(v6 + 8) <= v109 )
      {
        v112 = v6 + 13;
        v94 = v6[2] & 0xF;
        v113 = v93;
        if ( (unsigned int)(unsigned __int8)v6[7] + 8 <= v93 )
          v113 = (unsigned __int8)v6[7] + 8;
        v109 = (unsigned __int64)&v6[v113];
        if ( (unsigned __int64)v112 <= v109 )
          v95 = v6[12];
        if ( (unsigned __int64)(v6 + 14) > v109 )
          v96 = 0;
        else
          v96 = *v112;
        goto LABEL_242;
      }
    }
    v97 = v111 != 0;
LABEL_244:
    if ( byte_140173441 < 0 )
    {
      if ( !v97 )
      {
        v96 = 0;
        v95 = 0;
        v94 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v109,
        v91,
        (unsigned int)VirtualAddress,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v91 + 3),
        v92,
        v94,
        v95,
        v96,
        a2);
    }
    goto LABEL_93;
  }
  v98 = 0LL;
  if ( *(_DWORD *)(v91 + 20) )
    goto LABEL_93;
  v99 = *(_DWORD *)(v91 + 56);
  v100 = 0LL;
  v119 = 0;
  Length = v99;
  if ( !v99 )
    goto LABEL_93;
  while ( 1 )
  {
    v105 = *(unsigned int *)(v91 + 4 * v100 + 120);
    if ( (unsigned int)v105 < 0x80 )
      goto LABEL_223;
    v106 = *(unsigned int *)(v91 + 16);
    if ( (unsigned int)v105 >= (unsigned int)v106 )
      goto LABEL_223;
    v107 = *(_DWORD *)(v91 + v105);
    if ( v107 != 64 )
      break;
    if ( v105 + 40 <= v106 )
    {
      if ( !*(_BYTE *)(v91 + v105 + 10) )
        goto LABEL_215;
LABEL_214:
      v98 = (unsigned __int8 *)(v105 + v91 + 24);
LABEL_215:
      v6 = *(_BYTE **)(v91 + v105 + 16);
      goto LABEL_216;
    }
LABEL_222:
    v99 = Length;
LABEL_223:
    v100 = v119 + 1;
    v119 = v100;
    if ( (unsigned int)v100 >= v99 )
      goto LABEL_217;
  }
  v108 = v107 - 65;
  if ( !v108 )
  {
    if ( v105 + 56 <= v106 )
    {
      if ( *(_BYTE *)(v91 + v105 + 10) )
        goto LABEL_214;
      goto LABEL_215;
    }
    goto LABEL_222;
  }
  if ( v108 != 1 || v105 + 40 > v106 )
    goto LABEL_222;
  if ( *(_DWORD *)(v91 + v105 + 12) )
    v98 = (unsigned __int8 *)(v105 + v91 + 32);
  v6 = *(_BYTE **)(v91 + v105 + 24);
LABEL_216:
  v92 = *(_BYTE *)(v91 + v105 + 8);
  v93 = *(_BYTE *)(v91 + v105 + 9);
LABEL_217:
  if ( v98 )
  {
    LODWORD(v109) = *v98;
    goto LABEL_226;
  }
LABEL_93:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v12;
}
