/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x1403CB24C
 * Callers:
 *     SepInitSingletonEntry @ 0x1403CB190 (SepInitSingletonEntry.c)
 *     SepCleanSingletonEntry @ 0x1403CB1DC (SepCleanSingletonEntry.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140529F94 (SepValidateAndCopyGlobalEntry.c)
 *     SepSetSingletonEntry @ 0x14063BB00 (SepSetSingletonEntry.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  char v1; // si
  __int64 v2; // rdi
  unsigned int v3; // ebx
  KIRQL v4; // al

  v1 = a1;
  v2 = 0LL;
  v3 = a1 >> 6;
  v4 = ExAcquireSpinLockShared(SepSingletonGlobal);
  if ( v3 < *((_DWORD *)SepSingletonGlobal + 1) )
    v2 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8LL * v3) + 24LL * (v1 & 0x3F);
  ExReleaseSpinLockShared(SepSingletonGlobal, v4);
  return v2;
}
