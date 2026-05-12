/*
 * XREFs of StorpGetCurrentProcessorIndex @ 0x1400429B4
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetCurrentProcessorIndex(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  int LockArray_high; // ecx

  v2 = 0;
  result = 3238002694LL;
  if ( a2 )
  {
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    *a2 = LockArray_high;
    if ( LockArray_high == -1 )
      return (unsigned int)-1056964602;
    return v2;
  }
  return result;
}
