/*
 * XREFs of LdrpSetModuleSigningLevel @ 0x180101284
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpValidateIntegrityContinuity @ 0x180101184 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     NtCompareSigningLevels @ 0x180160230 (NtCompareSigningLevels.c)
 *     NtGetCachedSigningLevel @ 0x180160D50 (NtGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x180162150 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall LdrpSetModuleSigningLevel(void *a1, __int64 a2, ULONG *a3, SE_SIGNING_LEVEL a4, _BYTE *a5)
{
  _BYTE *v5; // r14
  SE_SIGNING_LEVEL *v6; // rsi
  NTSTATUS CachedSigningLevel; // ebx
  HANDLE SourceFiles; // [rsp+40h] [rbp+8h] BYREF

  SourceFiles = a1;
  v5 = a5;
  v6 = (SE_SIGNING_LEVEL *)(a2 + 284);
  *a5 = 0;
  CachedSigningLevel = NtGetCachedSigningLevel(a1, a3, (PSE_SIGNING_LEVEL)(a2 + 284), 0LL, 0LL, 0LL);
  if ( CachedSigningLevel < 0 || NtCompareSigningLevels(*v6, a4) < 0 )
  {
    CachedSigningLevel = ZwSetCachedSigningLevel(0x804u, a4, &SourceFiles, 1u, SourceFiles);
    if ( CachedSigningLevel < 0 )
      *v5 = 1;
    else
      *v6 = a4;
  }
  return (unsigned int)CachedSigningLevel;
}
