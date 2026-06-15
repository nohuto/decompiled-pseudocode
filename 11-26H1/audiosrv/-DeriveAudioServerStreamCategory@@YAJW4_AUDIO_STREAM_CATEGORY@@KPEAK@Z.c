/*
 * XREFs of ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x180078A84
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800BFC80 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeriveAudioServerStreamCategory(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  if ( a1 <= 0xE && a2 <= 0x17 )
  {
    if ( !a1 )
    {
LABEL_6:
      *a3 = a2;
      return 0LL;
    }
    if ( !a2 )
    {
      a2 = dword_18018C710[a1];
      goto LABEL_6;
    }
  }
  return 2147942487LL;
}
