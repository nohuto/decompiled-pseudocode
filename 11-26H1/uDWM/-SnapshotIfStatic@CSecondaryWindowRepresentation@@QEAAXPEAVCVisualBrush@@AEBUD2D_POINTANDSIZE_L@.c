/*
 * XREFs of ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCVisualBrush@@AEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BF784
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800BF8D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSecondaryWindowRepresentation::SnapshotIfStatic(
        CSecondaryWindowRepresentation *this,
        struct CVisualBrush *a2,
        const struct D2D_POINTANDSIZE_L *a3)
{
  struct CWindowData *RepresentationWindowData; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // r8d
  __int64 v10; // rax
  const wchar_t *v11; // rax
  __int64 v12; // rcx
  int v13; // ecx
  _BYTE v14[16]; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]

  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
  if ( *((_DWORD *)this + 18) != 3
    && ((*((_BYTE *)RepresentationWindowData + 740) & 8) != 0 || (*((_DWORD *)this + 10) & 0x200) != 0) )
  {
    CVisualBrush::FreezeImpl((__int64)a2, 1u);
    v7 = *(_QWORD *)a2;
    v8 = *((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    *(_OWORD *)((char *)this + 232) = *(_OWORD *)a3;
    CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
    *((_BYTE *)this + 161) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v10 = *((_QWORD *)this + 4);
      if ( v10 )
        v11 = *(const wchar_t **)(v10 + 16);
      else
        v11 = 0LL;
      if ( v11 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v11[v12] );
        v13 = 2 * v12 + 2;
      }
      else
      {
        v13 = 10;
        v11 = L"NULL";
      }
      v15 = v11;
      v16 = v13;
      v17 = 0;
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmSecondaryWindowBrushSnapshot_Info,
        v9,
        2,
        (__int64)v14);
    }
  }
}
