/*
 * XREFs of MiMarkPxeAsShadowed @ 0x1406FF124
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1408755C4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  unsigned int v1; // ebx
  KIRQL v2; // al

  v1 = ((a1 >> 3) & 0x1FF) - 256;
  v2 = ExAcquireSpinLockExclusive(&dword_140E36080);
  *((_BYTE *)&stru_140E2D930.SecureThreadCookie + ((unsigned __int64)v1 >> 3)) |= 1 << (v1 & 7);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36080);
  else
    ExReleaseSpinLockExclusive(&dword_140E36080, v2);
}
