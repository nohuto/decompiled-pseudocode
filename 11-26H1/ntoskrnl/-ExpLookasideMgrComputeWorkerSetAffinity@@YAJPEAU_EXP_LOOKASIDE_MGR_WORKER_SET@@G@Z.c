/*
 * XREFs of ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x14084CE30
 * Callers:
 *     ?ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@@KK@Z @ 0x14084D0B8 (-ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryMaximumGroupCount @ 0x1404B4AE0 (KeQueryMaximumGroupCount.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ?ExpLookasideMgrAllocatePoolOnNode@@YAPEAXK_K@Z @ 0x140840B08 (-ExpLookasideMgrAllocatePoolOnNode@@YAPEAXK_K@Z.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpLookasideMgrComputeWorkerSetAffinity(
        struct _EXP_LOOKASIDE_MGR_WORKER_SET *a1,
        unsigned __int16 a2)
{
  unsigned int v2; // esi
  USHORT MaximumGroupCount; // r13
  size_t v6; // rbx
  __int64 Pool2; // rax
  __int64 v8; // r14
  unsigned int i; // r15d
  unsigned int v10; // ecx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 PoolOnNode; // rax
  unsigned int v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // eax
  size_t Size; // [rsp+20h] [rbp-20h]
  unsigned __int16 *v20[2]; // [rsp+28h] [rbp-18h] BYREF
  __int16 v21; // [rsp+38h] [rbp-8h]
  int v22; // [rsp+3Ah] [rbp-6h]
  __int16 v23; // [rsp+3Eh] [rbp-2h]
  unsigned int v25; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp+58h]

  v2 = 0;
  LOWORD(v25) = 0;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v6 = 8LL * MaximumGroupCount;
  Size = v6;
  v26 = v6 + 8;
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)Pool2 = 1;
    *(_WORD *)(Pool2 + 2) = MaximumGroupCount;
    *(_DWORD *)(Pool2 + 4) = 0;
    memset_0((void *)(Pool2 + 8), 0, v6);
    KeQueryNodeActiveAffinityEx(a2, (unsigned __int16 *)v8, &v25);
    for ( i = 0; ; ++i )
    {
      v10 = *(_DWORD *)a1;
      if ( i >= *(_DWORD *)a1 )
        break;
      v11 = *((_QWORD *)a1 + 1);
      v12 = v26;
      v13 = 32LL * i;
      *(_DWORD *)(v13 + v11 + 24) = 4;
      PoolOnNode = ExpLookasideMgrAllocatePoolOnNode(a2, v12);
      *(_QWORD *)(v13 + v11 + 16) = PoolOnNode;
      if ( !PoolOnNode )
      {
        v2 = -1073741670;
        goto LABEL_13;
      }
      *(_WORD *)(PoolOnNode + 2) = MaximumGroupCount;
      *(_WORD *)PoolOnNode = 1;
      *(_DWORD *)(PoolOnNode + 4) = 0;
      memset_0((void *)(PoolOnNode + 8), 0, Size);
    }
    v15 = 0;
    v22 = 0;
    v16 = (unsigned __int16)v25 / v10;
    v23 = 0;
    v20[1] = *(unsigned __int16 **)(v8 + 8);
    v25 = 0;
    v21 = 0;
    v20[0] = (unsigned __int16 *)v8;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v25, v20) )
    {
      v17 = *(_DWORD *)a1 - 1;
      if ( v15 / v16 != *(_DWORD *)a1 )
        v17 = v15 / v16;
      KeAddProcessorAffinityEx(*(unsigned __int16 **)(32LL * v17 + *((_QWORD *)a1 + 1) + 16), v25);
      ++v15;
    }
LABEL_13:
    ExFreePoolWithTag((PVOID)v8, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
