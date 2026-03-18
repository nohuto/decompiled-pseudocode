/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1403A9714
 * Callers:
 *     vDbgPrintExWithPrefix @ 0x1403A94F0 (vDbgPrintExWithPrefix.c)
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     IopDebugPrint @ 0x1405A2134 (IopDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x1405DB570 (DbgPrintReturnControlC.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     DifUtilDbgPrint @ 0x14060BBA0 (DifUtilDbgPrint.c)
 *     DifiDbgPrint @ 0x14060D7E4 (DifiDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403A97C0 (vDbgPrintExWithPrefixInternalHelper.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(int a1, int a2, int a3, int a4, va_list Args, char a6)
{
  unsigned int v6; // ebx
  char v7; // cf
  __int64 result; // rax

  v6 = 128;
  v7 = 1;
  do
  {
    result = vDbgPrintExWithPrefixInternalHelper(a1, a2, a3, a4, Args, a6, v6, v7);
    if ( (_DWORD)result != -2147483643 )
      break;
    if ( v6 >= 0x200 )
      break;
    v6 += 128;
    v7 = v6 < 0x200;
  }
  while ( v6 <= 0x200 );
  return result;
}
