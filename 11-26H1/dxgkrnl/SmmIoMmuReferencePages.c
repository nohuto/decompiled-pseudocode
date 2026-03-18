/*
 * XREFs of SmmIoMmuReferencePages @ 0x14009BCA4
 * Callers:
 *     SmmIoMmuUnmapStagingArray @ 0x14009BE10 (SmmIoMmuUnmapStagingArray.c)
 *     SmmIommuMapStagingArray @ 0x14009BED4 (SmmIommuMapStagingArray.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmIoMmuUpdatePfn @ 0x14004D188 (SmmIoMmuUpdatePfn.c)
 */

__int64 __fastcall SmmIoMmuReferencePages(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // r14
  int updated; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  KIRQL OldIrql; // [rsp+80h] [rbp+8h]

  v3 = *(_DWORD *)(a2 + 24);
  v7 = 0;
  v8 = 0LL;
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8));
  if ( v3 != *(_DWORD *)(a2 + 16) )
  {
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)a2 + 8LL * v3);
      updated = SmmIoMmuUpdatePfn(a1, v9, a3);
      v7 = updated;
      if ( updated == -1073741801 )
        goto LABEL_7;
      ++v3;
      if ( updated == 259 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v8) = v9;
        v8 = (unsigned int)(v8 + 1);
        if ( (_DWORD)v8 == *(_DWORD *)(a2 + 20) )
          goto LABEL_11;
      }
    }
    while ( v3 != *(_DWORD *)(a2 + 16) );
    if ( updated < 0 )
    {
LABEL_7:
      v11 = *(unsigned int *)(a2 + 24);
      if ( (unsigned int)v11 < v3 )
      {
        v12 = 8 * v11;
        v13 = v3 - (unsigned int)v11;
        do
        {
          SmmIoMmuUpdatePfn(a1, *(_QWORD *)(v12 + *(_QWORD *)a2), 0);
          v12 += 8LL;
          --v13;
        }
        while ( v13 );
      }
      goto LABEL_15;
    }
LABEL_11:
    if ( v3 != *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + 20) != (_DWORD)v8 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 653;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pArgs->OutputSize == OutputIndex",
        653LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  *(_DWORD *)(a2 + 28) = v8;
  *(_DWORD *)(a2 + 24) = v3;
LABEL_15:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8), OldIrql);
  return v7;
}
