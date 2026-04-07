/*
 * XREFs of ??$_Set_ptr_rep_and_enable_shared@VCCachedBorderBrush@CWindowBorder@@@?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@AEAAXQEAVCCachedBorderBrush@CWindowBorder@@QEAV_Ref_count_base@1@@Z @ 0x18007A4B8
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000D360 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::shared_ptr<CWindowBorder::CCachedBorderBrush>::_Set_ptr_rep_and_enable_shared<CWindowBorder::CCachedBorderBrush>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rbx
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // r8
  std::_Ref_count_base *v7; // rcx

  *a1 = a2;
  a1[1] = a3;
  if ( a2 )
  {
    v3 = a2[1];
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
      v4 = (volatile signed __int32 *)a1[1];
      v5 = 0LL;
      v6 = 0LL;
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 3);
        v5 = a2;
        v6 = v4;
      }
      *a2 = v5;
      v7 = (std::_Ref_count_base *)a2[1];
      a2[1] = v6;
      if ( v7 )
        std::_Ref_count_base::_Decwref(v7);
      if ( v4 )
      {
        if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v4);
        }
      }
    }
  }
}
