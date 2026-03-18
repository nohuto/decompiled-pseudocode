/*
 * XREFs of WmipFindGEByGuid @ 0x140A0E624
 * Callers:
 *     WmipDetermineInstanceBaseIndex @ 0x140A0B588 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x140A0C2B0 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0C854 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipLinkDataSourceToList @ 0x140A0CC1C (WmipLinkDataSourceToList.c)
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x140A0D184 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0D350 (WmipEnableCollectionForNewGuid.c)
 *     WmipOpenBlock @ 0x140A0E050 (WmipOpenBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x140A0FB50 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *KernelShadowStackInitial; // rax
  __int64 v9; // rcx

  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)EtwpSecurityLock.KernelShadowStackInitial; ; i = (_QWORD *)*i )
  {
    if ( i == EtwpSecurityLock.KernelShadowStackInitial )
    {
      KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
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
          KernelShadowStackInitial = EtwpSecurityLock.KernelShadowStackInitial,
          v9 = *(_QWORD *)EtwpSecurityLock.KernelShadowStackInitial,
          *(void **)(*(_QWORD *)EtwpSecurityLock.KernelShadowStackInitial + 8LL) != EtwpSecurityLock.KernelShadowStackInitial) )
    {
      __fastfail(3u);
    }
    *i = v9;
    i[1] = KernelShadowStackInitial;
    *(_QWORD *)(v9 + 8) = i;
    *KernelShadowStackInitial = i;
  }
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  return i;
}
