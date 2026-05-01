/*
 * XREFs of ?GetAddress@_bstr_t@@QEAAPEAPEAGXZ @ 0x180676E68
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801571EC (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 * Callees:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D77C4 (-_com_issue_error@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int16 **__fastcall _bstr_t::GetAddress(volatile signed __int32 **this, unsigned int a2)
{
  unsigned __int16 **result; // rax

  _bstr_t::_Free(this, a2);
  result = (unsigned __int16 **)operator new(0x18uLL);
  if ( result )
  {
    result[1] = 0LL;
    *((_DWORD *)result + 4) = 1;
    *result = 0LL;
  }
  *this = (volatile signed __int32 *)result;
  if ( !result )
    _com_issue_error((char *)0x8007000ELL);
  return result;
}
