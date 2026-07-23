/*
 * XREFs of HalpSignalRAS @ 0x140590BDC
 * Callers:
 *     HalpCheckAndReportGhes @ 0x1404D5CCC (HalpCheckAndReportGhes.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 */

__int64 __fastcall HalpSignalRAS(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( *(_DWORD *)(a1 + 96) != 12 || **(_QWORD **)(a1 + 64) == -1LL )
    return 3221226021LL;
  v2 = *(_DWORD **)(a1 + 80);
  if ( !v2 )
  {
    v3 = MmMapIoSpaceEx(*(_QWORD *)(a1 + 184), *(unsigned int *)(a1 + 72), 0x204u);
    *(_QWORD *)(a1 + 80) = v3;
    v2 = (_DWORD *)v3;
    if ( !v3 )
      return 3221225701LL;
  }
  v5 = *(_QWORD *)(a1 + 192);
  v6 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(a1 + 72) == 4 )
    *v2 = v6 | v5 & *v2;
  else
    *(_QWORD *)v2 = v6 | v5 & *(_QWORD *)v2;
  return 0LL;
}
