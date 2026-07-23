/*
 * XREFs of KdpAllowDisable @ 0x140C1C37C
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x1405E6358 (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 */

__int64 KdpAllowDisable()
{
  ULONG ActiveProcessorCount; // eax
  __int64 i; // r8

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0LL; (unsigned int)i < ActiveProcessorCount; i = (unsigned int)(i + 1) )
  {
    if ( *(_BYTE *)(KiProcessorBlock[i] + 328) )
      return 3221225506LL;
  }
  return 0LL;
}
