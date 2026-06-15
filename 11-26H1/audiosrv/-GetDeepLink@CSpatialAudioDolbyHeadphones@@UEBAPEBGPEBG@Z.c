/*
 * XREFs of ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGPEBG@Z @ 0x180039870
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180039AB4 (-IsMatEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

char *__fastcall CSpatialAudioDolbyHeadphones::GetDeepLink(
        CSpatialAudioDolbyHeadphones *this,
        const unsigned __int16 *a2)
{
  AtmosCheck *v3; // rcx
  char *v4; // rbx

  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  v4 = (char *)this + 288;
  if ( v3 && (int)AtmosCheck::IsMatEncoderEnabled(v3, a2) >= 0 )
    return (char *)this + 800;
  return v4;
}
