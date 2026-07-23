/*
 * XREFs of MiQueryPteLarge @ 0x1402B3610
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiQueryPteAddResidentAttributes @ 0x1404E2D34 (MiQueryPteAddResidentAttributes.c)
 */

__int64 __fastcall MiQueryPteLarge(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // r10
  unsigned __int64 v6; // r8
  int i; // r11d
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  int v10; // edx
  __int16 v11; // cx
  __int64 v12; // rcx

  v5 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v6 = a2;
  for ( i = -1; v6 >= 0xFFFFF68000000000uLL; v6 = (__int64)(v6 << 25) >> 16 )
  {
    if ( v6 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++i;
  }
  v8 = 1LL;
  v9 = *(_QWORD *)(a1 + 16) >> 12;
  v10 = 2;
  *(_DWORD *)(a1 + 36) = 2;
  if ( i )
  {
    do
    {
      v11 = v9;
      v9 >>= 9;
      v12 = v8 * (v11 & 0x1FF);
      v8 <<= 9;
      v5 += v12;
      --v10;
      --i;
    }
    while ( i );
    *(_DWORD *)(a1 + 36) = v10;
  }
  *(_QWORD *)(a1 + 8) |= 0x800001uLL;
  return MiQueryPteAddResidentAttributes(a3);
}
