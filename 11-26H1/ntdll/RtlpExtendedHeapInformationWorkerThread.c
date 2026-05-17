/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x180144D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800895B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlQueryHeapInformation @ 0x180091560 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x1800EB628 (RtlpHpTagQueryTags.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  bool v2; // zf
  int Tags; // eax
  int HeapInformation; // edi
  __int64 v5; // rcx
  char **v6; // rsi
  HANDLE v7; // rcx
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+28h] [rbp-89h]
  __int128 v12; // [rsp+58h] [rbp-59h] BYREF
  __int128 v13; // [rsp+68h] [rbp-49h] BYREF
  __int128 v14; // [rsp+78h] [rbp-39h]
  __int64 v15; // [rsp+88h] [rbp-29h]
  _QWORD v16[2]; // [rsp+98h] [rbp-19h] BYREF
  int v17; // [rsp+A8h] [rbp-9h]
  __int64 (__fastcall *v18)(size_t *, __int64); // [rsp+B0h] [rbp-1h]
  __int64 v19; // [rsp+B8h] [rbp+7h]

  memset_thunk_772440563353939046(v16, 0, 0x58uLL);
  LODWORD(v15) = 0;
  v2 = *(_DWORD *)(a1 + 24) == 0x10000000;
  v13 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  if ( v2 )
  {
    *((_QWORD *)&v12 + 1) = -1LL;
    LOWORD(v12) = 1;
    WORD1(v12) = *(_WORD *)(a1 + 80);
    Tags = RtlSetHeapInformation(0LL, 5, (__int64)&v12, 0x10uLL);
    HeapInformation = Tags;
LABEL_3:
    *(_DWORD *)(a1 + 28) = Tags;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a1 + 24) == 0x40000000 )
  {
    v5 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 0x8000000 )
    {
      if ( RtlpHpStackLoggingEnabled((__int64)NtCurrentPeb()->ProcessHeap) )
        *(_DWORD *)(a1 + 88) |= 1u;
      HeapInformation = 0;
      goto LABEL_22;
    }
    v5 = 0x10000LL;
  }
  v6 = (char **)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v5;
  v11 = v5;
  v7 = *(HANDLE *)a1;
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection(v7, -1LL, a1 + 48, 0LL, v11, a1 + 64, a1 + 56, 2, 0, 4);
  if ( HeapInformation >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    if ( v8 == 0x40000000 )
    {
      *((_QWORD *)*v6 + 1) = -1LL;
      Tags = RtlpHpTagQueryTags(*v6, *(_QWORD *)(a1 + 56), (_QWORD *)(a1 + 32));
      goto LABEL_3;
    }
    if ( v8 == 0x20000000 )
    {
      v15 = 0LL;
      *(_QWORD *)&v14 = RtlpHpRemoteStackSerializeWriter;
      LODWORD(v13) = 2;
      *((_QWORD *)&v13 + 1) = -1LL;
      *((_QWORD *)&v14 + 1) = a1;
      *(_DWORD *)(a1 + 28) = 0;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, &v13, 0x28uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
      if ( (v15 & 0x100) != 0 )
        *(_DWORD *)(a1 + 88) |= 1u;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 16);
      v17 = v8;
      v16[1] = v9;
      v16[0] = -1LL;
      v18 = RtlpExtendedHeapInformationWorkerCallback;
      v19 = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v16, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
LABEL_22:
  v10 = *(_QWORD *)(a1 + 48);
  if ( v10 )
    NtUnmapViewOfSection(-1LL, v10);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
