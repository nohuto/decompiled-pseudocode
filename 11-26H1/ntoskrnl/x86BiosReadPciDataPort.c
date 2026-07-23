/*
 * XREFs of x86BiosReadPciDataPort @ 0x1404A257C
 * Callers:
 *     x86BiosReadIoSpace @ 0x1404A2320 (x86BiosReadIoSpace.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall x86BiosReadPciDataPort(int a1, unsigned __int16 a2)
{
  char v2; // bl

  v2 = a1;
  if ( a2 + a1 > 3 )
    v2 = 3 - a2;
  if ( (unsigned int)guard_dispatch_icall_no_overrides(
                       BYTE2(XmPCIConfigAddress),
                       (XmPCIConfigAddress & 0x700 | ((unsigned int)XmPCIConfigAddress >> 8) & 0xF8) >> 3) )
    return 0LL;
  else
    return (unsigned int)((1 << (8 * v2 + 8)) - 1);
}
