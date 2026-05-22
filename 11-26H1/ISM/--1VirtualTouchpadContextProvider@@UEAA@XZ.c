/*
 * XREFs of ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x1801A5620
 * Callers:
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x1801A56B0 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180046678 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall VirtualTouchpadContextProvider::~VirtualTouchpadContextProvider(VirtualTouchpadContextProvider *this)
{
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)this + 16);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SystemContextProvider::~SystemContextProvider(this);
}
