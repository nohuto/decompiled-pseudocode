/*
 * XREFs of PopSaveHiberContext @ 0x140BFBD50
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140730A80 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     RtlNumberOfClearBits @ 0x140356550 (RtlNumberOfClearBits.c)
 *     RtlSetAllBits @ 0x1403F4780 (RtlSetAllBits.c)
 *     RtlCopyBitMap @ 0x140492FF0 (RtlCopyBitMap.c)
 *     DbgUnLoadImageSymbols @ 0x1404FDB4C (DbgUnLoadImageSymbols.c)
 *     KdPowerTransition @ 0x14052B940 (KdPowerTransition.c)
 *     IoGetDumpStackTransferSizes @ 0x140532138 (IoGetDumpStackTransferSizes.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405B8380 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x1405B8740 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405BEFBC (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405BF024 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x1405BF348 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1405BF470 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x1405C36C0 (VslNotifyShutdown.c)
 *     IoDumpStackResumeCapable @ 0x1405C65C8 (IoDumpStackResumeCapable.c)
 *     IoGetDumpHiberRanges @ 0x1405C70CC (IoGetDumpHiberRanges.c)
 *     IoInitializeDumpStack @ 0x1405C7230 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x1405C7314 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x140600824 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x140600DC4 (_PopInternalError.c)
 *     PopResetRangeEnum @ 0x1406074D8 (PopResetRangeEnum.c)
 *     PopWriteSecurePages @ 0x1406074F4 (PopWriteSecurePages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140BF90C8 (PopSetMemoryOverwriteRequestAction.c)
 *     PopSstInvokeNotificationHandlers @ 0x140BF9490 (PopSstInvokeNotificationHandlers.c)
 *     PopCompressHiberBlocks @ 0x140BF9F94 (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x140BFA18C (PopCreateDumpMdl.c)
 *     PopHiberWriteBootFreePageMap @ 0x140BFAD84 (PopHiberWriteBootFreePageMap.c)
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 *     PopWriteChecksumPages @ 0x140BFC820 (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140BFC8B8 (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x140BFCAD4 (PopWriteHiberImage.c)
 *     PopWriteImageHeader @ 0x140BFCEA4 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x140BFDF58 (PopNotifyShutdownListener.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     KiGetCpuVendor @ 0x140C0A4F8 (KiGetCpuVendor.c)
 */

