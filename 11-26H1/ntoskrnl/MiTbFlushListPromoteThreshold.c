/*
 * XREFs of MiTbFlushListPromoteThreshold @ 0x1402A41A0
 * Callers:
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiFlushTbNowToAvoidOverflow @ 0x1402A2BB8 (MiFlushTbNowToAvoidOverflow.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushListPromoteThreshold(__int64 a1)
{
  _KPROCESS *Process; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return -1LL;
  if ( *(_DWORD *)(a1 + 8) == 1
    && ((Process = KeGetCurrentThread()->ApcState.Process, Process[3].ProcessListEntry.Blink)
     || (Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL) != 0) )
  {
    return -1LL;
  }
  else
  {
    return qword_140E2D910;
  }
}
