/*
 * XREFs of ?GetBorderColor@CSwapChainRealization@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1802AD110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CSwapChainRealization::GetBorderColor(
        CSwapChainRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct _D3DCOLORVALUE *result; // rax

  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)this + 100);
  return result;
}
