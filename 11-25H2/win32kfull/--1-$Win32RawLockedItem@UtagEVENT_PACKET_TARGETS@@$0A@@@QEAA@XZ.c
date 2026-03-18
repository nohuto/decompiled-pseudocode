/*
 * XREFs of ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x140162540
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400CAEE0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     xxxCsEvent @ 0x1402DD438 (xxxCsEvent.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v4 + 384) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    result = (*(__int64 (**)(void))(a1 + 16))();
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
