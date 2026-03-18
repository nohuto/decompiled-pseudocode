/*
 * XREFs of ?Release@CRegion@@UEBAJXZ @ 0x1400E4B90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x14001D260 (-SetEmpty@CRegion@@UEAAXXZ.c)
 */

__int64 __fastcall CRegion::Release(volatile signed __int32 *P, struct REGION_CORE *a2)
{
  unsigned __int32 v3; // edi

  v3 = _InterlockedDecrement(P + 2);
  if ( !v3 && P )
  {
    *(_QWORD *)P = &CRegion::`vftable';
    CRegion::SetEmpty((CRegion *)P, a2);
    ExFreePoolWithTag((PVOID)P, 0);
  }
  return v3;
}
