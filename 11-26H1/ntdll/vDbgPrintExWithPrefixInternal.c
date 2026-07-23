/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1800DB608
 * Callers:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     LdrpLogDbgPrint @ 0x18011EE2C (LdrpLogDbgPrint.c)
 *     DbgPrintReturnControlC @ 0x18013B850 (DbgPrintReturnControlC.c)
 *     vDbgPrintEx @ 0x18013B910 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x18013B940 (vDbgPrintExWithPrefix.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DB6B4 (vDbgPrintExWithPrefixInternalHelper.c)
 */

__int64 vDbgPrintExWithPrefixInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        ...)
{
  unsigned int v6; // ebx
  bool v7; // cf
  __int64 result; // rax
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v6 = 128;
  v7 = 1;
  do
  {
    LOBYTE(v14) = v7;
    LOBYTE(v13) = a6;
    result = vDbgPrintExWithPrefixInternalHelper(a1, a2, a3, a4, a5, v13, v6, v14, v15);
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
