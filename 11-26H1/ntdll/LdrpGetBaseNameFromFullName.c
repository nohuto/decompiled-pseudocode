/*
 * XREFs of LdrpGetBaseNameFromFullName @ 0x1800983E0
 * Callers:
 *     LdrpResolvePatchDllName @ 0x1800982BC (LdrpResolvePatchDllName.c)
 *     LdrpAddRedirectedFunction @ 0x18015DDB0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall LdrpGetBaseNameFromFullName(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 v7; // rdx
  __int16 result; // ax

  v3 = *(_WORD *)a1 >> 1;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    do
    {
      v6 = *(_WORD *)(v5 + 2LL * v3 - 2);
      if ( v6 == 92 )
        break;
      if ( v6 == 47 )
        break;
      --v3;
    }
    while ( v3 );
  }
  v7 = v3;
  result = 2 * v3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8) + 2 * v7;
  *(_WORD *)a2 = *(_WORD *)a1 - result;
  *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 2) - result;
  return result;
}
