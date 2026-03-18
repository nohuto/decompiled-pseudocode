/*
 * XREFs of UnlockQueue @ 0x1401A74E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeQueue @ 0x14010EDC4 (FreeQueue.c)
 */

void __fastcall UnlockQueue(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 416))-- == 1 && (*(_DWORD *)(a1 + 412) & 0x4000000) != 0 )
    FreeQueue((char *)a1, a2);
}
