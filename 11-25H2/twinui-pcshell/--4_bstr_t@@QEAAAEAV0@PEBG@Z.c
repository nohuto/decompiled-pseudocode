/*
 * XREFs of ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1806518A8
 * Callers:
 *     ??0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x18065165C (--0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 * Callees:
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x18016AB88 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18016ABE0 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802DEAD4 (-_com_issue_error@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_bstr_t *__fastcall _bstr_t::operator=(_bstr_t *a1, const struct std::nothrow_t *a2)
{
  _bstr_t::Data_t *v4; // rax

  if ( !a2 || !*(_QWORD *)a1 || **(const struct std::nothrow_t ***)a1 != a2 )
  {
    _bstr_t::_Free(a1, a2);
    v4 = (_bstr_t::Data_t *)operator new(0x18uLL);
    if ( v4 )
      v4 = _bstr_t::Data_t::Data_t(v4, (const unsigned __int16 *)a2);
    *(_QWORD *)a1 = v4;
    if ( !v4 )
      _com_issue_error((char *)0x8007000ELL);
  }
  return a1;
}
