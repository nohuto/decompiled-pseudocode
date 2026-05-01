/*
 * XREFs of ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180542890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805414D4 (-IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x1805441A8 (-_SetWindowRgn@CDragVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::SetSite(CDragVisual *this, IUnknown *punk)
{
  bool v4; // si
  int *v5; // rdi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *ppvOut; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v4 = 0;
    if ( !punk )
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 17);
  }
  else
  {
    v4 = punk != 0LL;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)punk);
  if ( v4 )
  {
    ppvOut = 0LL;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           punk,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &ppvOut) >= 0 )
    {
      v5 = (int *)((char *)this + 192);
      if ( (*(int (__fastcall **)(void *, char *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, (char *)this + 192) >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, (char *)this + 208);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x152,
            (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)v6);
          *((_OWORD *)this + 13) = *(_OWORD *)v5;
        }
        SetWindowPos(
          *((HWND *)this + 19),
          0LL,
          *v5,
          *((_DWORD *)this + 49),
          *((_DWORD *)this + 50) - *v5,
          *((_DWORD *)this + 51) - *((_DWORD *)this + 49),
          0x14u);
        CDragVisual::_SetWindowRgn(this);
      }
    }
    IUnknown_GetScaleFactor((IUnknown *)ppvOut, (enum DEVICE_SCALE_FACTOR *)this + 71);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  }
  return 0LL;
}
