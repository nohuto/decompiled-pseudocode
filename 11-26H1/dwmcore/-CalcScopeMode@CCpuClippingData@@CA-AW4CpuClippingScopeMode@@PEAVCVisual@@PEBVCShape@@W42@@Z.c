/*
 * XREFs of ?CalcScopeMode@CCpuClippingData@@CA?AW4CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W42@@Z @ 0x18005F190
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x18005F3B4 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClippingData::CalcScopeMode(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rdx
  unsigned int v7; // edi
  float v8; // xmm2_4
  __int64 v9; // rbx
  float *v11; // rdx
  char v12; // cl
  bool IsScopePreservingTransform; // al
  unsigned int v14; // ecx
  __int64 v15; // rax
  _BYTE *v16; // r8
  CTransform3D **v17; // r14
  __int64 v18; // rcx
  CTransform3D *v19; // r14
  const struct CMILMatrix *Matrix; // rax

  if ( !CCommonRegistryData::EnableCpuClipping || a3 == 4 )
    return 4LL;
  if ( a3 == 3 )
    return 3LL;
  v6 = *(_DWORD **)(a1 + 224);
  if ( (*v6 & 0x1000000) != 0 )
  {
    v15 = (unsigned int)v6[1];
    v16 = v6 + 2;
    v17 = 0LL;
    v18 = 0LL;
    if ( (_DWORD)v15 )
    {
      while ( *v16 != 8 )
      {
        v18 = (unsigned int)(v18 + 1);
        ++v16;
        if ( (unsigned int)v18 >= (unsigned int)v15 )
          goto LABEL_36;
      }
    }
    else
    {
LABEL_36:
      if ( (unsigned int)v18 >= (unsigned int)v15 )
        goto LABEL_29;
    }
    v17 = (CTransform3D **)((char *)&v6[2 * v18] + ((v15 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_29:
    v19 = *v17;
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v19 + 64LL))(v19, 148LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v19 + 64LL))(v19, 48LL) )
        goto LABEL_5;
      v19 = (CTransform3D *)*((_QWORD *)v19 + 11);
    }
    if ( !v19 )
      goto LABEL_5;
    Matrix = CTransform3D::GetMatrix(v19, (const struct D2D_SIZE_F *)(a1 + 140));
    if ( CCpuClippingData::IsScopePreservingTransform(Matrix) )
      goto LABEL_5;
    return 3LL;
  }
LABEL_5:
  v7 = 3 - (a2 != 0);
  if ( a3 == 2 )
    return v7;
  v8 = *(float *)(a1 + 120);
  if ( (*(float *)(a1 + 124) != 0.0 || *(float *)(a1 + 128) != 0.0 || v8 != 0.0) && v8 != 0.0 )
    return v7;
  v9 = *(_QWORD *)(a1 + 232);
  if ( !v9 )
    return 1LL;
  v11 = (float *)(a1 + 140);
  v12 = *(_BYTE *)(v9 + 40) & 1;
  if ( a1 != -140 )
  {
    if ( (*(_BYTE *)(v9 + 40) & 1) == 0
      && *(_BYTE *)(v9 + 156)
      && (*(float *)(v9 + 148) != *v11 || *(float *)(v9 + 152) != *(float *)(a1 + 144)) )
    {
      v12 = 1;
    }
    *(_QWORD *)(v9 + 148) = *(_QWORD *)v11;
  }
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v9 + 208LL))(v9, v11, v9 + 80);
    *(_DWORD *)(v9 + 40) &= ~1u;
  }
  IsScopePreservingTransform = CCpuClippingData::IsScopePreservingTransform((const struct CMILMatrix *)(v9 + 80));
  v14 = 1;
  if ( !IsScopePreservingTransform )
    return v7;
  return v14;
}
