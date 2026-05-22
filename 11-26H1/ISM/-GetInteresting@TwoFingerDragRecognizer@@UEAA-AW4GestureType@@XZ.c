/*
 * XREFs of ?GetInteresting@TwoFingerDragRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801BB0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwoFingerDragRecognizer::GetInteresting(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ecx

  v1 = *(_WORD *)(a1 + 16);
  v2 = (v1 & 1) << 13;
  if ( (v1 & 4) != 0 )
    v2 |= 0x400u;
  return v2;
}
