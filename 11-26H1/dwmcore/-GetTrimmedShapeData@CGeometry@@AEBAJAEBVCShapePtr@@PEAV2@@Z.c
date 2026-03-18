/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18004FD7C
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18004FC1C (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180050318 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x180051B20 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, CShape **a2, struct CShapePtr *a3)
{
  struct CPathData *v4; // rdi
  struct CPathData *v5; // rbx
  unsigned int v8; // r14d
  CShape *v9; // rsi
  int SimplifiedPathData; // eax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  struct CPathData *v15; // [rsp+30h] [rbp-D0h] BYREF
  struct CPathData *v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[400]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v8 = 0;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v17);
  v9 = *a2;
  if ( v9 )
  {
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(&v16);
    SimplifiedPathData = CShape::GetSimplifiedPathData(v9, &v16);
    v8 = SimplifiedPathData;
    if ( SimplifiedPathData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SimplifiedPathData, 0x120u, 0LL);
      v4 = v16;
    }
    else
    {
      Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(&v15);
      v4 = v16;
      v11 = CTrimPathOperation::Trim(
              (CTrimPathOperation *)v17,
              v16,
              *((float *)this + 30),
              *((float *)this + 31),
              *((float *)this + 32),
              &v15);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x121u, 0LL);
      }
      else
      {
        v12 = MIDL_user_allocate(0x18uLL);
        v13 = v12;
        if ( v12 )
        {
          v12[1] = 0LL;
          v5 = v15;
          *v12 = &CPathSegmentsShape::`vftable';
          v12[2] = v5;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v12 + 2);
          CShapePtr::~CShapePtr(a3);
          *(_QWORD *)a3 = v13;
          *((_BYTE *)a3 + 8) = 1;
          goto LABEL_6;
        }
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x124u, 0LL);
      }
      v5 = v15;
    }
  }
LABEL_6:
  std::vector<unsigned char>::_Tidy(v17);
  if ( v5 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
