/*
 * XREFs of MiComputeMemoryNodeProcessorAssignments @ 0x140D037E8
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140507BA0 (KeQueryNodeActiveAffinity2.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiReassignProcessorsToMemoryOnlyNodes @ 0x140D03EE8 (MiReassignProcessorsToMemoryOnlyNodes.c)
 */

__int64 MiComputeMemoryNodeProcessorAssignments()
{
  bool v0; // cf
  int v1; // r14d
  int v2; // r12d
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  __int64 PoolMm; // rsi
  __int64 v7; // rax
  _OWORD *v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  __int64 FirstSetRightGroupAffinity; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int16 v19; // cx
  unsigned __int64 *v20; // rdx
  __int16 v21; // ax
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 result; // rax
  unsigned __int64 v30[12]; // [rsp+28h] [rbp-60h] BYREF
  unsigned int Count; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h] BYREF
  int v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

  v0 = KeNumberNodes != 0;
  v1 = 0;
  v33 = 0;
  v2 = 0;
  v3 = 0;
  while ( v0 )
  {
    LOWORD(v32) = 0;
    LOWORD(Count) = 0;
    v4 = *(_QWORD *)(384LL * v3 + qword_140E2D838 + 376);
    KeQueryNodeActiveAffinity2(v3, 0LL, 0, (unsigned __int16 *)&Count);
    v5 = Count;
    PoolMm = v4 + 48;
    v34 = (unsigned __int16)Count;
    if ( (_WORD)Count )
    {
      if ( (_WORD)Count != 1 )
        PoolMm = ExAllocatePoolMm(64LL, 16LL * (unsigned __int16)Count, 1632069965, v3 | 0x80000000);
      if ( PoolMm )
      {
        KeQueryNodeActiveAffinity2(v3, PoolMm, v5, (unsigned __int16 *)&v32);
      }
      else
      {
        v5 = 1;
        v34 = 1;
        PoolMm = v4 + 48;
        KeQueryNodeActiveAffinity(v3, (PGROUP_AFFINITY)(v4 + 48), (PUSHORT)&Count);
      }
      v1 = v33;
    }
    else
    {
      v5 = 1;
      v34 = 1;
    }
    Count = v5;
    if ( !v5 )
      goto LABEL_27;
    v7 = v5;
    v8 = (_OWORD *)PoolMm;
    v32 = v5;
    do
    {
      v9 = 0LL;
      *(_OWORD *)v30 = *v8;
      v10 = v30[0];
      if ( v30[0] )
      {
        do
        {
          FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity(v30);
          v12 = 20LL;
          v13 = KiProcessorBlock[FirstSetRightGroupAffinity];
          v14 = 1LL;
          v15 = *(_BYTE *)(v13 + 35352);
          if ( v15 != 1 )
            v12 = 22LL;
          ++*(_WORD *)(v12 + v4);
          if ( v15 != 1 )
            v14 = 2LL;
          ++word_140E2D82A[v14];
          v16 = *(_QWORD *)(v13 + 200);
          v10 &= ~v16;
          v30[0] = v10;
          if ( (v16 & v9) == 0 )
          {
            v17 = 26LL;
            if ( v15 != 1 )
              v17 = 28LL;
            ++*(_WORD *)(v17 + v4);
            ++word_140E2D830[v14];
            v9 |= *(_QWORD *)(v13 + 36512);
          }
        }
        while ( v10 );
        v7 = v32;
      }
      ++v8;
      v32 = --v7;
    }
    while ( v7 );
    v18 = Count;
    v19 = 0;
    v20 = (unsigned __int64 *)PoolMm;
    v5 = v34;
    do
    {
      v21 = v19 + __popcnt(*v20);
      v20 += 2;
      v19 = v21;
      --v18;
    }
    while ( v18 );
    v1 = v33;
    if ( !v21 )
    {
LABEL_27:
      *(_WORD *)(v4 + 32) |= 1u;
      v33 = ++v1;
    }
    v22 = KeNodeBlock[(unsigned __int16)v3];
    if ( !v22 || (v23 = *(_DWORD *)(v22 + 64)) == 0 )
      v23 = 1;
    *(_DWORD *)(v4 + 8) = v23;
    *(_DWORD *)(v4 + 12) = v2;
    v2 += v23;
    v24 = (unsigned __int16)KeNumberNodes;
    *(_QWORD *)v4 = PoolMm;
    *(_WORD *)(v4 + 16) = v5;
    word_140E2D828 += v5;
    *(_DWORD *)(v4 + 44) = v3++;
    v0 = v3 < v24;
  }
  dword_140E2D820 = v2;
  qword_140E2D818 = ExAllocatePoolMm(
                      64LL,
                      16LL * (unsigned __int16)word_140E2D828,
                      1632069965,
                      KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !qword_140E2D818 )
    MxInstallMoreMemory(52);
  v25 = 0;
  if ( KeNumberNodes )
  {
    v26 = 0LL;
    v27 = (unsigned __int16)KeNumberNodes;
    do
    {
      v28 = *(_QWORD *)(v26 + qword_140E2D838 + 376);
      memmove((void *)(qword_140E2D818 + 16LL * v25), *(const void **)v28, 16LL * *(unsigned __int16 *)(v28 + 16));
      v26 += 384LL;
      v25 += *(unsigned __int16 *)(v28 + 16);
      --v27;
    }
    while ( v27 );
  }
  if ( v1 )
    MiReassignProcessorsToMemoryOnlyNodes();
  result = 0x10000000000LL;
  MiFlags |= 0x10000000000uLL;
  return result;
}
