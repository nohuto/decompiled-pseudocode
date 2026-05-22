/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CFF48
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFF8C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDeviceCollectionHeadEventHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialRimDeviceCollectionHeadEventHandler@@@Z @ 0x1800D3828 (--$MakeAndInitialize@VSpatialRimDeviceCollectionHeadEventHandler@@V1@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
