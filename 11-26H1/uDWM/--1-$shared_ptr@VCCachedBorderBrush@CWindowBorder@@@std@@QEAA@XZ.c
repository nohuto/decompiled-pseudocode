/*
 * XREFs of ??1?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@XZ @ 0x18000D024
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::GetBorderBrush_::_1_::dtor$0 @ 0x1800E6EB0 (_CWindowBorder--CCachedBorderBrush--GetBorderBrush_--_1_--dtor$0.c)
 *     _CWindowBorder::OnGraphicsDeviceLost_::_1_::dtor$0 @ 0x1800E99D6 (_CWindowBorder--OnGraphicsDeviceLost_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::shared_ptr<CWindowBorder::CCachedBorderBrush>::~shared_ptr<CWindowBorder::CCachedBorderBrush>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v1);
    }
  }
}
