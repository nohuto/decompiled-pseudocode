/*
 * XREFs of LdrpDetectDetour @ 0x180064B60
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpEnableParallelLoading @ 0x1800649F0 (LdrpEnableParallelLoading.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     TpReleaseWork @ 0x180064C60 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x180064D50 (TpWaitForWork.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 */

void LdrpDetectDetour()
{
  _QWORD *v0; // rdx
  unsigned int i; // ecx
  _QWORD *v2; // r8
  __int64 v3; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !LdrpDetourExist )
  {
    v0 = &LdrpThunkSignature;
    for ( i = 0; i < 5; ++i )
    {
      v2 = *(&LdrpCriticalLoaderFunctions + i);
      v3 = *v0 - *v2;
      if ( *v0 == *v2 )
        v3 = v0[1] - v2[1];
      if ( v3 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrmap.c",
          4335,
          (__int64)"LdrpDetectDetour",
          2,
          "!!! Detour detected, disable parallel loading\n");
        LdrpDetourExist = 1;
        break;
      }
      v0 += 2;
    }
    if ( (int)ZwQueryInformationThread(-2LL, 42LL, &v4, 4LL, 0LL) >= 0 && v4 == 1 )
    {
      LdrpDetourExist = 1;
    }
    else if ( !LdrpDetourExist )
    {
      return;
    }
    if ( LdrpMapAndSnapWork )
    {
      TpWaitForWork(LdrpMapAndSnapWork, 1LL);
      TpReleaseWork(LdrpMapAndSnapWork);
      LdrpMapAndSnapWork = 0LL;
    }
  }
}
