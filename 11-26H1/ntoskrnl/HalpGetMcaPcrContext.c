/*
 * XREFs of HalpGetMcaPcrContext @ 0x140453A54
 * Callers:
 *     HalpMcaStuckErrorCheck @ 0x1404531D8 (HalpMcaStuckErrorCheck.c)
 *     HalpCmciInitProcessor @ 0x140453268 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x140453AE4 (HalpCmciPollProcessor.c)
 *     HalpCmciInitializeErrorPacket @ 0x140454B28 (HalpCmciInitializeErrorPacket.c)
 *     HalpHvInitMcaPcrContext @ 0x14050944C (HalpHvInitMcaPcrContext.c)
 *     HalpMceHandlerCore @ 0x14057B360 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140C0AF38 (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1, __int64 a2)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
}
