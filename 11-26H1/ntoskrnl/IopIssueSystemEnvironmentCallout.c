/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14079D9C0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
