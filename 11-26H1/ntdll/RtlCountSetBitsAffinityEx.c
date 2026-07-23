/*
 * XREFs of RtlCountSetBitsAffinityEx @ 0x18013F7A0
 * Callers:
 *     RtlIsMultipleProcessorAffinityEx @ 0x18013F8E0 (RtlIsMultipleProcessorAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCountSetBitsAffinityEx(_WORD *a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  unsigned __int64 *v3; // rdx

  result = 0LL;
  if ( *a1 )
  {
    v2 = (unsigned __int16)*a1;
    v3 = (unsigned __int64 *)(a1 + 4);
    do
    {
      result = (unsigned int)__popcnt(*v3++) + (unsigned int)result;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
