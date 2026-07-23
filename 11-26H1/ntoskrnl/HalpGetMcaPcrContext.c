/*
 * XREFs of HalpGetMcaPcrContext @ 0x14044BB84
 * Callers:
 *     HalpMcaStuckErrorCheck @ 0x14044B308 (HalpMcaStuckErrorCheck.c)
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x14044BC14 (HalpCmciPollProcessor.c)
 *     HalpCmciInitializeErrorPacket @ 0x14044CC58 (HalpCmciInitializeErrorPacket.c)
 *     HalpHvInitMcaPcrContext @ 0x140502EFC (HalpHvInitMcaPcrContext.c)
 *     HalpMceHandlerCore @ 0x14057D890 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140C11148 (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1, __int64 a2)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
}
