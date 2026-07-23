/*
 * XREFs of MmGetPhysicalAddressEx @ 0x1404A95C0
 * Callers:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiMirrorInSingleProcessorMode @ 0x1402A2284 (MiMirrorInSingleProcessorMode.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

__int64 __fastcall MmGetPhysicalAddressEx(const void *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v4 = 0;
  v9 = 0LL;
  v5 = 0LL;
  if ( (int)MiGetVirtualAddressState((__int64)&v8, (unsigned __int64)a1, 0) < 0 )
  {
    LOBYTE(v7) = MiMirrorInSingleProcessorMode();
    if ( !v7 )
      DbgPrintEx(0x66u, 0, "MM:MmGetPhysicalAddress failed base address was %p\n", a1);
    v4 = -1073741823;
  }
  else
  {
    v5 = v9;
  }
  result = v4;
  *a2 = v5;
  return result;
}
