/*
 * XREFs of RtlValidateUnicodeString @ 0x1800C8E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlValidateUnicodeString(int a1, unsigned __int16 *a2)
{
  unsigned int v2; // r8d
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // ax

  if ( a1 )
    return 3221225485LL;
  v2 = 0;
  if ( a2 )
  {
    v3 = *a2;
    if ( (*a2 & 1) != 0 )
      return (unsigned int)-1073741811;
    v4 = a2[1];
    if ( (v4 & 1) != 0 || v3 > v4 || v4 == 0xFFFF || !*((_QWORD *)a2 + 1) && (v3 || v4) )
      return (unsigned int)-1073741811;
  }
  return v2;
}
