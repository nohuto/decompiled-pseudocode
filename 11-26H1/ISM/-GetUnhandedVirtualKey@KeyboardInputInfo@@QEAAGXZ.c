/*
 * XREFs of ?GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ @ 0x18019B7F8
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007EF50 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B5530 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeyboardInputInfo::GetUnhandedVirtualKey(KeyboardInputInfo *this)
{
  if ( (unsigned __int16)(*((_WORD *)this + 30) - 160) > 5u )
    return *((_WORD *)this + 30);
  else
    return (*((unsigned __int16 *)this + 30) - 160) / 2 + 16;
}
