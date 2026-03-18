/*
 * XREFs of ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@4@@Z @ 0x180260990
 * Callers:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z @ 0x18027E228 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(
        struct CVisualTree *a1,
        _QWORD *a2,
        CVisual *a3,
        unsigned __int64 *a4)
{
  void *v6; // r8
  unsigned int v8; // ebx
  char v9; // r14
  unsigned __int64 v10; // rdi
  CVisual *v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rcx
  int WorldTransform; // eax
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned int v22; // [rsp+28h] [rbp-E0h]
  void *v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+48h] [rbp-C0h]
  __int128 v25; // [rsp+58h] [rbp-B0h]
  __int128 v26; // [rsp+68h] [rbp-A0h]
  int v27; // [rsp+78h] [rbp-90h]
  _OWORD v28[4]; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+C8h] [rbp-40h]
  _BYTE v30[64]; // [rsp+D8h] [rbp-30h] BYREF
  int v31; // [rsp+118h] [rbp+10h]
  unsigned __int64 *v32; // [rsp+170h] [rbp+68h]

  v32 = a4;
  v6 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v31 = 0;
  if ( !*a2 )
    return v8;
  while ( 1 )
  {
    v11 = *(CVisual **)(a2[1] + 8 * v10);
    if ( v11 == a3 )
    {
      v12 = (__int64 *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a4, v10);
      v6 = 0LL;
      v13 = *v12;
      *(_QWORD *)v13 = 1065353216LL;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_DWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 20) = 1065353216LL;
      *(_QWORD *)(v13 + 28) = 0LL;
      *(_DWORD *)(v13 + 36) = 0;
      *(_QWORD *)(v13 + 40) = 1065353216LL;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_DWORD *)(v13 + 56) = 0;
      *(_DWORD *)(v13 + 60) = 1065353216;
      *(_BYTE *)(v13 + 65) &= 0xE9u;
      *(_BYTE *)(v13 + 65) |= 0x29u;
      *(_BYTE *)(v13 + 64) = -86;
      goto LABEL_10;
    }
    if ( !v9 )
    {
      WorldTransform = CVisual::GetWorldTransform(a3, a1, (struct CMILMatrix *)v30, 0LL, 0LL);
      v8 = WorldTransform;
      if ( WorldTransform < 0 )
      {
        v22 = 1089;
        goto LABEL_15;
      }
      if ( !CMILMatrix::Invert((CMILMatrix *)v30, v15, 0LL) )
      {
        v8 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, (unsigned int)v6, -2003304441, 0x444u, v6);
        return v8;
      }
      v9 = 1;
    }
    v29 = (int)v6;
    WorldTransform = CVisual::GetWorldTransform(v11, a1, (struct CMILMatrix *)v28, 0LL, (struct CMILMatrix *)v6);
    v8 = WorldTransform;
    if ( WorldTransform < 0 )
      break;
    *(_OWORD *)v23 = v28[0];
    v27 = v29;
    v24 = v28[1];
    v25 = v28[2];
    v26 = v28[3];
    CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CMILMatrix *)v30);
    v16 = (__int64 *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v32, v10);
    v6 = 0LL;
    v17 = v24;
    v18 = *v16;
    LODWORD(v16) = v27;
    *(_OWORD *)v18 = *(_OWORD *)v23;
    v19 = v25;
    *(_OWORD *)(v18 + 16) = v17;
    v20 = v26;
    *(_OWORD *)(v18 + 32) = v19;
    *(_OWORD *)(v18 + 48) = v20;
    *(_DWORD *)(v18 + 64) = (_DWORD)v16;
LABEL_10:
    if ( ++v10 >= *a2 )
      return v8;
    a4 = v32;
  }
  v22 = 1101;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, v22, 0LL);
  return v8;
}
