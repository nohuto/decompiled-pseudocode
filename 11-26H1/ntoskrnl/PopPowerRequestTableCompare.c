/*
 * XREFs of PopPowerRequestTableCompare @ 0x140ACE0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerRequestTableCompare(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // r8d

  v3 = *(_DWORD *)(a3 + 8);
  result = 0LL;
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= v3 )
  {
    LOBYTE(result) = v5 <= v3;
    return (unsigned int)(result + 1);
  }
  return result;
}
