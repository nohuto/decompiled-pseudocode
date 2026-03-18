/*
 * XREFs of ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004C680
 * Callers:
 *     ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1400AB51C (-LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ @ 0x140124898 (-LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCKFASTSHARED *__fastcall DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
        DXGAUTOPUSHLOCKFASTSHARED *this,
        struct DXGPUSHLOCKFAST *a2)
{
  DXGAUTOPUSHLOCKFASTSHARED *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a2, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 4);
  result = this;
  *((_BYTE *)this + 8) = 1;
  return result;
}
