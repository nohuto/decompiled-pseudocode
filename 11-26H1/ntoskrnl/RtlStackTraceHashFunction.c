/*
 * XREFs of RtlStackTraceHashFunction @ 0x140441010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStackTraceHashFunction(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned int v5; // ecx
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // r9

  result = 0LL;
  v3 = 4LL * a1;
  v5 = 0;
  if ( v3 )
  {
    v6 = 0LL;
    do
    {
      v7 = v5 + 1;
      v5 += 2;
      v8 = *(unsigned __int16 *)(a2 + 2 * v6) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 2 * v7);
      v6 = v5;
      result += v8;
    }
    while ( v5 < v3 );
  }
  return result;
}
