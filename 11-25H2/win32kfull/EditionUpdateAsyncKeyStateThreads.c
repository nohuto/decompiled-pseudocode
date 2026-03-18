/*
 * XREFs of EditionUpdateAsyncKeyStateThreads @ 0x14014FF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUpdateAsyncKeyStateThreads(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD **v7; // r8
  _QWORD *v8; // rax
  unsigned __int64 v9; // r9
  char v10; // bl
  __int64 result; // rax

  v2 = a2;
  if ( (unsigned __int8)a2 < 0x20u )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    ++*(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 6988LL);
  }
  v7 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) + 176LL);
  v8 = *v7;
  if ( *v7 != v7 )
  {
    v9 = (unsigned __int64)v2 >> 3;
    v10 = v2 & 7;
    do
    {
      v5 = *(v8 - 38);
      v6 = *(unsigned __int8 *)(v9 + v5 + 224);
      LODWORD(v6) = v6 | (1 << v10);
      *(_BYTE *)(v9 + v5 + 224) = v6;
      if ( v5 != a1 )
        *(_DWORD *)(v5 + 412) |= 1u;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != v7 );
  }
  result = W32GetUserSessionState(v6, v5);
  ++*(_DWORD *)(*(_QWORD *)(result + 19872) + 6984LL);
  return result;
}
