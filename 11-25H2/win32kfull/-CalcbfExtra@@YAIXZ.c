/*
 * XREFs of ?CalcbfExtra@@YAIXZ @ 0x14021FD48
 * Callers:
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
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
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  v3 = *(_DWORD *)(v2 + 4648);
  v6 = *(_QWORD *)(W32GetUserSessionState(v2, v4) + 19872);
  if ( v3 != *(_DWORD *)(v6 + 4584) )
    return 0LL;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
  v8 = *(_DWORD *)(v7 + 4632);
  v10 = *(_QWORD *)(W32GetUserSessionState(v7, v9) + 19872);
  result = 0LL;
  if ( v8 == *(_DWORD *)(v10 + 4584) )
    return 49152LL;
  return result;
}
