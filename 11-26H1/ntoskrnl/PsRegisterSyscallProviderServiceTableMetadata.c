/*
 * XREFs of PsRegisterSyscallProviderServiceTableMetadata @ 0x140B4803C
 * Callers:
 *     KeAddSystemServiceTable @ 0x140B47ED0 (KeAddSystemServiceTable.c)
 *     PsInitializeSyscallProviders @ 0x140CD7910 (PsInitializeSyscallProviders.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x1407929DC (VslRegisterSyscallProviderServiceTableMetadata.c)
 */

__int64 __fastcall PsRegisterSyscallProviderServiceTableMetadata(unsigned int a1)
{
  __int64 v3; // rdi

  if ( !PspSyscallProvidersEnabled )
    return 3221225629LL;
  v3 = 32LL * a1;
  if ( !*(struct _KTHREAD **)((char *)&stru_140FC01F0.WaitBlock[3].Thread + v3) )
    return 3221225659LL;
  if ( a1 == 1 && (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1 )
    return 3221226581LL;
  return VslRegisterSyscallProviderServiceTableMetadata(
           a1,
           *(_DWORD *)&stru_140FC01F0.WaitBlockFill11[v3 + 160],
           *(struct _MDL **)((char *)&stru_140FC01F0.WaitBlock[3].Thread + v3));
}
