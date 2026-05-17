/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x180096B64 (RtlpHpTlLogGCScheduled.c)
 *     ZwSetInformationVirtualMemory @ 0x180162550 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned __int64 v13; // rdx
  signed __int16 *v14; // r12
  signed __int16 v15; // ax
  signed __int16 v16; // tt
  int v17; // esi
  int v18; // eax
  unsigned __int64 v19; // rcx
  int v21; // ecx
  char v22; // cl
  unsigned int v23; // ebp
  unsigned __int64 v24; // r15
  int v25; // ebx
  unsigned __int64 v26; // r9
  char v27; // cl
  __int64 v28; // r11
  volatile signed __int16 *v29; // r10
  int v30; // ebx
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  signed __int16 v33; // r8
  bool v34; // zf
  signed __int16 v35; // ax
  int v36; // eax
  unsigned __int64 v37; // rcx
  char v38; // al
  unsigned __int64 v39; // rbx
  __int64 v40; // r12
  char *v41; // rax
  unsigned __int64 v42; // rdx
  signed __int16 v43; // cx
  int v44; // esi
  signed __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned int v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+38h] [rbp-50h]
  unsigned int v49; // [rsp+38h] [rbp-50h]
  _QWORD v50[9]; // [rsp+40h] [rbp-48h] BYREF
  int v51; // [rsp+98h] [rbp+10h]
  int v52; // [rsp+A0h] [rbp+18h] BYREF
  int v53; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a2 + 38);
  v53 = 0;
  v52 = 0;
  v6 = 0;
  v7 = a3 >> 12 >> v3;
  v47 = a3 >> 12;
  v8 = 2 * v7;
  v9 = (a3 - 1 + ((unsigned __int16)qword_1801C6EC8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12))) >> 12;
  v10 = (signed __int16 *)(a2 + 2 * v7 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v10);
  LODWORD(v48) = (unsigned __int8)v53;
  v51 = -1;
  v11 = (v9 >> v3) - (unsigned int)v7 + 1;
  v12 = (unsigned __int8)v53;
  v13 = (unsigned __int64)&v10[v11];
  if ( (unsigned __int64)v10 >= v13 )
    return 0LL;
  v14 = &v10[v11];
  do
  {
    v15 = *v10;
    while ( 1 )
    {
      while ( v15 > 0 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange16(v10, v15 + 1, v15);
        if ( v16 == v15 )
          goto LABEL_6;
      }
      if ( v6 )
        break;
      v52 = 1;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 56), v13);
      v15 = *v10;
      v6 = v52;
    }
    if ( v15 )
    {
      v21 = v51;
      ++v12;
      v48 = v8 >> 1;
      if ( v51 == -1 )
        v21 = v8 >> 1;
      v51 = v21;
    }
    else
    {
      --v12;
    }
    *v10 = v15 + 1;
