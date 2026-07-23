/*
 * XREFs of RtlUpdateGroupAffinityEx @ 0x18013FB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpdateGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 <= a2 )
  {
    if ( a1[1] <= a2 )
      return result;
    *a1 = a2 + 1;
  }
  result = a2;
  *(_QWORD *)&a1[4 * a2 + 4] = a3;
  return result;
}
