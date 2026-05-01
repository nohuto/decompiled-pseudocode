/*
 * XREFs of _lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::_lambda_d4d75362ac07d926fcc1fc2d8f09e59f_ @ 0x18035A9B0
 * Callers:
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180217B84 (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::_lambda_d4d75362ac07d926fcc1fc2d8f09e59f_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4)
{
  __int64 v4; // rax

  *(_QWORD *)a1 = a2;
  v4 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 16) = *a4;
  return a1;
}
