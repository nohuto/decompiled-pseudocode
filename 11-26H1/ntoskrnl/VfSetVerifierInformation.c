/*
 * XREFs of VfSetVerifierInformation @ 0x140C2684C
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     VfFaultsSetParameters @ 0x140C3AAB4 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     VfSettingsCheckForChanges @ 0x140C3F140 (VfSettingsCheckForChanges.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

__int64 __fastcall VfSetVerifierInformation(unsigned int *a1, unsigned int a2, char a3)
{
  __int64 i; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( a2 < 4 )
    return 3221225476LL;
  if ( InitSafeBootMode )
    return 3221226335LL;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)&VfRuleClasses + i) )
      return 3221228559LL;
  }
  v6 = *a1;
  if ( !a3 )
    v13 = *a1;
  VfDriverLock(i);
  if ( !MmVerifierData )
    MmVerifyDriverLevel = 0;
  VfInitSystemNoRebootNeeded(v7, 0, v8, v9);
  v10 = VerifierModifyableOptions & v6;
  v11 = VerifierModifyableOptions & ~v6;
  v12 = ~v11 & (MmVerifierData | v10);
  if ( v12 != MmVerifierData )
  {
    VfSettingsCheckForChanges((unsigned int)MmVerifierData, v10, v11, v12, v13);
    ++dword_140F08AA0;
    MmVerifierData = v12;
    *a1 = v12;
  }
  ViLegacyVolatile = 1;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
