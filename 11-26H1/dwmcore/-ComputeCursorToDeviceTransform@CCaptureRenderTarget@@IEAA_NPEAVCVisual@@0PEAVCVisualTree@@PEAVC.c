/*
 * XREFs of ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x180256DFC
 * Callers:
 *     _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::operator() @ 0x180256B00 (_CCaptureRenderTarget--AddCursorInvalidRects_--_2_--_lambda_1_--operator().c)
 *     _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC (_CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2_--operator().c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

bool __fastcall CCaptureRenderTarget::ComputeCursorToDeviceTransform(
        CCaptureRenderTarget *this,
        struct CVisual *a2,
        struct CVisual *a3,
        struct CVisualTree *a4,
        struct CMILMatrix *a5)
{
  int WorldTransform; // eax
  __int64 v9; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  CTransform3D *v17; // rcx
  const struct CMILMatrix *Matrix; // rax
  void *v20[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int128 v22; // [rsp+58h] [rbp-B0h]
  __int128 v23; // [rsp+68h] [rbp-A0h]
  int v24; // [rsp+78h] [rbp-90h]
  _OWORD v25[4]; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+C8h] [rbp-40h]
  _OWORD v27[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v28; // [rsp+118h] [rbp+10h]

  v24 = 0;
  v26 = 0;
  WorldTransform = CVisual::GetWorldTransform(a3, a4, (struct CMILMatrix *)v20, 0LL, 0LL);
  v11 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, 0x5F6u, 0LL);
  }
  else
  {
    v27[0] = *(_OWORD *)v20;
    v27[1] = v21;
    v27[2] = v22;
    v27[3] = v23;
    v28 = v24;
    CMILMatrix::Invert((CMILMatrix *)v27, v9, v10);
    v12 = CVisual::GetWorldTransform(a2, a4, (struct CMILMatrix *)v25, 0LL, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x5FAu, 0LL);
    }
    else
    {
      *(_OWORD *)v20 = v25[0];
      v24 = v26;
      v21 = v25[1];
      v22 = v25[2];
      v23 = v25[3];
      CMILMatrix::Multiply((CMILMatrix *)v20, (const struct CMILMatrix *)v27);
      v13 = v24;
      v14 = v21;
      *(_OWORD *)a5 = *(_OWORD *)v20;
      v15 = v22;
      *((_OWORD *)a5 + 1) = v14;
      v16 = v23;
      *((_OWORD *)a5 + 2) = v15;
      *((_OWORD *)a5 + 3) = v16;
      *((_DWORD *)a5 + 16) = v13;
      v17 = (CTransform3D *)*((_QWORD *)this + 24);
      if ( v17 )
      {
        Matrix = CTransform3D::GetMatrix(v17, 0LL);
        CMILMatrix::Multiply(a5, Matrix);
      }
    }
  }
  return v11 >= 0;
}
