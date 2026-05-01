/*
 * XREFs of ?SetPosition@ApplicationViewOperation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1802A9A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ApplicationViewOperation::SetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition *a2)
{
  struct IApplicationViewPosition *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IApplicationViewPosition **)this + 8) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
    v5 = (struct IApplicationViewPosition *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
