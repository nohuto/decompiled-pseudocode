/*
 * XREFs of ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x180056D84
 * Callers:
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1801397DC (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsStale(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  PROPVARIANT v4; // rbx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 9);
  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_MMDEVAPI_ActiveTime,
         pvar) >= 0
    && LOWORD(pvar[0]) == 21 )
  {
    v4 = pvar[1];
  }
  PropVariantClear(pvar);
  LOBYTE(v3) = *((_QWORD *)this + 30) != (_QWORD)v4;
  return v3;
}
