/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180006430
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180006384 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180015154 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180016148 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::UsageIndexes::~UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  void *v1; // rdi
  void *v3; // rdi
  void *v4; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax
  HANDLE v7; // rax

  v1 = (void *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
  v3 = (void *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
  {
    v6 = GetProcessHeap();
    HeapFree(v6, 0, v3);
  }
  v4 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v4);
  }
}
