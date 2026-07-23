/*
 * XREFs of MiCheckWriteInProgressFault @ 0x1406FC2EC
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiStandbyPageContentsIntact @ 0x140708D64 (MiStandbyPageContentsIntact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckWriteInProgressFault(__int64 a1)
{
  __int64 v1; // rax

  if ( (MiFlags & 0x80000) == 0 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 16) >> 5;
  if ( (v1 & 0x1F) != 0 )
    return 0LL;
  else
    return (v1 & 2) != 0 ? 0xC0000017 : 0;
}
