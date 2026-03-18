/*
 * XREFs of ??_ECResourceWeakRef@@UEAAPEAXI@Z @ 0x18019DE90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18019DEE0 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CResourceWeakRef *__fastcall CResourceWeakRef::`vector deleting destructor'(CResourceWeakRef *this, char a2)
{
  std::vector<CDataSourceReader *>::_Tidy((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
