/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1402210AC
 * Callers:
 *     EditionPointerActivate @ 0x140221090 (EditionPointerActivate.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400213F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x140044C70 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSendPointerMessageWorker @ 0x140137290 (xxxSendPointerMessageWorker.c)
 *     IsMessageOnlyWindow @ 0x14014CE90 (IsMessageOnlyWindow.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14015470C (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14019E618 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     GetThreadpGlobalPopupMenu @ 0x1401BC930 (GetThreadpGlobalPopupMenu.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x14020C134 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x14028EA38 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1402BF8CC (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        unsigned __int16 a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  unsigned __int16 v6; // bx
  char v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  const struct tagWND *v11; // rcx
  __int64 TopLevelWindow; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 ThreadpGlobalPopupMenu; // rax
  const struct tagWND *v17; // r9
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD v26[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v28[2]; // [rsp+60h] [rbp-10h] BYREF
  struct tagPOINT v30; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a2;
  if ( *((_DWORD *)a4 + 44) )
  {
    v8 = 1;
LABEL_3:
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v11, v10) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      v13 = (__int64 *)TopLevelWindow;
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v9 + 128) )
        {
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v28, TopLevelWindow);
          v15 = *(_QWORD *)(v9 + 112);
          if ( v15 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v15 + 16)) )
          {
            v30 = (struct tagPOINT)*((_QWORD *)a4 + 5);
            ThreadpGlobalPopupMenu = GetThreadpGlobalPopupMenu(v14);
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, ThreadpGlobalPopupMenu);
            v17 = *(const struct tagWND **)(v9 + 112);
            if ( (*(_DWORD *)(*((_QWORD *)v17 + 5) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v26[0]
                && *(_QWORD *)(*(_QWORD *)v26[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(
                  *(const struct tagWND **)(*(_QWORD *)v26[0] + 16LL),
                  (int *)&v30,
                  0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v30, &v30, 0LL, v17);
            }
            v22 = LOWORD(v30.x) | (LOWORD(v30.y) << 16);
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
              BugCheckParameter3,
              *(_QWORD *)(v9 + 112));
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 112), v22);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v23);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v26, v24);
            v6 = a2;
          }
          if ( !v8 )
          {
            v25 = xxxSendPointerMessageWorker((__int64)a1, 587LL, a3, *v13, 0LL, 177);
            if ( v25 == 1 || v25 != 3 && xxxQueryLegacyActivation(a1, (struct tagWND *)v13, v6, a4) == 1 )
              xxxActivateWindowWithOptions((__int64)v13, 3LL, 49, 1, 0);
          }
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v28, v14);
        }
      }
    }
    return;
  }
  v8 = 0;
  if ( !(unsigned int)IsIndependentInputWindow(a1) )
    goto LABEL_3;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v19 = (__int64)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner )
  {
    LOBYTE(v20) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( !v20 )
    {
      v21 = GetTopLevelWindow(v19);
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(v21 + 16),
        *(struct tagQ **)(*(_QWORD *)(v21 + 16) + 472LL),
        6u,
        0LL,
        0,
        0LL,
        *(_QWORD *)v21,
        0LL);
    }
  }
}
