/*
 * XREFs of DpiAcpiGetAcpiChildUidFromName @ 0x140252F60
 * Callers:
 *     ?DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z @ 0x14008BD88 (-DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z.c)
 * Callees:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x140430744 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiGetAcpiChildUidFromName(__int64 a1, const char *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int i; // eax
  __int64 v8; // r10

  result = DpiAcpiPrepareAcpiChildNameList(a1);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 3416); ++i )
    {
      v8 = *(_QWORD *)(a1 + 3432);
      if ( !strcmp(a2, *(const char **)(v8 + 16LL * i + 8)) )
      {
        *a3 = *(_DWORD *)(v8 + 16LL * i);
        return 0LL;
      }
    }
    return 3221226021LL;
  }
  return result;
}
