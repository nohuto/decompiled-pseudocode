/*
 * XREFs of ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x140235458
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1402353A0 (NtUserRemoveClipboardFormatListener.c)
 * Callees:
 *     <none>
 */

void __fastcall _RemoveClipboardFormatListener(struct tagWND *a1)
{
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND **i; // rcx
  struct tagWND *v3; // rax
  struct tagWND *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  for ( i = (struct tagWND **)(*(_QWORD *)(CurrentProcessWin32Process + 656) + 120LL);
        ;
        i = (struct tagWND **)((char *)v3 + 240) )
  {
    v3 = *i;
    if ( !*i )
      break;
    if ( v3 == v4 )
    {
      *i = (struct tagWND *)*((_QWORD *)v4 + 30);
      *((_QWORD *)v4 + 30) = 0LL;
      *((_DWORD *)v4 + 95) &= ~0x800000u;
      HMAssignmentUnlock(&v4);
      return;
    }
  }
}
