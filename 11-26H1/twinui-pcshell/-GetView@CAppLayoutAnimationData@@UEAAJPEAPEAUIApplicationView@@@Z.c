/*
 * XREFs of ?GetView@CAppLayoutAnimationData@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1806C96F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAppLayoutAnimationData::GetView(CAppLayoutAnimationData *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IApplicationView **)((char *)this + 16);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 2);
    *a2 = *v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutanimationdata.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
}
