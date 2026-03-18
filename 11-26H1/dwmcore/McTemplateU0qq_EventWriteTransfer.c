/*
 * XREFs of McTemplateU0qq_EventWriteTransfer @ 0x18002E388
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1800AC724 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x180112BF4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DF110 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18023E170 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298480 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298CF0 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802A3460 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+90h] [rbp+18h] BYREF
  int v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  v5[3] = 4LL;
  v5[2] = &v6;
  v5[5] = 4LL;
  v5[4] = &v7;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, 3LL, v5);
}
