/*
 * XREFs of ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18014DBD4
 * Callers:
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014EBD8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014F14C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180046AF0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180133250 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 */

__int64 __fastcall HitTestResult::operator=(__int64 a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rbx

  *(_BYTE *)a1 = *(_BYTE *)a2;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::operator=(
    (__int64 *)(a1 + 8),
    (__int64 *)(a2 + 8));
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  v4 = *(_DWORD *)(a2 + 92);
  v5 = (_QWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 92) = v4;
  if ( (_QWORD *)(a1 + 96) != v5 )
  {
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64 ***)(a1 + 96));
    *(_QWORD *)(a1 + 96) = *v5;
    *(_QWORD *)(a1 + 104) = v5[1];
    *(_QWORD *)(a1 + 112) = v5[2];
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  return a1;
}
