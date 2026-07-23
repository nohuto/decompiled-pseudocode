/*
 * XREFs of HalpDisableCmciOnProcessor @ 0x140580BB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciSetProcessorConfig @ 0x14044BB50 (HalpCmciSetProcessorConfig.c)
 */

ULONG_PTR __fastcall HalpDisableCmciOnProcessor(ULONG_PTR Argument)
{
  __int64 i; // rbx
  _BYTE *v2; // rcx

  for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
  {
    v2 = HalpCmcErrorSource;
    *(_BYTE *)(i + 128) = 1;
    v2[48] = 0;
    HalpCmciSetProcessorConfig();
  }
  return 0LL;
}
