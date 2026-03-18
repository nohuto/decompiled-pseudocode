/*
 * XREFs of ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180215AE4
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18025041C (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x180267014 (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x180267014 (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CFilterEffect::IsOpaque(CFilterEffect *this, const struct CVisual *a2)
{
  int v2; // eax
  bool v5; // cl
  int v6; // eax

  v2 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 4)) & 0xC;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 4)) & 0xC) & 0xC) == 4 )
  {
    v6 = (*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 232LL))(this);
    v5 = 0;
    if ( v6 )
    {
      if ( v6 == 2 )
        v5 = CFilterEffect::CheckInputsForOpacity(this, a2);
    }
    else
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (4 * (*((_DWORD *)this + 10) >> 2) - 4)) & 0xC;
  return v5;
}
