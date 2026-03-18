/*
 * XREFs of EtwpIsValidImageAddress @ 0x140942A20
 * Callers:
 *     EtwpFindDebugId @ 0x1409427A8 (EtwpFindDebugId.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14040E4E0 (RtlSectionTableFromVirtualAddress.c)
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 */

bool __fastcall EtwpIsValidImageAddress(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // rdi
  bool result; // al
  _DWORD *v9; // rax

  v6 = a4 - a2;
  result = 0;
  if ( a4 >= a2 && a4 + a5 >= a4 && a4 + a5 <= a2 + a3 )
  {
    if ( !MmIsKernelAddress(a2) )
      return 1;
    v9 = (_DWORD *)RtlSectionTableFromVirtualAddress(a1, a2, v6);
    if ( v9 )
    {
      if ( v6 + a5 <= (unsigned int)(v9[3] + v9[4]) && (v9[9] & 0x2000000) == 0 )
        return 1;
    }
  }
  return result;
}
