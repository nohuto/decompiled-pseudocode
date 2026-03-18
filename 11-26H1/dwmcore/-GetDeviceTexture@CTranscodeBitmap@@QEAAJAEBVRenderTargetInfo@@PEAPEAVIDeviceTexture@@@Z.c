/*
 * XREFs of ?GetDeviceTexture@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B2754
 * Callers:
 *     ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0 (-GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1AEC (-GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTranscodeBitmap::GetDeviceTexture(
        CTranscodeBitmap *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  struct IDeviceTexture *v6; // rcx
  int SecondaryDeviceTexture; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *a2 == *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 64LL))(
                           *((_QWORD *)this + 2),
                           &v11) )
  {
    v6 = (struct IDeviceTexture *)((*((_QWORD *)this + 2) + 120LL) & -(__int64)(*((_QWORD *)this + 2) != 0LL));
    *a3 = v6;
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v6 + 8LL))(v6);
    return 0LL;
  }
  SecondaryDeviceTexture = CTextureCollection::GetSecondaryDeviceTexture(*((__int64 ***)this + 3), a2, a3);
  v9 = SecondaryDeviceTexture;
  if ( SecondaryDeviceTexture >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x86,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\transcodebitmap.cpp",
    (const char *)(unsigned int)SecondaryDeviceTexture);
  return v9;
}
