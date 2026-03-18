/*
 * XREFs of ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1401BC974
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14002DE28 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 */

__int64 __fastcall ConvertDisplayConfigToPathModality(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        bool *a4)
{
  unsigned int v4; // esi
  unsigned int i; // edi
  __int64 result; // rax

  v4 = 0;
  for ( i = 0; i < a1; ++i )
  {
    if ( *(__int64 *)a2 < 0 )
    {
      if ( v4 >= *((unsigned __int16 *)a3 + 11) )
      {
        WdLogSingleEntry1(2LL, *((unsigned __int16 *)a3 + 11));
        result = 3221225507LL;
        WdLogGlobalForLineNumber = 14083;
        return result;
      }
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(a2, v4, i, 1, 0, 0, a3, a4);
      if ( (int)result < 0 )
        return result;
      ++v4;
    }
    a2 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)a2 + 216);
  }
  return 0LL;
}
