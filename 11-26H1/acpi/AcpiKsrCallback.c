/*
 * XREFs of AcpiKsrCallback @ 0x1400B4D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( Argument1 )
  {
    if ( Argument1 == (PVOID)1 )
    {
      KsrFreePersistedMemory(&GUID_ACPI_KSR_CONTEXT, 0LL, Argument2);
      AcpiKsrInProgress = 0;
    }
  }
  else
  {
    v3 = 0LL;
    if ( (_DWORD)AcpiKsrContext != 1481917259 )
    {
      AcpiKsrContext = 0x15854434BuLL;
      *((_QWORD *)&AcpiKsrContext + 1) = *((_BYTE *)AcpiInformation + 84) & 1;
    }
    AcpiKsrUseFallback = (int)KsrPersistMetadata(&GUID_ACPI_KSR_CONTEXT, &AcpiKsrContext, 16LL, &v3) < 0;
    AcpiKsrInProgress = 1;
  }
}
