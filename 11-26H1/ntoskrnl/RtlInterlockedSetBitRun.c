/*
 * XREFs of RtlInterlockedSetBitRun @ 0x1404797F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInterlockedSetBitRun(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  ULONG v3; // r9d
  __int64 v4; // r11
  volatile signed __int32 *v5; // r10
  ULONG v6; // eax
  unsigned int v7; // eax
  unsigned __int64 v8; // rax

  v3 = NumberToSet;
  v4 = StartingIndex & 0x1F;
  v5 = (volatile signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5];
  if ( v4 + (unsigned __int64)NumberToSet <= 0x20 )
  {
    if ( NumberToSet == 32 )
    {
      *v5 = -1;
      return;
    }
    v7 = ((1 << NumberToSet) - 1) << v4;
    goto LABEL_7;
  }
  v6 = StartingIndex & 0x1F;
  if ( (StartingIndex & 0x1F) != 0 )
  {
    _InterlockedOr(v5, ((1 << (32 - v6)) - 1) << v4);
    v3 = NumberToSet - (32 - v6);
    ++v5;
  }
  if ( v3 >= 0x20 )
  {
    v8 = (unsigned __int64)v3 >> 5;
    do
    {
      *v5 = -1;
      v3 -= 32;
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  if ( v3 )
  {
    v7 = (1 << v3) - 1;
LABEL_7:
    _InterlockedOr(v5, v7);
  }
}
