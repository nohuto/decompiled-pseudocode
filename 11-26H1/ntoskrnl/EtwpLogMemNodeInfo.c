/*
 * XREFs of EtwpLogMemNodeInfo @ 0x140259734
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1404BD840 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     MmFillEtwNodeInformation @ 0x140259C74 (MmFillEtwNodeInformation.c)
 *     MmFillEtwHugeIoSpaceInformation @ 0x1406E818C (MmFillEtwHugeIoSpaceInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void EtwpLogMemNodeInfo()
{
  _BYTE *Pool2; // rbx
  __int64 i; // rcx
  __int64 NextPartition; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // [rsp+48h] [rbp-C0h] BYREF
  int v6; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-A0h]
  __int64 v10; // [rsp+70h] [rbp-98h]
  _BYTE *v11; // [rsp+78h] [rbp-90h]
  int v12; // [rsp+80h] [rbp-88h]
  int v13; // [rsp+84h] [rbp-84h]
  _BYTE P[608]; // [rsp+88h] [rbp-80h] BYREF

  v6 = 0;
  LOBYTE(v5) = 0;
  LODWORD(v7) = 0;
  if ( EtwpHostSiloState != -4812
    && (*(_DWORD *)(EtwpHostSiloState + 4816) & 0x80000) != 0
    && EtwProviderEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink, 0, 0x400uLL) )
  {
    if ( (unsigned __int16)KeNumberNodes > 8u )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return;
    }
    else
    {
      Pool2 = P;
    }
    for ( i = 0LL; ; i = v3 )
    {
      NextPartition = PsGetNextPartition(i);
      v3 = NextPartition;
      if ( !NextPartition )
        break;
      LODWORD(v7) = MmFillEtwNodeInformation(NextPartition, Pool2, (unsigned __int16)KeNumberNodes, &v6);
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v9 = &v7;
      v12 = 76 * v7;
      v10 = 4LL;
      v11 = Pool2;
      v13 = 0;
      EtwWriteEx(
        (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
        &KERNEL_MEM_EVENT_MEMINFO_NODE,
        0LL,
        0,
        0LL,
        0LL,
        3u,
        &UserData);
      if ( *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140E2ED08.116 + 4) )
      {
        v4 = MmFillEtwHugeIoSpaceInformation(
               v3,
               (_DWORD)Pool2,
               (unsigned __int16)KeNumberNodes,
               (unsigned int)&v5,
               (__int64)&v6);
        LODWORD(v7) = v4;
        if ( (_BYTE)v5 )
        {
          v11 = Pool2;
          v13 = 0;
          v12 = 28 * v4;
          EtwWriteEx(
            (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
            &KERNEL_MEM_EVENT_MEMINFO_HUGE_IOSPACE,
            0LL,
            0,
            0LL,
            0LL,
            3u,
            &UserData);
        }
      }
    }
    if ( Pool2 != P )
      ExFreePoolWithTag(Pool2, 0);
  }
}
