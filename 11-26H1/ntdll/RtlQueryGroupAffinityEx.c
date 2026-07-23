/*
 * XREFs of RtlQueryGroupAffinityEx @ 0x18013FAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2)
{
  if ( a2 >= *a1 )
    return 0LL;
  else
    return *(_QWORD *)&a1[4 * a2 + 4];
}
