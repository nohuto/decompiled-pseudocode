/*
 * XREFs of KiHeteroReduceToMaximallyPreferredByClass @ 0x140455520
 * Callers:
 *     KiGetNextClockOwner @ 0x1405F0D04 (KiGetNextClockOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiHeteroReduceToMaximallyPreferredByClass(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  unsigned __int8 v11; // r8

  v4 = (unsigned __int64)a4 << 6;
  if ( (unsigned int)(a3 - 3) > 1 )
    v5 = *(_QWORD *)(a1 + 200) + v4;
  else
    v5 = *(_QWORD *)(a1 + 208) + v4;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  do
  {
    if ( ((1LL << v8) & a2) != 0 )
    {
      v11 = *(_BYTE *)(v9 + v5);
      if ( v11 == v7 )
      {
        v6 |= 1LL << v9;
      }
      else if ( v11 > v7 )
      {
        v7 = *(_BYTE *)(v9 + v5);
        v6 = 1LL << v8;
      }
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 0x40u );
  return v6;
}
