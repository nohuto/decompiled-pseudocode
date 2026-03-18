/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x140055860
 * Callers:
 *     NtDCompositionBoostCompositorClock @ 0x140055050 (NtDCompositionBoostCompositorClock.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x140055158 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x140058170 (NtDCompositionEnableMMCSS.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227B78 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227E34 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProcessData *DirectComposition::CProcessData::Current(void)
{
  _QWORD *CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    return (struct DirectComposition::CProcessData *)CurrentProcessWin32Process[32];
  else
    return 0LL;
}
