/*
 * XREFs of ?CalcbfExtra@@YAIXZ @ 0x140259D54
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcbfExtra(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  v3 = *(_DWORD *)(v2 + 4648);
  v6 = *(_QWORD *)(W32GetUserSessionState(v2, v4) + 19904);
  if ( v3 != *(_DWORD *)(v6 + 4584) )
    return 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  v9 = *(_DWORD *)(v8 + 4632);
  v11 = *(_QWORD *)(W32GetUserSessionState(v8, v10) + 19904);
  result = 0LL;
  if ( v9 == *(_DWORD *)(v11 + 4584) )
    return 49152LL;
  return result;
}
