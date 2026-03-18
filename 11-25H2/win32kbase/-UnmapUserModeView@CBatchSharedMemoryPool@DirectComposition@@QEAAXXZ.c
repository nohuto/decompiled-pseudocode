/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x140058830
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x140058368 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1400585A0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( v3 )
      MmUnmapViewOfSection(v3, v1);
    *((_QWORD *)this + 6) = 0LL;
  }
}
