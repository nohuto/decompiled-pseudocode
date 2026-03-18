/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0
 * Callers:
 *     HmgAllocateDcAttr @ 0x14000D8F8 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     HmgFreeDcAttr @ 0x14000E59C (HmgFreeDcAttr.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x140054820 (HmgShareUnlockRemoveObject.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1400C5508 (HmgIncProcessHandleCountEx.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x1400C6218 (-vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     GreDecQuotaCount @ 0x1400CF5E0 (GreDecQuotaCount.c)
 *     GreIncQuotaCount @ 0x1400CF610 (GreIncQuotaCount.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140140030 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x140155D88 (HmgNextGarbageCollectible.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1401994C4 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?set_AppContainerW32PID@SURFACE@@QEAAXK@Z @ 0x1401BBF80 (-set_AppContainerW32PID@SURFACE@@QEAAXK@Z.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     GreGetBrushColor @ 0x1401ECF40 (GreGetBrushColor.c)
 *     HmgFree @ 0x1401EDCD0 (HmgFree.c)
 *     EngDeleteSafeSemaphore @ 0x1401F36D0 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1401F38A0 (EngInitializeSafeSemaphore.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1401F5468 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1401FB31C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall SEMOBJ<20>::vUnlock(HSEMAPHORE *a1, __int64 a2, int a3)
{
  HSEMAPHORE v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v3 = *a1;
  if ( *a1 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer((_DWORD)a1, (unsigned int)&LockRelease, a3, (_DWORD)v3, (__int64)L"Hmgr");
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentProcess = PsGetCurrentProcess(),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v7 = *ThreadWin32Thread;
        if ( v7 )
        {
          v8 = v7 + 8;
          if ( v8 )
          {
            if ( (*(_BYTE *)(v8 + 28))-- == 1 )
              *(_QWORD *)v8 &= ~0x100000uLL;
          }
        }
      }
    }
    GreReleaseSemaphoreSharedInternal(v3);
    *a1 = 0LL;
  }
}
