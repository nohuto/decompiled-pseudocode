/*
 * XREFs of MiGetZeroingCandidateCount @ 0x140481224
 * Callers:
 *     MiPeriodicZeroingNeeded @ 0x1402A58F4 (MiPeriodicZeroingNeeded.c)
 *     MiImmediateZeroingNeeded @ 0x1402C09EC (MiImmediateZeroingNeeded.c)
 *     MiPeriodicZeroingSufficient @ 0x1404811D8 (MiPeriodicZeroingSufficient.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetZeroingCandidateCount(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 *v5; // rcx
  __int64 *v6; // r11
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int8 i; // dl
  __int64 v16; // rax

  v3 = a2;
  v4 = 0LL;
  v5 = MiPageSizes;
  v6 = (__int64 *)(a1 + 8 + 8LL * a2);
  v7 = 4LL;
  do
  {
    v8 = *v5++;
    v9 = *v6;
    v6 += 128;
    v4 += v9 * v8;
    --v7;
  }
  while ( v7 );
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 13896) + 17048LL);
  if ( v10 )
  {
    v10 = 0LL;
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; v10 += *(_QWORD *)(a1 + 8 * (2 * v3 + v16) + 13912) )
      v16 = i++;
  }
  v11 = (v10 << 18) + v4;
  if ( (_DWORD)v3 == 1 )
  {
    v12 = *(_QWORD *)(a1 + 14192);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 80);
      if ( v11 < v13 )
        return 0LL;
      else
        v11 -= v13;
    }
  }
  return v11;
}
