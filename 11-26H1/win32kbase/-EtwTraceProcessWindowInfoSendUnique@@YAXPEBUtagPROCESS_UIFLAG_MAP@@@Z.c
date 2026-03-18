/*
 * XREFs of ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1400DCA38
 * Callers:
 *     EtwTraceProcessWindowInfo @ 0x1400DC7D0 (EtwTraceProcessWindowInfo.c)
 * Callees:
 *     McTemplateK0qqmx_EtwWriteTransfer @ 0x1400DD5C4 (McTemplateK0qqmx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceProcessWindowInfoSendUnique(const struct tagPROCESS_UIFLAG_MAP *a1, int a2, int a3)
{
  __int64 UserSessionState; // r10
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ecx
  __int128 v10; // xmm1

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = 0;
  v6 = UserSessionState + 69216;
  while ( 1 )
  {
    if ( v5 >= 0x14 )
      goto LABEL_10;
    v7 = 32LL * v5;
    v8 = v7 + UserSessionState + 69216;
    if ( *(_DWORD *)(v7 + UserSessionState + 69240) < *(_DWORD *)(v6 + 24) )
      v6 = v7 + UserSessionState + 69216;
    if ( *(_QWORD *)v8 == *(_QWORD *)a1 )
      break;
    ++v5;
  }
  if ( !v8 )
  {
LABEL_10:
    v8 = v6;
    v10 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v6 = *(_OWORD *)a1;
    *(_OWORD *)(v6 + 16) = v10;
    goto LABEL_11;
  }
  LODWORD(v6) = *((_DWORD *)a1 + 5);
  v9 = *(_DWORD *)(v8 + 20);
  *(_DWORD *)(v8 + 24) = *((_DWORD *)a1 + 6);
  if ( ((unsigned int)v6 & v9) == (_DWORD)v6 )
    return;
  *(_DWORD *)(v8 + 20) = v6 | v9;
LABEL_11:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000000LL) != 0 )
    McTemplateK0qqmx_EtwWriteTransfer(v8 + 8, v6, v5, *(_DWORD *)(v8 + 20), *(_DWORD *)(v8 + 16), v8 + 8, *(_QWORD *)v8);
}
