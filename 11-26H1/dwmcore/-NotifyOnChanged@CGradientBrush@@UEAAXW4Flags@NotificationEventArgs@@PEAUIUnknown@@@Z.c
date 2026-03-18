/*
 * XREFs of ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18015ABB0
 * Callers:
 *     ?SetEllipseCenter@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024AF98 (-SetEllipseCenter@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@Q.c)
 *     ?SetEllipseRadius@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024B008 (-SetEllipseRadius@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@Q.c)
 *     ?SetOriginOffset@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024C60C (-SetOriginOffset@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QE.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z @ 0x18015AD10 (-AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z.c)
 *     ?UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z @ 0x18021CF80 (-UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGradientBrush::NotifyOnChanged(__int64 a1, unsigned int a2, const struct IUnknown *a3)
{
  unsigned int v4; // ebp
  bool v6; // zf
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2 == 10 )
  {
    if ( a3 )
      CGradientBrush::UpdateStop((CGradientBrush *)a1, a3);
    v4 = 6;
  }
  v6 = *(_QWORD *)(a1 + 88) == 0LL;
  v12 = v4;
  if ( v6 )
  {
    if ( !a3 || a3 != (const struct IUnknown *)a1 )
      *(_QWORD *)(a1 + 88) = a3;
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      if ( v4 == 14 )
      {
        *(_DWORD *)(v7 + 40) = 0;
        DynArrayImpl<0>::ShrinkToSize(v7 + 16, 0x18u);
        *(_BYTE *)(v7 + 200) = 1;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)(a1 + 80));
      }
      else if ( v4 == 1 )
      {
        CBrushRenderingGraph::AdjustNotification(
          *(CBrushRenderingGraph **)(a1 + 80),
          (enum NotificationEventArgs::Flags *)&v12,
          (const struct CBrush *)a1);
        v4 = v12;
      }
    }
    v8 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 + 4)) & 0xC;
    if ( (((unsigned __int8)v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 + 4)) & 0xC) & 0xC) == 4
      && (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 184LL))(a1, v4, a1) )
    {
      v10 = (_QWORD *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)(a1 + 32));
      v11 = detail::pointer_buffer_impl<CResource *,0>::last((__int64 *)(a1 + 32));
      while ( v10 != (_QWORD *)v11 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 88LL))(a1, *v10++, v4, a1);
    }
    v9 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (4 * v9 - 4)) & 0xC;
  }
}
