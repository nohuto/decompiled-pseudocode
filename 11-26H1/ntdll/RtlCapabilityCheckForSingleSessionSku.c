/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x1801105C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsMultiSessionSku @ 0x18000DFB0 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(void *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku((__int64)a1, a2, (__int64)a3, a4) )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
