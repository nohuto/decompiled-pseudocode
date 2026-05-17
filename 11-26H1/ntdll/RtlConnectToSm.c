/*
 * XREFs of RtlConnectToSm @ 0x18010F800
 * Callers:
 *     <none>
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtAlpcConnectPort @ 0x18015FE90 (NtAlpcConnectPort.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlConnectToSm(const void **a1, __int64 a2, int a3, __int64 a4)
{
  size_t v8; // rax
  size_t v10; // rbx
  _WORD v11[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+64h] [rbp-9Ch]
  const wchar_t *v13; // [rsp+68h] [rbp-98h]
  __int64 v14; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v15[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h]
  int v19; // [rsp+94h] [rbp-6Ch]
  __int128 v20; // [rsp+98h] [rbp-68h]
  _QWORD v21[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+D8h] [rbp-28h]
  _WORD v24[122]; // [rsp+DCh] [rbp-24h] BYREF
  _DWORD v25[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v26; // [rsp+1DCh] [rbp+DCh]
  __int64 v27; // [rsp+1E0h] [rbp+E0h]
  __int64 v28; // [rsp+1F0h] [rbp+F0h]

  memset_thunk_772440563353939046(v21, 0, 0x120uLL);
  v13 = L"\\SmApiPort";
  v15[1] = 0;
  v19 = 0;
  v12 = 0;
  v8 = 2 * wcslen(L"\\SmApiPort");
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  v11[0] = v8;
  v11[1] = v8 + 2;
  memset_thunk_772440563353939046(v25, 0, 0x48uLL);
  v25[0] = 0x10000;
  v25[2] = 2;
  v26 = 257;
  v27 = 328LL;
  v28 = 10496LL;
  if ( !a1 )
  {
LABEL_9:
    v15[0] = 48;
    v16 = 0LL;
    v18 = 512;
    v17 = 0LL;
    v20 = 0LL;
    v22 = 0;
    v21[0] = 18612468LL;
    v14 = 288LL;
    return NtAlpcConnectPort(a4, v11, v15, v25, 0x20000, 0LL, v21, &v14, 0LL, 0LL, 0LL);
  }
  if ( a2 && a3 )
  {
    if ( *(_WORD *)a1 >= 0xF0u )
      return 3221225485LL;
    v10 = *(unsigned __int16 *)a1;
    memmove(v24, a1[1], v10);
    v24[v10 >> 1] = 0;
    v23 = a3;
    goto LABEL_9;
  }
  return 3221225520LL;
}
