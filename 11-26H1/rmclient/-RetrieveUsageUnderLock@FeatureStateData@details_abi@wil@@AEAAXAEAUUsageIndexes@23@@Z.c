/*
 * XREFs of ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x180007320
 * Callers:
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180016148 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18000726C (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ??0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z @ 0x18000745C (--0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z.c)
 */

void __fastcall wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
        wil::details_abi::FeatureStateData *this,
        struct wil::details_abi::UsageIndexes *a2)
{
  __int64 v4; // rax
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // xmm1_8
  void *v8; // rsi
  char v9; // cl
  char v10; // cl
  HANDLE ProcessHeap; // rax
  HANDLE v12; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( *((_BYTE *)this + 64) )
  {
    wil::details_abi::heap_buffer::heap_buffer(&v13, (char *)a2 + 24);
    *(_OWORD *)((char *)a2 + 24) = *((_OWORD *)this + 2);
    *((_QWORD *)a2 + 5) = *((_QWORD *)this + 6);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    v5 = (void *)*((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v4;
    if ( v5 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    v6 = v15;
    v7 = v14;
    *((_OWORD *)this + 2) = v13;
    *((_QWORD *)this + 6) = v7;
    v8 = (void *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v6;
    if ( v8 )
    {
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v8);
    }
    v9 = *((_BYTE *)a2 + 56);
    *((_BYTE *)a2 + 56) = *((_BYTE *)this + 64);
    *((_BYTE *)this + 64) = v9;
    v10 = *((_BYTE *)a2 + 57);
    *((_BYTE *)a2 + 57) = *((_BYTE *)this + 65);
    *((_BYTE *)this + 65) = v10;
  }
  if ( *((_BYTE *)this + 128) )
    wil::details_abi::RawUsageIndex::Swap(
      (struct wil::details_abi::UsageIndexes *)((char *)a2 + 64),
      (wil::details_abi::FeatureStateData *)((char *)this + 72));
  if ( *((_BYTE *)this + 192) )
    wil::details_abi::RawUsageIndex::Swap(
      (struct wil::details_abi::UsageIndexes *)((char *)a2 + 128),
      (wil::details_abi::FeatureStateData *)((char *)this + 136));
}
