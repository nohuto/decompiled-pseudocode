/*
 * XREFs of ComposeWindow @ 0x14004D908
 * Callers:
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x140090008 (UpdateWindowSpriteMonitor.c)
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // esi
  void *v10; // rax
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 1) != 0 )
  {
    LOBYTE(v4) = IsDesktopWindow((__int64)a1);
    if ( v4 && *((_QWORD *)a1 + 3) != *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144) )
      return 0;
    v7 = *((_QWORD *)a1 + 5);
    LOBYTE(v5) = *(_BYTE *)(v7 + 26) & 8;
    if ( (((a2 & 8) == 0) & (unsigned __int8)~(*(_BYTE *)(v7 + 31) >> 4)) != 0 )
    {
      return (_BYTE)v5 == 0 ? 0x3E0001u : 0;
    }
    else
    {
      if ( (_BYTE)v5 )
      {
        v11 = ValidateHmonitorNoRip(*(_QWORD *)(v7 + 256), v5);
        UpdateWindowSpriteMonitor(a1, v11);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
          xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
        }
        return 0;
      }
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
      v8 = xxxSetLayeredWindow(a1);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
      if ( v8 >= 0 )
      {
        v8 = SetLayeredWindowAttributes(a1);
        if ( v8 < 0 )
        {
          UnsetLayeredWindow(a1);
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
          v10 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v10);
        }
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v8 = UnsetLayeredWindow(a1);
    else
      v8 = 0;
    *((_DWORD *)a1 + 95) &= ~0x8000u;
  }
  return (unsigned int)v8;
}