__int64 __fastcall PopSaveHiberContext(char *Address)
{
  unsigned __int64 v1; // rax
  __int64 Number; // rbx
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // ebx
  RTL_BITMAP *v26; // rbx
  unsigned int v27; // r8d
  _DWORD *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  ULONG_PTR v33; // rbx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  char *v38; // r14
  char *v39; // rbx
  char *v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  char *v43; // r12
  ULONG_PTR v44; // r14
  unsigned __int64 v45; // rax
  _QWORD *v46; // rcx
  PVOID v47; // rax
  unsigned int v48; // r12d
  int v49; // eax
  unsigned int v50; // ecx
  struct _LIST_ENTRY *Blink; // rbx
  ULONG v52; // eax
  _DWORD *v53; // rdi
  int v54; // esi
  __int64 v55; // rbx
  __int64 v56; // r14
  struct _LIST_ENTRY *v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rax
  void *v61; // rax
  unsigned int v62; // ebx
  _KSCB **p_QueuedScb; // r8
  __int64 v64; // r10
  __int64 v65; // r9
  char *v66; // rdx
  __int64 v67; // rax
  ULONG v68; // eax
  _DWORD *v69; // rdi
  int v70; // esi
  __int64 v71; // rbx
  unsigned __int64 v72; // r14
  struct _LIST_ENTRY *v73; // rdi
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int128 v79; // [rsp+40h] [rbp-C0h]
  __int128 v80; // [rsp+50h] [rbp-B0h]
  __int128 v81; // [rsp+60h] [rbp-A0h]
  __int128 v82[5]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v83; // [rsp+100h] [rbp+0h] BYREF
  __int64 v84; // [rsp+110h] [rbp+10h]
  char v85; // [rsp+170h] [rbp+70h]
  unsigned int v86; // [rsp+178h] [rbp+78h] BYREF
  int v87; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v88; // [rsp+188h] [rbp+88h]

  v84 = 0LL;
  v1 = *((_QWORD *)Address + 44);
  v83 = 0LL;
  v87 = 0;
  v86 = 0;
  v88 = v1;
  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)Address + 4, 1u);
      while ( *((_DWORD *)Address + 4) )
        _mm_pause();
      if ( LOBYTE(stru_140F10828.OtherOperationCount) )
        return 1073742484;
      _InterlockedAdd((volatile signed __int32 *)Address + 5, 1u);
      while ( *((_DWORD *)Address + 5) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(19LL);
  }
  if ( (unsigned int)Number >= *((_DWORD *)Address + 72) )
    return 0;
  if ( (_DWORD)Number )
  {
    while ( !Address[3] )
      _mm_pause();
    v5 = 168 * Number;
    PopCompressHiberBlocks(Address, v5 + *((_QWORD *)Address + 37), 1);
    _InterlockedAdd((volatile signed __int32 *)Address + 2, 1u);
    while ( *((_DWORD *)Address + 2) )
      _mm_pause();
    return (unsigned int)PopCompressHiberBlocks(Address, v5 + *((_QWORD *)Address + 37), 0);
  }
  LODWORD(stru_140F11D08.InitialStack) = 0;
  if ( KeDisableInterrupts() )
    PopInternalError(0xA1DFBuLL);
  if ( (dword_140F0FD40 & 0x80u) != 0 )
  {
    v85 = 0;
LABEL_27:
    dword_140F0FE38 |= 4u;
    byte_140F0FDA1 = 1;
    goto LABEL_28;
  }
  v85 = IoDumpStackResumeCapable((__int64)&v87);
  if ( !v85 )
    goto LABEL_27;
