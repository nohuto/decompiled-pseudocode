/*
 * XREFs of MiFlushTbNowToAvoidOverflow @ 0x1402A3668
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     MiTbFlushListPromoteThreshold @ 0x1402A4C50 (MiTbFlushListPromoteThreshold.c)
 */

_BOOL8 __fastcall MiFlushTbNowToAvoidOverflow(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 28) == *(_DWORD *)(a1 + 12) )
    return 1LL;
  v1 = MiTbFlushListPromoteThreshold();
  return *(_QWORD *)(v2 + 32) + 1LL >= v1;
}
