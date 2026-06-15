/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxStereo@@UEBAJPEBG@Z @ 0x180080640
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDtsxSpeakersEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x1800399D4 (-IsDtsxSpeakersEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CSpatialAudioDtsxStereo::GetTechnologyLicenseResult(
        CSpatialAudioDtsxStereo *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801D52FA )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::IsDtsxSpeakersEnabled(v3, a2);
  return result;
}
