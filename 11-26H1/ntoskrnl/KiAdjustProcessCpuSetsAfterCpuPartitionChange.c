/*
 * XREFs of KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405F69E4
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x1405F5FA0 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KeSetCpuSetsProcess @ 0x14052FE54 (KeSetCpuSetsProcess.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F66F8 (KeQueryCpuPartitionAffinity.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiAdjustProcessCpuSetsAfterCpuPartitionChange(
        __int64 a1,
        unsigned __int16 *a2,
        void *a3,
        unsigned __int16 a4,
        __int64 a5)
{
  unsigned int v6; // ebp
  _QWORD *v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  unsigned __int16 i; // dx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  unsigned __int16 v22; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v22 = 0;
  memset_0(a3, 0, 8LL * a4);
  v9 = *(_QWORD **)(a1 + 432);
  if ( v9 != (_QWORD *)(a1 + 432) )
  {
    v10 = a5;
    do
    {
      v11 = v9;
      v9 = (_QWORD *)*v9;
      KeQueryCpuPartitionAffinity((struct _KAFFINITY_EX **)*(v11 - 3), a2, v6, &v22);
      for ( i = 0; i < v22; ++i )
      {
        v13 = *(_QWORD *)&a2[8 * i];
        v14 = 8LL * a2[8 * i + 4];
        if ( v10 && (v13 & *(_QWORD *)((_BYTE *)a3 + v14)) != 0 )
        {
          v15 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) != v11 )
            goto LABEL_16;
          v16 = (_QWORD *)v11[1];
          if ( (_QWORD *)*v16 != v11 )
            goto LABEL_16;
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          v17 = v11 - 2;
          v18 = *(v11 - 2);
          if ( *(_QWORD **)(v18 + 8) != v11 - 2
            || (v19 = (_QWORD *)*(v11 - 1), (_QWORD *)*v19 != v17)
            || (*v19 = v18, *(_QWORD *)(v18 + 8) = v19, v20 = *(_QWORD **)(v10 + 8), *v20 != v10) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v17 = v10;
          v17[1] = v20;
          *v20 = v17;
          *(_QWORD *)(v10 + 8) = v17;
          break;
        }
        *(_QWORD *)((char *)a3 + v14) |= v13;
      }
    }
    while ( v9 != (_QWORD *)(a1 + 432) );
  }
  return KeSetCpuSetsProcess(a1, v6, (__int64)a3, 1, 1);
}
