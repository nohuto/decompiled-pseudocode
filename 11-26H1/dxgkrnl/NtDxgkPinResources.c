/*
 * XREFs of NtDxgkPinResources @ 0x140387D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall NtDxgkPinResources(struct _D3DKMT_PINRESOURCES *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  struct DXGPROCESS *Current; // rax

  v2 = DxgkPinResourcesInternal(a1);
  if ( v2 == -1073741811 )
  {
    if ( byte_140167147 )
    {
      Current = DXGPROCESS::GetCurrent(v1);
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
      {
        DxgCreateLiveDumpWithWdLogs(403LL, 2062LL);
        byte_140167147 = 0;
      }
    }
  }
  return v2;
}
