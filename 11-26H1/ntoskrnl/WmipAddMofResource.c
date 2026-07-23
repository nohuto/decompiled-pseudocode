/*
 * XREFs of WmipAddMofResource @ 0x140B1C418
 * Callers:
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 *     WmipInitializeDataStructs @ 0x140CE6798 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     WmipAllocEntry @ 0x140A0AF24 (WmipAllocEntry.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipFindMRByNames @ 0x140B1C5E4 (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x140B1C6AC (WmipInsertMofResource.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  __int64 v19; // rax
  __int64 *v20; // rcx

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
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v19 = WmipMRHeadPtr;
    v20 = *(__int64 **)(WmipMRHeadPtr + 8);
    if ( *v20 != WmipMRHeadPtr )
      __fastfail(3u);
    *(_QWORD *)(MRByNames + 8) = v20;
    *(_QWORD *)MRByNames = v19;
    *v20 = MRByNames;
    *(_QWORD *)(v19 + 8) = MRByNames;
    KeReleaseMutex(&WmipSMMutex, 0);
LABEL_17:
    *a5 = v12;
    if ( !a1 )
      return 0;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    inserted = WmipInsertMofResource(a1, MRByNames);
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( !MRByNames )
      return inserted;
LABEL_20:
    WmipUnreferenceEntry((__int64)&WmipMRChunkInfo, (volatile signed __int64 *)MRByNames);
    return inserted;
  }
  return (unsigned int)-1073741670;
}
