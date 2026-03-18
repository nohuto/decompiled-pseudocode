/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x1401D62D0
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1401B87C0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1401D633C (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 */

unsigned __int64 __fastcall NtUserDestroyDCompositionHwndTarget(HWND a1, unsigned int a2)
{
  NTSTATUS v4; // ebx

  KeEnterCriticalRegion();
  if ( a2 >= 3 )
  {
    v4 = -1073741811;
    goto LABEL_3;
  }
  v4 = DetachWindowCompositionTarget(a1, a2);
  if ( v4 < 0 )
LABEL_3:
    UserSetLastStatus(v4, 1);
  KeLeaveCriticalRegion();
  return (unsigned __int64)(unsigned int)~v4 >> 31;
}
