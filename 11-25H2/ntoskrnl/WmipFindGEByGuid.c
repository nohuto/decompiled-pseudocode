/*
 * XREFs of WmipFindGEByGuid @ 0x1409B5550
 * Callers:
 *     WmipIncludeStaticNames @ 0x1409B318C (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x1409B3480 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B364C (WmipEnableCollectionForNewGuid.c)
 *     WmipOpenBlock @ 0x1409B4F70 (WmipOpenBlock.c)
 *     WmipLinkDataSourceToList @ 0x1409B73D4 (WmipLinkDataSourceToList.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B7738 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipMangleInstanceName @ 0x1409B80C0 (WmipMangleInstanceName.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409B86FC (WmipDetermineInstanceBaseIndex.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x1409B6D18 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipGEHeadPtr; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)WmipGEHeadPtr )
    {
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      return 0LL;
    }
    v5 = *a1 - i[9];
    if ( *a1 == i[9] )
      v5 = a1[1] - i[10];
    if ( !v5 )
      break;
  }
  WmipReferenceEntry((ULONG_PTR)i);
  if ( a2 )
  {
    v6 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i
      || (v7 = (_QWORD *)i[1], (_QWORD *)*v7 != i)
      || (*v7 = v6,
          v6[1] = v7,
          v8 = (_QWORD *)WmipGEHeadPtr,
          v9 = *(_QWORD *)WmipGEHeadPtr,
          *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr) )
    {
      __fastfail(3u);
    }
    *i = v9;
    i[1] = v8;
    *(_QWORD *)(v9 + 8) = i;
    *v8 = i;
  }
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  return i;
}
