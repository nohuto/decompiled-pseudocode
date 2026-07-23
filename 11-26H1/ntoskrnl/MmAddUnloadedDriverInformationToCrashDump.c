/*
 * XREFs of MmAddUnloadedDriverInformationToCrashDump @ 0x1406FB510
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddUnloadedDriverInformationToCrashDump(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  unsigned int v4; // edi
  unsigned int i; // ebx
  unsigned __int64 v6; // rdx

  if ( !MmUnloadedDrivers )
    return 0LL;
  result = MiAddRangeToCrashDump(a1, (unsigned __int64)MmUnloadedDrivers, 2000LL, 0);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = MmLastUnloadedDriver;
    for ( i = 0; i < v4; ++i )
    {
      v6 = *((_QWORD *)MmUnloadedDrivers + 5 * (v4 - i) - 4);
      if ( !v6 )
        break;
      v3 = MiAddRangeToCrashDump(a1, v6, *((unsigned __int16 *)MmUnloadedDrivers + 20 * (v4 - i) - 19), 0);
      if ( v3 < 0 )
        break;
    }
    return (unsigned int)v3;
  }
  return result;
}
