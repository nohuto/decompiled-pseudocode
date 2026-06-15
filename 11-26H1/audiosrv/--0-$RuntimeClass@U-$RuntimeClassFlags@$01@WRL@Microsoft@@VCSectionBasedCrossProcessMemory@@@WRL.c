/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ABB08
 * Callers:
 *     ??$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x1800ABA78 (--$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@V?$CSectionBasedCPClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18015E8D0 (--$MakeAndInitialize@V-$CSectionBasedCPClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V.c)
 *     ??$MakeAndInitialize@V?$CSectionBasedCPClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18015E970 (--$MakeAndInitialize@V-$CSectionBasedCPClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V.c)
 *     ??$MakeAndInitialize@V?$CSectionBasedCPClientMemory@UControlData_V2@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18015EA10 (--$MakeAndInitialize@V-$CSectionBasedCPClientMemory@UControlData_V2@@@@UICrossProcessMemory@@$$V.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CSectionBasedCrossProcessMemory::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
