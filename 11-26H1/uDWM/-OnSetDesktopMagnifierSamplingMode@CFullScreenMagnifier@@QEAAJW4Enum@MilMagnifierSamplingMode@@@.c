/*
 * XREFs of ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800B513C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18007761C (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 48) = 0;
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 48) = 2;
  v3 = CVisual::SetSamplingMode(*(_QWORD *)(a1 + 16));
  v4 = v3;
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15A,
      (int)"clientcore\\windows\\dwm\\udwm\\fullscreenmagnifier.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
