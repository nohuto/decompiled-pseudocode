/*
 * XREFs of ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18025A0D8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18021888C (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 */

__int64 __fastcall CCpuClip::AddPrimitiveClip(CCpuClip *this, const struct CShape *a2, const struct CMILMatrix *a3)
{
  CShapePtr *v3; // rsi
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  struct CShape *v12; // rbx
  struct CShape *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CCpuClip *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v7 = CCpuClip::ConvertContextDependentClipToLocal(this), v8 = v7, v7 >= 0) )
  {
    v9 = *(_QWORD *)v3;
    v14 = 0LL;
    if ( v9 )
    {
      v11 = CShape::Combine(v9, (__int64)a2, (__int64)a2, (int *)a3, 1, &v14);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x58u, 0LL);
        return v8;
      }
    }
    else
    {
      v10 = CShape::CopyShape(a2, a3, &v14);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x4Eu, 0LL);
        return v8;
      }
    }
    v12 = v14;
    CShapePtr::~CShapePtr(v3);
    *(_QWORD *)v3 = v12;
    *((_BYTE *)v3 + 8) = 1;
    *((_BYTE *)this + 108) = 1;
    return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x48u, 0LL);
  return v8;
}
