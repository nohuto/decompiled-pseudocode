/*
 * XREFs of KiAccumulateProcessorCycleStats @ 0x14043FDB0
 * Callers:
 *     KiEndDebugAccumulation @ 0x1404FBE70 (KiEndDebugAccumulation.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAccumulateProcessorCycleStats(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  unsigned __int16 *v7; // r9
  char result; // al
  __int64 v9; // r8

  v3 = *(_QWORD *)(a1 + 35264);
  if ( v3 && (v4 = *(_QWORD *)(a1 + 35272)) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 148);
    if ( v5 == -1 )
    {
      v5 = *(_DWORD *)(v4 + 160);
    }
    else if ( v5 >= *(_DWORD *)(v3 + 536) )
    {
      v5 = *(_DWORD *)(v3 + 536);
    }
  }
  else
  {
    v5 = 100;
  }
  v6 = 0;
  v7 = (unsigned __int16 *)(a1 + 35468);
  do
  {
    if ( v5 <= *v7 )
      break;
    ++v6;
    ++v7;
  }
  while ( v6 < 3 );
  result = -*(_BYTE *)(a1 + 35352);
  v9 = (*(_BYTE *)(a1 + 35352) != 0 ? 8 : 0) + 16 * (v6 + 2168LL);
  *(_QWORD *)(v9 + a1) += a2;
  return result;
}
