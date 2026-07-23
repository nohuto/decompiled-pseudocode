/*
 * XREFs of HalpGetFullPmuOwnership @ 0x14057CBC0
 * Callers:
 *     HalAllocateHardwareCounters @ 0x140783950 (HalAllocateHardwareCounters.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall HalpGetFullPmuOwnership(__int64 *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // rdx
  __int64 *v4; // r8
  __int64 v5; // rax

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(v3) = 0;
  if ( ActiveProcessorCount )
  {
    v4 = KiProcessorBlock;
    while ( !_InterlockedCompareExchange((volatile signed __int32 *)(*v4 + 96), 1, 0) )
    {
      LODWORD(v3) = v3 + 1;
      ++v4;
      if ( (unsigned int)v3 >= ActiveProcessorCount )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( (_DWORD)v3 == ActiveProcessorCount )
    {
      v5 = HalpFullPmuHandle + 1;
      HalpFullPmuHandle = v5;
      if ( v5 == 3221225472LL )
      {
        v5 = 0x80000000LL;
        HalpFullPmuHandle = 0x80000000LL;
      }
      *a1 = v5;
      return 0LL;
    }
  }
  while ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    _InterlockedDecrement((volatile signed __int32 *)(KiProcessorBlock[v3] + 96));
  }
  return 3221225626LL;
}
