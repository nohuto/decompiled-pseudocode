/*
 * XREFs of MiGetMaximumRelocationVpn @ 0x140A7D960
 * Callers:
 *     MiCreateFileOnlyImageFixupExtents @ 0x140507310 (MiCreateFileOnlyImageFixupExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetMaximumRelocationVpn(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return *(unsigned int *)(a1 + 56);
  else
    return 0LL;
}
