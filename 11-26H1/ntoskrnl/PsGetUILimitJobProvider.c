/*
 * XREFs of PsGetUILimitJobProvider @ 0x1407FD430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetUILimitJobProvider(__int64 a1, int a2)
{
  __int64 i; // r8

  for ( i = *(_QWORD *)(a1 + 672); ; i = *(_QWORD *)(i + 1304) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 1552) & 0x10) != 0 && (*(_DWORD *)(i + 544) & a2) != 0 )
      break;
  }
  return *(unsigned int *)(i + 1468);
}
