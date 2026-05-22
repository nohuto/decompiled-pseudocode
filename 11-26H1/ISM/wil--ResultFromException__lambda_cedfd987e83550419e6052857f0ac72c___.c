/*
 * XREFs of wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___ @ 0x1801939A0
 * Callers:
 *     ?s_NotifyDeviceChanged@PenInterface@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180194A30 (-s_NotifyDeviceChanged@PenInterface@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800812E8 (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x1801942C4 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x1801949CC (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___(__int64 a1)
{
  wil *v2; // rcx

  if ( **(_DWORD **)a1 == 2 )
  {
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(**(_QWORD **)(a1 + 8) + 56LL),
      (void *)0xFFFFFFFFFFFFFFFFLL);
  }
  else if ( **(_DWORD **)a1 == 3 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
      **(_QWORD **)(a1 + 8) + 64LL,
      0LL);
    try
    {
      PenInterface::Open(**(PenInterface ***)(a1 + 8));
    }
    catch ( ... )
    {
      return (unsigned int)wil::ResultFromCaughtException(v2);
    }
  }
  return 0LL;
}
