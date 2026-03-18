/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140023450 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140024FB0 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     vEnableSynchronize @ 0x1400C98B4 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x1400C98F0 (bSpEnableSprites.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1400C992C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     GreMovePointer @ 0x1400C9E7C (GreMovePointer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int *v8; // rax
  __int64 v9; // rcx
  __int64 SessionState; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rcx
  void (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rax
  __int64 (__fastcall *v17)(_QWORD); // rax
  int (*v18)(void); // rax
  _QWORD v19[4]; // [rsp+20h] [rbp-59h] BYREF
  unsigned int *v20; // [rsp+40h] [rbp-39h]
  _BYTE v21[96]; // [rsp+50h] [rbp-29h] BYREF

  v2 = 0;
  v3 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2544LL) )
    return 1LL;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v21, a2);
  if ( v3
    || (v17 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)this + 2704LL)) != 0LL
    && (v3 = v17(*(_QWORD *)(*(_QWORD *)this + 1784LL))) != 0 )
  {
    v6 = *(_QWORD *)(W32GetSessionState(v5) + 88);
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v19, v7);
    v8 = (unsigned int *)HmgShareLock(v6, v3, 5, 0);
    v20 = v8;
    if ( v8 )
    {
      v8[28] |= 0x80000000;
      SessionState = W32GetSessionState(v9);
      HmgIncrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v20);
      *(_QWORD *)(*(_QWORD *)this + 2544LL) = v20;
      if ( !v20[24] )
        v20[24] = *(_DWORD *)(*(_QWORD *)this + 2092LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2544LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1792LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1808LL) & 0x8000000) != 0 )
        v20[28] |= 0x80000u;
      HmgShareLock(v6, **(_QWORD **)(*(_QWORD *)this + 1792LL), 8, 1);
      v11 = *(unsigned int *)(*(_QWORD *)this + 40LL);
      if ( (v11 & 1) != 0 )
      {
        v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 24) + 1648LL);
        if ( v18 )
        {
          if ( v18() >= 0 )
            GreMovePointer(*(_QWORD *)this);
        }
      }
      PDEVOBJ::vFilterDriverHooks(this);
      v12 = bSpEnableSprites(*(_QWORD *)this);
      vEnableSynchronize(*(_QWORD *)this);
      v13 = *(_QWORD *)this;
      v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1760LL);
      if ( v14 )
        v14((*(_QWORD *)(v13 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v13 + 2544) != 0LL), 4LL);
      if ( v20 )
      {
        v15 = W32GetSessionState(v13);
        HmgDecrementShareReferenceCount(*(_QWORD *)(v15 + 88), v20);
      }
      v2 = v12;
    }
    PopThreadGuardedObject(v19);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v21);
    return v2;
  }
  else
  {
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v21);
    return 0LL;
  }
}
