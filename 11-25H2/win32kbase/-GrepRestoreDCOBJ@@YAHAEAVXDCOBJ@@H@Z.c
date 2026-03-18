/*
 * XREFs of ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDC @ 0x140124580 (GreRestoreDC.c)
 * Callees:
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x140012950 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140017320 (-HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x14001C2F0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x14001C840 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14001C960 (--1EPALOBJ@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GreDCSelectBrush @ 0x14001CA90 (GreDCSelectBrush.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001CE78 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140075390 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreDCSelectPen @ 0x140090080 (GreDCSelectPen.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C5FB8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1400D63BC (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7A2C (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400EBB0C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     vRestoreRegion @ 0x1400F33E0 (vRestoreRegion.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140178E6C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0RustAutoHotpatchLockSH@@QEAA@XZ @ 0x1401C4338 (--0RustAutoHotpatchLockSH@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C4D28 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C4ED4 (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 *     ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C63A0 (-vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVR.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C65FC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?vReleaseRaoFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C6880 (-vReleaseRaoFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepLockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C75C0 (-GrepLockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C76A0 (-GrepUnlockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C8050 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepRestoreDCOBJ(struct XDCOBJ *a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  unsigned int v6; // r13d
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int (*v13)(void); // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  void (__fastcall *v18)(struct XDCOBJ *, _QWORD); // rax
  SURFACE *v19; // rcx
  int v20; // eax
  DC *v21; // rcx
  struct _ERESOURCE *v22; // rdx
  __int64 v23; // rax
  struct _ERESOURCE *v24; // rbx
  struct _GRETHREAD *v25; // rax
  DC *v27; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  DC *v29; // rcx
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // r8
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // ecx
  __int64 v37; // [rsp+20h] [rbp-59h]
  char v38; // [rsp+28h] [rbp-51h]
  _BYTE v39[16]; // [rsp+30h] [rbp-49h] BYREF
  DC *v40[18]; // [rsp+40h] [rbp-39h] BYREF
  struct _BASEOBJECT *v41; // [rsp+E0h] [rbp+67h] BYREF
  int v42; // [rsp+E8h] [rbp+6Fh]
  HSEMAPHORE v43; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v44; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD *)a1;
  v6 = 1;
  v7 = *(_QWORD *)(v4 + 976);
  v8 = *(_DWORD *)(v7 + 152);
  if ( (v8 & 0x1000) != 0 )
    GreDCSelectBrush(v4, *(struct HOBJ__ **)(v7 + 160));
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(*(DC **)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
  if ( a2 < 0 )
    a2 += *(_DWORD *)(*(_QWORD *)a1 + 104LL);
  if ( a2 < 1 || a2 >= *(_DWORD *)(*(_QWORD *)a1 + 104LL) )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
    {
      if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
        GrepLockVisRgnFast((struct Gre::Base::SESSION_GLOBALS *)v2);
      else
        GreLockVisRgn(v9);
    }
    v10 = *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x800;
    if ( v10 )
      DC::bMakeInfoDC(*(DC **)a1, 0);
    v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 104LL);
    while ( 1 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v40, (struct Gre::Base::SESSION_GLOBALS *)v2);
      v40[0] = (DC *)HmgLockEx2((__int64)v40[2], *(_QWORD *)(*(_QWORD *)a1 + 112LL), 1, 9u);
      if ( !v40[0] )
        break;
      if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      {
        DEC_SHARE_REF_CNT_LAZY0_FAST_OPT(
          (struct Gre::Base::SESSION_GLOBALS *)v2,
          *(struct BRUSH **)(*(_QWORD *)a1 + 136LL));
        DEC_SHARE_REF_CNT_LAZY0_FAST_OPT(
          (struct Gre::Base::SESSION_GLOBALS *)v2,
          *(struct BRUSH **)(*(_QWORD *)a1 + 144LL));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT(
          (struct Gre::Base::SESSION_GLOBALS *)v2,
          *(struct LFONT **)(*(_QWORD *)a1 + 152LL));
        HmgDecrementShareReferenceCountExFastOpt(
          (struct Gre::Base::SESSION_GLOBALS *)v2,
          *(struct _BASEOBJECT **)(*(_QWORD *)a1 + 96LL),
          0LL);
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(*(_QWORD *)a1 + 136LL));
        DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(*(_QWORD *)a1 + 144LL));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(*(_QWORD *)a1 + 152LL));
        HmgDecrementShareReferenceCountEx(*(struct _BASEOBJECT **)(*(_QWORD *)a1 + 96LL), 0LL);
      }
      vRestoreRegion((__int64 *)a1);
      v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 24) + 816LL);
      if ( v13 )
      {
        if ( v13() >= 0 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)a1 + 104LL);
          v18 = *(void (__fastcall **)(struct XDCOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 24)
                                                               + 824LL);
          if ( v18 )
            v18(a1, (unsigned int)(v17 - 1));
        }
      }
      v19 = *(SURFACE **)(*(_QWORD *)a1 + 496LL);
      if ( v19 )
      {
        if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
        {
          LOBYTE(v14) = 5;
          GrepSelectBitmap(v39, a1, *(_QWORD *)(*(_QWORD *)(v2 + 3008) + 168LL), v14);
        }
        else
        {
          v20 = *((_DWORD *)v19 + 28);
          if ( (v20 & 0x800) != 0 )
          {
            if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
              HmgDecrementShareReferenceCountExFastOpt(
                (struct Gre::Base::SESSION_GLOBALS *)v2,
                *(struct _BASEOBJECT **)(*(_QWORD *)a1 + 496LL),
                0LL);
            else
              HmgDecrementShareReferenceCountEx(*(struct _BASEOBJECT **)(*(_QWORD *)a1 + 496LL), 0LL);
          }
          else if ( v20 >= 0 )
          {
            SURFACE::vDec_cRef(v19);
          }
        }
      }
      SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v43, (struct _ERESOURCE **)v2);
      v21 = v40[0];
      v22 = (struct _ERESOURCE *)*((_QWORD *)v40[0] + 10);
      if ( *(struct _ERESOURCE **)(*(_QWORD *)a1 + 80LL) != v22 )
      {
        GrepSelectPalette(a1, v22, 1);
        v21 = v40[0];
      }
      if ( *(_QWORD *)(*(_QWORD *)a1 + 88LL) != *((_QWORD *)v21 + 11) )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v41, *(_QWORD *)(*(_QWORD *)a1 + 80LL));
        *((_QWORD *)v40[0] + 11) = v41;
        EPALOBJ::~EPALOBJ(&v41);
        v21 = v40[0];
      }
      v23 = *((_QWORD *)v21 + 11);
      if ( v23 != *(_QWORD *)(v2 + 3768) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v23 + 56));
        v21 = v40[0];
      }
      DC::vCopyTo(v21, a1);
      XDCOBJ::vDeleteCore((XDCOBJ *)v40);
      v24 = (struct _ERESOURCE *)v43;
      if ( v43 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v43);
        v25 = GreGetCurrentThreadCrossSessionCheck();
        if ( v25 )
        {
          if ( (*((_BYTE *)v25 + 21))-- == 1 )
            *(_QWORD *)v25 &= ~0x2000uLL;
        }
        GreReleaseSemaphoreSharedInternal(v24);
        v43 = 0LL;
      }
      DCOBJ::~DCOBJ((DCOBJ *)v40);
      if ( a2 >= *(_DWORD *)(*(_QWORD *)a1 + 104LL) )
        goto LABEL_47;
    }
    EngSetLastError(6u);
    v6 = 0;
    DCOBJ::~DCOBJ((DCOBJ *)v40);
LABEL_47:
    v27 = *(DC **)a1;
    if ( v42 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 104LL) )
    {
      *((_DWORD *)v27 + 63) |= 1u;
      v27 = *(DC **)a1;
    }
    if ( v10 )
      DC::bMakeInfoDC(v27, 1);
    IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
    v29 = *(DC **)a1;
    if ( IsEnabledDeviceUsageNoInline )
    {
      DC::vReleaseRaoFastOpt(v29, (struct Gre::Base::SESSION_GLOBALS *)v2);
      RustAutoHotpatchLockSH::RustAutoHotpatchLockSH((RustAutoHotpatchLockSH *)&v44);
      DC::AcquireDcVisRgnShared(*(DC **)a1);
      DC::vUpdate_VisRectFastOpt(
        *(DC **)a1,
        (struct Gre::Base::SESSION_GLOBALS *)v2,
        (const struct RustAutoHotpatchLockSH *)&v44,
        *(struct REGION **)(*(_QWORD *)a1 + 1136LL));
      if ( v38 )
        CPushLock::ReleaseLock((CPushLock *)(v37 + 1112));
      ExReleasePushLockSharedEx(v44, 2LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      DC::vReleaseRao(v29);
      DC::AcquireDcVisRgnShared(*(DC **)a1);
      DC::vUpdate_VisRect(*(DC **)a1, *(struct REGION **)(*(_QWORD *)a1 + 1136LL));
      if ( v38 )
        CPushLock::ReleaseLock((CPushLock *)(v37 + 1112));
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x12001Fu;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
      DC::bSetDefaultRegion(*(DC **)a1);
    v30 = *(_QWORD *)a1;
    v31 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    v32 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    if ( (v31 & 1) != 0
      || *(_DWORD *)(v30 + 32) == 1
      && v32
      && ((v33 = *(_DWORD *)(v32 + 112), (v33 & 0x4000) != 0) || (v33 & 0x800000) != 0
                                                              && (*(_DWORD *)(v9 + 40) & 1) != 0) )
    {
      *(_DWORD *)(v30 + 36) = v31 | 0x200;
      v30 = *(_QWORD *)a1;
      v35 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
      if ( (*(_DWORD *)(v32 + 112) & 0x200) != 0 )
        v34 = v35 | 0x8000;
      else
        v34 = v35 & 0xFFFF7FFF;
    }
    else
    {
      v34 = v31 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v30 + 36) = v34;
    DC::vCalcFillOrigin(*(DC **)a1);
    if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
    {
      if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
        GrepUnlockVisRgnFast((struct Gre::Base::SESSION_GLOBALS *)v2);
      else
        GreUnlockVisRgn(v9);
    }
  }
  return v6;
}
