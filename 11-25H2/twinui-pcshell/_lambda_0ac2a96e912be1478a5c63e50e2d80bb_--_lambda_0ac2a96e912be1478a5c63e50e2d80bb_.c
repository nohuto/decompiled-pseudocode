/*
 * XREFs of _lambda_0ac2a96e912be1478a5c63e50e2d80bb_::_lambda_0ac2a96e912be1478a5c63e50e2d80bb_ @ 0x1805E49A4
 * Callers:
 *     ?ContentStarted@SharedDesktopBackgroundVisualHost@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@3@@Z @ 0x1805E5708 (-ContentStarted@SharedDesktopBackgroundVisualHost@@QEAA-AUevent_token@winrt@@AEBU-$TypedEventHan.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_0ac2a96e912be1478a5c63e50e2d80bb_::_lambda_0ac2a96e912be1478a5c63e50e2d80bb_(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 *a4)
{
  __int64 v7; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)a1);
  *(_BYTE *)(a1 + 8) = *a3;
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  return a1;
}
