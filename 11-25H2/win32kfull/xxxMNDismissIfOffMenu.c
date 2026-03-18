/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1402BF8CC
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1402210AC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNFindWindowFromPoint @ 0x14004476C (xxxMNFindWindowFromPoint.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     GetThreadpGlobalPopupMenu @ 0x1401BC930 (GetThreadpGlobalPopupMenu.c)
 *     IsModalMenuStarted @ 0x14028EA38 (IsModalMenuStarted.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 ThreadpGlobalPopupMenu; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 *v13[2]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, 0LL);
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v5 + 20) >= 0
    && *(char *)(v5 + 19) >= 0
    && (unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16))
    && (ThreadpGlobalPopupMenu = GetThreadpGlobalPopupMenu(v4),
        SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v13, ThreadpGlobalPopupMenu),
        *v13[0])
    && *(_QWORD *)(*v13[0] + 8)
    && (v7 = xxxMNFindWindowFromPoint(v13, &v15, a2), v8 = *(_QWORD *)(a1 + 40), *(char *)(v8 + 20) >= 0)
    && *(char *)(v8 + 19) >= 0
    && !v7
    && (v9 = GetThreadpGlobalPopupMenu(*(_QWORD *)(a1 + 16)),
        SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v13, v9),
        *v13[0])
    && *(_QWORD *)(*v13[0] + 8) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(*v13[0] + 8));
    xxxSendMessage(*(struct tagWND **)(*v13[0] + 8), 0x1Fu);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v13, v11);
    return 1LL;
  }
  else
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v13, v4);
    return 0LL;
  }
}
