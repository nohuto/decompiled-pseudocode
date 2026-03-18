/*
 * XREFs of ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     GreRestoreDC @ 0x140037280 (GreRestoreDC.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400121C4 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x14003453C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400347AC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x140035A40 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     vRestoreRegion @ 0x140035B00 (vRestoreRegion.c)
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035F30 (-vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z @ 0x140037830 (-vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140038360 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x14003A7C0 (GreDCSelectBrush.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14003BEB4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400C33B0 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepRestoreDCOBJ(struct XDCOBJ *a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v5; // rcx
  unsigned int v7; // r13d
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rbx
  int v11; // r12d
  __int64 v12; // rcx
  int (*v13)(void); // rax
  __int64 v14; // rcx
  SURFACE *v15; // rcx
  struct _ERESOURCE *v16; // r15
  DC *v17; // rcx
  HPALETTE v18; // rdx
  __int64 v19; // rax
  struct _GRETHREAD *v20; // rax
  DC *v22; // rcx
  struct Gre::Base::SESSION_GLOBALS *v23; // rdi
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // r9
  int v27; // ecx
  unsigned int v28; // ecx
  _DWORD *v29; // r8
  __int64 v30; // rdx
  int v32; // eax
  int v33; // r15d
  void (__fastcall *v34)(struct XDCOBJ *, _QWORD); // rax
  int v35; // eax
  __int64 v36[2]; // [rsp+40h] [rbp-29h] BYREF
  DC *v37; // [rsp+50h] [rbp-19h] BYREF
  int v38; // [rsp+58h] [rbp-11h]
  __int64 v39; // [rsp+60h] [rbp-9h]
  __int64 v40; // [rsp+68h] [rbp-1h]
  _BYTE v41[80]; // [rsp+70h] [rbp+7h] BYREF
  int v42; // [rsp+D0h] [rbp+67h]
  int v43; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v44; // [rsp+E0h] [rbp+77h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)a1;
  v7 = 1;
  v8 = *(_QWORD *)(v5 + 976);
  v9 = *(_DWORD *)(v8 + 152);
  if ( (v9 & 0x1000) != 0 )
    GreDCSelectBrush(v5, *(_QWORD *)(v8 + 160));
  if ( (v9 & 0x2000) != 0 )
    GreDCSelectPen(*(DC **)a1);
  if ( a2 < 0 )
    a2 += *(_DWORD *)(*(_QWORD *)a1 + 104LL);
  if ( a2 < 1 || a2 >= *(_DWORD *)(*(_QWORD *)a1 + 104LL) )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
      GrepLockVisRgn((struct Gre::Base::SESSION_GLOBALS *)v3, v8, a3);
    v11 = *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x800;
    if ( v11 )
      DC::bMakeInfoDC(*(DC **)a1, 0);
    v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 104LL);
    while ( 1 )
    {
      v39 = v3;
      v40 = 0LL;
      v37 = 0LL;
      v38 = 0;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v41);
      v37 = (DC *)HmgLock(v39, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 1, 9);
      if ( !v37 )
        break;
      DEC_SHARE_REF_CNT_LAZY0((struct Gre::Base::SESSION_GLOBALS *)v3, *(struct BRUSH **)(*(_QWORD *)a1 + 136LL));
      DEC_SHARE_REF_CNT_LAZY0((struct Gre::Base::SESSION_GLOBALS *)v3, *(struct BRUSH **)(*(_QWORD *)a1 + 144LL));
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(
        (struct Gre::Base::SESSION_GLOBALS *)v3,
        *(struct HOBJ__ ***)(*(_QWORD *)a1 + 152LL));
      HmgDecrementShareReferenceCount(v3, *(unsigned int **)(*(_QWORD *)a1 + 96LL));
      vRestoreRegion((__int64 *)a1);
      v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 24) + 816LL);
      if ( v13 )
      {
        if ( v13() >= 0 )
        {
          v33 = *(_DWORD *)(*(_QWORD *)a1 + 104LL);
          v34 = *(void (__fastcall **)(struct XDCOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 24)
                                                               + 824LL);
          if ( v34 )
            v34(a1, (unsigned int)(v33 - 1));
        }
      }
      v15 = *(SURFACE **)(*(_QWORD *)a1 + 496LL);
      if ( v15 )
      {
        if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
        {
          GrepSelectBitmap((__int64)v36, (__int64)a1, *(_QWORD *)(*(_QWORD *)(v3 + 3088) + 168LL), 5);
        }
        else
        {
          v35 = *((_DWORD *)v15 + 28);
          if ( (v35 & 0x800) != 0 )
          {
            HmgDecrementShareReferenceCount(v3, *(unsigned int **)(*(_QWORD *)a1 + 496LL));
          }
          else if ( v35 >= 0 )
          {
            SURFACE::vDec_cRef(v15);
          }
        }
      }
      v16 = (struct _ERESOURCE *)(*(_QWORD *)v3 + 312LL);
      GreAcquireSemaphoreInternal(v16);
      GrepAcquireLockValidate<13>();
      v17 = v37;
      v18 = (HPALETTE)*((_QWORD *)v37 + 10);
      if ( *(HPALETTE *)(*(_QWORD *)a1 + 80LL) != v18 )
      {
        GrepSelectPalette(a1, v18, 1);
        v17 = v37;
      }
      if ( *(_QWORD *)(*(_QWORD *)a1 + 88LL) != *((_QWORD *)v17 + 11) )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v44, *(HPALETTE *)(*(_QWORD *)a1 + 80LL));
        *((_QWORD *)v37 + 11) = v44;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v44);
        v17 = v37;
      }
      v19 = *((_QWORD *)v17 + 11);
      if ( v19 != *(_QWORD *)(v3 + 3872) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v19 + 56));
        v17 = v37;
      }
      DC::vCopyTo(v17, a1);
      v43 = 0;
      if ( HmgRemoveObjectImpl((unsigned int *)v3, *(_QWORD *)v37, 1u, 0, 1, 1, &v43) || !v43 )
        XDCOBJ::vDeleteCore(&v37);
      else
        *((_WORD *)v37 + 7) |= 0x40u;
      if ( v16 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Palette", v16);
        v20 = GreGetCurrentThreadCrossSessionCheck();
        if ( v20 )
        {
          if ( (*((_BYTE *)v20 + 21))-- == 1 )
            *(_QWORD *)v20 &= ~0x2000uLL;
        }
        GreReleaseSemaphoreSharedInternal(v16);
      }
      DCOBJ::~DCOBJ((DCOBJ *)&v37);
      if ( a2 >= *(_DWORD *)(*(_QWORD *)a1 + 104LL) )
        goto LABEL_34;
    }
    EngSetLastError(6u);
    v7 = 0;
    DCOBJ::~DCOBJ((DCOBJ *)&v37);
LABEL_34:
    v22 = *(DC **)a1;
    if ( v42 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 104LL) )
    {
      *((_DWORD *)v22 + 63) |= 1u;
      v22 = *(DC **)a1;
    }
    if ( v11 )
      DC::bMakeInfoDC(v22, 1);
    v23 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a1 + 2);
    DC::vReleaseRao(*(DC **)a1, v23);
    DC::AcquireDcVisRgnShared(*(DC **)a1, (__int64)v36);
    DC::vUpdate_VisRect(*(DC **)a1, v23, *(struct REGION **)(*(_QWORD *)a1 + 1136LL));
    _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(v36);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x12001Fu;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
      DC::bSetDefaultRegion(*(DC **)a1);
    v24 = *(_QWORD *)a1;
    v25 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    v26 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    if ( (v25 & 1) != 0
      || *(_DWORD *)(v24 + 32) == 1
      && v26
      && ((v32 = *(_DWORD *)(v26 + 112), (v32 & 0x4000) != 0) || (*(_BYTE *)(v10 + 40) & 1) != 0
                                                              && (v32 & 0x800000) != 0) )
    {
      *(_DWORD *)(v24 + 36) = v25 | 0x200;
      v27 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
      if ( (*(_DWORD *)(v26 + 112) & 0x200) != 0 )
        v28 = v27 | 0x8000;
      else
        v28 = v27 & 0xFFFF7FFF;
      *(_DWORD *)(*(_QWORD *)a1 + 36LL) = v28;
    }
    else
    {
      *(_DWORD *)(v24 + 36) = v25 & 0xFFFFFDFF;
    }
    v29 = *(_DWORD **)a1;
    v30 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1;
    v29[298] = *(_DWORD *)(*(_QWORD *)a1 + 124LL) + *(_DWORD *)(*(_QWORD *)a1 + 8 * v30 + 1016);
    v29[299] = v29[32] + v29[2 * v30 + 255];
    if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
      GrepUnlockVisRgn((struct Gre::Base::SESSION_GLOBALS *)v3);
  }
  return v7;
}
