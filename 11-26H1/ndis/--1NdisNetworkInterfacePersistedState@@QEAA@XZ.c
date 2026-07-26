/*
 * XREFs of ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x14008F360
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015DE10 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void __fastcall NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(void **this)
{
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(this + 1, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(this, 0LL);
}
