/*
 * XREFs of CmpRebuildKcbCache @ 0x1408C31A8
 * Callers:
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpCommitDiscardReplacePost @ 0x140A41418 (CmpCommitDiscardReplacePost.c)
 *     CmpSyncKcbCacheForHive @ 0x140B47A70 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rcx
  unsigned int v3; // edx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v7 = -1;
  v8 = 0;
  if ( (*(_DWORD *)(BugCheckParameter3 + 8) & 0x10) != 0 || (*(_DWORD *)(BugCheckParameter3 + 184) & 0x400000) != 0 )
    return 1;
  v2 = *(_QWORD *)(BugCheckParameter3 + 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(BugCheckParameter3 + 40);
    if ( v3 != -1 )
    {
      if ( (*(_BYTE *)(v2 + 140) & 1) != 0 ? HvpGetCellFlat(v2, v3, &v7) : HvpGetCellPaged(v2) )
      {
        ++*(_QWORD *)(BugCheckParameter3 + 304);
        CmpRebuildKcbCacheFromNode(BugCheckParameter3);
        v5 = *(_QWORD *)(BugCheckParameter3 + 32);
        if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v5, &v7);
        else
          HvpReleaseCellPaged(v5, &v7);
        return 1;
      }
    }
  }
  return 0;
}
