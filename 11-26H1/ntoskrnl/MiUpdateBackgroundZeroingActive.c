/*
 * XREFs of MiUpdateBackgroundZeroingActive @ 0x1405223B0
 * Callers:
 *     MiDecrementZeroEngineThread @ 0x1402F5CAC (MiDecrementZeroEngineThread.c)
 *     MiIncrementZeroEngineThread @ 0x1404FAFBC (MiIncrementZeroEngineThread.c)
 *     MiResumeBackgroundZeroing @ 0x140521D40 (MiResumeBackgroundZeroing.c)
 *     MiFindOptimalEngineToAddThread @ 0x14052203C (MiFindOptimalEngineToAddThread.c)
 * Callees:
 *     <none>
 */

char __fastcall MiUpdateBackgroundZeroingActive(__int64 a1)
{
  char result; // al
  _DWORD *v2; // r8
  __int64 i; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8

  result = 0;
  v2 = (_DWORD *)(a1 + 244);
  for ( i = 0LL; i < 3; ++i )
  {
    if ( *v2 )
    {
      result = 1;
      break;
    }
    v2 += 126;
  }
  v4 = 56320LL * *(unsigned int *)(a1 + 56);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  if ( *(_BYTE *)(v4 + v5 + 14216) != result )
    *(_BYTE *)(v4 + v5 + 14216) = result;
  return result;
}
