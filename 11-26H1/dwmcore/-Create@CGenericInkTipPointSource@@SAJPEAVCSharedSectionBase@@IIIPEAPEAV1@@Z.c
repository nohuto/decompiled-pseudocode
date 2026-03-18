/*
 * XREFs of ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180288CEC
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801A5D20 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180219DBC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A5C3C (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x180288E48 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSectionBase *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  char *v9; // rax
  CGenericInkTipPointSource *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  volatile signed __int32 *v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = (char *)MIDL_user_allocate(0x30uLL);
  v10 = (CGenericInkTipPointSource *)v9;
  if ( !v9 )
  {
    v12 = -2147024882;
    v16 = 0LL;
    v13 = 2147942414LL;
    v14 = 14LL;
    goto LABEL_6;
  }
  *((_QWORD *)v9 + 1) = 0LL;
  *((_QWORD *)v9 + 5) = 0LL;
  *(_QWORD *)v9 = &CGenericInkTipPointSource::`vftable';
  *((_QWORD *)v9 + 2) = 0LL;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_QWORD *)v9 + 4) = 0LL;
  v16 = (volatile signed __int32 *)v9;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 8));
  v11 = CGenericInkTipPointSource::Initialize(v10, a1, a2, a3, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = (unsigned int)v11;
    v14 = 20LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)v13);
    goto LABEL_7;
  }
  v12 = 0;
  v16 = 0LL;
  *a5 = v10;
LABEL_7:
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v16);
  return v12;
}
