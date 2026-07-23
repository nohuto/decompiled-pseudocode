/*
 * XREFs of RtlIsSingleGroupAffinityEx @ 0x18013F900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsSingleGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r8d
  unsigned __int16 *v3; // r9
  unsigned __int16 v5; // cx
  __int16 v7; // [rsp+0h] [rbp-18h] BYREF

  v2 = 0;
  v3 = (unsigned __int16 *)&v7;
  v7 = 0;
  v5 = 0;
  if ( a2 )
    v3 = a2;
  *v3 = 32;
  while ( v5 < *a1 )
  {
    if ( *(_QWORD *)&a1[4 * v5 + 4] )
    {
      if ( *v3 != 32 )
        return 0LL;
      *v3 = v5;
    }
    ++v5;
  }
  LOBYTE(v2) = *v3 != 32;
  return v2;
}
