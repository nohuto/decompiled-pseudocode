/*
 * XREFs of ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800AA330
 * Callers:
 *     ??Yvector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@H@Z @ 0x1800A97D0 (--Yvector_iterator_nothrow@-$vector_range_nothrow@U-$IVectorView@PEAVWebAccount@Credentials@Secu.c)
 *     ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A9890 (-GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
        __int64 *a1,
        unsigned int a2)
{
  int *result; // rax
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rsi
  _DWORD *v8; // rdi

  result = (int *)a1[2];
  if ( *result >= 0 && a2 < *((_DWORD *)a1 + 2) )
  {
    v5 = *a1;
    v6 = a1 + 4;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*a1 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 4);
    v8 = (_DWORD *)a1[2];
    result = (int *)v7(v5, a2, v6);
    *v8 = (_DWORD)result;
  }
  return result;
}
