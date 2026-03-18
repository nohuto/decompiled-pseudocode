/*
 * XREFs of AcpiInitializeExternalResourceTranslation @ 0x1400A8D98
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiInitializeExternalResourceTranslation(struct _DRIVER_OBJECT *a1)
{
  __int64 result; // rax

  ExInitializeResourceLite(&ExternalTranslatorInterfaceLock);
  result = 0LL;
  ExternalTranslatorDriverObjectReference = a1;
  ExternalTranslationInterface = 0LL;
  return result;
}
