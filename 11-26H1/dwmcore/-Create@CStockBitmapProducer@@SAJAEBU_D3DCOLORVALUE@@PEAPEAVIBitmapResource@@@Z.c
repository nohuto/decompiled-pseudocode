/*
 * XREFs of ?Create@CStockBitmapProducer@@SAJAEBU_D3DCOLORVALUE@@PEAPEAVIBitmapResource@@@Z @ 0x1801CDD3C
 * Callers:
 *     ?Transparent@CDrawListBitmap@@SA?AV1@XZ @ 0x1800D2E3C (-Transparent@CDrawListBitmap@@SA-AV1@XZ.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 * Callees:
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x180039FBC (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C74FC (--1-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CStockBitmapProducer::Create(const struct _D3DCOLORVALUE *a1, struct IBitmapResource **a2)
{
  CCachedImageProducer *v4; // rax
  __int64 v5; // rdx
  CCachedImageProducer *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CCachedImageProducer *)MIDL_user_allocate(0x58uLL);
  v6 = v4;
  if ( v4 )
  {
    CCachedImageProducer::CCachedImageProducer(v4, v5);
    *((_QWORD *)v6 + 2) = &CStockBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v6 = &CStockBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *(struct _D3DCOLORVALUE *)((char *)v6 + 72) = *(const struct _D3DCOLORVALUE *)&a1->r;
    CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v6 + 8));
    *((_QWORD *)v6 + 3) = 0x100000001LL;
    *a2 = v6;
    v9 = 0LL;
    wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(&v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
