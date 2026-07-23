/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x1404A8D40
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x14093415C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x14093469C (IopSymlinkRememberJunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetMostRecentlyUsedName(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}
