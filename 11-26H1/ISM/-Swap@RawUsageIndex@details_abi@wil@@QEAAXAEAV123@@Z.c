/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1800A0B68
 * Callers:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x18008072C (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18008E898 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z @ 0x18009DC34 (--0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009DE0C (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // xmm1_8
  void *v5; // rdx
  char v6; // cl
  char v7; // cl
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  wil::details *v10; // [rsp+38h] [rbp-10h] BYREF

  wil::details_abi::heap_buffer::heap_buffer((__int64)&v8, (__int64)this + 24);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((wil::details **)this + 6, (wil::details **)a2 + 6);
  v4 = v9;
  *(_OWORD *)((char *)a2 + 24) = v8;
  *((_QWORD *)a2 + 5) = v4;
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((wil::details **)a2 + 6, &v10);
  if ( v10 )
    wil::details::FreeProcessHeap(v10, v5);
  v6 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v6;
  v7 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v7;
}
