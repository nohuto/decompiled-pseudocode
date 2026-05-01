/*
 * XREFs of ?OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18036CB20
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@Z @ 0x180368C1C (--$InvokeAll@PEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@-$EventSource@U-$ITy.c)
 */

__int128 *__fastcall CortanaExperienceManagerNotification::OnNotifyRelaunch(__int64 a1, __int128 *a2)
{
  __int128 *result; // rax
  __int64 v3; // rdx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  result = a2;
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v4 = *result;
    return (__int128 *)Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Foundation::Rect>(
                         v3 + 384,
                         v3,
                         (RTL_SRWLOCK *)&v4);
  }
  return result;
}
