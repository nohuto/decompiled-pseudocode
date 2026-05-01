/*
 * XREFs of ?SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C3360
 * Callers:
 *     ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C7AE0 (-SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimati.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C39BC (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewElementBase::SetPosition(_DWORD *a1, Geometry::CRect *a2, unsigned int a3, __int64 a4)
{
  char v7; // r12
  __m128i *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, _DWORD *, Geometry::CRect *, int *); // rbx
  unsigned int v12; // eax
  int v13; // eax
  char v14; // bl
  __m128i v15; // xmm6
  int (__fastcall *v16)(_DWORD *, GUID *, IRawElementProviderSimple **); // rbx
  int v17; // ecx
  int v18; // edx
  HRESULT inited; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  int v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  VARIANT pvarg; // [rsp+50h] [rbp-B8h] BYREF
  VARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  IRecordInfo *v27; // [rsp+80h] [rbp-88h]
  VARIANT newValue; // [rsp+88h] [rbp-80h] BYREF
  VARIANT oldValue; // [rsp+A8h] [rbp-60h] BYREF
  DOUBLE prgn[4]; // [rsp+C8h] [rbp-40h] BYREF
  DOUBLE v31[4]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  *(_QWORD *)&pvarg.vt = a4;
  v7 = 0;
  LODWORD(pProvider) = 0;
  LOBYTE(v22[0]) = 1;
  v8 = (__m128i *)(a1 + 14);
  if ( !Geometry::operator==(a1 + 14, a2) )
  {
    v9 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)a1 + 384LL))(a1, &v24);
    v7 = 1;
    LODWORD(pProvider) = 1;
    v10 = *(_QWORD *)v9;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, Geometry::CRect *, int *))(**(_QWORD **)v9 + 56LL);
    v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 400LL))(a1);
    v13 = v11(v10, v12, a1, a2, v22);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAF,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v13);
LABEL_5:
      v14 = 1;
      goto LABEL_7;
    }
    if ( LOBYTE(v22[0]) )
      goto LABEL_5;
  }
  v14 = 0;
LABEL_7:
  if ( (v7 & 1) != 0 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  if ( v14 )
  {
    v15 = *v8;
    *v8 = *(__m128i *)a2;
    if ( Geometry::CRect::IsEmpty(a2)
      || !UiaClientsAreListening()
      || !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 168LL))(a1)
      || !(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 328LL))(a1) )
    {
      goto LABEL_24;
    }
    pProvider = 0LL;
    v16 = *(int (__fastcall **)(_DWORD *, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a1 + 376LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
    if ( v16(a1, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider) < 0 )
    {
LABEL_23:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
LABEL_24:
      CMultitaskingViewElementBase::_LayoutChildren(a1, a3, *(_QWORD *)&pvarg.vt);
      return;
    }
    v17 = _mm_cvtsi128_si32(v15);
    prgn[0] = (double)v17;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    prgn[1] = (double)v18;
    prgn[2] = (double)(_mm_cvtsi128_si32(_mm_srli_si128(v15, 8)) - v17);
    prgn[3] = (double)(_mm_cvtsi128_si32(_mm_srli_si128(v15, 12)) - v18);
    pvar.iVal = 0;
    v31[0] = (double)*(int *)a2;
    v31[1] = (double)*((int *)a2 + 1);
    v31[2] = (double)(*((_DWORD *)a2 + 2) - *(_DWORD *)a2);
    v31[3] = (double)(*((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1));
    pvarg.iVal = 0;
    inited = InitVariantFromDoubleArray(prgn, 4u, (VARIANT *)&pvar.decVal.8);
    v20 = retaddr;
    if ( inited >= 0 )
    {
      inited = InitVariantFromDoubleArray(v31, 4u, (VARIANT *)&pvarg.decVal.8);
      v20 = retaddr;
      if ( inited >= 0 )
      {
        *(_OWORD *)&newValue.vt = *(_OWORD *)&pvarg.decVal.Lo32;
        newValue.pRecInfo = *(IRecordInfo **)&pvar.vt;
        *(_OWORD *)&oldValue.vt = *(_OWORD *)&pvar.decVal.Lo32;
        oldValue.pRecInfo = v27;
        inited = UiaRaiseAutomationPropertyChangedEvent(pProvider, 30001, &oldValue, &newValue);
        v20 = retaddr;
        if ( inited >= 0 )
        {
LABEL_22:
          VariantClear((VARIANTARG *)&pvarg.decVal.8);
          VariantClear((VARIANTARG *)&pvar.decVal.8);
          goto LABEL_23;
        }
        v21 = 194LL;
      }
      else
      {
        v21 = 192LL;
      }
    }
    else
    {
      v21 = 191LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v20,
      (void *)v21,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_22;
  }
}
