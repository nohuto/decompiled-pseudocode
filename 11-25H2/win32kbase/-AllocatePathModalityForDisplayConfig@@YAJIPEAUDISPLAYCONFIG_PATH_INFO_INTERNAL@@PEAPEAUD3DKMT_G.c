/*
 * XREFs of ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019EF5C
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x140112EB4 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall AllocatePathModalityForDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int v3; // ebx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // ecx
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 result; // rax

  v3 = 0;
  v5 = a2;
  if ( !a1 )
    goto LABEL_10;
  v6 = a1;
  do
  {
    v7 = *(_QWORD *)v5;
    v8 = v3++;
    v5 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v5 + 216);
    if ( v7 >= 0 )
      v3 = v8;
    --v6;
  }
  while ( v6 );
  if ( v3 )
  {
    v9 = AllocPathsModality(v3);
    *a3 = v9;
    if ( v9 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 13701;
    }
  }
  else
  {
LABEL_10:
    WdLogSingleEntry1(2LL, a2);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 13693;
  }
  return result;
}
