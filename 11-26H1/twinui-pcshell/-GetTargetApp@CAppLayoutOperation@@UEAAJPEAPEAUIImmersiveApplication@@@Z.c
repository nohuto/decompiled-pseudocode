/*
 * XREFs of ?GetTargetApp@CAppLayoutOperation@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1806C3760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetTargetApp(CAppLayoutOperation *this, struct IImmersiveApplication **a2)
{
  struct IImmersiveApplication **v2; // rbx
  __int64 result; // rax

  v2 = (struct IImmersiveApplication **)((char *)this + 48);
  *a2 = 0LL;
  result = 2147943568LL;
  if ( *((_QWORD *)this + 6) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 6);
    *a2 = *v2;
    return 0LL;
  }
  return result;
}
