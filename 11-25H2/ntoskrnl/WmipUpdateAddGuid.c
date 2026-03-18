/*
 * XREFs of WmipUpdateAddGuid @ 0x140796A10
 * Callers:
 *     WmipUpdateModifyGuid @ 0x140796AE8 (WmipUpdateModifyGuid.c)
 * Callees:
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     WmipLinkDataSourceToList @ 0x1409B73D4 (WmipLinkDataSourceToList.c)
 *     WmipAllocEntry @ 0x1409B7D54 (WmipAllocEntry.c)
 *     WmipBuildInstanceSet @ 0x1409B7DA8 (WmipBuildInstanceSet.c)
 */

_BOOL8 __fastcall WmipUpdateAddGuid(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  _BOOL8 result; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v9 = WmipAllocEntry(&WmipISChunkInfo);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_DWORD *)(v9 + 16) |= 8u;
  v12 = (_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 56) = a2;
  *(_QWORD *)(v9 + 64) = a1;
  v13 = (_QWORD *)(a1 + 40);
  v14 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v14 + 8) != a1 + 40 )
    __fastfail(3u);
  *v12 = v14;
  v12[1] = v13;
  *(_QWORD *)(v14 + 8) = v12;
  *v13 = v12;
  if ( (int)WmipBuildInstanceSet(a2, a3, a4, v10, *(_DWORD *)(a1 + 56)) < 0 )
  {
    WmipUnreferenceEntry(&WmipISChunkInfo, v10);
    return 0LL;
  }
  result = (int)WmipLinkDataSourceToList(a1, 0LL, 0LL) >= 0;
  *a5 = v10;
  return result;
}
