/*
 * XREFs of ?GetPhysicalFrontBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x1801AF250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CDDisplaySwapChain::GetPhysicalFrontBuffer(CDDisplaySwapChain *this)
{
  __int64 v1; // r9

  v1 = *((_QWORD *)this + 55);
  if ( (unsigned int)(*((_DWORD *)this + 122) + *((_DWORD *)this + 125) - 1) % *((_DWORD *)this + 122) >= (unsigned __int64)((*((_QWORD *)this + 56) - v1) >> 3) )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v1
                                       + 8LL
                                       * ((unsigned int)(*((_DWORD *)this + 122) + *((_DWORD *)this + 125) - 1)
                                        % *((_DWORD *)this + 122)));
}
