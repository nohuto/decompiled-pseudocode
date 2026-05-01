/*
 * XREFs of _lambda_4a70f611901877ea210a1c4f25e97126_::_lambda_4a70f611901877ea210a1c4f25e97126_ @ 0x180290674
 * Callers:
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180290428 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4a70f611901877ea210a1c4f25e97126_::_lambda_4a70f611901877ea210a1c4f25e97126_(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // rdx
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = a5;
  v6 = *a6;
  *a6 = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}
