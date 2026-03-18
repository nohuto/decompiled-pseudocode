/*
 * XREFs of ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180180880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetUsedSamplersBitmask(CCommonRenderingEffect *this)
{
  __int64 result; // rax

  result = (*((_QWORD *)this + 3) != 0LL) | 2u;
  if ( !*((_QWORD *)this + 6) )
    return *((_QWORD *)this + 3) != 0LL;
  return result;
}
