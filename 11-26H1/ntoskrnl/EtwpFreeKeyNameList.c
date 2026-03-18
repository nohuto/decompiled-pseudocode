/*
 * XREFs of EtwpFreeKeyNameList @ 0x14082DCAC
 * Callers:
 *     EtwpEnableKeyProviders @ 0x14082D8CC (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x14082DCE0 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403B8060 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  RTL_AVL_TABLE *i; // rbx
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
