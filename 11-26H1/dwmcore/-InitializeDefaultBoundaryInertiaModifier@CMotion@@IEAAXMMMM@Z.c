/*
 * XREFs of ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18028BEC8
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x1801CE890 (-AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BoundaryFromValue@@YA?AW4Boundary@@MMM@Z @ 0x1801BC72C (-BoundaryFromValue@@YA-AW4Boundary@@MMM@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1801D8B60 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMotion::InitializeDefaultBoundaryInertiaModifier(CMotion *this, float a2, float a3, float a4, int a5)
{
  int v6; // eax
  __int64 v7; // rcx
  BOOL v8; // edx
  float v9; // xmm4_4
  __int64 (__fastcall ***v10)(_QWORD); // rbx
  int v11; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v12)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v6 = BoundaryFromValue(a2, *((float *)this + 22), *((float *)this + 15));
  v7 = *((_QWORD *)this + 1);
  v8 = *((_DWORD *)this + 9) == 2;
  v11 = a5;
  *((_DWORD *)this + 24) = v6;
  CScalarForce::Initialize(v7, v8, v9, a3, v11);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  v12 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 1);
  v10 = v12;
  *((_DWORD *)this + 8) = 1114636288;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v12);
  v12 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v10;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v12);
}
