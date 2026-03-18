/*
 * XREFs of _RegisterShellHookWindow @ 0x1401BE6B0
 * Callers:
 *     NtUserRegisterShellHookWindow @ 0x1401BE620 (NtUserRegisterShellHookWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1401BE728 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v1 + 20) < 0 || *(char *)(v1 + 19) < 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v3 + 8) + 224LL), 0LL, a1, 2u, v5) )
    {
      SetOrClrWF(1, a1, 0x740u, 1);
      return 1LL;
    }
  }
  return 0LL;
}
