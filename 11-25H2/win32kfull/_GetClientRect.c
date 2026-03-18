/*
 * XREFs of _GetClientRect @ 0x14004BA3C
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1400239A8 (EtwTraceLayoutChangeStop.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x14018718C (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // rbx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D )
  {
    v7 = *(_QWORD *)(GetDispInfo() + 104);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    result = GetMonitorRectForDpi(&v9, v7, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    *(_OWORD *)a2 = v9;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 104);
    result = *(_QWORD *)(a1 + 40);
    v5 = *(_DWORD *)(result + 108);
    v6 = *(_DWORD *)(result + 104);
    *(_DWORD *)a2 -= v6;
    *(_DWORD *)(a2 + 8) -= v6;
    *(_DWORD *)(a2 + 12) -= v5;
    *(_DWORD *)(a2 + 4) -= v5;
  }
  return result;
}
