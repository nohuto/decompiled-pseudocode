/*
 * XREFs of ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401F53EC
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x1401BDD74 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 */

bool DrvIsModeChangeHandledByDispBroker(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d

  Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck();
  return (unsigned int)DispBrokerGetCurrentMode(v1, v0, v2) == 3;
}
