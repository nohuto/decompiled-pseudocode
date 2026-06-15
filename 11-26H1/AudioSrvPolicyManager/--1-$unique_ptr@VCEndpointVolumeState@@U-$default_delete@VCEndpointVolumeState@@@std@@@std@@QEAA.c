/*
 * XREFs of ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x180048638
 * Callers:
 *     ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x180048610 (--1-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCEndpoint.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800487B0 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$2 @ 0x18004E59A (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointVolumeState@@QEAA@XZ @ 0x180048668 (--1CEndpointVolumeState@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(CEndpointVolumeState **a1)
{
  CEndpointVolumeState *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CEndpointVolumeState::~CEndpointVolumeState(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x38);
  }
}
