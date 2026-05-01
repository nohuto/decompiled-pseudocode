/*
 * XREFs of ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1806777AC
 * Callers:
 *     ??0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x180677560 (--0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 * Callees:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x180157914 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D77C4 (-_com_issue_error@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall _bstr_t::operator=(volatile signed __int32 **a1, const unsigned __int16 *a2)
{
  _bstr_t::Data_t *v4; // rax

  if ( !a2 || !*a1 || *(const unsigned __int16 **)*a1 != a2 )
  {
    _bstr_t::_Free(a1, (unsigned int)a2);
    v4 = (_bstr_t::Data_t *)operator new(0x18uLL);
    if ( v4 )
      v4 = _bstr_t::Data_t::Data_t(v4, a2);
    *a1 = (volatile signed __int32 *)v4;
    if ( !v4 )
      _com_issue_error((char *)0x8007000ELL);
  }
  return a1;
}
