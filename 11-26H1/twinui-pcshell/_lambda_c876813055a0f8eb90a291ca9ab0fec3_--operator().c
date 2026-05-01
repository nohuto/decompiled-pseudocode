/*
 * XREFs of _lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator() @ 0x18055CFE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___::Run @ 0x180562170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     CreationThreadDispatcher::RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___ @ 0x18055BB60 (CreationThreadDispatcher--RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___.c)
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f__0 @ 0x18055C01C (_lambda_93656037d821f0cf4f10769c2d148d9f_--_lambda_93656037d821f0cf4f10769c2d148d9f__0.c)
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_ @ 0x18055C7B0 (_lambda_93656037d821f0cf4f10769c2d148d9f_--__lambda_93656037d821f0cf4f10769c2d148d9f_.c)
 *     ??1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ @ 0x18055CA88 (--1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ.c)
 *     ?Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDCompositionDevice@@@Z @ 0x18067B15C (-Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDComposition.c)
 *     ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18067B514 (-LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator()(__int64 a1)
{
  __int64 *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  HSTRING *v6; // rax
  HSTRING v7; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  int v9; // eax
  UINT32 length; // [rsp+68h] [rbp-49h] BYREF
  struct IDCompositionVisual *v12; // [rsp+70h] [rbp-41h] BYREF
  struct tagSIZE v13; // [rsp+78h] [rbp-39h] BYREF
  __int128 v14; // [rsp+80h] [rbp-31h] BYREF
  __int64 v15; // [rsp+90h] [rbp-21h]
  __int64 v16[12]; // [rsp+98h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v12 = 0LL;
  v13 = 0LL;
  length = 0;
  v14 = 0LL;
  v15 = 0LL;
  v2 = (__int64 *)(a1 + 56);
  v3 = ImageLoaders::CDCompVisualImageLoader::Initialize(
         (ImageLoaders::CDCompVisualImageLoader *)&v14,
         *(struct ID2D1DeviceContext **)(a1 + 48),
         *(struct IDCompositionDevice **)(a1 + 56));
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1064LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_12;
  }
  v6 = *(HSTRING **)(a1 + 80);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(v7, &length);
  v3 = ImageLoaders::CDCompVisualImageLoader::LoadImageByPath(
         (ImageLoaders::CDCompVisualImageLoader *)&v14,
         StringRawBuffer,
         &v13,
         &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1065LL;
    goto LABEL_8;
  }
  lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f__0(
    (__int64)v16,
    (_QWORD *)a1,
    &v13,
    (_OWORD *)(a1 + 8),
    (_OWORD *)(a1 + 24),
    (__int64 *)&v12,
    v2,
    (__int64 *)(a1 + 64),
    (_QWORD *)(a1 + 72),
    *(_DWORD *)(a1 + 96),
    (__int64 *)(a1 + 104));
  v9 = CreationThreadDispatcher::RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___(*(_QWORD *)(a1 + 40), (__int64)v16);
  v4 = v9;
  if ( v9 >= 0 )
  {
    lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_(v16);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x463,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
    lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_(v16);
  }
LABEL_12:
  ImageLoaders::CDCompVisualImageLoader::~CDCompVisualImageLoader((ImageLoaders::CDCompVisualImageLoader *)&v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return v4;
}
