/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_PATH_INFO_INTERNAL@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400FF4F0
 * Callers:
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall Win32RawLockedItemBase<DISPLAYCONFIG_PATH_INFO_INTERNAL,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR *CurrentThreadWin32Thread; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    BugCheckParameter4 = 0LL;
    if ( !(_BYTE)a2 )
    {
      CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(BugCheckParameter2, a2);
      if ( CurrentThreadWin32Thread )
        BugCheckParameter4 = *CurrentThreadWin32Thread;
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
    }
  }
  else
  {
    v3 = (__int64 *)PsGetCurrentThreadWin32Thread(BugCheckParameter2, a2);
    if ( v3 )
      v4 = *v3;
    else
      v4 = 0LL;
    *(_QWORD *)(v4 + 376) = *(_QWORD *)BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      (*(void (**)(void))(BugCheckParameter2 + 16))();
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
