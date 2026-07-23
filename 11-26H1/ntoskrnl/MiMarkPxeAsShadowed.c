/*
 * XREFs of MiMarkPxeAsShadowed @ 0x140703DF4
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  unsigned int v1; // ebx
  KIRQL v2; // al

  v1 = ((a1 >> 3) & 0x1FF) - 256;
  v2 = ExAcquireSpinLockExclusive(&dword_140E36200);
  *((_BYTE *)&stru_140E2DAB0.SecureThreadCookie + ((unsigned __int64)v1 >> 3)) |= 1 << (v1 & 7);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
  else
    ExReleaseSpinLockExclusive(&dword_140E36200, v2);
}
