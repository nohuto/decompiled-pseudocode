/*
 * XREFs of VfIrpTrackingPluginEntry @ 0x140698F10
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14060CC10 (DifRegisterPlugin.c)
 *     VfDdiInit @ 0x140B74394 (VfDdiInit.c)
 *     VfIrpLogInit @ 0x140B8B65C (VfIrpLogInit.c)
 *     VfIsRuleClassEnabled @ 0x140B97570 (VfIsRuleClassEnabled.c)
 */

__int64 VfIrpTrackingPluginEntry()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  if ( !(unsigned __int8)VfIsRuleClassEnabled(4LL) )
    return 3221225659LL;
  if ( !VfIrpTrackingInitialized )
  {
    result = DifRegisterPlugin(0LL, 0, 0xAu, 0LL);
    v0 = result;
    if ( (int)result < 0 )
      return result;
    VfIrpLogInit();
    VfDdiInit();
  }
  VfIrpTrackingInitialized = 1;
  return v0;
}
