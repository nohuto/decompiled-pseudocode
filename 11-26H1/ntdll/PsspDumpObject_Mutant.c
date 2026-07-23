/*
 * XREFs of PsspDumpObject_Mutant @ 0x1800FFC70
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryMutant @ 0x180161A90 (ZwQueryMutant.c)
 */

NTSTATUS __fastcall PsspDumpObject_Mutant(
        HANDLE MutantHandle,
        char *MutantInformation,
        unsigned int a3,
        ULONG *ReturnLength)
{
  NTSTATUS result; // eax

  *ReturnLength = 0;
  if ( a3 < 0x18 )
    return -1073741789;
  result = ZwQueryMutant(MutantHandle, MutantBasicInformation, MutantInformation, 8u, ReturnLength);
  if ( result < 0
    || (result = ZwQueryMutant(MutantHandle, MutantOwnerInformation, MutantInformation + 8, 0x10u, 0LL), result < 0) )
  {
    *ReturnLength = 0;
  }
  else
  {
    *ReturnLength += 16;
  }
  return result;
}
