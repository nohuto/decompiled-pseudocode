/*
 * XREFs of ?GetTargetView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1806C37B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetTargetView(CAppLayoutOperation *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx

  v2 = (struct IApplicationView **)((char *)this + 56);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 7);
    *a2 = *v2;
  }
  return 0LL;
}
