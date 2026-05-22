/*
 * XREFs of ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800CEF9C
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFF8C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180091F84 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC6F8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$emplace_back@AEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@ULegacyDeviceInfo@@@1@AEAV21@@Z @ 0x1800CEA68 (--$emplace_back@AEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacyDeviceI.c)
 *     ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x1800CEAAC (--$make_shared@ULegacyDeviceInfo@@$$V@std@@YA-AV-$shared_ptr@ULegacyDeviceInfo@@@0@XZ.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x1800CF084 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCRawInputProvider::AttachDevice(__int64 a1, int a2, _DWORD *a3)
{
  int v6; // eax
  int v7; // ebx
  void *v8; // rdx
  _DWORD *v10; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-10h]

  std::make_shared<LegacyDeviceInfo,>(&v10);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  *v10 = v6;
  v10[1] = a2;
  v7 = *(_DWORD *)(a1 + 88);
  if ( GetCurrentThreadId() == v7 && std::_Atomic_storage<bool,1>::load(a1 + 80) )
  {
    MPCRawInputProvider::AttachDeviceImpl(a1, &v10);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    std::vector<std::shared_ptr<LegacyDeviceInfo>>::emplace_back<std::shared_ptr<LegacyDeviceInfo> &>(
      (_QWORD *)(a1 + 136),
      (__int64)&v10);
    wil::details::SetEvent(*(wil::details **)(a1 + 72), v8);
    if ( a1 != -96 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  }
  *a3 = *v10;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return 0LL;
}
