/*
 * XREFs of SmHwAcceleratorMgrReleaseAccelerators @ 0x1408216D0
 * Callers:
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x140820CA8 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorMgrPartitionUnregister @ 0x1408215D8 (SmHwAcceleratorMgrPartitionUnregister.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     SmHwAcceleratorCleanup @ 0x140820A24 (SmHwAcceleratorCleanup.c)
 */

void __fastcall SmHwAcceleratorMgrReleaseAccelerators(__int64 a1)
{
  unsigned int i; // edi
  struct _EX_RUNDOWN_REF **v3; // r14
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _EX_RUNDOWN_REF *Count; // rax
  __int64 v6; // rcx

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = (struct _EX_RUNDOWN_REF **)(a1 + 16LL * i + 24);
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == (struct _EX_RUNDOWN_REF *)v3 )
        break;
      if ( (struct _EX_RUNDOWN_REF **)v4[1].Count != v3
        || (Count = (struct _EX_RUNDOWN_REF *)v4->Count, *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4) )
      {
        __fastfail(3u);
      }
      *v3 = Count;
      Count[1].Count = (unsigned __int64)v3;
      SmHwAcceleratorCleanup(v4);
      CmSiFreeMemory((PPRIVILEGE_SET)v4);
      --*(_DWORD *)(a1 + 4LL * i + 1048);
      --*(_DWORD *)(a1 + 1304);
    }
  }
  v6 = *(_QWORD *)(a1 + 1320);
  if ( v6 )
  {
    AccelDestroyOffloadWorkspace(v6);
    *(_QWORD *)(a1 + 1320) = 0LL;
  }
}
