/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker@@UEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801BBA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldChainAllForAxis(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  char v4; // r9

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
      return v3 == 1;
    v4 = (unsigned __int8)BYTE4(*(_QWORD *)(a3 + 448)) >> 1;
  }
  else
  {
    v4 = BYTE4(*(_QWORD *)(a3 + 448));
  }
  return (v4 & 1) == 0;
}
