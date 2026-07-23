/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x180144BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryHeapInformation @ 0x180076310 (RtlQueryHeapInformation.c)
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800809B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpTagQueryTags @ 0x1800EA838 (RtlpHpTagQueryTags.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(char *a1)
{
  bool v2; // zf
  NTSTATUS Tags; // eax
  NTSTATUS v4; // edi
  __int64 v5; // rcx
  char **v6; // rsi
  void *v7; // rcx
  int v8; // r9d
  __int64 v9; // rax
  void *v10; // rdx
  SIZE_T CommitSize; // [rsp+28h] [rbp-89h]
  __int128 HeapInformation; // [rsp+58h] [rbp-59h] BYREF
  __int128 v13; // [rsp+68h] [rbp-49h] BYREF
  __int128 v14; // [rsp+78h] [rbp-39h]
  __int64 v15; // [rsp+88h] [rbp-29h]
  _QWORD v16[2]; // [rsp+98h] [rbp-19h] BYREF
  int v17; // [rsp+A8h] [rbp-9h]
  NTSTATUS (__fastcall *v18)(size_t *, __int64); // [rsp+B0h] [rbp-1h]
  char *v19; // [rsp+B8h] [rbp+7h]

  memset_thunk_772440563353939046(v16, 0, 0x58uLL);
  LODWORD(v15) = 0;
  v2 = *((_DWORD *)a1 + 6) == 0x10000000;
  v13 = 0LL;
  v14 = 0LL;
  HeapInformation = 0LL;
  if ( v2 )
  {
    *((_QWORD *)&HeapInformation + 1) = -1LL;
    LOWORD(HeapInformation) = 1;
    WORD1(HeapInformation) = *((_WORD *)a1 + 40);
    Tags = RtlSetHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &HeapInformation, 0x10uLL);
    v4 = Tags;
LABEL_3:
    *((_DWORD *)a1 + 7) = Tags;
    goto LABEL_22;
  }
  if ( *((_DWORD *)a1 + 6) == 0x40000000 )
  {
    v5 = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( *((_DWORD *)a1 + 6) == 0x8000000 )
    {
      if ( RtlpHpStackLoggingEnabled((__int64)NtCurrentPeb()->ProcessHeap) )
        *((_DWORD *)a1 + 22) |= 1u;
      v4 = 0;
      goto LABEL_22;
    }
    v5 = 0x10000LL;
  }
  v6 = (char **)(a1 + 48);
  *((_QWORD *)a1 + 7) = v5;
  CommitSize = v5;
  v7 = *(void **)a1;
  *((_QWORD *)a1 + 8) = 0LL;
  v4 = ZwMapViewOfSection(
         v7,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)a1 + 6,
         0LL,
         CommitSize,
         (PLARGE_INTEGER)a1 + 8,
         (PSIZE_T)a1 + 7,
         ViewUnmap,
         0,
         4u);
  if ( v4 >= 0 )
  {
    v8 = *((_DWORD *)a1 + 6);
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 9) = 0LL;
    *((_DWORD *)a1 + 10) = 0;
    *((_DWORD *)a1 + 7) = 0;
    if ( v8 == 0x40000000 )
    {
      *((_QWORD *)*v6 + 1) = -1LL;
      Tags = RtlpHpTagQueryTags(*v6, *((_QWORD *)a1 + 7), (_QWORD *)a1 + 4);
      goto LABEL_3;
    }
    if ( v8 == 0x20000000 )
    {
      v15 = 0LL;
      *(_QWORD *)&v14 = RtlpHpRemoteStackSerializeWriter;
      LODWORD(v13) = 2;
      *((_QWORD *)&v13 + 1) = -1LL;
      *((_QWORD *)&v14 + 1) = a1;
      *((_DWORD *)a1 + 7) = 0;
      v4 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &v13, 0x28uLL, 0LL);
      if ( v4 >= 0 )
        v4 = *((_DWORD *)a1 + 7);
      if ( (v15 & 0x100) != 0 )
        *((_DWORD *)a1 + 22) |= 1u;
    }
    else
    {
      v9 = *((_QWORD *)a1 + 2);
      v17 = v8;
      v16[1] = v9;
      v16[0] = -1LL;
      v18 = RtlpExtendedHeapInformationWorkerCallback;
      v19 = a1;
      v4 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v16, 0x58uLL, 0LL);
      if ( v4 >= 0 && *((int *)a1 + 7) < 0 )
        v4 = *((_DWORD *)a1 + 7);
    }
  }
LABEL_22:
  v10 = (void *)*((_QWORD *)a1 + 6);
  if ( v10 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v10);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v4;
  RtlExitUserThread(0);
}
