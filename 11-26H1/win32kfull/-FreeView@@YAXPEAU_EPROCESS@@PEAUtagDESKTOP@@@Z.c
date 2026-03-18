/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14005A254
 * Callers:
 *     UnmapDesktop @ 0x1401D2ED0 (UnmapDesktop.c)
 *     FreeDesktop @ 0x1402A5110 (FreeDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x14005A3B0 (GetDesktopView.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // ebp
  _QWORD *DesktopView; // rbx
  _QWORD **v9; // rdi
  _QWORD *i; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
    v5 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v5 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
    if ( v5 )
    {
      v6 = *(_DWORD *)a2;
      memset(&ApcState, 0, sizeof(ApcState));
      if ( (unsigned int)PsGetProcessSessionIdEx(PROCESS) == v6 )
      {
        v7 = 0;
      }
      else
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v7 = 1;
      }
      DesktopView = (_QWORD *)GetDesktopView(v5, a2);
      if ( DesktopView )
      {
        PsGetProcessSessionIdEx(PROCESS);
        MmUnmapViewOfSection(PROCESS, DesktopView[2]);
        v9 = (_QWORD **)(v5 + 688);
        for ( i = *v9; i; i = (_QWORD *)*i )
        {
          if ( i == DesktopView )
            break;
          v9 = (_QWORD **)i;
        }
        *v9 = (_QWORD *)*DesktopView;
        Win32FreePool(DesktopView);
      }
      if ( v7 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
