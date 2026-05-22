/*
 * XREFs of ??$As@UICUIComponentInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICUIComponentInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005C370
 * Callers:
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A7318 (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<ICUIComponentInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_ef2daa6b_70a1_714f_af3c_a61437d80866, a2);
}
