/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x14039933C
 * Callers:
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x1404D3B00 (vDbgPrintExWithPrefix.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     IopDebugPrint @ 0x1405DC688 (IopDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x14061B030 (DbgPrintReturnControlC.c)
 *     DifUtilDbgPrint @ 0x14064E930 (DifUtilDbgPrint.c)
 *     DifiDbgPrint @ 0x1406503D0 (DifiDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403993F0 (vDbgPrintExWithPrefixInternalHelper.c)
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
