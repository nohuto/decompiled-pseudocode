/*
 * XREFs of SmmIoMmuAllocatePage @ 0x14004D084
 * Callers:
 *     SmmIoMmuUpdatePfn @ 0x14004D188 (SmmIoMmuUpdatePfn.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmIoMmuCompareIoMmuPagePfn @ 0x14004D280 (SmmIoMmuCompareIoMmuPagePfn.c)
 */

_QWORD *__fastcall SmmIoMmuAllocatePage(__int64 a1, __int64 a2)
{
  char v3; // bl
  _QWORD *v4; // rsi
  __int64 v5; // r8
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 0;
  v4 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 16));
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_140169704);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 512;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate IOMMU tracker page",
      512LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  v4[4] = v9;
  *((_DWORD *)v4 + 6) = 0;
  v6 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_9;
  while ( (int)SmmIoMmuCompareIoMmuPagePfn(&v9, v6) < 0 )
  {
    v7 = (_QWORD *)*v6;
    if ( !*v6 )
      goto LABEL_9;
LABEL_5:
    v6 = v7;
  }
  v7 = (_QWORD *)v6[1];
  if ( v7 )
    goto LABEL_5;
  v3 = 1;
LABEL_9:
  LOBYTE(v5) = v3;
  RtlAvlInsertNodeEx(a1, v6, v5, v4);
  return v4;
}
