/*
 * XREFs of ViErrorDisplayDescription @ 0x140B8364C
 * Callers:
 *     ViErrorReport1 @ 0x1406065B4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140606638 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406066CC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140606770 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B74290 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B8237C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B834E0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B83578 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140B910D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140B91280 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140B913D0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
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
