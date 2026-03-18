/*
 * XREFs of ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1401BAB0C
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 */

__int64 __fastcall ValidateStandardAllocationParams(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a2,
        char a3)
{
  const wchar_t *v5; // r9
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  bool v8; // zf
  SIZE_T Size; // rdx

  if ( a1->PrivateDriverDataSize )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8916;
    v5 = L"PrivateDriverData Size must be zero when Creating StandardAllocation,                returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1->NumAllocations != 1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8924;
    v5 = L"StandardAllocation supports only 1 allocation, returning 0x%I64x";
    goto LABEL_3;
  }
  if ( a3 )
    RtlCopyFromUser(a2, a1->pStandardAllocation, 0x18uLL);
  else
    *a2 = *a1->pStandardAllocation;
  if ( a2->Type == D3DKMT_STANDARDALLOCATIONTYPE_EXISTINGHEAP )
  {
    Flags = a1->Flags;
    if ( (*(_DWORD *)&Flags & 0x20000) != 0 )
    {
      v8 = (*(_BYTE *)&Flags & 0x20) == 0;
    }
    else
    {
      v8 = (*(_BYTE *)&Flags & 0x20) == 0;
      if ( (*(_BYTE *)&Flags & 0x20) == 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8953;
        v5 = L"StandardAllocation is only allowed with ExistingSysMem or ExistingSection,                    returning 0x%I64x";
        goto LABEL_3;
      }
    }
    if ( !v8 && (*(_DWORD *)&Flags & 0x20000) != 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 8960;
      v5 = L"Invalid Flags specified with StandardAllocation,                     returning 0x%I64x";
      goto LABEL_3;
    }
  }
  else
  {
    if ( a2->Type != 2 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 8978;
      return -1073741811LL;
    }
    if ( (*(_DWORD *)&a1->Flags & 0x20020) != 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 8971;
      return 3221225485LL;
    }
  }
  if ( a2->Flags.Value )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8985;
    v5 = L"StandardAllocation Reserved Flags should not be set, returning 0x%I64x";
    goto LABEL_3;
  }
  Size = a2->ExistingHeapData.Size;
  if ( !Size || Size > 0xFFFFFFFF )
  {
    WdLogSingleEntry2(2LL, Size, -1073741811LL);
    WdLogGlobalForLineNumber = 8995;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid StandardAllocation Size:0x%I64x, Returning 0x%I64x",
      a2->ExistingHeapData.Size,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  return 0LL;
}
