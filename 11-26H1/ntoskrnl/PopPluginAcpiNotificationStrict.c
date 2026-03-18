/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x140613F04
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140612000 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x1406121A4 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x140612304 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14061241C (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     PopPluginAcpiNotification @ 0x140613EE0 (PopPluginAcpiNotification.c)
 */

__int64 __fastcall PopPluginAcpiNotificationStrict(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = BugCheckParameter2;
  result = PopPluginAcpiNotification(BugCheckParameter3, BugCheckParameter2, BugCheckParameter4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x668uLL, v4, BugCheckParameter3, BugCheckParameter4);
  return result;
}
