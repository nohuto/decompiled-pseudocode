/*
 * XREFs of EtwpFreeKeyNameList @ 0x140833EEC
 * Callers:
 *     EtwpEnableKeyProviders @ 0x140833B0C (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x140833F20 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  _RTL_AVL_TABLE *i; // rbx
  PVOID result; // rax

  for ( i = Table; ; Table = i )
  {
    result = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !result )
      break;
    RtlDeleteElementGenericTableAvl(i, result);
  }
  return result;
}
