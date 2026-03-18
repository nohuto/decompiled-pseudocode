/*
 * XREFs of RtlStringCchPrintfA @ 0x14001EFE8
 * Callers:
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     Endpoint_SetLogIdentifier @ 0x140025A48 (Endpoint_SetLogIdentifier.c)
 *     Controller_TelemetryReport @ 0x140042FC0 (Controller_TelemetryReport.c)
 *     Command_PrepareHardware @ 0x14007390C (Command_PrepareHardware.c)
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x140075EC0 (Controller_PopulateAcpiDeviceInformation.c)
 *     Controller_SetLogIdentifier @ 0x140077F94 (Controller_SetLogIdentifier.c)
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, va);
    if ( v6 < 0 || v6 > v4 )
    {
      pszDest[v4] = 0;
      return -2147483643;
    }
    else if ( v6 == v4 )
    {
      pszDest[v4] = 0;
    }
  }
  return v5;
}
