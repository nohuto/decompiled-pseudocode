/*
 * XREFs of ?GetDXGIResource@CLegacySwapChainBuffer@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1801B34A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDXGIResource *__fastcall CLegacySwapChainBuffer::GetDXGIResource(
        CLegacySwapChainBuffer *this,
        unsigned int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // rcx

  v2 = 0LL;
  if ( a2 )
    *a2 = 0;
  v3 = *((_QWORD *)this + 24);
  v4 = *(_QWORD *)(v3 + 304);
  v5 = (unsigned int)(*(_DWORD *)(v3 + 496) + *((_DWORD *)this + 26) - *(_DWORD *)(v3 + 500)) % *(_DWORD *)(v3 + 496);
  if ( v5 < (*(_QWORD *)(v3 + 312) - v4) >> 4 )
    return *(struct IDXGIResource **)(v4 + 16 * v5 + 8);
  return (struct IDXGIResource *)v2;
}
