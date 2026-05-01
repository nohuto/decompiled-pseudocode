/*
 * XREFs of _lambda_00799cc444f9312ab8cc556666836ecb_::_lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x18069CA00
 * Callers:
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D704 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_00799cc444f9312ab8cc556666836ecb_::_lambda_00799cc444f9312ab8cc556666836ecb_(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 result; // rax

  v6 = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = a3;
  *(_OWORD *)(a1 + 16) = *a4;
  *(_DWORD *)(a1 + 32) = *a5;
  result = a1;
  *(_QWORD *)(a1 + 36) = *a6;
  return result;
}
