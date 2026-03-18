/*
 * XREFs of ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ @ 0x1801CE7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801CE8F8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CPositionMotion::CalculateNaturalEndpoint(CPositionMotion *this)
{
  float v2; // xmm6_4
  float v3; // xmm0_4

  v2 = *((float *)this + 31) / *((float *)this + 28);
  v3 = (*(float (__fastcall **)(CPositionMotion *))(*(_QWORD *)this + 40LL))(this);
  return (float)((float)((float)(CPositionMotion::UnboundedInertiaPanningAtTime(this, v3) + *((float *)this + 17))
                       - *((float *)this + 30))
               * v2)
       + *((float *)this + 30);
}
