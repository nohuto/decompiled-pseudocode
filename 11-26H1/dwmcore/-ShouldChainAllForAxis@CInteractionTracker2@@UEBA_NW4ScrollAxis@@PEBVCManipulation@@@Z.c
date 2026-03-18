/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker2@@UEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801C5F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker2::ShouldChainAllForAxis(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  char v6; // r9

  if ( !a2 )
  {
    v6 = BYTE4(*(_QWORD *)(a3 + 448));
    return (v6 & 1) == 0;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = (unsigned __int8)BYTE4(*(_QWORD *)(a3 + 448)) >> 1;
    return (v6 & 1) == 0;
  }
  return v3 == 1;
}
