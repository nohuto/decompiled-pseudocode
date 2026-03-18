/*
 * XREFs of ?SetDisplayId@CDDisplaySwapChain@@UEAAXVDisplayId@@@Z @ 0x180254940
 * Callers:
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180254208 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CDDisplaySwapChain::SetDisplayId(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // rdx

  if ( *(_DWORD *)(a1 + 88) != a2 )
  {
    *(_DWORD *)(a1 + 88) = a2;
    v4 = 0;
    v5 = *(_QWORD *)(a1 + 440);
    result = (*(_QWORD *)(a1 + 448) - v5) >> 3;
    if ( result )
    {
      v7 = 0LL;
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * v7) + 216LL) + 16LL)
                                                + 152LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 8 * v7) + 216LL) + 16LL,
          a2);
        v5 = *(_QWORD *)(a1 + 440);
        v7 = ++v4;
        result = (*(_QWORD *)(a1 + 448) - v5) >> 3;
      }
      while ( v4 < result );
    }
  }
  return result;
}
