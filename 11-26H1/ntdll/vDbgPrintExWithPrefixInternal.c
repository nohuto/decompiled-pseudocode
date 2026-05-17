/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1800DE698
 * Callers:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     LdrpLogDbgPrint @ 0x18011F07C (LdrpLogDbgPrint.c)
 *     DbgPrintReturnControlC @ 0x18013B990 (DbgPrintReturnControlC.c)
 *     vDbgPrintEx @ 0x18013BA50 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x18013BA80 (vDbgPrintExWithPrefix.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DE744 (vDbgPrintExWithPrefixInternalHelper.c)
 */

__int64 vDbgPrintExWithPrefixInternal(int a1, int a2, int a3, int a4, __int64 a5, char a6, ...)
{
  unsigned int v6; // ebx
  bool v7; // cf
  __int64 result; // rax
  __int64 v13; // [rsp+38h] [rbp-20h]

  v6 = 128;
  v7 = 1;
  do
  {
    LOBYTE(v13) = v7;
    result = vDbgPrintExWithPrefixInternalHelper(a1, a2, a3, a4, a5, a6, v6, v13);
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
