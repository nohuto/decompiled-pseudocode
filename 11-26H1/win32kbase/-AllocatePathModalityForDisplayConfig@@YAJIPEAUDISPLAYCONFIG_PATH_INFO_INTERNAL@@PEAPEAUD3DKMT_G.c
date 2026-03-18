/*
 * XREFs of ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401BEBC8
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14002E698 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall AllocatePathModalityForDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // r9
  __int64 v6; // r10
  unsigned int v7; // ecx
  bool v8; // sf
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 result; // rax

  v3 = 0;
  v5 = (__int64 *)a2;
  if ( !a1 )
    goto LABEL_10;
  v6 = a1;
  do
  {
    v7 = v3 + 1;
    v8 = *v5 < 0;
    v5 += 27;
    if ( !v8 )
      v7 = v3;
    v3 = v7;
    --v6;
  }
  while ( v6 );
  if ( v7 )
  {
    v9 = AllocPathsModality(v7);
    *a3 = v9;
    if ( v9 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 13557;
    }
  }
  else
  {
LABEL_10:
    WdLogSingleEntry1(2LL, a2);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 13549;
  }
  return result;
}
