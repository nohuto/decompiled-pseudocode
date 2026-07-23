/*
 * XREFs of KeBuildLogicalProcessorSystemInformation @ 0x140AB7250
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall KeBuildLogicalProcessorSystemInformation(
        unsigned __int16 a1,
        char *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  unsigned __int16 v7; // dx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  __int64 i; // r12
  __int64 v11; // r15
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  int v18; // eax
  bool v19; // al
  __int64 j; // rdi
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdi
  __int64 NodeGroupAffinity; // rax
  _OWORD Src[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  v7 = a1;
  memset(Src, 0, 32);
  v8 = 0;
  v9 = 0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v11 = KiProcessorBlock[i];
    v12 = *(unsigned __int8 *)(v11 + 208);
    if ( (_WORD)v12 == v7 )
    {
      v13 = *(_QWORD *)(v11 + 8 * v12 + 35928);
      if ( v13 )
      {
        _BitScanReverse64(&v14, v13);
        v15 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
              + (unsigned int)(((_DWORD)v12 << 6) + v14));
      }
      else
      {
        v15 = -1;
      }
      if ( *(_DWORD *)(v11 + 36) == v15 )
      {
        v9 += 32;
        if ( v9 <= a3 )
        {
          Src[1] = 0LL;
          *(_QWORD *)&Src[0] = v13;
          *((_QWORD *)&Src[0] + 1) = 3LL;
          LOBYTE(Src[1]) = 0;
          if ( a4 )
            RtlCopyToUser(a2, Src, 0x20uLL);
          else
            RtlCopyVolatileMemory(a2, Src, 0x20uLL);
          a2 += 32;
          a3 = v31;
        }
        else
        {
          v8 = -1073741820;
        }
      }
      v16 = *(_QWORD *)(v11 + 36512);
      if ( v16 )
      {
        _BitScanReverse64(&v17, v16);
        v18 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
              + (unsigned int)(((_DWORD)v12 << 6) + v17));
      }
      else
      {
        v18 = -1;
      }
      if ( *(_DWORD *)(v11 + 36) == v18 )
      {
        v19 = *(_QWORD *)(v11 + 200) != v16;
        v9 += 32;
        if ( v9 > a3 )
        {
          v8 = -1073741820;
        }
        else
        {
          Src[1] = 0LL;
          Src[0] = v16;
          LOBYTE(Src[1]) = v19;
          if ( a4 )
            RtlCopyToUser(a2, Src, 0x20uLL);
          else
            RtlCopyVolatileMemory(a2, Src, 0x20uLL);
          a2 += 32;
        }
      }
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v11 + 35796); j = (unsigned int)(j + 1) )
      {
        v21 = v11 + 264LL * (unsigned int)j;
        v22 = a1;
        if ( a1 >= *(_WORD *)(v21 + 44800) )
        {
          v23 = 0LL;
        }
        else
        {
          v23 = *(_QWORD *)(v21 + 8LL * a1 + 44808);
          v22 = a1;
        }
        if ( v23 )
        {
          _BitScanReverse64(&v24, v23);
          v25 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v22].Flink + (int)v24);
        }
        else
        {
          v25 = -1;
        }
        if ( *(_DWORD *)(v11 + 36) == v25 )
        {
          v9 += 32;
          if ( v9 > v31 )
          {
            v8 = -1073741820;
          }
          else
          {
            memset((char *)Src + 12, 0, 20);
            *(_QWORD *)&Src[0] = v23;
            DWORD2(Src[0]) = 2;
            *(_QWORD *)&Src[1] = *(_QWORD *)(v11 + 12 * j + 35736);
            DWORD2(Src[1]) = *(_DWORD *)(v11 + 12 * j + 35744);
            if ( a4 )
              RtlCopyToUser(a2, Src, 0x20uLL);
            else
              RtlCopyVolatileMemory(a2, Src, 0x20uLL);
            a2 += 32;
          }
        }
      }
      a3 = v31;
      v7 = a1;
    }
  }
  v26 = 0LL;
  while ( (unsigned int)v26 < (unsigned __int16)KeNumberNodes )
  {
    NodeGroupAffinity = KeQueryNodeGroupAffinity(KeNodeBlock[v26], v7);
    if ( NodeGroupAffinity )
    {
      v9 += 32;
      if ( v9 <= v31 )
      {
        *((_QWORD *)&Src[0] + 1) = 1LL;
        *(_QWORD *)((char *)&Src[1] + 4) = 0LL;
        HIDWORD(Src[1]) = 0;
        *(_QWORD *)&Src[0] = NodeGroupAffinity;
        LODWORD(Src[1]) = v26;
        if ( a4 )
          RtlCopyToUser(a2, Src, 0x20uLL);
        else
          RtlCopyVolatileMemory(a2, Src, 0x20uLL);
        a2 += 32;
      }
      else
      {
        v8 = -1073741820;
      }
    }
    v26 = (unsigned int)(v26 + 1);
    v7 = a1;
  }
  *a5 = v9;
  return v8;
}
