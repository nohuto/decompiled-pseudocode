/*
 * XREFs of sub_14004FA80 @ 0x14004FA80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004DB3C @ 0x14004DB3C (sub_14004DB3C.c)
 *     sub_14004F88C @ 0x14004F88C (sub_14004F88C.c)
 *     sub_14004FA18 @ 0x14004FA18 (sub_14004FA18.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

const char *__fastcall sub_14004FA80(__int64 a1)
{
  volatile signed __int32 **v1; // rdi
  int v2; // eax
  volatile signed __int32 *cbMultiByte; // rsi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rax
  WCHAR WideCharStr[2048]; // [rsp+40h] [rbp-1018h] BYREF

  v1 = (volatile signed __int32 **)(a1 + 192);
  if ( *(_QWORD *)(a1 + 192) )
    return (const char *)((unsigned __int64)(*v1 + 1) & -(__int64)(*v1 != 0LL));
  sub_14004DB3C(WideCharStr, 2048LL, a1 + 24);
  v2 = WideCharToMultiByte(0, 0, WideCharStr, -1, 0LL, 0, 0LL, 0LL);
  cbMultiByte = (volatile signed __int32 *)v2;
  if ( !v2 )
  {
    sub_14004FA18((__int64)v1);
LABEL_6:
    WideCharToMultiByte(
      0,
      0,
      WideCharStr,
      -1,
      (LPSTR)((unsigned __int64)(*v1 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v1 >> 64)),
      (int)cbMultiByte,
      0LL,
      0LL);
    return (const char *)((unsigned __int64)(*v1 + 1) & -(__int64)(*v1 != 0LL));
  }
  ProcessHeap = GetProcessHeap();
  v5 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, (SIZE_T)(cbMultiByte + 1));
  if ( v5 )
  {
    *v5 = 0;
    sub_14004F88C(v1, v5, cbMultiByte);
    goto LABEL_6;
  }
  return "WIL Exception";
}
