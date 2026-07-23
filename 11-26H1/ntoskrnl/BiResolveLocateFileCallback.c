/*
 * XREFs of BiResolveLocateFileCallback @ 0x140899670
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     BiEnumerateDiskPartitions @ 0x1408984DC (BiEnumerateDiskPartitions.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiGetPartitionVhdFilePath @ 0x140B1E440 (BiGetPartitionVhdFilePath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall BiResolveLocateFileCallback(const WCHAR *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  void *v4; // rbx
  __int64 v8; // rax
  wchar_t *v9; // rdi
  __int64 PartitionVhdFilePath; // rax

  v3 = *(_QWORD *)(a3 + 128);
  v4 = 0LL;
  if ( !*(_BYTE *)(a3 + 144) )
  {
    if ( !v3 )
    {
      PartitionVhdFilePath = BiGetPartitionVhdFilePath(a1);
      v4 = (void *)PartitionVhdFilePath;
      if ( PartitionVhdFilePath )
      {
        BiLogMessage(1LL, L"BiResolveLocateFileCallback: Skipping '%ws' VHD '%ws'", a1, PartitionVhdFilePath);
        goto LABEL_11;
      }
    }
LABEL_10:
    BiEnumerateDiskPartitions(a2);
    if ( !v4 )
      return *(_BYTE *)(a3 + 145);
LABEL_11:
    ExFreePoolWithTag(v4, 0x4B444342u);
    return *(_BYTE *)(a3 + 145);
  }
  v8 = BiGetPartitionVhdFilePath(a1);
  v4 = (void *)v8;
  if ( v8 )
  {
    v9 = wcschr((const wchar_t *)(v8 + 44), 0x5Cu);
    if ( wcsicmp(v9, (const wchar_t *)(v3 + 24)) )
    {
      BiLogMessage(2LL, L"BiResolveLocateFileCallback: VHD mismatch '%ws' '%ws'", v9, v3 + 24);
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  BiLogMessage(1LL, L"BiResolveLocateFileCallback: '%ws' is NOT VHD", a1);
  return *(_BYTE *)(a3 + 145);
}
