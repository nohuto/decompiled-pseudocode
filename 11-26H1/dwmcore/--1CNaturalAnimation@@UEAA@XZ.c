/*
 * XREFs of ??1CNaturalAnimation@@UEAA@XZ @ 0x18027B2EC
 * Callers:
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x180246A50 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNaturalAnimation::~CNaturalAnimation(CNaturalAnimation *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  v2 = *((_QWORD *)this + 49);
  if ( v2 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 48);
  CBaseExpression::~CBaseExpression(this);
}
