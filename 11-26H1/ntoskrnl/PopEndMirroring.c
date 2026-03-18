/*
 * XREFs of PopEndMirroring @ 0x140C03D50
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x1402BDB30 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwKernelMemoryRundown @ 0x140827720 (EtwKernelMemoryRundown.c)
 *     PopBuildMemoryImageHeader @ 0x140BF9C6C (PopBuildMemoryImageHeader.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rdi
  int v2; // ebx
  unsigned int v4; // ecx
  int v5; // edx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  int v10; // edx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-50h] BYREF
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
    v2 = PopBuildMemoryImageHeader((_QWORD *)qword_140F0FBB0, 1);
    if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType), v2 < 0) )
    {
LABEL_5:
      IoAddTriageDumpDataBlock((ULONG)&byte_140F0FB60, (PVOID)0x1E0);
      if ( *(_QWORD *)&qword_140F0FBA8 )
        IoAddTriageDumpDataBlock(qword_140F0FBA8, (PVOID)0x1D8);
      if ( qword_140F0FBB0 )
      {
        IoAddTriageDumpDataBlock(qword_140F0FBB0, (PVOID)0x1F0);
        v12 = *(_QWORD *)(qword_140F0FBB0 + 184);
        if ( v12 )
          IoAddTriageDumpDataBlock(v12, (PVOID)0x178);
        v13 = *(_QWORD *)(qword_140F0FBB0 + 216);
        if ( v13 )
          IoAddTriageDumpDataBlock(v13, (PVOID)0x4D8);
      }
      KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
    }
    if ( LOBYTE(stru_140F10828.OtherOperationCount) )
      v2 = 1073742484;
  }
  else
  {
    if ( (BYTE4(xmmword_140FBFC10) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(qword_140E674B8, 0, 1u);
    KeWaitForSingleObject(&qword_140E674B8[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((_QWORD *)qword_140F0FBB0, 0);
    if ( v2 < 0 )
      goto LABEL_5;
    v4 = **(_DWORD **)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
    Affinity.Mask = 1LL << v4;
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
    dword_140E26930 = KeNumberProcessors_0;
    dword_140E26948 = KeNumberProcessors_0;
    dword_140E26938 = 1;
    if ( ((unsigned __int8)&stru_140E26950 & 0xF) != 0 )
      RtlRaiseStatus(-2147483646);
    stru_140E26950 = 0LL;
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
    v7 = *(unsigned __int64 *)((char *)&stru_140FC01F0.116 + 4);
    Dpc.Importance = 2;
    LOWORD(v8) = 0;
    while ( 1 )
    {
      while ( v7 )
      {
        _BitScanForward64(&v9, v7);
        v7 &= ~(1LL << v9);
        v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
              + 64 * (unsigned __int16)v8
              + (unsigned __int8)v9);
        if ( v10 )
        {
          v11 = dword_140E26934;
          if ( !Dpc.DpcData )
            Dpc.Number = v10 + 2048;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v11 == dword_140E26934 )
            ;
        }
      }
      v8 = (unsigned __int16)(v8 + 1);
      if ( (unsigned int)v8 >= *(unsigned __int16 *)&stru_140FC01F0.WaitRegister.Flags )
        break;
      v7 = *(unsigned __int64 *)((char *)&stru_140FC01F0.116 + 8 * v8 + 4);
    }
  }
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
