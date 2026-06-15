/*
 * XREFs of ??$MakeAndInitialize@V?$CSectionBasedCPClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18015E970
 * Callers:
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@0@Z @ 0x1801146E0 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ABB08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSectionBasedCPClientMemory<ControlData_V1>,ICrossProcessMemory,>(
        _QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbx
  unsigned int v4; // edi
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new[](0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v6 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>((__int64)v2);
    *(_QWORD *)v3 = &CSectionBasedCPClientMemory<ControlData_V1>::`vftable';
    v6 = 0LL;
    v4 = ((__int64 (__fastcall *)(void *, GUID *, _QWORD *))CSectionBasedCPClientMemory<ControlData_V1>::`vftable')(
           v3,
           &GUID_910f47db_d25f_4cf9_995e_f86c161b3eef,
           a1);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v6);
  return v4;
}
