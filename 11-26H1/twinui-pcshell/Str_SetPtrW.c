/*
 * XREFs of Str_SetPtrW @ 0x180683C40
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180454B40 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ?SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x180455860 (-SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z.c)
 *     ?SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x1804558E0 (-SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x180683C04 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall Str_SetPtrW(LPWSTR *ppsz, LPCWSTR psz)
{
  __int64 v2; // rbx
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  void *v7; // r10
  char *v8; // rax
  void *v9; // rbx
  HANDLE ProcessHeap; // rax
  SIZE_T dwBytes; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( psz )
  {
    v5 = lstrlenW(psz) + 1;
    GetProcessHeap();
    dwBytes = 0LL;
    v6 = v5;
    if ( (int)ULongLongMult(2uLL, v5, &dwBytes) < 0 )
      return 0;
    v8 = (char *)HeapAlloc(v7, 0, dwBytes);
    v2 = (__int64)v8;
    if ( !v8 )
      return 0;
    StringCchCopyW(v8, v6, (char *)psz);
  }
  v9 = (void *)_InterlockedExchange64((volatile __int64 *)ppsz, v2);
  if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    CCv6s_HeapFree(ProcessHeap, v9);
  }
  return 1;
}
