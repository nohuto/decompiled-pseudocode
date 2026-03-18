/*
 * XREFs of ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1402C3384
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14025C310 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014B994 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?TraceLoggingShowWindowShellCalloutResult@@YAXPEBUtagWND@@_KHIW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z @ 0x1402B8264 (-TraceLoggingShowWindowShellCalloutResult@@YAXPEBUtagWND@@_KHIW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z.c)
 */

unsigned __int8 __fastcall CallShell::xxxShowWindowPolicyHandler(
        CallShell *this,
        struct tagWND *a2,
        __int64 a3,
        struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *a4)
{
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  int v8; // r10d
  unsigned __int8 v9; // si

  *(_QWORD *)a3 = *(_QWORD *)this;
  *(_DWORD *)(a3 + 8) = 1;
  *(_DWORD *)(a3 + 16) = (_DWORD)a2;
  *((_DWORD *)this + 96) |= 2u;
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v7 = anonymous_namespace_::xxxCallIAMWindowManagementHandler((struct tagDRAWITEMSTRUCT *)a3, 0);
  v8 = 0;
  v9 = v7;
  if ( v7 )
    v8 = *(_DWORD *)(a3 + 20);
  TraceLoggingShowWindowShellCalloutResult(
    (int *)this,
    ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
  - v6,
    v7,
    *(_DWORD *)(a3 + 16),
    v8);
  return v9;
}
