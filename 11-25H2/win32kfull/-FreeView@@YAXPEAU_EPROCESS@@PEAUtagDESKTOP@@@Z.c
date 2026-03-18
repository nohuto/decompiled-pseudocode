/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14019C1C0
 * Callers:
 *     FreeDesktop @ 0x140243E30 (FreeDesktop.c)
 *     UnmapDesktop @ 0x140243FD0 (UnmapDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x14019C310 (GetDesktopView.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 v5; // rbx
  int v6; // ebp
  _QWORD *DesktopView; // rsi
  _QWORD **v8; // rbx
  _QWORD *i; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
    v5 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v5 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
    if ( v5 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      if ( (unsigned int)PsGetProcessSessionIdEx(PROCESS) == *(_DWORD *)a2 )
      {
        v6 = 0;
      }
      else
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v6 = 1;
      }
      DesktopView = (_QWORD *)GetDesktopView(v5, a2);
      if ( DesktopView )
      {
        PsGetProcessSessionIdEx(PROCESS);
        MmUnmapViewOfSection(PROCESS, DesktopView[2]);
        v8 = (_QWORD **)(v5 + 688);
        for ( i = *v8; i; i = (_QWORD *)*i )
        {
          if ( i == DesktopView )
            break;
          v8 = (_QWORD **)i;
        }
        *v8 = (_QWORD *)*DesktopView;
        Win32FreePool(DesktopView);
      }
      if ( v6 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
