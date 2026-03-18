/*
 * XREFs of ViIovPluginUnload @ 0x140698E60
 * Callers:
 *     <none>
 * Callees:
 *     IopUpdateFunctionPointers @ 0x140592FBC (IopUpdateFunctionPointers.c)
 *     IovUtilUninitialize @ 0x140B82D7C (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140B82F30 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140B94130 (VfIrpDatabaseUninitialize.c)
 */

__int64 ViIovPluginUnload()
{
  __int64 result; // rax

  LODWORD(VfRuleClasses) = VfRuleClasses | 0xFFFFFFEF;
  IopUpdateFunctionPointers(1, 0, 0);
  _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  IovUtilUninitialize();
  result = VfMajorInit();
  if ( !ViPacketCount )
    result = VfIrpDatabaseUninitialize();
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFFEF);
  return result;
}
