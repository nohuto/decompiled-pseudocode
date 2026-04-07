/*
 * XREFs of ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000C1A4
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000C210 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx

  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v5 = a2[1];
  *a1 = *a2;
  v6 = (volatile signed __int32 *)a1[1];
  a1[1] = v5;
  if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
  }
  return a1;
}
