/*
 * XREFs of ?GetDXGIResource@CSwapChainRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1802AD440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDXGIResource *__fastcall CSwapChainRealization::GetDXGIResource(CSwapChainRealization *this, unsigned int *a2)
{
  struct IDXGIResource *result; // rax

  result = (struct IDXGIResource *)*((_QWORD *)this + 31);
  if ( result )
  {
    if ( a2 )
      *a2 = HIDWORD(result[23].lpVtbl);
    return *(struct IDXGIResource **)(*((_QWORD *)this + 31) + 208LL);
  }
  return result;
}
