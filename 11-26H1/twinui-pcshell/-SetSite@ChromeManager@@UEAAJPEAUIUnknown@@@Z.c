/*
 * XREFs of ?SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z @ 0x1800522C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall ChromeManager::SetSite(IUnknown **this, struct IUnknown *a2)
{
  char *v2; // rbp
  bool v5; // si
  __int64 *v6; // r14
  IUnknown **v7; // rdi

  v2 = (char *)(this + 2);
  if ( this[2] )
  {
    v5 = 0;
    if ( !a2 )
    {
      v6 = (__int64 *)(this + 5);
      IUnknown_SetSite(this[5], 0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6);
      v7 = this + 6;
      IUnknown_SetSite(*v7, 0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v7);
      goto LABEL_6;
    }
  }
  else
  {
    v5 = a2 != 0LL;
  }
  v6 = (__int64 *)(this + 5);
  v7 = this + 6;
LABEL_6:
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v2, a2);
  if ( v5 )
  {
    IUnknown_SetSite((IUnknown *)*v6, a2);
    IUnknown_SetSite(*v7, a2);
  }
  return 0LL;
}
