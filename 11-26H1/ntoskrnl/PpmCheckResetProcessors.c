/*
 * XREFs of PpmCheckResetProcessors @ 0x1404FB714
 * Callers:
 *     PpmCheckArmPeriod @ 0x1404DF800 (PpmCheckArmPeriod.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     PpmResetPerfTimes @ 0x1404CB840 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckResetProcessors(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // rcx
  PBOOLEAN i; // rdi
  unsigned int j; // esi
  __int64 v7; // rcx

  v1 = 0;
  if ( a1 )
  {
    result = PopExecuteOnTargetProcessors(a1 + 24, (__int64)PpmCheckReset, 0LL, 0LL);
    if ( *(_DWORD *)(a1 + 296) )
    {
      do
      {
        v4 = 1224LL * v1;
        result = *(_QWORD *)(a1 + 312);
        if ( *(_DWORD *)(v4 + result + 16) == 1 )
          result = PpmResetPerfTimes(*(_QWORD *)(v4 + result));
        ++v1;
      }
      while ( v1 < *(_DWORD *)(a1 + 296) );
    }
  }
  else
  {
    result = PopExecuteOnTargetProcessors((__int64)&PpmCheckRegistered, (__int64)PpmCheckReset, 0LL, 0LL);
    for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
          i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
          i = *(PBOOLEAN *)i )
    {
      for ( j = 0; j < *((_DWORD *)i + 74); ++j )
      {
        v7 = 1224LL * j;
        result = *((_QWORD *)i + 39);
        if ( *(_DWORD *)(v7 + result + 16) == 1 )
          result = PpmResetPerfTimes(*(_QWORD *)(v7 + result));
      }
    }
  }
  return result;
}
