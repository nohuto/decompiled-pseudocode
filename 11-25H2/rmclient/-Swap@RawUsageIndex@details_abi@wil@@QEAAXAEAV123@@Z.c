/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18000872C
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180007CA4 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x1800086C0 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180006258 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z @ 0x1800087D0 (--0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  void *v4; // rdx
  __int64 v5; // rax
  wil::details *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  wil::details *v9; // rcx
  char v10; // cl
  char v11; // cl
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  wil::details_abi::heap_buffer::heap_buffer(&v12, (char *)this + 24);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = 0LL;
  v6 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v5;
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v4);
  v7 = v14;
  v8 = v13;
  *(_OWORD *)((char *)a2 + 24) = v12;
  *((_QWORD *)a2 + 5) = v8;
  v9 = (wil::details *)*((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = v7;
  if ( v9 )
    wil::details::FreeProcessHeap(v9, v4);
  v10 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v10;
  v11 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v11;
}
