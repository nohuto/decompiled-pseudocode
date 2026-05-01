/*
 * XREFs of ??0?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@QEAA@XZ @ 0x180547980
 * Callers:
 *     ??0?$RuntimeClass@U?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@234@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180547AAC (--0-$RuntimeClass@U-$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@U-$IIterable@PEA.c)
 * Callees:
 *     ??0?$IMap_impl@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1804FCB44 (--0-$IMap_impl@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *__fastcall Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>::IMap<HSTRING__ *,HSTRING__ *>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IMap_impl<HSTRING__ *,HSTRING__ *>::IMap_impl<HSTRING__ *,HSTRING__ *>(a1);
  result = v1;
  *v1 = &Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>::`vftable';
  return result;
}
