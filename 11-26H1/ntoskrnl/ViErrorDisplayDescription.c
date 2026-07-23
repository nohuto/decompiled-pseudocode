/*
 * XREFs of ViErrorDisplayDescription @ 0x140C37AE8
 * Callers:
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140649300 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140649394 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140649438 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C28670 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140C366D0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C36800 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3797C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C37A14 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140C45EE0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C46090 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C461E0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
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
