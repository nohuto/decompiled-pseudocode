/*
 * XREFs of MiPrepareDecayNodeForReuse @ 0x14045A694
 * Callers:
 *     MiCreateDecayPfn @ 0x14045A320 (MiCreateDecayPfn.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 */

__int64 __fastcall MiPrepareDecayNodeForReuse(__int64 a1)
{
  ULONG_PTR v2; // r9
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  signed __int64 v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rdx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL | ((a1 & 0xFFFFFFFFFFLL) << 12);
  v4 = v3 | 0x880;
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & v4) != 0 )
      v4 = v3 | 0x890;
    else
      v4 = qword_140E2D8C0 | v3 | 0x880;
  }
  *(_QWORD *)(v2 + 16) = v4;
  v5 = *(_QWORD *)(v2 + 40);
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 40), a1 ^ (a1 ^ v5) & 0xFFFFFF0000000000uLL, v5);
  if ( v5 != v6 )
  {
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(v2 + 40),
             a1 ^ (a1 ^ v6) & 0xFFFFFF0000000000uLL,
             v6);
    }
    while ( v7 != v6 );
  }
  return MiUnlinkPageFromListEx(v2, 0);
}
