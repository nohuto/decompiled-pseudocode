/*
 * XREFs of ?MarkInactive@CCompositionSwapchainBuffer@@UEAA_NXZ @ 0x140061F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSwapchainBuffer::MarkInactive(CCompositionSwapchainBuffer *this)
{
  bool result; // al

  result = *((_BYTE *)this + 40);
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 89) = 0LL;
  return result;
}
