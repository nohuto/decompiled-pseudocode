/*
 * XREFs of ?ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@@Z @ 0x18066E030
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x18066D8E8 (-CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::ExitCloudPC(
        void (__fastcall *a1)(char *a1),
        _QWORD *a2,
        const struct winrt::hstring *a3)
{
  void (__fastcall **v5)(char *); // rax
  volatile signed __int32 **v6; // r9
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  winrt::hstring::hstring((winrt::hstring *)v8, a3, (unsigned int)a3);
  v5 = (void (__fastcall **)(char *))std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                                       v9,
                                       a2);
  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection(a1, &v10, v5, v6);
  return 1;
}
