/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1402DE9F4
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x14005793C (--$DIFF@H@@YAHHH@Z.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DEB90 (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402DEEDC (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  const struct _D3DKMDT_2DREGION *v8; // rbx
  UINT cy; // edx
  unsigned int v10; // ecx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // ecx
  bool v15; // sf
  bool v16; // of
  int v18; // r8d
  int ScaledAspectRatio; // ebx
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax

  v8 = *(const struct _D3DKMDT_2DREGION **)(120LL * a2 + a1 + 16);
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1790;
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1791;
  }
  cy = v8[14].cy;
  v10 = 0;
  if ( !cy || (*(_QWORD *)v8 & 0x8000000100LL) == 0 )
  {
LABEL_6:
    if ( (v8->cx & 0x100LL) == 0 )
      return v10;
    v11 = v8[12].cx * (unsigned __int64)v8[12].cy;
    v12 = v11 - *(unsigned int *)(a3 + 76) * (unsigned __int64)*(unsigned int *)(a3 + 80);
    if ( v12 < 0 )
      v12 = *(unsigned int *)(a3 + 76) * (unsigned __int64)*(unsigned int *)(a3 + 80) - v11;
    v13 = v11 - *(unsigned int *)(a4 + 76) * (unsigned __int64)*(unsigned int *)(a4 + 80);
    if ( (__int64)(*(unsigned int *)(a4 + 76) * (unsigned __int64)*(unsigned int *)(a4 + 80) - v11) > 0 )
      v13 = *(unsigned int *)(a4 + 76) * (unsigned __int64)*(unsigned int *)(a4 + 80) - v11;
    if ( v12 == v13 )
    {
      ScaledAspectRatio = BmlGetScaledAspectRatio(v8 + 12);
      v20 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a3 + 76));
      v21 = DIFF<int>(v20, ScaledAspectRatio);
      v22 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a4 + 76));
      v23 = DIFF<int>(v22, ScaledAspectRatio);
      if ( v23 <= v21 )
      {
        v14 = 0;
        v16 = __OFSUB__(v23, v21);
        v15 = v23 - v21 < 0;
        goto LABEL_14;
      }
    }
    else if ( v12 >= v13 )
    {
      v14 = 0;
      v16 = __OFSUB__(v13, v12);
      v15 = v13 - v12 < 0;
LABEL_14:
      LOBYTE(v14) = v15 == v16;
      return (unsigned int)(v14 - 1);
    }
    return 1;
  }
  v18 = *(_DWORD *)(a3 + 96);
  if ( (v18 == cy) == (*(_DWORD *)(a4 + 96) == cy) )
  {
    v10 = 0;
    goto LABEL_6;
  }
  v10 = -1;
  if ( v18 == cy )
    return 1;
  return v10;
}
