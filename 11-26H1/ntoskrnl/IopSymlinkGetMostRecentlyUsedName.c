/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x1404AF6B0
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x1409041CC (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x140904710 (IopSymlinkRememberJunction.c)
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
