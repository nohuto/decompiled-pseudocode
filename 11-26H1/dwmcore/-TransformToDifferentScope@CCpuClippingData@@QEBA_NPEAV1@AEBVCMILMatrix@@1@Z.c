/*
 * XREFs of ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800D1D84
 * Callers:
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800D1420 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x18005F3B4 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??$make_unique@VCMILMatrix@@$$V$0A@@std@@YA?AV?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@0@XZ @ 0x1800D1E70 (--$make_unique@VCMILMatrix@@$$V$0A@@std@@YA-AV-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILM.c)
 *     ?reset@?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@@@Z @ 0x1800D1F30 (-reset@-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

bool __fastcall CCpuClippingData::TransformToDifferentScope(
        CCpuClippingData *this,
        struct CCpuClippingData *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4)
{
  _QWORD *v4; // rsi
  struct CMILMatrix *v6; // rbx
  struct CMILMatrix **v10; // rax
  struct CMILMatrix *v11; // rdx
  bool v12; // di
  void *v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)((char *)a2 + 40);
  v6 = (struct CMILMatrix *)*((_QWORD *)a2 + 5);
  if ( v6 )
  {
    *v4 = 0LL;
  }
  else
  {
    v10 = (struct CMILMatrix **)std::make_unique<CMILMatrix,,0>(&v14);
    v6 = *v10;
    *v10 = 0LL;
    if ( v14 )
      operator delete(v14, 0x44uLL);
  }
  if ( CCpuClippingData::CalcScopeTransformFromWorld(a3, a4, v6) && CCpuClippingData::IsScopePreservingTransform(v6) )
  {
    v11 = v6;
    v6 = 0LL;
    std::unique_ptr<CMILMatrix>::reset(v4, v11);
    *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
    *((_DWORD *)a2 + 9) = *((_DWORD *)this + 9);
    *((_QWORD *)a2 + 6) = 0LL;
    *((_BYTE *)a2 + 64) = *((_BYTE *)this + 64);
    *(_WORD *)((char *)a2 + 65) = 0;
    *((_BYTE *)a2 + 67) = 0;
  }
  v12 = *v4 != 0LL;
  if ( v6 )
    operator delete(v6, 0x44uLL);
  return v12;
}
