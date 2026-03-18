/*
 * XREFs of WmipAddMofResource @ 0x140B19FC8
 * Callers:
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 *     WmipInitializeDataStructs @ 0x140CE03F8 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     WmipAllocEntry @ 0x140A0BF54 (WmipAllocEntry.c)
 *     WmipUnreferenceEntry @ 0x140A0EF48 (WmipUnreferenceEntry.c)
 *     WmipFindMRByNames @ 0x140B1A194 (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x140B1A25C (WmipInsertMofResource.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipAddMofResource(__int64 a1, const wchar_t *a2, char a3, const wchar_t *a4, char *a5)
{
  __int64 MRByNames; // rbx
  _QWORD *v10; // rax
  unsigned int inserted; // edi
  char v12; // si
  __int64 v13; // rdi
  __int64 v14; // rax
  size_t v15; // r12
  size_t v16; // rdi
  __int64 Pool2; // rax
  wchar_t *v18; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx

  MRByNames = WmipFindMRByNames(a2, a4);
  if ( MRByNames )
  {
    v12 = 0;
    goto LABEL_17;
  }
  v10 = WmipAllocEntry((__int64)&WmipMRChunkInfo);
  MRByNames = (__int64)v10;
  if ( v10 )
  {
    v12 = 1;
    if ( a3 )
      *((_DWORD *)v10 + 4) |= 1u;
    v13 = -1LL;
    v14 = -1LL;
    do
      ++v14;
    while ( a2[v14] );
    v15 = 2 * v14 + 2;
    *(_QWORD *)(MRByNames + 40) = ExAllocatePool2(0x100uLL);
    do
      ++v13;
    while ( a4[v13] );
    v16 = 2 * v13 + 2;
    Pool2 = ExAllocatePool2(0x100uLL);
    v18 = *(wchar_t **)(MRByNames + 40);
    *(_QWORD *)(MRByNames + 48) = Pool2;
    if ( !v18 || !Pool2 )
    {
      inserted = -1073741670;
      goto LABEL_20;
    }
    RtlStringCbCopyW(v18, v15, a2);
    RtlStringCbCopyW(*(NTSTRSAFE_PWSTR *)(MRByNames + 48), v16, a4);
    KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
    Flink = EtwpSecurityLock.GlobalUpdateVpThreadPriorityListEntry.Flink;
    Blink = EtwpSecurityLock.GlobalUpdateVpThreadPriorityListEntry.Flink->Blink;
    if ( Blink->Flink != EtwpSecurityLock.GlobalUpdateVpThreadPriorityListEntry.Flink )
      __fastfail(3u);
    *(_QWORD *)(MRByNames + 8) = Blink;
    *(_QWORD *)MRByNames = Flink;
    Blink->Flink = (struct _LIST_ENTRY *)MRByNames;
    Flink->Blink = (struct _LIST_ENTRY *)MRByNames;
    KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
LABEL_17:
    *a5 = v12;
    if ( !a1 )
      return 0;
    KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
    inserted = WmipInsertMofResource(a1, MRByNames);
    KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
    if ( !MRByNames )
      return inserted;
LABEL_20:
    WmipUnreferenceEntry((__int64)&WmipMRChunkInfo, (volatile signed __int64 *)MRByNames);
    return inserted;
  }
  return (unsigned int)-1073741670;
}
