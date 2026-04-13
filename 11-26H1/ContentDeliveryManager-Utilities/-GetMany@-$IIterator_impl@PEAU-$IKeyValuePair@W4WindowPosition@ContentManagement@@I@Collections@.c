/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@234@PEAI@Z @ 0x18009B4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *,1>,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>(
           a1,
           a2,
           a3,
           a4);
}
