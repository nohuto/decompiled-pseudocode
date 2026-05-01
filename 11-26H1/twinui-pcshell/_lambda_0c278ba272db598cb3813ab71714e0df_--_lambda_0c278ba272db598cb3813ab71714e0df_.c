/*
 * XREFs of _lambda_0c278ba272db598cb3813ab71714e0df_::_lambda_0c278ba272db598cb3813ab71714e0df_ @ 0x1805F3014
 * Callers:
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180054CA0 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall lambda_0c278ba272db598cb3813ab71714e0df_::_lambda_0c278ba272db598cb3813ab71714e0df_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rcx

  *a1 = a2;
  v4 = *a3;
  a1[1] = *a3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
