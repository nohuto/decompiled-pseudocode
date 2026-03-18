/*
 * XREFs of ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x140111C64
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x140112470 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x140112C34 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     GetPathsModality @ 0x140112DA4 (GetPathsModality.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x140151FC8 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall SetDisplayConfigHandleOnlyProvidedPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        bool *a3,
        enum _DXGK_DIAG_SDC_STAGE *a4)
{
  bool *v5; // r13
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  struct D3DKMT_GETPATHSMODALITY *v12; // rdx
  unsigned int v13; // eax
  char *v14; // rdi
  int v15; // r13d
  __int64 v16; // rax
  int v17; // [rsp+44h] [rbp-34h]

  v5 = a3;
  result = GetPathsModality(a1, a2, 64LL);
  if ( (int)result >= 0 )
  {
    LODWORD(v9) = 0;
    v17 = 0;
    v10 = 0;
    v11 = *((unsigned __int16 *)*a2 + 10);
    while ( 1 )
    {
      v12 = *a2;
      v13 = *((unsigned __int16 *)*a2 + 10);
      if ( v10 >= v13 )
        break;
      v14 = (char *)v12 + 296 * v10;
      if ( (unsigned __int8)operator==(v14 + 72, (char *)a1 + 16)
        && *((_DWORD *)v14 + 20) == *((_DWORD *)a1 + 6)
        && *((_DWORD *)v14 + 21) == *((_DWORD *)a1 + 7) )
      {
        if ( (*((_DWORD *)v14 + 14) & 0x800LL) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14386;
        }
        v9 = *((_QWORD *)v14 + 25);
        v17 = HIDWORD(v9);
        if ( !_bittest64((const signed __int64 *)v14 + 7, 0x32u) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14388;
        }
        v15 = *((_DWORD *)v14 + 60);
        v11 = v10;
        result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(a1, v10, 0xFFFFFFFF, 0, 0, 0, *a2, a3);
        if ( (int)result < 0 )
        {
          *(_DWORD *)a4 = 34;
          return result;
        }
        *((_DWORD *)v14 + 60) = v15;
        *((_QWORD *)v14 + 7) |= 0x4000000000000uLL;
        v5 = a3;
      }
      else
      {
        result = ConvertDisplayConfigScalingToPathModalityForPath(
                   a1,
                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 56),
                   v5);
        if ( (int)result < 0 )
        {
          *(_DWORD *)a4 = 35;
          return result;
        }
      }
      ++v10;
    }
    if ( v11 < v13
      && (v16 = 296LL * v11, (_DWORD)v9 == *(_DWORD *)((char *)v12 + v16 + 200))
      && v17 == *(_DWORD *)((char *)v12 + v16 + 204) )
    {
      return 0LL;
    }
    else
    {
      *(_DWORD *)a4 = 33;
      return 3221225485LL;
    }
  }
  else
  {
    *(_DWORD *)a4 = 32;
  }
  return result;
}