LABEL_6:
    ++v10;
    v8 += 2LL;
  }
  while ( v10 < v14 );
  v17 = 0;
  if ( v12 )
  {
    v18 = (v12 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
    v13 = v18;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v18);
    if ( v18 > 0 )
    {
      v19 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
      if ( !*(_BYTE *)(v19 + a1 + 92) )
      {
        *(_BYTE *)(v19 + a1 + 92) = 1;
        if ( !(_DWORD)qword_1801C7278
          && qword_1801C7268
          && !byte_1801CB8C8
          && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
        {
          TpSetTimerEx(qword_1801C7268, &qword_1801C7270, 0LL, 1000LL);
          if ( (RtlpHpHeapFeatures & 0x10) != 0 )
            RtlpHpTlLogGCScheduled();
          v6 = v52;
        }
      }
    }
  }
  if ( v51 == -1 )
  {
    if ( v6 )
      RtlReleaseSRWLockExclusive(a2 + 56, v13);
    return 0LL;
  }
  v22 = *(_BYTE *)(a2 + 38);
  v23 = v51 << 12 << v22;
  v24 = a2 + v23;
  v49 = ((_DWORD)v48 - v51 + 1) << 12 << v22;
  v25 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
          *(_QWORD *)a1,
          v24,
          v49,
          &v53);
  v26 = a2 + 8LL * *(unsigned __int8 *)(a2 + 24);
  v27 = *(_BYTE *)(a2 + 38);
  if ( v25 >= 0 )
  {
    v28 = 2LL * (v23 >> 12 >> v27);
    v29 = (volatile signed __int16 *)(v26 + v28);
    _m_prefetchw((const void *)(v26 + v28));
    v30 = -1;
    v31 = 0LL;
    v32 = v26 + v28 + 2LL * (((v23 + v49 - 1) >> 12 >> v27) - (v23 >> 12 >> v27) + 1);
    if ( (unsigned __int64)v29 >= v32 )
      goto LABEL_37;
    do
    {
      v33 = *v29;
      while ( v33 > 0 )
      {
        v35 = _InterlockedCompareExchange16(v29, v33 + 1, v33);
        v34 = v33 == v35;
        v33 = v35;
        if ( v34 )
          goto LABEL_31;
      }
      if ( v33 )
      {
        v31 = (unsigned int)(v31 + 1);
        if ( v30 == -1 )
          v30 = v28 >> 1;
      }
      else
      {
        v31 = (unsigned int)(v31 - 1);
      }
      *v29 = v33 + 1;
LABEL_31:
      ++v29;
      v28 += 2LL;
    }
    while ( (unsigned __int64)v29 < v32 );
    if ( (_DWORD)v31 )
    {
      v36 = ((_DWORD)v31 << 12 << *(_BYTE *)(a2 + 38)) / 4096;
      v31 = v36;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v36);
      if ( v36 > 0 )
      {
        v37 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*(_BYTE *)(v37 + a1 + 92) )
        {
          *(_BYTE *)(v37 + a1 + 92) = 1;
          if ( !(_DWORD)qword_1801C7278 )
          {
            if ( qword_1801C7268 )
            {
              if ( !byte_1801CB8C8 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
              {
                TpSetTimerEx(qword_1801C7268, &qword_1801C7270, 0LL, 1000LL);
                if ( (RtlpHpHeapFeatures & 0x10) != 0 )
                  RtlpHpTlLogGCScheduled();
              }
            }
          }
        }
      }
    }
    if ( v30 == -1 )
LABEL_37:
      RtlReleaseSRWLockExclusive(a2 + 56, v31);
    v38 = 3;
    if ( !v53 )
      v38 = 2;
    v39 = v49 + v24;
    if ( (RtlpHpLfhPerfFlags & 2) != 0 )
    {
      if ( (v38 & 1) != 0 )
      {
        v50[1] = v49;
        v50[0] = a2 + v23;
        v52 = 1;
        ZwSetInformationVirtualMemory(-1LL, 0LL, 1LL, v50, &v52, 4);
      }
      for ( ; v24 < v39; v24 += 4096LL )
        ;
    }
    return 0LL;
  }
  v40 = v47 >> v27;
  v41 = (char *)(v26 + 2 * v40);
  _m_prefetchw(v41);
  v42 = (unsigned __int64)&v41[2 * ((v9 >> v27) - (unsigned int)v40) + 2];
  if ( (unsigned __int64)v41 < v42 )
  {
    do
    {
      v43 = _InterlockedDecrement16((volatile signed __int16 *)v41);
      if ( v43 )
      {
        if ( v43 == -1 )
          --v17;
      }
      else
      {
        ++v17;
      }
      v41 += 2;
    }
    while ( (unsigned __int64)v41 < v42 );
    if ( v17 )
    {
      v44 = v17 << 12 << *(_BYTE *)(a2 + 38);
      v42 = (v44 >> 31) & 0xFFF;
      v45 = v44 / 4096;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 74) + a1 + 24), v45);
      if ( v45 > 0 )
      {
        v46 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        if ( !*(_BYTE *)(v46 + a1 + 92) )
        {
          *(_BYTE *)(v46 + a1 + 92) = 1;
          if ( !(_DWORD)qword_1801C7278 )
          {
            if ( qword_1801C7268 )
            {
              if ( !byte_1801CB8C8 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
              {
                TpSetTimerEx(qword_1801C7268, &qword_1801C7270, 0LL, 1000LL);
                if ( (RtlpHpHeapFeatures & 0x10) != 0 )
                  RtlpHpTlLogGCScheduled();
              }
            }
          }
        }
      }
    }
  }
  RtlReleaseSRWLockExclusive(a2 + 56, v42);
  return (unsigned int)v25;
}
