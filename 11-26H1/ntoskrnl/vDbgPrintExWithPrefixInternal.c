/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1403975BC
 * Callers:
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x1404DA420 (vDbgPrintExWithPrefix.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     IopDebugPrint @ 0x1405D9E88 (IopDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x140617FE0 (DbgPrintReturnControlC.c)
 *     DifUtilDbgPrint @ 0x14064AD50 (DifUtilDbgPrint.c)
 *     DifiDbgPrint @ 0x14064C7F0 (DifiDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140397670 (vDbgPrintExWithPrefixInternalHelper.c)
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
