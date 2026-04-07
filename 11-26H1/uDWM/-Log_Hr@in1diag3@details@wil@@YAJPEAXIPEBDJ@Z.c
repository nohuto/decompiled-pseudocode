/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180084EE8
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800254F0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180089634 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18008C6A0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x180084F20 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, int a3, const char *a4)
{
  unsigned int v4; // ebx
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((int)this, (int)a2, a3, 0, 0LL, retaddr, v6);
  return v4;
}
