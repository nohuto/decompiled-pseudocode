/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x14015D8C0
 * Callers:
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     IsMiPEnabledForThread @ 0x14015DEF8 (IsMiPEnabledForThread.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D9BFC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxMNSetCapture @ 0x1402677EC (xxxMNSetCapture.c)
 *     UnlockMFMWFPWindow @ 0x14026B510 (UnlockMFMWFPWindow.c)
 *     MNDestroyAnimationBitmap @ 0x1402B59EC (MNDestroyAnimationBitmap.c)
 */

void __fastcall xxxMNEndMenuStateInternal(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 64);
  UnlockMFMWFPWindow(a2 + 80);
  v4 = *(_QWORD *)(a1 + 648);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 648) = *(_QWORD *)(a2 + 48);
  }
  else
  {
    while ( v4 )
    {
      v12 = (_QWORD *)(v4 + 48);
      v4 = *(_QWORD *)(v4 + 48);
      if ( v4 == a2 )
      {
        *v12 = *(_QWORD *)(a2 + 48);
        break;
      }
    }
  }
  if ( (unsigned int)IsMiPEnabledForThread(a1) && *(_QWORD *)(a1 + 1512) )
    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 464LL) = 0LL;
  v7 = *(_DWORD *)(a2 + 8);
  if ( (v7 & 0x100) == 0 && (v7 & 0x2000000) != 0 )
  {
    *(_DWORD *)(a2 + 8) = v7 & 0xFDFFFFFF;
    UserSessionState = W32GetUserSessionState(v6, v5);
    --*(_DWORD *)(UserSessionState + 18848);
  }
  if ( *(_QWORD *)(a2 + 128) )
    MNDestroyAnimationBitmap(a2);
  v9 = W32GetUserSessionState(v6, v5);
  if ( a2 == v9 + 65888 )
  {
    v10 = W32GetUserSessionState(v9 + 65888, v8);
    *(_DWORD *)(v10 + 66800) &= ~0x2000000u;
    GreCleanDCAndSetOwnerEx(*(_QWORD *)(v9 + 66024), 2147483666LL, 0LL, 1LL);
  }
  else
  {
    v14 = *(_QWORD *)(a2 + 136);
    if ( v14 )
      GreDeleteDC(v14);
    Win32FreePool((void *)a2);
  }
  v11 = *(_QWORD *)(a1 + 648);
  if ( v11 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v17,
      *(struct tagMENUSTATE **)(a1 + 648));
    if ( (*(_DWORD *)(v11 + 8) & 0x100) != 0 )
    {
      xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v11 + 56LL), 0LL, 0LL, 1LL, 0);
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, *(_QWORD *)v11);
      xxxMNSetCapture(v16, v11);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v16, v15);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v17);
  }
}
