/*
 * XREFs of ?RemoteDesktopsCollection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA?AV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@XZ @ 0x18066E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RemoteDesktopsCollection(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a2, (_QWORD *)(a1 + 136));
  return v2;
}
