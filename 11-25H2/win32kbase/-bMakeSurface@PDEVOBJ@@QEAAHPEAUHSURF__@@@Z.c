/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400939A0
 * Callers:
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140040EC0 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140086FC0 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140093C3C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     vEnableSynchronize @ 0x140093C88 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x140093CC4 (bSpEnableSprites.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x140093D00 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     GreMovePointer @ 0x140093F80 (GreMovePointer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  __int64 SessionState; // rax
  int (*v7)(void); // rax
  unsigned int v8; // esi
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 (__fastcall *v11)(_QWORD); // rax
  _BYTE v12[32]; // [rsp+20h] [rbp-A8h] BYREF
  struct _BASEOBJECT *v13; // [rsp+40h] [rbp-88h]
  _BYTE v14[96]; // [rsp+50h] [rbp-78h] BYREF

  v2 = 0;
  if ( *(_QWORD *)(*(_QWORD *)this + 2544LL) )
    return 1LL;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
  if ( a2
    || (v11 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)this + 2704LL)) != 0LL
    && (a2 = (HSURF)v11(*(_QWORD *)(*(_QWORD *)this + 1784LL))) != 0LL )
  {
    SessionState = W32GetSessionState(v5);
    SURFREF::SURFREF((SURFREF *)v12, a2, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
    if ( v13 )
    {
      *((_DWORD *)v13 + 28) |= 0x80000000;
      HmgIncrementShareReferenceCount(v13);
      *(_QWORD *)(*(_QWORD *)this + 2544LL) = v13;
      if ( !*((_DWORD *)v13 + 24) )
        *((_DWORD *)v13 + 24) = *(_DWORD *)(*(_QWORD *)this + 2092LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2544LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1792LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1808LL) & 0x8000000) != 0 )
        *((_DWORD *)v13 + 28) |= 0x80000u;
      HmgShareLockEx(**(_QWORD **)(*(_QWORD *)this + 1792LL), 8, 0);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
      {
        v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1672LL);
        if ( v7 )
        {
          if ( v7() >= 0 )
            GreMovePointer(*(_QWORD *)this);
        }
      }
      PDEVOBJ::vFilterDriverHooks(this);
      v8 = bSpEnableSprites(*(_QWORD *)this);
      vEnableSynchronize(*(_QWORD *)this);
      v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1760LL);
      if ( v9 )
        v9(
          (*(_QWORD *)(*(_QWORD *)this + 2544LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2544LL) != 0LL),
          4LL);
      v2 = v8;
    }
    SURFREF::~SURFREF((SURFREF *)v12);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
    return v2;
  }
  else
  {
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
    return 0LL;
  }
}
