/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x180132AE4
 * Callers:
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1801397DC (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 * Callees:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18005A170 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18013C178 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,std::wstring &,_tlgProvider_t const * &,IEndpointResourceManagerProvider * &>(
        CEndpointCharacteristics **a1)
{
  void *v2; // rax
  int v3; // edi
  CEndpointCharacteristics *v4; // rbx
  void *v6; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new[](0x2070uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = CEndpointCharacteristics::CEndpointCharacteristics((CEndpointCharacteristics *)v2);
    v6 = 0LL;
    v3 = CEndpointCharacteristics::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      if ( v4 )
        (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v4 + 16LL))(v4);
      v3 = 0;
    }
    else if ( v4 )
    {
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v6);
  return (unsigned int)v3;
}
