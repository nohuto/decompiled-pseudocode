/*
 * XREFs of ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x140070290
 * Callers:
 *     ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x140282A70 (-DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A928C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGADAPTER::RemovePending(DXGADAPTER *this)
{
  return *((_DWORD *)this + 50) == 5 || *((_DWORD *)this + 50) == 6;
}
