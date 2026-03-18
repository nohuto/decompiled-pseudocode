/*
 * XREFs of MiConfirmPageIsZero @ 0x14031A160
 * Callers:
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  _QWORD *v3; // r9
  _QWORD *v4; // rcx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  v1 = (__int64)((unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v2 = MiMapPageInHyperSpaceWorker((v1 >> 63) + v1, 0LL, 0x80000000);
  v3 = (_QWORD *)v2;
  v4 = (_QWORD *)(v2 + 4088);
  do
  {
    if ( *v3 | *v4 )
      break;
    ++v3;
    --v4;
  }
  while ( v3 <= v4 );
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return v3 > v4;
}
