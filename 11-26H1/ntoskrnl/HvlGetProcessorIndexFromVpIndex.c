/*
 * XREFs of HvlGetProcessorIndexFromVpIndex @ 0x1405C2230
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall HvlGetProcessorIndexFromVpIndex(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  char v4; // di
  ULONG ActiveProcessorCount; // eax

  v1 = 0LL;
  if ( HvlpVirtualProcessorsIdentityMapped )
    return a1;
  v3 = a1 >> 6;
  v4 = a1 & 0x3F;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  while ( (unsigned int)v1 < ActiveProcessorCount )
  {
    if ( HvlpVirtualProcessorMapping[2 * v1] == (_BYTE)v3 && HvlpVirtualProcessorMapping[2 * v1 + 1] == v4 )
      return (unsigned int)v1;
    v1 = (unsigned int)(v1 + 1);
  }
  return 0LL;
}
