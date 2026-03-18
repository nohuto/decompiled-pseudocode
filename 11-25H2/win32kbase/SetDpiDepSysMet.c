/*
 * XREFs of SetDpiDepSysMet @ 0x140120370
 * Callers:
 *     InitLoadResources @ 0x14011FE88 (InitLoadResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetDpiDepSysMet(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi

  v2 = a2;
  v3 = (int)a1;
  if ( (int)a2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 19LL, (int)a2, (int)a1, 0LL, 0LL, 0LL, 0);
    v2 = 1;
  }
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  v5 = *(_DWORD *)(v4 + 4 * v3 + 2284);
  result = W32GetUserSessionState(v4, v6);
  v9 = *(_QWORD *)(result + 19872);
  *(_DWORD *)(v9 + 4 * v3 + 2284) = v2;
  if ( v2 != v5 )
  {
    v10 = 2;
    v11 = 4 * v3 + 2524;
    do
    {
      result = W32GetUserSessionState(v9, v8);
      ++v10;
      v9 = *(_QWORD *)(result + 19872);
      *(_DWORD *)(v11 + v9) = -1;
      v11 += 120LL;
    }
    while ( v10 < 0x12 );
  }
  return result;
}
