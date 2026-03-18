/*
 * XREFs of ViErrorDisplayDescription @ 0x140C31AD8
 * Callers:
 *     ViErrorReport1 @ 0x14064569C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140645720 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406457B4 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140645858 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C22390 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C22660 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140C306C0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C307F0 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3196C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C31A04 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140C3FED0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C40080 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C401D0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViErrorDisplayDescription(int a1)
{
  __int64 result; // rax

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  for ( result = 0LL; (unsigned int)result < 0x3F; result = (unsigned int)(result + 1) )
  {
    if ( *((_DWORD *)&ViErrorDescriptions + 4 * (unsigned int)result) == a1 )
      return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * (unsigned int)result + 1));
  }
  return result;
}
