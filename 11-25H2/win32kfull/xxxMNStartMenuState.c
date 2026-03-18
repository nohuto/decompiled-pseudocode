/*
 * XREFs of xxxMNStartMenuState @ 0x140256734
 * Callers:
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostTransformableMessage @ 0x140020914 (_PostTransformableMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x14015BD30 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     MNAllocMenuState @ 0x14015BF08 (MNAllocMenuState.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D9BFC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNAllocPopup @ 0x140208610 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1402565F0 (MNFreePopup.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140267238 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     NullifyLookasideRef @ 0x140267260 (NullifyLookasideRef.c)
 *     MNMarkDelayedFreePopup @ 0x1402674FC (MNMarkDelayedFreePopup.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 */

struct tagMENUSTATE *__fastcall xxxMNStartMenuState(struct tagWND *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  void *v15; // rax
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  struct tagWND *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  struct tagMENUSTATE *v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp+17h] BYREF
  __int64 *v36[2]; // [rsp+80h] [rbp+27h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp+37h] BYREF
  struct tagMENUSTATE *v38; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, 0LL);
  v9 = PtiCurrent(v7, v6);
  if ( *((_QWORD *)v9 + 81) )
    goto LABEL_16;
  v10 = *((_QWORD *)a1 + 5);
  LOBYTE(v8) = *(_BYTE *)(v10 + 31) & 0xC0;
  if ( (_BYTE)v8 == 64 )
  {
    do
    {
      if ( (*(_BYTE *)(v10 + 30) & 8) != 0 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v10 = *((_QWORD *)a1 + 5);
    }
    while ( (*(_BYTE *)(v10 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) + 128LL);
  }
  if ( !a1 )
    goto LABEL_16;
  v11 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v11 )
  {
    if ( *(_QWORD *)(v11 + 8) || *(_QWORD *)(v11 + 16) )
      goto LABEL_16;
  }
  v12 = *((_QWORD *)a1 + 5);
  if ( ((*(_BYTE *)(v12 + 31) & 0xC0) == 0x40 || !*((_QWORD *)a1 + 21)) && (*(_BYTE *)(v12 + 30) & 8) == 0 )
    goto LABEL_16;
  v13 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( *((_QWORD *)v13 + 81) )
    goto LABEL_16;
  if ( v13 != v9 )
  {
    PostTransformableMessage(a1, 0x112u, v3, a3, 1);
LABEL_16:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v33, v8);
    return 0LL;
  }
  v15 = MNAllocPopup(0LL, v8);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v33, (__int64)v15);
  if ( !*v33[0] )
    goto LABEL_16;
  v16 = (struct tagTHREADINFO **)MNAllocMenuState(v33, v8);
  if ( !v16 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, *v33[0]);
    MNFreePopup(v36);
    v17 = *v33[0];
    if ( v17 == W32GetUserSessionState(v19, v18) + 65792 )
    {
      UserSessionState = W32GetUserSessionState(v21, v20);
      *(_DWORD *)(UserSessionState + 66800) &= ~0x800000u;
      v25 = W32GetUserSessionState(v24, v23);
      NullifyLookasideRef(*(_QWORD *)(v25 + 65880));
    }
    else
    {
      FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(*v33[0]);
    }
    goto LABEL_16;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v38, v16);
  **(_DWORD **)v33[0] |= 1u;
  **(_DWORD **)v33[0] |= 2u;
  v34[1] = a1;
  v34[0] = *v33[0] + 8LL;
  HMAssignmentLock(v34, 0LL);
  *(_DWORD *)(*v33[0] + 80LL) = -1;
  v35[1] = a1;
  v35[0] = *v33[0] + 16LL;
  HMAssignmentLock(v35, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, 0LL);
  MNMarkDelayedFreePopup(v33, v36);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v36, v26);
  *(_QWORD *)(*v33[0] + 64LL) = *v33[0];
  v27 = a1;
  v28 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v28 + 31) & 0xC0) == 0x40 )
  {
    do
      v27 = (struct tagWND *)*((_QWORD *)v27 + 13);
    while ( (*(_BYTE *)(*((_QWORD *)v27 + 5) + 31LL) & 0xC0) == 0x40 );
  }
  v29 = *((_QWORD *)v27 + 21);
  if ( v29 )
    **(_DWORD **)v33[0] = **(_DWORD **)v33[0] & 0xFFBFFFFF | ((*(_DWORD *)(*(_QWORD *)(v29 + 40) + 40LL) & 0x20) << 17);
  else
    **(_DWORD **)v33[0] = **(_DWORD **)v33[0] & 0xFFBFFFFF | ((*(_BYTE *)(v28 + 25) & 0x20) << 17);
  Win32HM_LockIntoThread<0>((__int64)v9, (__int64)a1, BugCheckParameter3);
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 529LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v30);
  v31 = v38;
  if ( !v38 || (unsigned int)xxxUnlockMenuStateInternal(v38, 0) )
    v31 = 0LL;
  v38 = 0LL;
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v38);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v33, v32);
  return v31;
}
