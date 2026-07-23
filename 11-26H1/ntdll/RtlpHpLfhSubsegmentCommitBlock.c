/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpTlLogGCScheduled @ 0x180064504 (RtlpHpTlLogGCScheduled.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     ZwSetInformationVirtualMemory @ 0x180162450 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // r9
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned int v9; // edi
  signed __int16 *v10; // rbx
  __int64 v11; // rax
  int v12; // ebp
  signed __int16 *v13; // r12
  signed __int16 v14; // ax
  signed __int16 v15; // tt
  int v16; // esi
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v20; // ecx
  char v21; // cl
  unsigned int v22; // ebp
  unsigned __int64 v23; // r15
  int v24; // ebx
  unsigned __int64 v25; // r9
  char v26; // cl
  __int64 v27; // r11
  volatile signed __int16 *v28; // r10
  int v29; // ebx
  int v30; // edx
  unsigned __int64 v31; // r9
  signed __int16 v32; // r8
  bool v33; // zf
  signed __int16 v34; // ax
  int v35; // eax
  unsigned __int64 v36; // rcx
  char v37; // al
  unsigned __int64 v38; // rbx
  __int64 v39; // r12
  char *v40; // rax
  char *v41; // rdx
  signed __int16 v42; // cx
  signed __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned int v45; // [rsp+30h] [rbp-58h]
  __int64 v46; // [rsp+38h] [rbp-50h]
  unsigned int v47; // [rsp+38h] [rbp-50h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+40h] [rbp-48h] BYREF
  int v49; // [rsp+98h] [rbp+10h]
  int VmInformation; // [rsp+A0h] [rbp+18h] BYREF
  int v51; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a2 + 38);
  v51 = 0;
  VmInformation = 0;
  v6 = 0;
  v7 = a3 >> 12 >> v3;
  v45 = a3 >> 12;
  v8 = 2 * v7;
  v9 = (a3 - 1 + ((unsigned __int16)qword_1801C5EC8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12))) >> 12;
  v10 = (signed __int16 *)(a2 + 2 * v7 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v10);
  LODWORD(v46) = (unsigned __int8)v51;
  v49 = -1;
  v11 = (v9 >> v3) - (unsigned int)v7 + 1;
  v12 = (unsigned __int8)v51;
  if ( v10 >= &v10[v11] )
    return 0LL;
  v13 = &v10[v11];
  do
  {
    v14 = *v10;
    while ( 1 )
    {
      while ( v14 > 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange16(v10, v14 + 1, v14);
        if ( v15 == v14 )
          goto LABEL_6;
      }
      if ( v6 )
        break;
      VmInformation = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
      v14 = *v10;
      v6 = VmInformation;
    }
    if ( v14 )
    {
      v20 = v49;
      ++v12;
      v46 = v8 >> 1;
      if ( v49 == -1 )
        v20 = v8 >> 1;
      v49 = v20;
    }
    else
    {
      --v12;
    }
    *v10 = v14 + 1;
LABEL_6:
    ++v10;
    v8 += 2LL;
  }
  while ( v10 < v13 );
  v16 = 0;
  if ( v12 )
  {
    v17 = (v12 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v17);
    if ( v17 > 0 )
    {
      v18 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
      if ( !*(_BYTE *)(v18 + a1 + 92) )
      {
        *(_BYTE *)(v18 + a1 + 92) = 1;
        if ( !(_DWORD)qword_1801C6278
          && Timer
          && !byte_1801CA908
          && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
        {
          TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
          if ( (RtlpHpHeapFeatures & 0x10) != 0 )
            RtlpHpTlLogGCScheduled();
          v6 = VmInformation;
        }
      }
    }
  }
  if ( v49 == -1 )
  {
    if ( v6 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
    return 0LL;
  }
  v21 = *(_BYTE *)(a2 + 38);
  v22 = v49 << 12 << v21;
  v23 = a2 + v22;
  v47 = ((_DWORD)v46 - v49 + 1) << 12 << v21;
  v24 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
          *(_QWORD *)a1,
          v23,
          v47,
          &v51);
  v25 = a2 + 8LL * *(unsigned __int8 *)(a2 + 24);
  v26 = *(_BYTE *)(a2 + 38);
  if ( v24 >= 0 )
  {
    v27 = 2LL * (v22 >> 12 >> v26);
    v28 = (volatile signed __int16 *)(v25 + v27);
    _m_prefetchw((const void *)(v25 + v27));
    v29 = -1;
    v30 = 0;
    v31 = v25 + v27 + 2LL * (((v22 + v47 - 1) >> 12 >> v26) - (v22 >> 12 >> v26) + 1);
    if ( (unsigned __int64)v28 >= v31 )
      goto LABEL_37;
    do
    {
      v32 = *v28;
      while ( v32 > 0 )
      {
        v34 = _InterlockedCompareExchange16(v28, v32 + 1, v32);
        v33 = v32 == v34;
        v32 = v34;
        if ( v33 )
          goto LABEL_31;
      }
      if ( v32 )
      {
        ++v30;
        if ( v29 == -1 )
          v29 = v27 >> 1;
      }
      else
      {
        --v30;
      }
      *v28 = v32 + 1;
LABEL_31:
      ++v28;
      v27 += 2LL;
    }
    while ( (unsigned __int64)v28 < v31 );
    if ( v30 )
    {
      v35 = (v30 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v35);
      if ( v35 > 0 )
      {
        v36 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*(_BYTE *)(v36 + a1 + 92) )
        {
          *(_BYTE *)(v36 + a1 + 92) = 1;
          if ( !(_DWORD)qword_1801C6278 )
          {
            if ( Timer )
            {
              if ( !byte_1801CA908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
              {
                TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
                if ( (RtlpHpHeapFeatures & 0x10) != 0 )
                  RtlpHpTlLogGCScheduled();
              }
            }
          }
        }
      }
    }
    if ( v29 == -1 )
LABEL_37:
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
    v37 = 3;
    if ( !v51 )
      v37 = 2;
    v38 = v47 + v23;
    if ( (RtlpHpLfhPerfFlags & 2) != 0 )
    {
      if ( (v37 & 1) != 0 )
      {
        VirtualAddresses.NumberOfBytes = v47;
        VirtualAddresses.VirtualAddress = (PVOID)(a2 + v22);
        VmInformation = 1;
        ZwSetInformationVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          VmPrefetchInformation,
          1uLL,
          &VirtualAddresses,
          &VmInformation,
          4u);
      }
      for ( ; v23 < v38; v23 += 4096LL )
        ;
    }
    return 0LL;
  }
  v39 = v45 >> v26;
  v40 = (char *)(v25 + 2 * v39);
  _m_prefetchw(v40);
  v41 = &v40[2 * ((v9 >> v26) - (unsigned int)v39) + 2];
  if ( v40 < v41 )
  {
    do
    {
      v42 = _InterlockedDecrement16((volatile signed __int16 *)v40);
      if ( v42 )
      {
        if ( v42 == -1 )
          --v16;
      }
      else
      {
        ++v16;
      }
      v40 += 2;
    }
    while ( v40 < v41 );
    if ( v16 )
    {
      v43 = (v16 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v43);
      if ( v43 > 0 )
      {
        v44 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*(_BYTE *)(v44 + a1 + 92) )
        {
          *(_BYTE *)(v44 + a1 + 92) = 1;
          if ( !(_DWORD)qword_1801C6278 )
          {
            if ( Timer )
            {
              if ( !byte_1801CA908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
              {
                TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
                if ( (RtlpHpHeapFeatures & 0x10) != 0 )
                  RtlpHpTlLogGCScheduled();
              }
            }
          }
        }
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
  return (unsigned int)v24;
}
