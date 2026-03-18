/*
 * XREFs of ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x14001C740
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14001A938 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C7D8 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140024790 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CEndpointResourceStateManager::CommitPendingUpdates(CEndpointResourceStateManager *this)
{
  CEndpointResourceStateManager *v1; // rax
  char *v3; // rdi
  CEndpointResourceStateManager *v4; // rbx
  void (__fastcall ***v5)(_QWORD); // rcx
  CEndpointResourceStateManager **v6; // rax
  CEndpointResourceStateManager *v7; // rbx
  CEndpointResourceStateManager **v8; // rcx

  v1 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  v3 = (char *)this + 16;
  if ( v1 != (CEndpointResourceStateManager *)((char *)this + 16) )
  {
    do
    {
      v4 = *(CEndpointResourceStateManager **)v1;
      v5 = (void (__fastcall ***)(_QWORD))((char *)v1 - 8);
      if ( !v1 )
        v5 = 0LL;
      (**v5)(v5);
      v1 = v4;
    }
    while ( v4 != (CEndpointResourceStateManager *)v3 );
  }
  v6 = *(CEndpointResourceStateManager ***)this;
  if ( *(CEndpointResourceStateManager **)this != this )
  {
    do
    {
      v7 = *v6;
      v8 = v6 - 1;
      if ( !v6 )
        v8 = 0LL;
      (*(void (__fastcall **)(CEndpointResourceStateManager **))*v8)(v8);
      v6 = (CEndpointResourceStateManager **)v7;
    }
    while ( v7 != this );
  }
}