LABEL_28:
  if ( (unsigned int)PshedArePluginsPresent() )
  {
    dword_140F0FE38 |= 8u;
    byte_140F0FDA1 = 1;
  }
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v7, v6) )
  {
    dword_140F0FE38 |= 1u;
    byte_140F0FDA1 = 1;
  }
  if ( byte_140F0FDA1 )
  {
    if ( (unsigned int)KiGetCpuVendor(v8) == 2 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 7 )
      {
        _RAX = 7LL;
        __asm { cpuid }
        if ( (_RCX & 0x2000) != 0 )
        {
          v19 = __readmsr(0x982u);
          if ( (v19 & 2) != 0 && (v19 & 0xF00000000LL) != 0 )
            KeBugCheckEx(0xA0u, 0x112uLL, 0xAuLL, (ULONG_PTR)Address, 0LL);
        }
      }
    }
  }
  v20 = HvlHypervisorConnected == 0;
  v21 = *((_QWORD *)Address + 27);
  *((_QWORD *)Address + 22) = &v83;
  *((_QWORD *)Address + 24) = &PoWakeState;
  Address[1] = 1;
  if ( !v20 )
  {
    stru_140F11D08.UserIdealProcessor = 1;
    HvlDisableEnlightenment(0);
    guard_dispatch_icall_no_overrides(v23, v22);
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)Address + 4, 1u);
      while ( *((_DWORD *)Address + 4) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      *(_QWORD *)&v79 = qword_140E26B68;
      *((_QWORD *)&v79 + 1) = qword_140E26B08;
      *(_QWORD *)&v80 = qword_140E26B10;
      *((_QWORD *)&v80 + 1) = qword_140E26B00;
      *(_QWORD *)&v81 = qword_140E26B20;
      *((_QWORD *)&v81 + 1) = qword_140E26B18;
      v82[0] = v79;
      v82[1] = v80;
      v82[2] = v81;
      v82[4] = xmmword_140E26B58;
      v82[3] = xmmword_140E26B48;
      if ( Address[488] )
        v24 = HvlPrepareForSecureHibernate(v82);
      else
        v24 = HvlPrepareForHibernate(
                v82,
                (_QWORD *)(v21 + 1128),
                (_QWORD *)(v21 + 1136),
                (_QWORD *)(v21 + 1144),
                (__int64 *)(v21 + 1152));
      v25 = v24;
      if ( v24 < 0 )
      {
        PopInternalAddToDumpFile(*((_QWORD *)Address + 23), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v25, *((_QWORD *)Address + 23), 0LL);
      }
      *((_DWORD *)Address + 4) = 0;
      _InterlockedAdd((volatile signed __int32 *)Address + 5, 1u);
      while ( *((_DWORD *)Address + 5) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      *((_DWORD *)Address + 4) = KeNumberProcessors_0;
      *((_DWORD *)Address + 5) = 0;
    }
    if ( Address[488] )
      HvlDiscardSecurePagesFromHibernation(Address);
    else
      HvlDiscardPagesFromHibernation(Address);
  }
  PopSstInvokeNotificationHandlers(0);
  ++*(_DWORD *)v21;
  v26 = (RTL_BITMAP *)(Address + 64);
  v27 = 0;
  v28 = (_DWORD *)*((_QWORD *)Address + 9);
  v29 = (_DWORD *)*((_QWORD *)Address + 7);
  if ( (*((_DWORD *)Address + 16) & 0xFFFFFFE0) != 0 )
  {
    do
    {
      ++v27;
      *v28++ |= *v29++;
    }
    while ( v27 < v26->SizeOfBitMap >> 5 );
    v26 = (RTL_BITMAP *)(Address + 64);
  }
  if ( byte_140F0FDA1 )
    v26 = (RTL_BITMAP *)(Address + 48);
  else
    RtlCopyBitMap(&v26->SizeOfBitMap, (__int64)(Address + 48), 0);
  RtlSetAllBits(v26);
  *((_DWORD *)Address + 50) = 8;
  LODWORD(stru_140F11D08.WaitStatus) = 1;
  IoGetDumpHiberRanges(v30, *((_QWORD *)Address + 23));
  if ( !byte_140F0FDA1 )
    IoNotifyDump(1LL, v31);
  v32 = __rdtsc();
  v33 = (int)IoInitializeDumpStack(*((_QWORD *)Address + 23));
  IoGetDumpStackTransferSizes(0LL, &v86);
  v34 = v86;
  if ( v86 >= 0x100000 )
  {
    v34 = 0x100000;
    v86 = 0x100000;
  }
  v35 = *((_DWORD *)Address + 110);
  v36 = v34 >> 12;
  if ( v36 != v35 )
  {
    if ( v36 <= v35 )
      v35 = v36;
    *((_DWORD *)Address + 110) = v35;
  }
  v37 = __rdtsc();
  stru_140F10070.WaitBlock[0].Thread = (struct _KTHREAD *)((char *)stru_140F10070.WaitBlock[0].Thread
                                                         + (((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v37)
                                                         - v32);
  if ( (v33 & 0x80000000) != 0LL || dword_140F0FD40 == 1 )
  {
    PopCheckpointSystemSleep(20LL);
    PopInternalAddToDumpFile(*((_QWORD *)Address + 23), 0x178u, 0LL);
    KeBugCheckEx(0xA0u, 0xCuLL, v33, *((_QWORD *)Address + 23), 0LL);
  }
  PopMarkComponentsBootPhase(Address);
  v38 = Address + 80;
  v39 = (char *)*((_QWORD *)Address + 10);
  if ( v39 != Address + 80 )
  {
    do
    {
      v40 = v39;
      v39 = *(char **)v39;
      v41 = *((_QWORD *)v40 + 4);
      v42 = *((_QWORD *)v40 + 3);
      v43 = (char *)*((_QWORD *)v40 + 5);
      *((_QWORD *)Address + 13) += v41 - v42;
      if ( v42 < v41 )
      {
        v44 = v88;
        do
        {
          PopCreateDumpMdl((__int64)Address, v44, v42, v41);
          memmove(v43, *(const void **)(v44 + 24), *(unsigned int *)(v44 + 40));
          v45 = *(unsigned int *)(v44 + 40);
          v43 += v45;
          v42 += v45 >> 12;
        }
        while ( v42 < v41 );
        v38 = Address + 80;
      }
    }
    while ( v39 != v38 );
  }
  PopResetRangeEnum(Address);
  v46 = (_QWORD *)*((_QWORD *)Address + 22);
  v47 = qword_140F0FD78;
  *v46 = qword_140F0FD78;
  v46[1] = v47;
  v46[2] = 0LL;
  v88 = __rdtsc();
  v4 = PopWriteHeaderPages(Address, v21);
  if ( v4 < 0 )
    goto LABEL_100;
  v48 = *(_DWORD *)(v21 + 80);
  if ( Address[488] )
  {
    v49 = *((_DWORD *)Address + 70) + 2;
    v50 = (*((_DWORD *)Address + 8) >> 3) + 4095;
    *((_DWORD *)Address + 50) = 3;
    *(_QWORD *)(v21 + 96) = (v50 >> 12) + v49;
    Blink = stru_140F10070.WaitBlock[0].WaitListEntry.Blink;
    PopWriteSecurePages((ULONG_PTR)Address);
    stru_140F10070.KernelShadowStackInitial = (void *)((char *)stru_140F10070.WaitBlock[0].WaitListEntry.Blink
                                                     - (char *)Blink);
    stru_140F10070.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*((unsigned int *)Address + 71);
  }
  *((_DWORD *)Address + 50) = 4;
  *((_QWORD *)Address + 14) = Address + 64;
  v52 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 4);
  v53 = qword_140F0FE08;
  v54 = *((_DWORD *)Address + 78);
  v55 = *((_QWORD *)Address + 38);
  v56 = (v52 + *((_QWORD *)Address + 13)) << 12;
  memset_0(qword_140F0FE08, 0, 0x40uLL);
  v53[6] = 0;
  v53[2] = v54;
  *(_QWORD *)v53 = v55;
  *((_QWORD *)v53 + 2) = v56;
  stru_140F10070.SuspendEvent.Header.WaitListHead.Blink = 0LL;
  stru_140F10070.ThreadListEntry.Flink = 0LL;
  *((_DWORD *)Address + 90) = 0;
  *((_QWORD *)Address + 47) = 0LL;
  v57 = stru_140F10070.WaitBlock[0].WaitListEntry.Blink;
  if ( v85 && *(_QWORD *)(*((_QWORD *)Address + 23) + 128LL) )
    Address[424] = 1;
  v58 = *((_DWORD *)Address + 71)
      + ((unsigned int)((*((_DWORD *)Address + 8) >> 3) + 4095) >> 12)
      + *((_DWORD *)Address + 70)
      + 2;
  *(_QWORD *)(v21 + 104) = v58;
  *((_QWORD *)Address + 51) = v58 << 12;
  Address[3] = 1;
  v59 = __rdtsc();
  PopWriteHiberImage((ULONG_PTR)Address);
  _InterlockedIncrement((volatile signed __int32 *)Address + 2);
  while ( *((_DWORD *)Address + 2) != *((_DWORD *)Address + 72) )
    _mm_pause();
  v60 = __rdtsc();
  v61 = (void *)((((unsigned __int64)HIDWORD(v60) << 32) | (unsigned int)v60) - v59);
  v62 = 0;
  for ( stru_140F10070.KernelShadowStackBase = v61;
        v62 < *((_DWORD *)Address + 72);
        *(_QWORD *)(168 * v67 + *((_QWORD *)Address + 37) + 56) = 0LL )
  {
    p_QueuedScb = &stru_140F10070.QueuedScb;
    v64 = 5LL;
    v65 = 168LL * v62 - (_QWORD)&stru_140F10070.QueuedScb;
    do
    {
      v66 = (char *)p_QueuedScb + v65;
      *p_QueuedScb = (_KSCB *)((char *)*p_QueuedScb
                             + *(_QWORD *)((char *)p_QueuedScb + v65 + *((_QWORD *)Address + 37) + 88));
      ++p_QueuedScb;
      *(_QWORD *)&v66[*((_QWORD *)Address + 37) + 88] = 0LL;
      --v64;
    }
    while ( v64 );
    stru_140F10070.WaitBlock[0].SparePtr = (char *)stru_140F10070.WaitBlock[0].SparePtr
                                         + *(_QWORD *)(168LL * v62 + *((_QWORD *)Address + 37) + 40);
    *(_QWORD *)(168LL * v62 + *((_QWORD *)Address + 37) + 40) = 0LL;
    stru_140F10070.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)stru_140F10070.SuspendEvent.Header.WaitListHead.Blink
                                                                                 + *(_QWORD *)(168LL * v62
                                                                                             + *((_QWORD *)Address + 37)
                                                                                             + 56));
    v67 = v62++;
  }
  *(_QWORD *)&stru_140F10070.SchedulerAssistPriorityFloor = (char *)stru_140F10070.WaitBlock[0].WaitListEntry.Blink
                                                          - (char *)v57;
  stru_140F10070.ThreadListEntry.Blink = (struct _LIST_ENTRY *)stru_140F10070.SchedulerSharedSystemSlot;
  stru_140F10070.MutantListHead.Blink = (struct _LIST_ENTRY *)LODWORD(stru_140F10070.PropagateBoostsEntry.Next);
  stru_140F10070.SchedulerSharedSystemSlot = 0LL;
  LODWORD(stru_140F10070.PropagateBoostsEntry.Next) = 0;
  *((_DWORD *)Address + 50) = 5;
  *((_QWORD *)Address + 14) = Address + 48;
  *((_QWORD *)Address + 16) = 0LL;
  v68 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 3);
  v69 = qword_140F0FE08;
  v70 = *((_DWORD *)Address + 78);
  v71 = *((_QWORD *)Address + 38);
  v72 = (unsigned __int64)v68 << 12;
  memset_0(qword_140F0FE08, 0, 0x40uLL);
  v69[6] = 0;
  *(_QWORD *)v69 = v71;
  v69[2] = v70;
  *((_QWORD *)v69 + 2) = v72;
  *(_QWORD *)(v21 + 112) = (unsigned __int64)(*((_QWORD *)Address + 51) + 4095LL) >> 12;
  v73 = stru_140F10070.WaitBlock[0].WaitListEntry.Blink;
  *((_DWORD *)Address + 2) = 0;
  *((_QWORD *)Address + 47) = 0LL;
  v74 = __rdtsc();
  PopWriteHiberImage((ULONG_PTR)Address);
  stru_140F10070.KernelShadowStackLimit.AllFields = __rdtsc() - v74;
  stru_140F10070.KernelShadowStack = (void *)((char *)stru_140F10070.WaitBlock[0].WaitListEntry.Blink - (char *)v73);
  PopHiberWriteBootFreePageMap((__int64)Address, v21);
  *((_DWORD *)Address + 50) = 7;
  PopWriteChecksumPages(Address);
  v75 = v88;
  *((_DWORD *)Address + 50) = 6;
  PopWriteImageHeader(Address, v21, v48, v75);
  v4 = *((_DWORD *)Address + 51);
  if ( v4 < 0 )
    goto LABEL_100;
  if ( dword_140F0FB8C == dword_140F0FB94 )
  {
    if ( (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x8000) == 0 )
      DbgUnLoadImageSymbols(0LL, -2LL, 0LL);
    VslNotifyShutdown(1u);
  }
  if ( (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x1000) != 0 )
    HalReturnToFirmware(3);
  v4 = 0;
  if ( (dword_140F0FD40 & 0x10) != 0 )
  {
    v4 = 1073742484;
  }
  else
  {
LABEL_100:
    KdPowerTransition(4);
    if ( v4 >= 0 && dword_140F0FB8C == 5 )
    {
      PopNotifyShutdownListener();
      if ( HvlHypervisorConnected )
        HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
  }
  PopCheckpointSystemSleep(24LL);
  guard_dispatch_icall_no_overrides(v77, v76);
  return (unsigned int)v4;
}
