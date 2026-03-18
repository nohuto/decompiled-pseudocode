/*
 * XREFs of ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180166F34
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180167050 (--$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180167238 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18016CA20 (--$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 *v1; // rdi
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 i; // r9
  __int64 v7; // r9
  int v8; // r11d
  _BYTE v9[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v10; // [rsp+28h] [rbp-70h]
  __int64 v11; // [rsp+30h] [rbp-68h]
  unsigned int v12; // [rsp+38h] [rbp-60h]
  _BYTE v13[88]; // [rsp+40h] [rbp-58h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 2);
  v3 = 0LL;
LABEL_2:
  if ( (unsigned int)v3 >= *((_DWORD *)v1 + 2) )
    return 1;
  v4 = *v1;
  if ( (*(_DWORD *)(*v1 + 144 * v3 + 4) & 0xFFFFFFCC) == 0
    && *(_DWORD *)(v4 + 144 * v3) <= 1u
    && *(_DWORD *)(v4 + 144 * v3 + 44) <= 1u )
  {
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v9, (unsigned int)v3);
    for ( i = v10; ; i = v12 + v7 )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v13, (const struct D2D_MATRIX_3X2_F *)(i + 16));
      if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<0>(v13)
        || !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<0>(v13) )
      {
        break;
      }
      if ( v7 == v11 )
      {
        v3 = (unsigned int)(v8 + 1);
        goto LABEL_2;
      }
    }
  }
  return 0;
}
