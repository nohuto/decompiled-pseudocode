/*
 * XREFs of PpmCheckSnapAllUtility @ 0x14041FA00
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     PpmPerfSnapUtility @ 0x14041FB20 (PpmPerfSnapUtility.c)
 *     PpmParkSnapNodeStatistics @ 0x14041FFA4 (PpmParkSnapNodeStatistics.c)
 */

__int64 PpmCheckSnapAllUtility()
{
  unsigned __int64 v0; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  PBOOLEAN j; // rbx
  __int64 v7; // rcx
  unsigned int k; // edi

  PpmParkSnapNodeStatistics();
  v0 = qword_140E0B638[0];
  for ( i = 0; ; v0 = qword_140E0B638[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
           + 64 * i
           + (unsigned __int8)v2);
      if ( (unsigned int)v3 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
        v4 = 0LL;
      else
        v4 = KiProcessorBlock[v3];
      PpmPerfSnapUtility(v4 + 35264);
    }
    result = ++i;
    if ( i >= (unsigned int)LOWORD(PpmCheckRegistered[0]) )
      break;
  }
  for ( j = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        j != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        j = *(PBOOLEAN *)j )
  {
    for ( k = 0; k < *((_DWORD *)j + 74); ++k )
    {
      v7 = 1224LL * k;
      result = *((_QWORD *)j + 39);
      if ( *(_DWORD *)(v7 + result + 16) == 1 )
        result = PpmPerfSnapUtility(*(_QWORD *)(v7 + result));
    }
  }
  return result;
}
