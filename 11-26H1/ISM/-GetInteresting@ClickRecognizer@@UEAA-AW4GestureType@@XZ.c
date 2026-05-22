/*
 * XREFs of ?GetInteresting@ClickRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801B96E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ClickRecognizer::GetInteresting(__int64 a1)
{
  unsigned __int16 v1; // dx
  int result; // eax

  v1 = *(_WORD *)(a1 + 16);
  result = (v1 >> 2) & 2;
  if ( (v1 & 4) != 0 )
    result |= 1u;
  if ( (v1 & 0x10) != 0 || (v1 & 0x20) != 0 )
    result |= 4u;
  if ( (v1 & 0x40) != 0 )
    result |= 8u;
  if ( (v1 & 0x100) != 0 )
    return result | 0x200;
  return result;
}
