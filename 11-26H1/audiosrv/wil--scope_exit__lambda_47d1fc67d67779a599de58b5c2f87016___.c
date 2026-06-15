/*
 * XREFs of wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___ @ 0x1800CD3B4
 * Callers:
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180046BE4 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z @ 0x1800695A0 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z.c)
 *     ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070230 (-CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
