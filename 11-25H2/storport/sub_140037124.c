/*
 * XREFs of sub_140037124 @ 0x140037124
 * Callers:
 *     StorPortSetDeviceQueueDepth @ 0x140029490 (StorPortSetDeviceQueueDepth.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140037124(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 20);
  if ( a2 )
  {
    if ( a2 <= a3 )
    {
      *(_DWORD *)(a1 + 20) = a2;
      return a2;
    }
  }
  return result;
}
