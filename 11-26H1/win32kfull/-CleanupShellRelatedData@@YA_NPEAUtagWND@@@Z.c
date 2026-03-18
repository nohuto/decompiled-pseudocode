/*
 * XREFs of ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1401C0B30
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     CleanupIAMAccess @ 0x140154E80 (CleanupIAMAccess.c)
 *     UpdatePointerRedirIsAlive @ 0x1401C0D6C (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1401C0E28 (_FindActivationFilterWindow.c)
 *     _DeregisterShellHookWindow @ 0x1401C0E60 (_DeregisterShellHookWindow.c)
 *     DwmAsyncShellWindowChange @ 0x14020292C (DwmAsyncShellWindowChange.c)
 *     ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x140296D60 (-SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WIN.c)
 */

bool __fastcall CleanupShellRelatedData(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // bl
  struct tagWND **v5; // rcx
  __int64 v6; // rax
  struct tagWND **v7; // rcx
  __int64 v8; // rsi
  char *ActivationFilterWindow; // rax
  char *v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rax
  _QWORD *v15; // rcx
  void **v16; // rax
  __int64 v17; // rcx

  v2 = *((_QWORD *)a1 + 3);
  v3 = 0;
  if ( v2 )
  {
    v5 = (struct tagWND **)(*(_QWORD *)(v2 + 8) + 184LL);
    if ( *v5 == a1 )
    {
      *(_QWORD *)(**(_QWORD **)(v2 + 8) + 32LL) = 0LL;
      HMAssignmentUnlock(v5);
    }
    v6 = *((_QWORD *)a1 + 3);
    v7 = (struct tagWND **)(*(_QWORD *)(v6 + 8) + 192LL);
    if ( *v7 == a1 )
    {
      *(_QWORD *)(**(_QWORD **)(v6 + 8) + 40LL) = 0LL;
      HMAssignmentUnlock(v7);
    }
    v8 = *((_QWORD *)a1 + 3);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(v8 + 8) + 168LL) )
    {
      CleanupIAMAccess(*((struct tagDESKTOP **)a1 + 3), a2);
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
      *(_QWORD *)(*(_QWORD *)v12 + 24LL) = 0LL;
      HMAssignmentUnlock(v12 + 168);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v14 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), v13);
        DwmAsyncShellWindowChange(v14);
      }
      v3 = (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL) + 64LL) & 2) != 0;
    }
    else if ( *(struct tagWND **)(v8 + 304) == a1 )
    {
      HMAssignmentUnlock(v8 + 304);
    }
    else if ( *(struct tagWND **)(v8 + 328) == a1 )
    {
      HMAssignmentUnlock(v8 + 328);
      *(_DWORD *)(v8 + 336) = 0;
    }
    else if ( a1 == *(struct tagWND **)(v8 + 296) )
    {
      ShellWindowManagement::SetShellSpecialWindow(*((_QWORD *)a1 + 3), 0LL, 0LL);
    }
    else
    {
      ActivationFilterWindow = (char *)FindActivationFilterWindow(a1);
      v10 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v15 = *(_QWORD **)ActivationFilterWindow;
        if ( *(char **)(*(_QWORD *)ActivationFilterWindow + 8LL) != ActivationFilterWindow
          || (v16 = (void **)*((_QWORD *)ActivationFilterWindow + 1), *v16 != v10) )
        {
          __fastfail(3u);
        }
        *v16 = v15;
        v15[1] = v16;
        HMAssignmentUnlock(v10 + 16);
        Win32FreePool(v10);
      }
    }
    UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x40) != 0 )
      DeregisterShellHookWindow(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x20) != 0 )
    {
      v17 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
      --*(_DWORD *)(v17 + 48);
      SetOrClrWF(0, a1, 0x20u, 1);
    }
  }
  return v3;
}
