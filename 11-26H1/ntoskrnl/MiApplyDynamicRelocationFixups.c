/*
 * XREFs of MiApplyDynamicRelocationFixups @ 0x14047A8A8
 * Callers:
 *     MiReapplyImportOptimizationIsr @ 0x140700340 (MiReapplyImportOptimizationIsr.c)
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 * Callees:
 *     RtlApplyIndirectRelocationToPage @ 0x14046C5EC (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplyImportRelocationToPage @ 0x14047AAAC (RtlApplyImportRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToPage @ 0x1404FE258 (RtlApplySwitchJumpRelocationToPage.c)
 */

char __fastcall MiApplyDynamicRelocationFixups(
        unsigned __int64 a1,
        int a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  char result; // al
  BOOL v10; // r14d
  int v11; // ebp
  unsigned __int64 v12; // rbx
  _WORD *v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi

  result = KiSpeculationFeatures;
  v10 = 0;
  v11 = (a5 & 0x10) != 0 ? 2 : 0;
  if ( (a5 & 0x10) == 0 )
    v10 = ((a5 >> 3) & 1) == 0;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    v11 |= 1u;
  switch ( a4[3] )
  {
    case 3u:
      result = RtlApplyImportRelocationToPage(
                 a1,
                 a2,
                 a3,
                 *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4,
                 (__int64)(a4 + 4),
                 v10,
                 1,
                 v11);
      break;
    case 4u:
      result = RtlApplyIndirectRelocationToPage(
                 a1,
                 a2,
                 a3,
                 *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4,
                 a4 + 4,
                 v10,
                 1);
      break;
    case 5u:
      result = RtlApplySwitchJumpRelocationToPage(
                 a1,
                 a2,
                 a3,
                 *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4,
                 (__int64)(a4 + 4),
                 v10,
                 1);
      break;
  }
  v12 = (unsigned __int64)(a4 + 6);
  v13 = (unsigned __int16 *)((char *)a4 + *a4 + 12);
  while ( v12 < (unsigned __int64)v13 )
  {
    result = RtlApplyImportRelocationToPage(
               a1,
               a2,
               a3,
               *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4,
               v12,
               v10,
               0,
               v11);
    v12 += 4LL;
  }
  v14 = (unsigned __int64)v13 + a4[1];
  v15 = v14 + a4[2];
  while ( (unsigned __int64)v13 < v14 )
    result = RtlApplyIndirectRelocationToPage(
               a1,
               a2,
               a3,
               *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4,
               v13++,
               v10,
               0);
  while ( v14 < v15 )
  {
    result = RtlApplySwitchJumpRelocationToPage(
               a1,
               a2,
               a3,
               *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4,
               v14,
               v10,
               0);
    v14 += 2LL;
  }
  return result;
}
