/*
 * XREFs of DIALOGSESSION_rundown @ 0x180102EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?attach@?$com_ptr_t@VDialogSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVDialogSession@@@Z @ 0x1800BFB60 (-attach@-$com_ptr_t@VDialogSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVDialogSession@@@Z.c)
 */

__int64 __fastcall DIALOGSESSION_rundown(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  wil::com_ptr_t<DialogSession,wil::err_returncode_policy>::attach(&v2, a1);
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v2);
}
