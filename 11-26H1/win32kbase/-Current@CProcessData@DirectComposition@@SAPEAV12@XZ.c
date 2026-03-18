/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790
 * Callers:
 *     NtDCompositionSynchronize @ 0x1400A65B0 (NtDCompositionSynchronize.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1401022D8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x14012B680 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionBoostCompositorClock @ 0x14016B370 (NtDCompositionBoostCompositorClock.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140229ED8 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x14022A1A8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::Current(__int64 a1)
{
  _QWORD *CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    return (struct DirectComposition::CProcessData *)CurrentProcessWin32Process[32];
  else
    return 0LL;
}
