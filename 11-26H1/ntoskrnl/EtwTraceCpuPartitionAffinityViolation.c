/*
 * XREFs of EtwTraceCpuPartitionAffinityViolation @ 0x1406C825C
 * Callers:
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall EtwTraceCpuPartitionAffinityViolation(int a1, __int64 a2, __int64 a3, unsigned __int16 *a4, __int64 a5)
{
  __int64 v8; // rbx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  char *v10; // r15
  char *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  char *v14; // rax
  __int16 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+44h] [rbp-34h] BYREF
  int v17; // [rsp+48h] [rbp-30h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF

  v18 = a1;
  if ( stru_140F03830.SchedulerApc.Thread
    && EtwEventEnabled((REGHANDLE)stru_140F03830.SchedulerApc.Thread, &CPU_PARTITION_EVENT_AFFINITY_VIOLATION) )
  {
    v8 = a5;
    UserData = *(struct _EVENT_DATA_DESCRIPTOR **)(a5 + 16);
    v10 = *(char **)(a5 + 24);
    memset_0(UserData, 0, 16LL * *(unsigned __int16 *)(a5 + 34));
    memset_0(v10, 0, 2LL * *(unsigned __int16 *)(v8 + 32));
    *(_QWORD *)&UserData->Size = 4LL;
    UserData->Ptr = (ULONGLONG)&v18;
    v17 = *(_DWORD *)(a2 + 464);
    UserData[1].Ptr = (ULONGLONG)&v17;
    *(_QWORD *)&UserData[1].Size = 4LL;
    v16 = 0;
    if ( a3 )
      v16 = *(_DWORD *)(a3 + 1296);
    *(_QWORD *)&UserData[2].Size = 4LL;
    UserData[2].Ptr = (ULONGLONG)&v16;
    v11 = (char *)&UserData[4];
    v12 = *a4;
    v13 = 0;
    v15 = 0;
    if ( v12 )
    {
      do
      {
        if ( v13 < v12 )
        {
          if ( *(_QWORD *)&a4[4 * v13 + 4] )
          {
            v14 = &v10[2 * v13];
            *(_WORD *)v14 = v13;
            *(_QWORD *)v11 = v14;
            *((_QWORD *)v11 + 1) = 2LL;
            *((_QWORD *)v11 + 2) = &a4[4 * v13 + 4];
            *((_QWORD *)v11 + 3) = 8LL;
            v11 += 32;
            ++v15;
          }
        }
        v12 = *a4;
        ++v13;
      }
      while ( v13 < *a4 );
    }
    UserData[3].Ptr = (ULONGLONG)&v15;
    *(_QWORD *)&UserData[3].Size = 2LL;
    EtwWriteEx(
      (REGHANDLE)stru_140F03830.SchedulerApc.Thread,
      &CPU_PARTITION_EVENT_AFFINITY_VIOLATION,
      0LL,
      0,
      0LL,
      0LL,
      (v11 - (char *)UserData) >> 4,
      UserData);
  }
}
