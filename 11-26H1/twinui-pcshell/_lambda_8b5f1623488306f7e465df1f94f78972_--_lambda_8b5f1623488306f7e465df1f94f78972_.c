/*
 * XREFs of _lambda_8b5f1623488306f7e465df1f94f78972_::_lambda_8b5f1623488306f7e465df1f94f78972_ @ 0x180609620
 * Callers:
 *     ?ContentFinished@SharedDesktopBackgroundVisualHost@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@3@@Z @ 0x18060A2A8 (-ContentFinished@SharedDesktopBackgroundVisualHost@@QEAA-AUevent_token@winrt@@AEBU-$TypedEventHa.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_8b5f1623488306f7e465df1f94f78972_::_lambda_8b5f1623488306f7e465df1f94f78972_(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        _BYTE *a4,
        __int64 *a5)
{
  __int64 v8; // rdx
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)a1);
  *(_BYTE *)(a1 + 8) = *a3;
  *(_BYTE *)(a1 + 9) = *a4;
  v8 = *a5;
  *a5 = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
