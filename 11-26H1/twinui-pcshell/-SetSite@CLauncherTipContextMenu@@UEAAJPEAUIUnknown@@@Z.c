/*
 * XREFs of ?SetSite@CLauncherTipContextMenu@@UEAAJPEAUIUnknown@@@Z @ 0x1800523A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherTipContextMenu::SetSite(CLauncherTipContextMenu *this, struct IUnknown *a2)
{
  bool v4; // di
  __int64 *v5; // rdi
  HMENU v6; // rcx
  HMENU v7; // rcx
  HWND v8; // rcx

  if ( *((_QWORD *)this + 2) )
  {
    v4 = 0;
    if ( !a2 )
    {
      v5 = (__int64 *)((char *)this + 136);
      if ( *((_QWORD *)this + 17) )
      {
        *((_BYTE *)this + 322) = 1;
        (*(void (__fastcall **)(__int64, GUID *, __int64, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, &GUID_NULL, -1LL, 0LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
      }
      v6 = (HMENU)*((_QWORD *)this + 41);
      if ( v6 )
      {
        DestroyMenu(v6);
        *((_QWORD *)this + 41) = 0LL;
      }
      v7 = (HMENU)*((_QWORD *)this + 42);
      if ( v7 )
      {
        DestroyMenu(v7);
        *((_QWORD *)this + 42) = 0LL;
      }
      v8 = (HWND)*((_QWORD *)this + 16);
      v4 = 0;
      if ( v8 )
      {
        DestroyWindow(v8);
        *((_QWORD *)this + 16) = 0LL;
      }
    }
  }
  else
  {
    v4 = a2 != 0LL;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((char *)this + 16, a2);
  if ( v4 )
    *((_BYTE *)this + 344) = (unsigned int)Mirror_IsThreadRTL() != 0;
  return 0LL;
}
