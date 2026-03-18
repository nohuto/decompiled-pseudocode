/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1400856CC
 * Callers:
 *     MultiUserCleanupDCs @ 0x14006F1D8 (MultiUserCleanupDCs.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x14001A530 (GreAcquireHmgrSemaphore.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BA50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     GreReleaseHmgrSemaphore @ 0x140045580 (GreReleaseHmgrSemaphore.c)
 *     HmgSetLock @ 0x14006ED3C (HmgSetLock.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x14006FBAC (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1400AE8A0 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400BB3C0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1400C03B4 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1400F2D7C (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgMarkUnXferable @ 0x140143C10 (HmgMarkUnXferable.c)
 *     HmgCheckDCForPrivateReferences @ 0x140178FFC (HmgCheckDCForPrivateReferences.c)
 */

void __fastcall vCleanupDCs(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rcx
  __int64 i; // rcx
  struct OBJECT *EntryObject; // rbx
  HDC v6; // rsi
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v8; // rdi
  ENTRYOBJ *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  GdiHandleManager *v14; // rdi
  struct _ENTRY *EntryFromIndex; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebp
  DC *v20[6]; // [rsp+50h] [rbp-58h] BYREF
  struct OBJECT *v21; // [rsp+B8h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  v21 = 0LL;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (unsigned int)HmgIsProcessCleanupRequiredByW32Pid((unsigned int)v1) )
  {
    GreAcquireHmgrSemaphore(v3);
    for ( i = 0LL; ; i = v19 )
    {
      v19 = HmgSafeNextObjt(i, 1, &v21);
      if ( !v19 )
        break;
      EntryObject = v21;
      v6 = *(HDC *)v21;
      EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(v2 + 5672), v21);
      v8 = EntryFromObject;
      if ( EntryFromObject )
      {
        if ( (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, v1) )
        {
          GreReleaseHmgrSemaphore((__int64)v9);
          if ( (*((_BYTE *)v8 + 15) & 0x20) != 0 || *((_DWORD *)EntryObject + 528) )
          {
            LOBYTE(v10) = 1;
            *((_DWORD *)EntryObject + 528) = 0;
            HmgMarkUnXferable(v6, v10);
            while ( *((_WORD *)EntryObject + 6) )
              KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2192));
          }
          HmgSetLock((__int64)v6);
          GrepDeleteDC(v6, 0xC00000u);
          GreAcquireHmgrSemaphore(v11);
        }
        else if ( (unsigned int)ENTRYOBJ::bOwnedBy(v9, 0) )
        {
          XDCOBJ::XDCOBJ((XDCOBJ *)v20);
          while ( 1 )
          {
            XDCOBJ::vLock((XDCOBJ *)v20, v6);
            if ( v20[0] )
              break;
            GreReleaseHmgrSemaphore(v12);
            KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2192));
            GreAcquireHmgrSemaphore(v13);
            v14 = *(GdiHandleManager **)(v2 + 5672);
            EntryFromIndex = GdiHandleManager::GetEntryFromIndex(
                               v14,
                               (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000);
            if ( !EntryFromIndex
              || *((_BYTE *)EntryFromIndex + 14) != 1
              || !(unsigned int)ENTRYOBJ::bOwnedBy(EntryFromIndex, 0) )
            {
              goto LABEL_21;
            }
            EntryObject = GdiHandleManager::GetEntryObject(
                            v14,
                            (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000);
            v21 = EntryObject;
          }
          if ( (unsigned int)HmgCheckDCForPrivateReferences(EntryObject) )
          {
            GreReleaseHmgrSemaphore(v16);
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v20[0], v1, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC(v20, 0);
            GreAcquireHmgrSemaphore(v17);
          }
          XDCOBJ::vUnlock((XDCOBJ *)v20);
        }
      }
LABEL_21:
      ;
    }
    GreReleaseHmgrSemaphore(v18);
  }
}
