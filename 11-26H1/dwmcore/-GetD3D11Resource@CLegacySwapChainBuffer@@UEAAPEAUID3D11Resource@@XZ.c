/*
 * XREFs of ?GetD3D11Resource@CLegacySwapChainBuffer@@UEAAPEAUID3D11Resource@@XZ @ 0x180196680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11Resource *__fastcall CLegacySwapChainBuffer::GetD3D11Resource(CLegacySwapChainBuffer *this)
{
  __int64 v1; // r9
  __int64 v2; // r10
  unsigned __int64 v3; // rcx

  v1 = *((_QWORD *)this + 24);
  v2 = *(_QWORD *)(v1 + 304);
  v3 = (unsigned int)(*(_DWORD *)(v1 + 496) + *((_DWORD *)this + 26) - *(_DWORD *)(v1 + 500)) % *(_DWORD *)(v1 + 496);
  if ( v3 >= (*(_QWORD *)(v1 + 312) - v2) >> 4 )
    return 0LL;
  else
    return *(struct ID3D11Resource **)(v2 + 16 * v3);
}
