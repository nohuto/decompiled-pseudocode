/*
 * XREFs of ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x140026ABC
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1400268E4 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1400A38F4 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x140026CE0 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBufferRealization::Create(
        const struct CSM_REALIZATION_INFO *a1,
        bool a2,
        struct CBufferRealization **a3)
{
  int v3; // r9d
  signed int v7; // edi
  int v8; // r9d
  int v9; // r9d
  __int64 Pool2; // rbx

  v3 = *(_DWORD *)a1;
  *a3 = 0LL;
  v7 = -1073741811;
  v8 = v3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 || (unsigned int)(v9 - 1) <= 1 )
      v7 = *((_QWORD *)a1 + 1) == 0LL ? 0xC000000D : 0;
LABEL_5:
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_6;
  }
  if ( !*((_QWORD *)a1 + 1) )
    goto LABEL_5;
LABEL_6:
  Pool2 = ExAllocatePool2(256LL, 88LL, 1917670211LL);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = &CBufferRealization::`vftable';
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a1;
    *(_OWORD *)(Pool2 + 40) = *((_OWORD *)a1 + 1);
    *(_OWORD *)(Pool2 + 56) = *((unsigned __int64 *)a1 + 4);
    *(_QWORD *)(Pool2 + 72) = 0LL;
    *(_DWORD *)(Pool2 + 80) = 0;
    v7 = CBufferRealization::Initialize((CBufferRealization *)Pool2, a2);
    if ( v7 < 0 )
      (**(void (__fastcall ***)(__int64, __int64))Pool2)(Pool2, 1LL);
    else
      *a3 = (struct CBufferRealization *)Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
