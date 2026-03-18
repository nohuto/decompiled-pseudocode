/*
 * XREFs of ??0atomic_flag@std@@QEAA@XZ @ 0x180231810
 * Callers:
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180231778 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??$?0J$0A@@?$atomic@J@std@@QEAA@XZ @ 0x180231730 (--$-0J$0A@@-$atomic@J@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::atomic_flag::atomic_flag(std::atomic_flag *this)
{
  __int64 v1; // rcx

  std::atomic<long>::atomic<long>(this);
  return v1;
}
