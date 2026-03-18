/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400FA870
 * Callers:
 *     NtUserToUnicodeEx @ 0x140193C60 (NtUserToUnicodeEx.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR BugCheckParameter4; // rcx

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    if ( !(_BYTE)a2 )
    {
      CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(BugCheckParameter2, a2);
      if ( CurrentThreadWin32Thread )
        BugCheckParameter4 = *CurrentThreadWin32Thread;
      else
        BugCheckParameter4 = 0LL;
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
