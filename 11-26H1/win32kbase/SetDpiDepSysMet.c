/*
 * XREFs of SetDpiDepSysMet @ 0x140081180
 * Callers:
 *     InitLoadResources @ 0x140080CE4 (InitLoadResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetDpiDepSysMet(int a1, int a2, int a3)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // edx
  int v8; // r8d
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdi

  v3 = a2;
  v4 = a1;
  if ( a2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 19LL, a2, a1, 0LL, 0LL, 0LL, 0);
    v3 = 1;
  }
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904);
  v6 = *(_DWORD *)(v5 + 4 * v4 + 2284);
  result = W32GetUserSessionState(v5, v7, v8);
  v12 = *(_QWORD *)(result + 19904);
  *(_DWORD *)(v12 + 4 * v4 + 2284) = v3;
  if ( v3 != v6 )
  {
    v13 = 2;
    v14 = 4 * v4 + 2524;
    do
    {
      result = W32GetUserSessionState(v12, v10, v11);
      ++v13;
      v12 = *(_QWORD *)(result + 19904);
      *(_DWORD *)(v14 + v12) = -1;
      v14 += 120LL;
    }
    while ( v13 < 0x12 );
  }
  return result;
}
