/*
 * XREFs of CcInitializePrivateVolumeCacheMap @ 0x1403E6740
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcForEachNumaNode @ 0x1403E7398 (CcForEachNumaNode.c)
 *     CcInitializeNumaNodeForVolume @ 0x1403E7414 (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeQuickLWSThreadItem @ 0x1403E7820 (CcInitializeQuickLWSThreadItem.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcInitializePrivateVolumeCacheMap(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r13
  char v9; // r12
  _DWORD *v10; // r14
  bool v11; // zf
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  int v14; // edx
  unsigned __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // r9
  void *v20; // r9
  __int64 v21; // r8
  struct _KTHREAD *CurrentThread; // r8
  const char *v23; // rcx
  unsigned int i; // ebx
  PVOID PoolWithTag; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  ULONG v30; // edx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v32; // [rsp+B0h] [rbp+30h] BYREF

  v4 = *a3;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = 0;
  v10 = 0LL;
  memset_0((void *)a2, 0, 0x680uLL);
  *(_DWORD *)(a2 + 1608) = EmpParseLock.ForegroundLossTime;
  v11 = CcEnableAsyncLazywrite == 0;
  *(_DWORD *)(a2 + 1612) = *(&EmpParseLock.ForegroundLossTime + 1);
  *(_DWORD *)a2 = 109052661;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 1552) = 20;
  *(_DWORD *)(a2 + 1556) = 10;
  *(_QWORD *)(a2 + 8) = 1LL;
  if ( !v11 )
    *(_DWORD *)(a2 + 1616) |= 1u;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a2 + 56) = a2 + 48;
  v12 = (_QWORD *)(a2 + 664);
  *(_QWORD *)(a2 + 48) = a2 + 48;
  *(_QWORD *)(a2 + 584) = a2 + 576;
  *(_QWORD *)(a2 + 576) = a2 + 576;
  *(_QWORD *)(a2 + 600) = a2 + 592;
  *(_QWORD *)(a2 + 592) = a2 + 592;
  *(_QWORD *)(a2 + 632) = a2 + 624;
  *(_QWORD *)(a2 + 624) = a2 + 624;
  *(_QWORD *)(a2 + 616) = a2 + 608;
  *(_QWORD *)(a2 + 608) = a2 + 608;
  *(_QWORD *)(a2 + 696) = a2 + 688;
  *(_QWORD *)(a2 + 688) = a2 + 688;
  *(_QWORD *)(a2 + 648) = a2 + 640;
  *(_QWORD *)(a2 + 640) = a2 + 640;
  *(_DWORD *)(a2 + 656) = 2048;
  v13 = *(_QWORD **)(a2 + 648);
  if ( *v13 != a2 + 640 )
    __fastfail(3u);
  *v12 = a2 + 640;
  *(_QWORD *)(a2 + 672) = v13;
  *v13 = v12;
  *(_QWORD *)(a2 + 648) = v12;
  *(_DWORD *)(a2 + 680) = 2048;
  if ( a4 )
  {
    v27 = *(_QWORD *)(a4 + 512);
    *(_QWORD *)(a2 + 40) = v27;
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a4 + 512) + 212LL);
    v10 = *(_DWORD **)(*(_QWORD *)(a4 + 512) + 16LL);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v27 + 8)) <= 1 )
      __fastfail(0xEu);
  }
  *(_QWORD *)(a2 + 16) = v10;
  if ( v10 && v10[18] == 20 )
    *(_DWORD *)(a2 + 1616) |= 8u;
  *(_QWORD *)(a2 + 768) = 0LL;
  *(_QWORD *)(a2 + 792) = a2 + 784;
  *(_QWORD *)(a2 + 784) = a2 + 784;
  *(_QWORD *)(a2 + 1256) = a2 + 1248;
  *(_QWORD *)(a2 + 1248) = a2 + 1248;
  *(_QWORD *)(a2 + 1272) = a2 + 1264;
  *(_QWORD *)(a2 + 1264) = a2 + 1264;
  *(_QWORD *)(a2 + 1568) = a2 + 1560;
  *(_QWORD *)(a2 + 1560) = a2 + 1560;
  *(_WORD *)(a2 + 816) = 1;
  *(_BYTE *)(a2 + 818) = 6;
  *(_DWORD *)(a2 + 820) = 0;
  *(_QWORD *)(a2 + 832) = a2 + 824;
  *(_QWORD *)(a2 + 824) = a2 + 824;
  *(_WORD *)(a2 + 840) = 1;
  *(_BYTE *)(a2 + 842) = 6;
  *(_DWORD *)(a2 + 844) = 0;
  *(_QWORD *)(a2 + 856) = a2 + 848;
  *(_QWORD *)(a2 + 848) = a2 + 848;
  *(_WORD *)(a2 + 864) = 1;
  *(_BYTE *)(a2 + 866) = 6;
  *(_DWORD *)(a2 + 868) = 0;
  *(_QWORD *)(a2 + 880) = a2 + 872;
  *(_QWORD *)(a2 + 872) = a2 + 872;
  *(_WORD *)(a2 + 888) = 1;
  *(_BYTE *)(a2 + 890) = 6;
  *(_DWORD *)(a2 + 892) = 0;
  *(_QWORD *)(a2 + 904) = a2 + 896;
  *(_QWORD *)(a2 + 896) = a2 + 896;
  *(_WORD *)(a2 + 1176) = 0;
  *(_BYTE *)(a2 + 1178) = 6;
  *(_DWORD *)(a2 + 1180) = 0;
  *(_QWORD *)(a2 + 1192) = a2 + 1184;
  *(_QWORD *)(a2 + 1184) = a2 + 1184;
  *(_WORD *)(a2 + 1200) = 0;
  *(_BYTE *)(a2 + 1202) = 6;
  *(_DWORD *)(a2 + 1204) = 0;
  *(_QWORD *)(a2 + 1216) = a2 + 1208;
  *(_QWORD *)(a2 + 1208) = a2 + 1208;
  *(_WORD *)(a2 + 1576) = 1;
  *(_BYTE *)(a2 + 1578) = 6;
  *(_DWORD *)(a2 + 1580) = 0;
  *(_QWORD *)(a2 + 1592) = a2 + 1584;
  *(_QWORD *)(a2 + 1584) = a2 + 1584;
  *(_OWORD *)(a2 + 992) = 0LL;
  *(_QWORD *)(a2 + 1008) = 0LL;
  *(_OWORD *)(a2 + 1016) = 0LL;
  *(_OWORD *)(a2 + 1032) = 0LL;
  *(_OWORD *)(a2 + 1048) = 0LL;
  *(_QWORD *)(a2 + 1064) = 0LL;
  *(_OWORD *)(a2 + 1232) = 0LL;
  *(_DWORD *)(a2 + 1232) = 2;
  *(_QWORD *)(a2 + 1240) = a2;
  memset_0((void *)(a2 + 920), 0, 0x48uLL);
  *(_BYTE *)(a2 + 920) = 9;
  *(_QWORD *)(a2 + 936) = a2 + 928;
  *(_QWORD *)(a2 + 928) = a2 + 928;
  *(_QWORD *)(a2 + 944) = 0LL;
  *(_DWORD *)(a2 + 980) = 0;
  *(_WORD *)(a2 + 976) = 0;
  *(_BYTE *)(a2 + 979) = 0;
  *(_BYTE *)(a2 + 984) = 1;
  if ( CcEnableAsyncLazywriteMulti && CcEnableAsyncLazywrite )
    *(_DWORD *)(a2 + 1616) |= 2u;
  v14 = (unsigned __int8)dword_140FBF22C;
  v15 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * ***(unsigned __int16 ***)(a1 + 8)) + 22288LL);
  if ( (_BYTE)dword_140FBF22C )
  {
    v28 = v15 >> 1;
    if ( (unsigned int)CcAzure_TopBottomDPTEqual < 2 )
      v29 = v15 >> 1;
    else
      v29 = v15 >> 3;
    *(_QWORD *)(a2 + 1024) = v28;
    *(_QWORD *)(a2 + 1032) = v29;
    *(_QWORD *)(a2 + 1016) = v28;
    v16 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[48] - 1;
  }
  else
  {
    *(_QWORD *)(a2 + 1016) = v15 >> 3;
    *(_QWORD *)(a2 + 1032) = v15 >> 3;
    *(_QWORD *)(a2 + 1024) = v15 >> 3;
    v16 = v14 + 1;
  }
  *(_DWORD *)(a2 + 800) = v16;
  *(_DWORD *)(a2 + 1064) = 10;
  *(_QWORD *)(a2 + 1048) = 10 * v15;
  v17 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[48] - 1;
  *(_QWORD *)(a2 + 1056) = 0LL;
  *(_DWORD *)(a2 + 776) = v17;
  *(_DWORD *)(a2 + 804) = EmpParseLock.SchedulerAssistPriorityFloor;
  v18 = (*(_QWORD *)(a2 + 1016) >> 1) + (*(_QWORD *)(a2 + 1016) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs )
  {
    v30 = CcAzure_LazyWriterPercentageOfNumProcs * KeQueryActiveProcessorCountEx(0xFFFFu) / 0x64;
    if ( *(_DWORD *)(a2 + 776) < v30 )
      *(_DWORD *)(a2 + 776) = v30;
  }
  *(_DWORD *)(a2 + 704) = 0;
  *(_BYTE *)(a2 + 708) = 0;
  *(_QWORD *)(a2 + 1152) = 0LL;
  ObjectAttributes.Length = 48;
  if ( v18 > 0xFFFFFFFF )
    LODWORD(v18) = -1;
  ObjectAttributes.RootDirectory = 0LL;
  *(_DWORD *)(a2 + 1040) = v18;
  *(_QWORD *)(a2 + 1112) = a2 + 1104;
  *(_QWORD *)(a2 + 1104) = a2 + 1104;
  *(_DWORD *)(a2 + 1168) = -1;
  v19 = *(_QWORD *)(a1 + 8);
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.ObjectName = 0LL;
  v20 = *(void **)(v19 + 128);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         (PHANDLE)(a2 + 1224),
         0x1FFFFFu,
         &ObjectAttributes,
         v20,
         0LL,
         (PKSTART_ROUTINE)CcQueueLazyWriteScanThreadForVolume,
         (PVOID)a2) >= 0 )
  {
    for ( i = 0; i < CcNumberNumaNodes; ++i )
    {
      if ( !(unsigned __int8)CcInitializeNumaNodeForVolume(a2, v4 + 400LL * i, v21, i) )
        goto LABEL_18;
      if ( *a3 )
        *a3 = 0LL;
    }
    if ( (unsigned __int8)CcInitializeQuickLWSThreadItem(a2) )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 8LL * (unsigned int)(*(_DWORD *)(a2 + 800) + 1), 0x70546343u);
      if ( PoolWithTag )
      {
        *(_QWORD *)(a2 + 1072) = PoolWithTag;
        *(_QWORD *)(a2 + 1160) = 0LL;
        v32 = 1;
        CcForEachNumaNode(CcInitializeAsyncReadForNodeHelper, a1, a2, &v32);
        if ( v32 )
        {
          if ( (*(_DWORD *)(a2 + 1616) & 1) == 0
            || (v32 = 1, CcForEachNumaNode(CcInitializeAsyncLazywriteForNodeHelper, a1, a2, &v32), v32) )
          {
            ++*(_DWORD *)(a2 + 4);
            v9 = 1;
            *(_BYTE *)(a2 + 1236) = 1;
          }
        }
      }
    }
  }
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  v23 = "YES";
  if ( !v9 )
    v23 = "NO";
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInitializePrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p, Success:%s -> DONE\n",
    LODWORD(CurrentThread[1].CycleTime),
    CurrentThread[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v10,
    (const void *)a2,
    v23);
  return v9;
}
