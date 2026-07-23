/*
 * XREFs of RtlIsSingleGroupAffinityEx @ 0x1404B3438
 * Callers:
 *     KeIsSingleGroupAffinityEx @ 0x1404B3420 (KeIsSingleGroupAffinityEx.c)
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
  while ( 1 )
  {
    if ( v5 >= *a1 )
    {
      LOBYTE(v2) = *v3 != 32;
      return v2;
    }
    if ( *(_QWORD *)&a1[4 * v5 + 4] )
      break;
LABEL_6:
    ++v5;
  }
  if ( *v3 == 32 )
  {
    *v3 = v5;
    goto LABEL_6;
  }
  return 0LL;
}
