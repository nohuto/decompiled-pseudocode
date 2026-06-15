/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800BAEF8
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800BB1D8 (--$_Uninitialized_move@PEAV-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixC.c)
 *     ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800BB6C8 (--1CProcessSubmixManager@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800BB790 (--1_Reallocation_guard@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppS.c)
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800BB890 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@2@_K1@Z @ 0x1800BCC60 (-_Change_array@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixCli.c)
 * Callees:
 *     ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1800BB678 (--1-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientContext@@@std@@@std.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
