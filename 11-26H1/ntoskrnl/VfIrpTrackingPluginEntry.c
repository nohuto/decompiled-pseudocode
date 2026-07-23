/*
 * XREFs of VfIrpTrackingPluginEntry @ 0x1407260A0
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     ViSpIoAllocateIrp_Exit @ 0x140C26840 (ViSpIoAllocateIrp_Exit.c)
 *     VfIrpLogInit @ 0x140C416D4 (VfIrpLogInit.c)
 *     VfIsRuleClassEnabled @ 0x140C4C320 (VfIsRuleClassEnabled.c)
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
    ViSpIoAllocateIrp_Exit();
  }
  VfIrpTrackingInitialized = 1;
  return v0;
}
