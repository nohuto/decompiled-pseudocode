/*
 * XREFs of MiApplyLazyStampToAwePtes @ 0x1407056BC
 * Callers:
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     MiSetPteTimeStamp @ 0x140479E5C (MiSetPteTimeStamp.c)
 */

__int64 __fastcall MiApplyLazyStampToAwePtes(__int64 a1)
{
  __int64 v2; // r8
  _KPROCESS *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL
    && (CLFS_LSN_NULL_EXT & 1) != 0
    && ((CLFS_LSN_NULL_EXT & 0x20) == 0 || (CLFS_LSN_NULL_EXT & 0x42) == 0) )
  {
    v3 = MiPteHasShadow();
    if ( v3 )
    {
      KernelWaitTime = v3[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v6 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v12 >> 3) & 0x1FF));
        if ( (v6 & 0x20) != 0 )
          v4 |= 0x20uLL;
        v2 = v4 | 0x42;
        if ( (v6 & 0x42) == 0 )
          v2 = v4;
      }
    }
  }
  _InterlockedOr(v11, 0);
  v7 = MiSetPteTimeStamp(v2, KiTbFlushTimeStamp);
  v12[0] = v7;
  v9 = v7;
  if ( qword_140E2D8C0 && (v7 & 0x10) == 0 )
    v7 &= qword_140E2D8C8;
  if ( !(unsigned int)(v7 >> 31) )
    MiIssueFlushTbEntire((_KPROCESS *)2, (volatile _KAFFINITY_EX *)1, v8);
  *(_QWORD *)(a1 + 328) = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
  return MiWalkAllBitmapRanges((unsigned __int64 *)(a1 + 72), (__int64)MiApplyLazyStampToAwePteBits, a1);
}
