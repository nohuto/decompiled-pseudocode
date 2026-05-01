/*
 * XREFs of _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x1800126C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::DummyAsyncOperation::DummyAsyncOperation @ 0x180011784 (_anonymous_namespace_--DummyAsyncOperation--DummyAsyncOperation.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012830 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOp.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 *     _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180012DD0 (_anonymous_namespace_--DummyAsyncOperation--RuntimeClassInitialize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::StreamReference::OpenReadAsync(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  int v4; // eax
  int Interface; // ebx
  __int64 v6; // rcx
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned int *)(a1 + 72);
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 64) + 56LL))(
         *(_QWORD *)(a1 + 64),
         5LL,
         v3,
         &v13);
  Interface = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v4);
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)Interface;
  }
  *a2 = 0LL;
  v8 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    Interface = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)Interface);
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return (unsigned int)Interface;
  }
  v9 = anonymous_namespace_::DummyAsyncOperation::DummyAsyncOperation((__int64)v8);
  Interface = anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize(v9, &v13);
  if ( Interface < 0 )
  {
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v9);
    goto LABEL_13;
  }
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                v9,
                &GUID_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6,
                a2);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v9);
  if ( Interface < 0 )
    goto LABEL_13;
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
