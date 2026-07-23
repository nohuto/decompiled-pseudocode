/*
 * XREFs of HalpReadGenericErrorInfo @ 0x1404D5D28
 * Callers:
 *     HalpCheckAndReportGhes @ 0x1404D5CCC (HalpCheckAndReportGhes.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpExtractGenericErrorData @ 0x140590A94 (HalpExtractGenericErrorData.c)
 */

__int64 __fastcall HalpReadGenericErrorInfo(__int64 a1)
{
  __int64 *v2; // rcx
  _DWORD *v3; // rbx
  __int64 v5; // rax

  v2 = *(__int64 **)(a1 + 40);
  if ( *v2 == -1 )
    return 3221226021LL;
  v3 = *(_DWORD **)(a1 + 56);
  if ( !v3 )
  {
    v5 = MmMapIoSpaceEx(*v2, *(unsigned int *)(a1 + 48), 0x204u);
    *(_QWORD *)(a1 + 56) = v5;
    v3 = (_DWORD *)v5;
    if ( !v5 )
      return 3221226021LL;
  }
  if ( (*v3 & 2) == 0 )
  {
    if ( (*v3 & 1) == 0 )
      return 3221226021LL;
    HalpExtractGenericErrorData(a1);
    if ( *(_DWORD *)(a1 + 96) != 12 )
    {
      *v3 &= ~1u;
      return 0LL;
    }
LABEL_12:
    *v3 = 0;
    return 0LL;
  }
  HalpExtractGenericErrorData(a1);
  if ( *(_DWORD *)(a1 + 96) == 12 )
    goto LABEL_12;
  *v3 &= ~2u;
  return 0LL;
}
