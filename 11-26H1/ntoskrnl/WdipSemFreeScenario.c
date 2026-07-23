/*
 * XREFs of WdipSemFreeScenario @ 0x14082703C
 * Callers:
 *     WdipSemAddScenarioToTable @ 0x140825640 (WdipSemAddScenarioToTable.c)
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140AD7F00 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemFreeScenario(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 result; // rax

  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(a1 + 8 * i + 56);
      if ( v3 )
      {
        WdipSemFastFree(0LL, v3);
        *(_QWORD *)(a1 + 8 * i + 56) = 0LL;
      }
    }
    v4 = 0LL;
    for ( *(_DWORD *)(a1 + 48) = 0; (unsigned int)v4 < *(_DWORD *)(a1 + 52); v4 = (unsigned int)(v4 + 1) )
    {
      v5 = *(_QWORD *)(a1 + 8 * v4 + 1048);
      if ( v5 )
      {
        WdipSemFastFree(0LL, v5);
        *(_QWORD *)(a1 + 8 * v4 + 1048) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 52) = 0;
    return WdipSemFastFree(1LL, a1);
  }
  return result;
}
