/*
 * XREFs of ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1402D9B50
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1402D77B8 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DKMT_DISPLAYMODE *__fastcall MODE_UNION_LIST::FindMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int i; // eax
  __int64 v4; // rbx
  __int64 Height; // r8
  UINT *p_Denominator; // rsi

  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 4) )
      return 0LL;
    v4 = *((_QWORD *)this + 1) + 44LL * i;
    if ( a2->Width == *(_DWORD *)v4 )
    {
      Height = a2->Height;
      if ( (_DWORD)Height == *(_DWORD *)(v4 + 4)
        && *(_QWORD *)&a2->Format == *(_QWORD *)(v4 + 8)
        && a2->DisplayOrientation == *(_DWORD *)(v4 + 28)
        && a2->DisplayFixedOutput == *(_DWORD *)(v4 + 32)
        && a2->ScanLineOrdering == *(_DWORD *)(v4 + 24)
        && ((*((_BYTE *)&a2->Flags + 4) ^ *(_BYTE *)(v4 + 40)) & 0x10) == 0
        && ((*(_BYTE *)&a2->Flags ^ *(_BYTE *)(v4 + 36)) & 2) == 0 )
      {
        break;
      }
    }
  }
  p_Denominator = &a2->RefreshRate.Denominator;
  if ( a2->RefreshRate.Numerator != *(_DWORD *)(v4 + 16) || *p_Denominator != *(_DWORD *)(v4 + 20) )
  {
    WdLogSingleEntry4(7LL, a2->Width, Height, a2->Format, a2->IntegerRefreshRate);
    WdLogGlobalForLineNumber = 2022;
    WdLogSingleEntry4(
      7LL,
      a2->RefreshRate.Numerator,
      *p_Denominator,
      *(unsigned int *)(v4 + 16),
      *(unsigned int *)(v4 + 20));
    WdLogGlobalForLineNumber = 2028;
  }
  return (struct _D3DKMT_DISPLAYMODE *)v4;
}
