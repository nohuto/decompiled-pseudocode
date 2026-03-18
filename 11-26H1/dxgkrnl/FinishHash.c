/*
 * XREFs of FinishHash @ 0x14006D538
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x14028A618 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FinishHash(_DWORD *a1)
{
  __int64 result; // rax

  result = 32769 * ((9 * *a1) ^ ((unsigned int)(9 * *a1) >> 11));
  *a1 = result;
  return result;
}
