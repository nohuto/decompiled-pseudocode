/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1400D37BC
 * Callers:
 *     ACPIBuildFilter @ 0x140044FD0 (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 784) + 48LL) & 0x2000000) != 0;
}
