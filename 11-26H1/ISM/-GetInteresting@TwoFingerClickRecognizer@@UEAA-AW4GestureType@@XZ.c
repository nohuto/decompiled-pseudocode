/*
 * XREFs of ?GetInteresting@TwoFingerClickRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801BB590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TwoFingerClickRecognizer::GetInteresting(__int64 a1)
{
  __int16 v1; // dx
  int result; // eax

  v1 = *(_WORD *)(a1 + 16);
  result = (v1 & 8) << 7;
  if ( (v1 & 1) != 0 )
    result |= 0x800u;
  if ( (v1 & 2) != 0 )
    return result | 0x1000;
  return result;
}
