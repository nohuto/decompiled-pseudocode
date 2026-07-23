/*
 * XREFs of PfpPrefetchFiles @ 0x140A5819C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1404B8380 (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x1404D5E80 (PfpReadSupportInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfpFileBuildReadSupport @ 0x140A589EC (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140A58DF0 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchFiles(_QWORD *a1, char a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // r12
  __int64 v4; // rsi
  int v5; // r15d
  char v6; // r13
  unsigned int v7; // ebx
  __int64 v8; // r9
  int v9; // r8d
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r8d
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // r14
  char *Pool2; // rbp
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // r15
  _DWORD *v23; // rdx
  __int64 v24; // r12
  char v25; // r8
  int v26; // r9d
  int v27; // edx
  int v28; // r9d
  __int64 v29; // r8
  _QWORD *v30; // rdx
  int v31; // eax
  char *v32; // rdi
  int v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  unsigned int v37; // [rsp+A0h] [rbp+18h]
  char *v38; // [rsp+A8h] [rbp+20h]

  v2 = *a1;
  v3 = a1;
  v34 = *a1;
  v4 = 0LL;
  v5 = 0;
  v6 = a2;
  v33 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v37 = *(_DWORD *)(*v3 + 28LL) & 7 | (8 * (*(_WORD *)(*v3 + 30LL) & 7));
  if ( !*(_DWORD *)(*a1 + 8LL) )
    goto LABEL_2;
  v17 = 0LL;
  v16 = *(_QWORD *)(v2 + 32) + 12LL;
  v18 = *(unsigned int *)(*a1 + 8LL);
  do
  {
    if ( (*(_QWORD *)(v17 + v3[2] + 24) & 0x400000000LL) != 0 )
    {
      v11 = *(_DWORD *)v16;
      v12 = 0LL;
      if ( (*(_DWORD *)v16 & 0xFFFFFFFE) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(v16 + 4);
          v14 = v11;
          v15 = *(_DWORD *)(v13 + 48 * v12);
          if ( (v15 & 0xA) != 0 || !*(_DWORD *)(v13 + 48 * v12 + 16) )
            goto LABEL_14;
          if ( v6 )
          {
            if ( (v15 & 1) == 0 )
              goto LABEL_14;
          }
          else
          {
            ++*(_DWORD *)(v2 + 84);
            v14 = *(_DWORD *)v16;
          }
          ++v5;
          v11 = v14;
LABEL_14:
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < v11 >> 1 );
      }
    }
    v16 += 40LL;
    v17 += 64LL;
    --v18;
  }
  while ( v18 );
  if ( !v5 )
  {
LABEL_2:
    v7 = -1073741275;
    goto LABEL_3;
  }
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v38 = &Pool2[56 * v5];
    memset_0(Pool2, 0, (unsigned int)(v5 << 6));
    v20 = 0LL;
    if ( !*(_DWORD *)(v2 + 8) )
      goto LABEL_19;
    do
    {
      v21 = *(_QWORD *)(v2 + 32);
      if ( _bittest64((const signed __int64 *)(((unsigned __int64)(unsigned int)v20 << 6) + v3[2] + 24), 0x22u) )
      {
        v22 = 0LL;
        if ( (*(_DWORD *)(v21 + 40 * v20 + 12) & 0xFFFFFFFE) != 0 )
        {
          do
          {
            v23 = (_DWORD *)(*(_QWORD *)(v21 + 40 * v20 + 16) + 48 * v22);
            if ( (*v23 & 0xA) == 0 && v23[4] && (!a2 || (*v23 & 1) != 0) )
            {
              v24 = (__int64)&Pool2[56 * (int)v4];
              PfpReadSupportInitialize(v24);
              LOBYTE(v26) = v25;
              if ( (int)PfpFileBuildReadSupport((_DWORD)a1, v27, v20, v26, v24) < 0 )
              {
                PfpReadSupportCleanup(a1[5], v24);
                PfpReadSupportInitialize(v24);
              }
              else
              {
                v4 = (unsigned int)(v4 + 1);
              }
            }
            v22 = (unsigned int)(v22 + 1);
          }
          while ( (unsigned int)v22 < *(_DWORD *)(v21 + 40 * v20 + 12) >> 1 );
          v2 = v34;
          v3 = a1;
        }
      }
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 < *(_DWORD *)(v2 + 8) );
    if ( (_DWORD)v4 )
    {
      if ( (unsigned int)PfpCheckPrefetchAbort(v3) )
      {
        v7 = -1073741248;
      }
      else
      {
        v28 = 0;
        if ( (int)v4 > 0 )
        {
          v29 = 0LL;
          v30 = Pool2;
          do
          {
            *(_QWORD *)*v30 = v30[2];
            *(_QWORD *)&v38[8 * v29] = *v30;
            v31 = *(_DWORD *)(*v30 + 8LL);
            v28 += v31;
            if ( v31 )
              *(_QWORD *)(*v30 + 16LL) |= v37;
            ++v29;
            v30 += 7;
          }
          while ( v29 < (int)v4 );
        }
        if ( a2 )
          *(_DWORD *)(v2 + 100) += v28;
        else
          *(_DWORD *)(v2 + 96) += v28;
        v7 = MmPrefetchPagesEx((unsigned int)v4, v38, 0LL);
      }
      if ( (int)v4 > 0 )
      {
        v32 = Pool2;
        do
        {
          PfpReadSupportCleanup(v3[5], v32);
          v32 += 56;
          --v4;
        }
        while ( v4 );
      }
    }
    else
    {
LABEL_19:
      v7 = -1073741275;
    }
    ExFreePoolWithTag(Pool2, 0);
    v6 = a2;
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_3:
  v8 = *v3;
  v9 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - v33;
  if ( v6 )
    *(_DWORD *)(v8 + 116) += v9;
  else
    *(_DWORD *)(v8 + 112) += v9;
  return v7;
}
