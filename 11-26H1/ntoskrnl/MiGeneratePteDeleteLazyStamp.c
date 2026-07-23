/*
 * XREFs of MiGeneratePteDeleteLazyStamp @ 0x140528EE4
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiSetPteTimeStamp @ 0x140479E5C (MiSetPteTimeStamp.c)
 */

unsigned __int64 MiGeneratePteDeleteLazyStamp()
{
  __int64 PteShadow; // rax
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  PteShadow = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v6[0] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)v6, *(__int64 *)&CLFS_LSN_NULL_EXT);
  _InterlockedOr(v5, 0);
  v1 = MiSetPteTimeStamp(PteShadow, KiTbFlushTimeStamp);
  v6[0] = v1;
  v3 = v1;
  if ( qword_140E2D8C0 && (v1 & 0x10) == 0 )
    v1 &= qword_140E2D8C8;
  if ( !(unsigned int)(v1 >> 31) )
  {
    MiIssueFlushTbEntire((_KPROCESS *)2, (volatile _KAFFINITY_EX *)1, v2);
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  return v3;
}
