/*
 * XREFs of ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E2E9C
 * Callers:
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x18020BA98 (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x1802111F8 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?GetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027B660 (-GetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18027C0F8 (-SetScalarProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@M@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUTimeSpan@@@Z @ 0x18027C310 (-SetTimespanProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUTimeSpan@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??$?4VCGravityBounceAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravityBounceAccelerator@@@Z @ 0x18027B0D4 (--$-4VCGravityBounceAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravi.c)
 *     ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x18027B150 (--0CGravityBounceAccelerator@@QEAA@MM@Z.c)
 *     ??0CSpringAccelerator@@QEAA@MM@Z @ 0x18027B1EC (--0CSpringAccelerator@@QEAA@MM@Z.c)
 */

void __fastcall CNaturalAnimation::EnsureAccelerator(__int64 a1, int a2)
{
  __int64 v2; // rdi
  CSpringAccelerator *v3; // rbx
  int v5; // edx
  CSpringAccelerator *v6; // rax
  CGravityBounceAccelerator *v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 392;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 392) )
  {
    *(_DWORD *)(a1 + 400) = a2;
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v6 = (CSpringAccelerator *)operator new(0x28uLL);
      if ( v6 )
        v3 = CSpringAccelerator::CSpringAccelerator(v6, 20.0, 0.69999999);
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(v2, v3);
    }
    else
    {
      v7 = (CGravityBounceAccelerator *)operator new(0x38uLL);
      if ( v7 )
        v3 = CGravityBounceAccelerator::CGravityBounceAccelerator(v7, 10.0, 0.5);
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(v2, v3);
      *(_DWORD *)(*(_QWORD *)v2 + 48LL) = *(_DWORD *)(a1 + 220);
    }
  }
}
