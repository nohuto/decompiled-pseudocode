/*
 * XREFs of ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18004FC1C
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18004FD7C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathData(CShape *this, struct CPathData **a2)
{
  struct CPathData *v2; // rax
  unsigned int v3; // esi
  signed __int64 v6; // rbx
  struct CPathData *v7; // rcx
  signed __int64 v8; // rcx
  __int64 (__fastcall *v10)(CShape *, struct CPathData **); // rbx
  int v11; // eax
  struct CPathData *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0;
  v12 = 0LL;
  if ( !*((_QWORD *)this + 1) )
  {
    v10 = *(__int64 (__fastcall **)(CShape *, struct CPathData **))(*(_QWORD *)this + 96LL);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(&v12);
    v11 = v10(this, &v12);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x456u, 0LL);
      v8 = (signed __int64)v12;
      goto LABEL_8;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, (signed __int64)v12, 0LL) )
    {
      v2 = v12;
    }
    else
    {
      v2 = 0LL;
      v12 = 0LL;
    }
  }
  v6 = *((_QWORD *)this + 1);
  if ( v2 != (struct CPathData *)v6 )
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 1));
      v2 = v12;
    }
    v7 = v2;
    v12 = (struct CPathData *)v6;
    v2 = (struct CPathData *)v6;
    if ( v7 )
    {
      (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v7 + 16LL))(v7);
      v2 = v12;
    }
  }
  v8 = 0LL;
  *a2 = v2;
LABEL_8:
  if ( v8 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v3;
}
