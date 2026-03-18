/*
 * XREFs of ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14042E234
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140008FB0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14032FCA8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1403C5AC8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 */

__int64 __fastcall DXGCONTEXT::DisplayOnlyPresent(
        struct _KTHREAD ***this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        unsigned int a4,
        struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6)
{
  __int64 v6; // rax
  unsigned int v11; // edx
  __int64 result; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // rcx
  struct _KTHREAD **v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // ecx
  D3DDDIFORMAT Format; // eax
  struct _KTHREAD **v22; // rax
  int v23; // r14d
  struct _KTHREAD **v24; // r8
  struct _KTHREAD *v25; // rcx
  struct _DXGKARG_DESCRIBEALLOCATION v26; // [rsp+50h] [rbp-89h] BYREF
  __int128 v27; // [rsp+80h] [rbp-59h]
  struct tagRECT v28; // [rsp+D0h] [rbp-9h] BYREF

  v6 = *((_QWORD *)a3 + 6);
  *(_QWORD *)&v28.left = 0LL;
  v11 = *(_DWORD *)(v6 + 4);
  if ( (v11 & 0x10) != 0 )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a3);
    result = 3223191814LL;
    WdLogGlobalForLineNumber = 1253;
    return result;
  }
  v13 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)this[2][237] + 395), (v11 >> 6) & 0xF);
  v14 = *((_QWORD *)a3 + 6);
  memset(&v26.Width, 0, 32);
  v26.Flags.Value = 1;
  v26.Rotation = -1;
  v27 = v13;
  v15 = *(void **)(v14 + 16);
  v16 = this[2];
  v26.hAllocation = v15;
  v17 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v16[2] + 2) + 3168LL), &v26);
  if ( v17 < 0 )
  {
    v18 = v17;
    WdLogSingleEntry5(
      2LL,
      v17,
      this,
      *((unsigned int *)a3 + 4),
      a3,
      (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF);
    v19 = *((_QWORD *)a3 + 6);
    WdLogGlobalForLineNumber = 1275;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
      v18,
      (__int64)this,
      *((unsigned int *)a3 + 4),
      (__int64)a3,
      ((unsigned __int64)*(unsigned int *)(v19 + 4) >> 6) & 0xF);
    return 3221225485LL;
  }
  if ( *(_QWORD *)&v26.Width != (_QWORD)v27 )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a3);
    WdLogGlobalForLineNumber = 1284;
    return 3223191557LL;
  }
  v20 = 22;
  Format = D3DDDIFMT_X8R8G8B8;
  if ( v26.Format != D3DDDIFMT_A8R8G8B8 )
    Format = v26.Format;
  if ( DWORD2(v27) != 21 )
    v20 = DWORD2(v27);
  if ( Format != v20 )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a3);
    WdLogGlobalForLineNumber = 1292;
    return 3223191557LL;
  }
  v22 = this[2];
  v28.right = v26.Width;
  v28.bottom = v26.Height;
  v23 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *((ADAPTER_DISPLAY **)v22[237] + 395),
          (struct DXGCONTEXT *)this,
          a4,
          a2,
          a5,
          a6,
          &v28);
  if ( v23 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v24 = this[2];
    v25 = v24[237];
    if ( v25 == *((struct _KTHREAD **)v24[2] + 2) )
      ADAPTER_DISPLAY::DisableOverlayPlanes(*((ADAPTER_DISPLAY **)v25 + 395), a4);
    DXGDEVICE::SetDisplayedPrimary(this[2], a4, a3, 0, 1);
  }
  return (unsigned int)v23;
}
