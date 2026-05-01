/*
 * XREFs of ??_GData_t@_bstr_t@@AEAAPEAXI@Z @ 0x180157970
 * Callers:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1801575B4 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_bstr_t::Data_t *__fastcall _bstr_t::Data_t::`scalar deleting destructor'(
        OLECHAR **this,
        const struct std::nothrow_t *a2)
{
  OLECHAR *v3; // rcx
  OLECHAR *v4; // rcx

  v3 = *this;
  if ( v3 )
  {
    SysFreeString(v3);
    *this = 0LL;
  }
  v4 = this[1];
  if ( v4 )
  {
    operator delete(v4, a2);
    this[1] = 0LL;
  }
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return (_bstr_t::Data_t *)this;
}
