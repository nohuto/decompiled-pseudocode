/*
 * XREFs of EngSecureMem @ 0x1401F07D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x140163ED0 (-GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z.c)
 */

HANDLE __stdcall EngSecureMem(PVOID Address, ULONG cjLength)
{
  return GrepSecureVirtualMemory(Address, cjLength, 4u);
}
