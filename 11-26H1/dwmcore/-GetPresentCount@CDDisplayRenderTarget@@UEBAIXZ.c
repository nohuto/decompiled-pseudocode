/*
 * XREFs of ?GetPresentCount@CDDisplayRenderTarget@@UEBAIXZ @ 0x180247890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetPresentCount(CDDisplayRenderTarget *this)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 7);
  if ( result )
    return *(unsigned int *)(result + 528);
  return result;
}
