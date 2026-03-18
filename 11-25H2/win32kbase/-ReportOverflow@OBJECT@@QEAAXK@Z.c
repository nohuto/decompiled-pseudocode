/*
 * XREFs of ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C5230
 * Callers:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?IncrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x140019480 (-IncrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@SAXPEAX@Z @ 0x1401C6680 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall OBJECT::ReportOverflow(OBJECT *this, int a2)
{
  __int64 v4; // rcx
  struct _ENTRY *EntryFromObject; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(W32GetSessionState(this) + 88);
  if ( (*(_BYTE *)(v4 + 5744) & 0xFu) < 0xA )
  {
    *(_DWORD *)(v4 + 5744) ^= ((unsigned __int8)*(_DWORD *)(v4 + 5744) ^ (unsigned __int8)(*(_DWORD *)(v4 + 5744) + 1)) & 0xF;
    EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(v4 + 5672), this);
    v6[0] = 52324703;
    v6[1] = a2;
    if ( EntryFromObject )
      v7 = *((unsigned __int8 *)EntryFromObject + 14);
    else
      v7 = 255;
    RtlLogUnexpectedCodepath(v6);
  }
}
