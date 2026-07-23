/*
 * XREFs of MiGetPagesRemainingInResidentPage @ 0x140708004
 * Callers:
 *     MiAddPhysicalPagesToCrashDump @ 0x1406FACC8 (MiAddPhysicalPagesToCrashDump.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x1404C5050 (MiGetBaseResidentPageForBugCheck.c)
 */

__int64 __fastcall MiGetPagesRemainingInResidentPage(__int64 a1, int *a2, int *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  int PfnPageSizeIndex; // eax
  int v11; // edx
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  v14 = 0;
  v6 = (a1 + 0x220000000000LL) / 48;
  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
  {
    v7 = MiGetBaseResidentPageForBugCheck(a1);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_BYTE *)(v7 + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v7);
      v11 = (*(_DWORD *)(v8 + 32) >> 22) & 3;
    }
    else
    {
      PfnPageSizeIndex = 3;
      v9 = *(_BYTE *)(a1 + 34) & 7;
      v11 = (*(_DWORD *)(a1 + 32) >> 22) & 3;
    }
  }
  else
  {
    PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a1, &v13, &v14);
    v11 = v14;
    v9 = v13;
  }
  *a2 = v9;
  *a3 = v11;
  return MiPageSizes[PfnPageSizeIndex] + (v6 & ~(MiPageSizes[PfnPageSizeIndex] - 1)) - v6;
}
