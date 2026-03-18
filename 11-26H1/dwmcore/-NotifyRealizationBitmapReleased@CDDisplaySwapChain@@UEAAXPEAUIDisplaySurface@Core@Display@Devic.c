/*
 * XREFs of ?NotifyRealizationBitmapReleased@CDDisplaySwapChain@@UEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1801C23A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003638C (--$_Freenode@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_de.c)
 */

void __fastcall CDDisplaySwapChain::NotifyRealizationBitmapReleased(
        CDDisplaySwapChain *this,
        struct Windows::Devices::Display::Core::IDisplaySurface *a2)
{
  __int64 i; // rdx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 j; // rcx
  __int64 v8; // rcx

  for ( i = **((_QWORD **)this + 4); i != *((_QWORD *)this + 4); i = v6 )
  {
    v5 = *(__int64 **)(i + 16);
    v6 = *(_QWORD *)i;
    for ( j = *v5; j != v5[1]; j += 88LL )
    {
      if ( *(struct Windows::Devices::Display::Core::IDisplaySurface **)(j + 8) == a2 )
      {
        **(_QWORD **)(i + 8) = v6;
        v8 = *(_QWORD *)i;
        *(_QWORD *)(v8 + 8) = *(_QWORD *)(i + 8);
        --*((_QWORD *)this + 5);
        std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Freenode<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
          v8,
          i);
        break;
      }
    }
  }
}
