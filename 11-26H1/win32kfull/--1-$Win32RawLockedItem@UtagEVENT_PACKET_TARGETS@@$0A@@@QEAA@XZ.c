/*
 * XREFs of ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x14002300C
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(
        __int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v3 + 376) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    result = (*(__int64 (**)(void))(a1 + 16))();
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
