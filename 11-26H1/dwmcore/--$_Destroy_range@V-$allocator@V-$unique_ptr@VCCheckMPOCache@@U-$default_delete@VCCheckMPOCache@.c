/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1801272E8
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180134D3C (--1CD3DDevice@@MEAA@XZ.c)
 *     ?ResetCheckMPOCache@CDeviceManager@@QEAAXXZ @ 0x1801CD538 (-ResetCheckMPOCache@CDeviceManager@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@2@_K1@Z @ 0x1801D815C (-_Change_array@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x180295EC4 (--$_Uninitialized_move@PEAV-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1802964E8 (--1_Reallocation_guard@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache.c)
 * Callees:
 *     ??1?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x1801273B8 (--1-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
