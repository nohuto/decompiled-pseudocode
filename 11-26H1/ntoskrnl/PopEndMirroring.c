/*
 * XREFs of PopEndMirroring @ 0x140C09F60
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwKernelMemoryRundown @ 0x14082D960 (EtwKernelMemoryRundown.c)
 *     PopBuildMemoryImageHeader @ 0x140BFFC6C (PopBuildMemoryImageHeader.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rsi
  int v2; // ebx
  volatile unsigned int Lock; // ecx
  int v5; // edx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  int v10; // edx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rcx
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-50h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-40h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  Affinity = 0LL;
  memset(&Dpc, 0, 60);
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
    {
      v2 = -1073741823;
      goto LABEL_5;
    }
    v2 = PopBuildMemoryImageHeader((_QWORD *)qword_140F10470, 1);
    if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType), v2 < 0) )
    {
LABEL_5:
      IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1E0);
      if ( *(_QWORD *)&qword_140F10468 )
        IoAddTriageDumpDataBlock(qword_140F10468, (PVOID)0x1D8);
      if ( qword_140F10470 )
      {
        IoAddTriageDumpDataBlock(qword_140F10470, (PVOID)0x1F0);
        v12 = *(_QWORD *)(qword_140F10470 + 184);
        if ( v12 )
          IoAddTriageDumpDataBlock(v12, (PVOID)0x178);
        v13 = *(_QWORD *)(qword_140F10470 + 216);
        if ( v13 )
          IoAddTriageDumpDataBlock(v13, (PVOID)0x4E0);
      }
      KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
    }
    if ( PoResumeFromHibernate )
      v2 = 1073742484;
  }
  else
  {
    if ( (BYTE4(xmmword_140FC0C10) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(qword_140E67710, 0, 1u);
    KeWaitForSingleObject(&qword_140E67710[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((_QWORD *)qword_140F10470, 0);
    if ( v2 < 0 )
      goto LABEL_5;
    Lock = KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock;
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(Lock >> 6);
    Affinity.Mask = 1LL << Lock;
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    memset_0(&PopHibernateSystemContext, 0, 0x60uLL);
    dword_140E26A70 = KeNumberProcessors_0;
    dword_140E26A88 = KeNumberProcessors_0;
    dword_140E26A78 = 1;
    if ( ((unsigned __int8)&stru_140E26A90 & 0xF) != 0 )
      RtlRaiseStatus(-2147483646);
    stru_140E26A90 = 0LL;
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
    v7 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 4);
    Dpc.Importance = 2;
    LOWORD(v8) = 0;
    while ( 1 )
    {
      while ( v7 )
      {
        _BitScanForward64(&v9, v7);
        v7 &= ~(1LL << v9);
        v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v8].Flink
              + (unsigned __int8)v9);
        if ( v10 )
        {
          v11 = dword_140E26A74;
          if ( !Dpc.DpcData )
            Dpc.Number = v10 + 2048;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v11 == dword_140E26A74 )
            ;
        }
      }
      v8 = (unsigned __int16)(v8 + 1);
      if ( (unsigned int)v8 >= *(unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags )
        break;
      v7 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 8 * v8 + 4);
    }
  }
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
