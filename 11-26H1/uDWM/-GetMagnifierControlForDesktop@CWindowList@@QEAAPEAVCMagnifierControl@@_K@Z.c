/*
 * XREFs of ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180035FDC
 * Callers:
 *     ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800357E0 (-InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x180036090 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 */

struct CMagnifierControl *__fastcall CWindowList::GetMagnifierControlForDesktop(CWindowList *this)
{
  __int64 Element; // rcx
  struct CMagnifierControl *result; // rax

  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement((char *)this + 8);
  result = 0LL;
  if ( Element )
    return *(struct CMagnifierControl **)(Element + 16);
  return result;
}
