/*
 * XREFs of ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x14001C294
 * Callers:
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C7D8 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1400A4ADC (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CEndpointResourceStateManager::ClearAllContentBindings(CEndpointResourceStateManager *this)
{
  CEndpointResourceStateManager *v1; // rsi
  CEndpointResourceStateManager *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14

  v1 = (CEndpointResourceStateManager *)((char *)this + 16);
  v2 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  if ( v2 != (CEndpointResourceStateManager *)((char *)this + 16) )
  {
    do
    {
      v3 = (__int64)v2 + 40;
      v4 = (__int64)v2 + 56;
      if ( !v2 )
        v3 = 48LL;
      if ( *(_QWORD *)v3 )
      {
        CPoolBufferResource::RemoveUsageReference(*(CPoolBufferResource **)v3);
        CFlipResource::Release(*(CFlipResource **)v3);
        *(_QWORD *)v3 = 0LL;
        v5 = (__int64)v2 + 56;
        if ( !v2 )
          v5 = 64LL;
        *(_BYTE *)v5 |= 1u;
      }
      v6 = (__int64)v2 + 32;
      if ( !v2 )
        v6 = 40LL;
      if ( *(_QWORD *)v6 )
      {
        CFlipPropertySetBase::Release(*(CFlipPropertySetBase **)v6);
        *(_QWORD *)v6 = 0LL;
        if ( !v2 )
          v4 = 64LL;
        *(_BYTE *)v4 |= 1u;
      }
      v2 = *(CEndpointResourceStateManager **)v2;
    }
    while ( v2 != v1 );
  }
}
