/*
 * XREFs of NvmeControllerGetInterruptMessageInfo @ 0x1400F3D58
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerGetMSIInfo @ 0x1400F49CC (NvmeControllerGetMSIInfo.c)
 */

__int64 __fastcall NvmeControllerGetInterruptMessageInfo(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebp
  void *v8; // rcx
  __int64 Pool; // rax
  unsigned int i; // r10d
  __int64 v11; // r8
  __int64 v12; // r9
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v14[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 128);
  v4 = 0LL;
  if ( !v2 )
    return 3221225701LL;
  v5 = *(_QWORD *)(v2 + 600);
  if ( !v5 || !*(_QWORD *)(v5 + 120) || !*(_QWORD *)(v5 + 128) )
    return 3221225701LL;
  v6 = *(_DWORD *)(a1 + 904);
  if ( v6 == 2 || v6 == 3 )
  {
    v7 = 0;
    if ( (int)NvmeControllerGetMSIInfo(a1, 0LL, v14) < 0 )
      goto LABEL_16;
    do
    {
      if ( v7 )
      {
        if ( v4 == *((_QWORD *)&v14[0] + 1) && *(_DWORD *)(a1 + 904) != 3 )
          *(_DWORD *)(a1 + 904) = 2;
      }
      else
      {
        v4 = *((_QWORD *)&v14[0] + 1);
      }
      ++v7;
    }
    while ( (int)NvmeControllerGetMSIInfo(a1, v7, v14) >= 0 );
    if ( !v7 )
    {
LABEL_16:
      v7 = 1;
      *(_DWORD *)(a1 + 904) = 1;
    }
  }
  else
  {
    v7 = 1;
  }
  *(_DWORD *)(a1 + 908) = v7;
  v8 = *(void **)(a1 + 912);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x54496152u);
    *(_QWORD *)(a1 + 912) = 0LL;
  }
  Pool = RaidAllocatePool(
           72LL,
           32LL * *(unsigned int *)(a1 + 908),
           1414095186LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 912) = Pool;
  if ( Pool )
  {
    for ( i = 0;
          i < *(_DWORD *)(a1 + 908);
          *(_OWORD *)(*(_QWORD *)(a1 + 912) + v11 + 8) = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128)
                                                                                           + 600LL)
                                                                               + 128LL)
                                                                   + 8 * v12) )
    {
      v11 = 32LL * i;
      v12 = 2LL * i;
      *(_DWORD *)(v11 + *(_QWORD *)(a1 + 912)) = i++;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
