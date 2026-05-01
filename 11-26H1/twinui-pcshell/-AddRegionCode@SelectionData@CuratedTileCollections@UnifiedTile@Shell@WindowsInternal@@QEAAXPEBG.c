/*
 * XREFs of ?AddRegionCode@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEBG@Z @ 0x18031C72C
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18031C790 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1803F1F0C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Do_call @ 0x180678130 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Do_c.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::AddRegionCode(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const unsigned __int16 *a2)
{
  LPWSTR *v3; // rdx
  LPWSTR ppwsz; // [rsp+40h] [rbp+18h] BYREF

  ppwsz = 0LL;
  if ( SHStrDupW(a2, &ppwsz) >= 0 )
  {
    v3 = (LPWSTR *)*((_QWORD *)this + 3);
    if ( v3 == *((LPWSTR **)this + 4) )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(
        (_QWORD *)this + 2,
        (__int64)v3,
        (__int64 *)&ppwsz);
    }
    else
    {
      *v3 = ppwsz;
      *((_QWORD *)this + 3) += 8LL;
    }
    *(_BYTE *)this = 1;
  }
}
