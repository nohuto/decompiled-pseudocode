/*
 * XREFs of ?Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z @ 0x140025D1C
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 * Callees:
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x140026764 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Initialize@CCompositionSwapchainBuffer@@AEAAJ_NPEAUFlipManagerObject@@_K2@Z @ 0x14005DEE4 (-Initialize@CCompositionSwapchainBuffer@@AEAAJ_NPEAUFlipManagerObject@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::Create(
        bool a1,
        struct FlipManagerObject *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct CCompositionSwapchainBuffer **a5)
{
  CFlipExBuffer *Pool2; // rax
  CFlipExBuffer *v10; // rbx
  int v11; // edi

  *a5 = 0LL;
  Pool2 = (CFlipExBuffer *)ExAllocatePool2(256LL, 752LL, 1649234755LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    CFlipExBuffer::CFlipExBuffer(Pool2);
    *((_QWORD *)v10 + 89) = 0LL;
    *(_QWORD *)v10 = &CCompositionSwapchainBuffer::`vftable';
    *((_QWORD *)v10 + 90) = 0LL;
    *((_QWORD *)v10 + 91) = 0LL;
    *((_QWORD *)v10 + 92) = 0LL;
    *((_BYTE *)v10 + 744) = 0;
    v11 = CCompositionSwapchainBuffer::Initialize(v10, a1, a2, a3, a4);
    if ( v11 < 0 )
      (**(void (__fastcall ***)(CFlipExBuffer *, __int64))v10)(v10, 1LL);
    else
      *a5 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
