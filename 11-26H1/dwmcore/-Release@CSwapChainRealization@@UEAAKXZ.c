/*
 * XREFs of ?Release@CSwapChainRealization@@UEAAKXZ @ 0x1802AE190
 * Callers:
 *     ?Release@CSwapChainRealization@@W7EAAKXZ @ 0x1802AE220 (-Release@CSwapChainRealization@@W7EAAKXZ.c)
 *     ?Release@CSwapChainRealization@@WBA@EAAKXZ @ 0x1802AE230 (-Release@CSwapChainRealization@@WBA@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800E2EC0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::Release(CSwapChainRealization *this)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CSwapChainRealization *)((char *)this + 24);
  v3 = CMILRefCountImpl::RemoveReference((CSwapChainRealization *)((char *)this + 24));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(CSwapChainRealization *))(*(_QWORD *)this + 264LL))(this);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(CSwapChainRealization *, __int64))(*(_QWORD *)this + 256LL))(this, 1LL);
    }
  }
  return v3;
}
