/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18021A844
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ?GetPathValue@CExpressionValue@@QEBAPEBVCPathData@@XZ @ 0x18004F358 (-GetPathValue@CExpressionValue@@QEBAPEBVCPathData@@XZ.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18016E6E0 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ??$AreEqual@AEBUTimeSpan@@AEBU1@U?$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeSpan@@0@Z @ 0x180184CD0 (--$AreEqual@AEBUTimeSpan@@AEBU1@U-$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeS.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18018D7B0 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

bool __fastcall CExpressionValue::operator==(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // r8d
  char v5; // bl
  __int64 v7; // r8
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  const struct CPathData *PathValue; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  const struct CPathData *v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // rax

  v4 = *(_DWORD *)(a1 + 64);
  v5 = 0;
  if ( v4 != *(_DWORD *)(a2 + 64) )
    return v5;
  if ( !v4 )
    return 1;
  if ( v4 > 52 )
  {
    v20 = v4 - 69;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
        return operator==((float *)a1, (float *)a2);
      v22 = v21 - 1;
      if ( !v22 )
        return D2DQuaternion::operator==((float *)a1, (float *)a2);
      v23 = v22 - 33;
      if ( v23 )
      {
        if ( v23 != 161 )
          return v5;
        return memcmp_0((const void *)a1, (const void *)a2, 0x40uLL) == 0;
      }
      v24 = *(_QWORD *)a1 - *(_QWORD *)a2;
      if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
      {
        v24 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a2 + 8);
        if ( !v24 )
          v24 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a2 + 16);
      }
    }
    else
    {
      v24 = *(_QWORD *)a1 - *(_QWORD *)a2;
      if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
        v24 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a2 + 8);
    }
    return v24 == 0;
  }
  if ( v4 == 52 )
  {
    v19 = *(_QWORD *)a1 - *(_QWORD *)a2;
    if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
      v19 = *(unsigned int *)(a1 + 8) - (unsigned __int64)*(unsigned int *)(a2 + 8);
    return v19 == 0;
  }
  v7 = (unsigned int)(v4 - 11);
  if ( !(_DWORD)v7 )
  {
    PathValue = CExpressionValue::GetPathValue((CExpressionValue *)a1, a2, v7, a4);
    v18 = CExpressionValue::GetPathValue((CExpressionValue *)a2, v15, v16, v17);
    return CPathData::operator==((__int64)PathValue, (__int64)v18);
  }
  v8 = v7 - 6;
  if ( !v8 )
    return *(_BYTE *)a1 == *(_BYTE *)a2;
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *(float *)a1 != *(float *)a2 )
      return v5;
    return 1;
  }
  v10 = v9 - 17;
  if ( !v10 )
    return *(_QWORD *)a1 == *(_QWORD *)a2;
  if ( v10 == 7 )
    return ExpressionHelper::AreEqual<TimeSpan const &,TimeSpan const &,std::integral_constant<bool,1>>(
             (float *)a1,
             (float *)a2);
  return v5;
}
