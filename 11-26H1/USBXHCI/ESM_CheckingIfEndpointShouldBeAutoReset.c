/*
 * XREFs of ESM_CheckingIfEndpointShouldBeAutoReset @ 0x140034760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeAutoReset(__int64 a1)
{
  __int64 result; // rax

  result = 33LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 960) + 128LL) != 4 )
    return 21LL;
  return result;
}
