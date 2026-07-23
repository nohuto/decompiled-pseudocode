/*
 * XREFs of PpmHeteroReinitializeHgsSupport @ 0x1404C10A4
 * Callers:
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C0FC4 (PpmCheckResumePpmEngineFromSx.c)
 * Callees:
 *     <none>
 */

void PpmHeteroReinitializeHgsSupport()
{
  unsigned int v0; // r8d

  if ( PpmHeteroHgsEnabled && PpmHeteroHgsVendor == 2 )
  {
    v0 = 1;
    __writemsr(0x17D0u, (*(_QWORD *)(*(_QWORD *)&stru_140FC11F0.AffinityPrimaryGroup + 48LL) << 12) | 1LL);
    if ( PpmHeteroHgsThreadEnabled )
      v0 = 3;
    __writemsr(0x17D1u, v0);
  }
}
