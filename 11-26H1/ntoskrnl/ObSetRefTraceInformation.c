/*
 * XREFs of ObSetRefTraceInformation @ 0x1407C7574
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ObpStartRuntimeStackTrace @ 0x1407C8248 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C85E8 (ObpStopRuntimeStackTrace.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ObSetRefTraceInformation(void *Src, unsigned int a2)
{
  _OWORD v5[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h]

  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225506LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  if ( KeGetCurrentThread()->PreviousMode )
    RtlCopyFromUser(v5, Src, 0x28uLL);
  else
    RtlCopyVolatileMemory(v5, Src, 0x28uLL);
  if ( LOBYTE(v5[0]) )
    return ObpStartRuntimeStackTrace(v5);
  else
    return ObpStopRuntimeStackTrace();
}
