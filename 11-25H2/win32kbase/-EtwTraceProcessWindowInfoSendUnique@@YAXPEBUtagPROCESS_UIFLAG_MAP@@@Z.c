/*
 * XREFs of ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1400A5468
 * Callers:
 *     EtwTraceProcessWindowInfo @ 0x1400A5210 (EtwTraceProcessWindowInfo.c)
 * Callees:
 *     McTemplateK0qqmx_EtwWriteTransfer @ 0x1400A570C (McTemplateK0qqmx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceProcessWindowInfoSendUnique(const struct tagPROCESS_UIFLAG_MAP *a1, __int64 a2)
{
  __int64 UserSessionState; // r10
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ecx
  __int128 v9; // xmm1

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 0;
  v5 = UserSessionState + 69224;
  while ( 1 )
  {
    if ( v4 >= 0x14 )
      goto LABEL_10;
    v6 = 32LL * v4;
    v7 = v6 + UserSessionState + 69224;
    if ( *(_DWORD *)(v6 + UserSessionState + 69248) < *(_DWORD *)(v5 + 24) )
      v5 = v6 + UserSessionState + 69224;
    if ( *(_QWORD *)v7 == *(_QWORD *)a1 )
      break;
    ++v4;
  }
  if ( !v7 )
  {
LABEL_10:
    v7 = v5;
    v9 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *(_OWORD *)(v5 + 16) = v9;
    goto LABEL_11;
  }
  v8 = *((_DWORD *)a1 + 5);
  v4 = *(_DWORD *)(v7 + 20);
  *(_DWORD *)(v7 + 24) = *((_DWORD *)a1 + 6);
  if ( (v4 & v8) == v8 )
    return;
  *(_DWORD *)(v7 + 20) = v4 | v8;
LABEL_11:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000000LL) != 0 )
    McTemplateK0qqmx_EtwWriteTransfer(v7 + 8, v4, v5, *(_DWORD *)(v7 + 20), *(_DWORD *)(v7 + 16), v7 + 8, *(_QWORD *)v7);
}
