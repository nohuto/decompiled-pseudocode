/*
 * XREFs of ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180020F30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180020F68 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::UpdateAudioVolume(__int64 a1, __int64 a2, __int64 a3)
{
  CAudioSession::SetVolumeAllStreams(a1, a2, a3);
  return 0LL;
}
