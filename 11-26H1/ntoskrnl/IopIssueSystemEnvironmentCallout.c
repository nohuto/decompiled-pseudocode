/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14079AE80
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
