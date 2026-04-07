/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D09C
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D848 (--$_Uninitialized_move@PEAV-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator@V-$Co.c)
 *     ??1CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E334 (--1CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009E5D4 (--1_Reallocation_guard@-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@_K1@Z @ 0x1800A4B60 (-_Change_array@-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 *     ?_RemoveVisuals@CCaptureManager@@AEAAXAEAV?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A5554 (-_RemoveVisuals@CCaptureManager@@AEAAXAEAV-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Micr.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(
        CBaseObject **a1,
        CBaseObject **a2)
{
  CBaseObject **v3; // rbx
  CBaseObject *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = CBaseObject::Release(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
