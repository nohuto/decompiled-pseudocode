/*
 * XREFs of ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x180305480
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_ @ 0x180298204 (_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_--_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___ @ 0x180303A88 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::DropForeground(__int64 a1, int a2)
{
  _DWORD *v2; // r9
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v4 = *(_OWORD *)lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_(
                    (__int64)v5,
                    a1,
                    &v6);
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___(v2, &v4);
}
