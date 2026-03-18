/*
 * XREFs of _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1402114BC
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x140211348 (W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 *     W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1402113F8 (W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMSetDeviceInputMode @ 0x1401BC3F0 (RIMSetDeviceInputMode.c)
 */

__int64 __fastcall lambda_015c32a42809731270cc377abf7a5008_::operator()(__int64 a1)
{
  unsigned int v2; // ebx

  RIMLockExclusive(*(_QWORD *)a1 + 104LL);
  RIMLockExclusive(*(_QWORD *)a1 + 760LL);
  v2 = RIMSetDeviceInputMode(*(struct RIMDEV **)(a1 + 8), *(_DWORD *)(a1 + 16));
  RIMUnlockExclusive(*(_QWORD *)a1 + 760LL);
  RIMUnlockExclusive(*(_QWORD *)a1 + 104LL);
  return v2;
}
