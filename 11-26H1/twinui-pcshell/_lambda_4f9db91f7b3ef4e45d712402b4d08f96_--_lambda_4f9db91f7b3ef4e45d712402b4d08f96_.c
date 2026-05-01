/*
 * XREFs of _lambda_4f9db91f7b3ef4e45d712402b4d08f96_::_lambda_4f9db91f7b3ef4e45d712402b4d08f96_ @ 0x180409B58
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x18040CE48 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4f9db91f7b3ef4e45d712402b4d08f96_::_lambda_4f9db91f7b3ef4e45d712402b4d08f96_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 v5; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 24) = a4[1];
  *(_QWORD *)(a1 + 32) = a4[2];
  v5 = *a4;
  *a4 = 0LL;
  a4[2] = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)(a1 + 16) = v5;
  *(_BYTE *)(a1 + 40) = 0;
  *((_BYTE *)a4 + 24) = 1;
  result = a1;
  *(_DWORD *)(a1 + 48) = *a5;
  return result;
}
