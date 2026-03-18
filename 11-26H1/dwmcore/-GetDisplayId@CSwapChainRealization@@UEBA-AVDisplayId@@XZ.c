/*
 * XREFs of ?GetDisplayId@CSwapChainRealization@@UEBA?AVDisplayId@@XZ @ 0x1802AD7D0
 * Callers:
 *     ?RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802AE070 (-RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateAttributes@CSwapChainRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802AE560 (-UpdateAttributes@CSwapChainRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CSwapChainRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 120) + 96LL))(v2 + 120);
  else
    *a2 = -1;
  return a2;
}
