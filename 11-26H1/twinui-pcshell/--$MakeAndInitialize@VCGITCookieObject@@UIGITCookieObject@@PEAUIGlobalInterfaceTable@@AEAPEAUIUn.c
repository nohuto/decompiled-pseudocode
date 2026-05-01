/*
 * XREFs of ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x180086C00
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180086A68 (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGITCookieObject@@QEAA@XZ @ 0x180086E78 (--0CGITCookieObject@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGITCookieObject,IGITCookieObject,IGlobalInterfaceTable *,IUnknown * &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  CGITCookieObject *v6; // rax
  CGITCookieObject *v7; // rax
  __int64 v8; // rbp
  CGITCookieObject *v9; // rdi
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CGITCookieObject *v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CGITCookieObject *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v6;
  if ( !v6 )
  {
    v12 = -2147024882;
LABEL_11:
    Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v15);
    return v12;
  }
  v7 = CGITCookieObject::CGITCookieObject(v6);
  v8 = *a3;
  v9 = v7;
  v10 = *a2;
  v15 = 0LL;
  if ( *((_QWORD *)v7 + 7) != v10 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v16 = *((_QWORD *)v9 + 7);
    *((_QWORD *)v9 + 7) = v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, _QWORD *))(**((_QWORD **)v9 + 7) + 24LL))(
          *((_QWORD *)v9 + 7),
          v8,
          &GUID_00000000_0000_0000_c000_000000000046,
          (_QWORD *)v9 + 6);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (int)"shell\\lib\\gitreglist.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(CGITCookieObject *))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_11;
  }
  v12 = (**(__int64 (__fastcall ***)(CGITCookieObject *, GUID *, _QWORD *))v9)(
          v9,
          &GUID_243c720f_5a91_4b39_88bb_c16e6ec1d313,
          a1);
  (*(void (__fastcall **)(CGITCookieObject *))(*(_QWORD *)v9 + 16LL))(v9);
  return v12;
}
