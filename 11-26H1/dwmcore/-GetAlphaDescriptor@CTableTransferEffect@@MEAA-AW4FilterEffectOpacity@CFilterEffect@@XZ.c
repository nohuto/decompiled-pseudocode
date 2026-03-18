/*
 * XREFs of ?GetAlphaDescriptor@CTableTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x180285120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTableTransferEffect::GetAlphaDescriptor(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 355) )
    return 2LL;
  result = 1LL;
  if ( *(_QWORD *)(a1 + 440) == *(_QWORD *)(a1 + 432) )
    return 2LL;
  return result;
}
