/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007818C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140078278 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A358 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007AAA0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007BCFC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007E530 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x14007E6B0 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x140088F00 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400893A4 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1400894C0 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x140089E58 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A700 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x14008BE80 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14008C23C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140144388 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140145460 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14015021C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140153094 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14016CB84 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x14017AFD8 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x14018BBBC (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x14022F0F8 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14026A5A0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct _ERESOURCE ***a2, struct XDCOBJ *a3)
{
  int v3; // r12d
  int v7; // ebp
  struct _ERESOURCE **v9; // r13
  struct _ERESOURCE **v10; // rcx
  __int64 v11; // rdx
  struct _ERESOURCE **v12; // r8
  Gre::Base *v13; // rcx
  int v14; // eax
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // rdx
  Gre::Base *v17; // rcx
  __int64 v18; // rbx
  int v19; // esi
  int v20; // eax
  int v21; // eax
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  struct _ERESOURCE **v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v30; // rax
  int v31; // eax
  int v32; // ebx
  struct _ERESOURCE **v33; // rdx
  __int64 v34; // rdx
  struct _ERESOURCE **v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rcx
  DC *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  struct _ERESOURCE *v44; // rbx
  struct _GRETHREAD *v45; // rax
  unsigned __int64 v46; // rdx
  struct _ERESOURCE **v47; // rcx
  struct _ERESOURCE *v48; // rax
  int v49; // ebp
  int v50; // eax
  int v51; // edx
  DC *v52; // rcx
  struct _ERESOURCE **v53; // rdx
  int v54; // ecx
  struct _ERESOURCE *v55; // rbx
  int v56; // eax
  DC *v57; // rcx
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  struct _DC_ATTR *UserAttr; // rax
  HDC v63; // rdx
  XDCOBJ *v64; // rdi
  OBJECT *v65; // rax
  struct _DC_ATTR *v66; // rax
  int v67; // ecx
  int v68; // r9d
  int v69; // r10d
  bool v70; // zf
  struct _ERESOURCE *v71; // rbx
  int v72; // eax
  DC *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  int v78; // ecx
  int v79; // ecx
  int v80; // edx
  int v81; // ecx
  struct _ERESOURCE *v82; // r9
  int v83; // edx
  DC *v84; // rcx
  struct SURFACE **v85; // rbx
  struct SURFACE *v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct _GRETHREAD *v91; // rax
  __int64 v92; // r9
  struct _GRETHREAD *v93; // rsi
  __int64 v94; // rcx
  struct _ERESOURCE *v95; // rdx
  __int64 v96; // rbx
  HSEMAPHORE v97; // rsi
  struct _GRETHREAD *v98; // rax
  __int64 v99; // rax
  signed __int32 v100[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v101[8]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int8 v102; // [rsp+38h] [rbp-70h]
  _BYTE v103[32]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v104; // [rsp+60h] [rbp-48h]
  __int64 v105; // [rsp+B8h] [rbp+10h] BYREF
  struct _ERESOURCE *v106; // [rsp+C0h] [rbp+18h] BYREF

  v3 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v7 = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = **a2;
  *((_QWORD *)this + 41) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(
          (struct XDCOBJ *)a2,
          (HSURF *)this + 37,
          (HSURF *)this + 36,
          (unsigned int *)this + 29)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 40, (HSURF *)this + 39, 0LL) )
  {
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v9 = a2[2];
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 || *a2 && (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    v10 = a2[2];
    *((_QWORD *)this + 2) = *v9 + 6;
    GreAcquireSemaphoreShared<1,>(v10);
    *((_DWORD *)this + 28) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !ExIsResourceAcquiredSharedLite(*v9 + 11) )
    {
      GreAcquireSemaphoreShared<2,>(v9);
      v3 = 1;
    }
    v11 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      v12 = *a2;
      if ( *a2 )
      {
        v68 = *(_DWORD *)(v11 + 36);
        v69 = *((_DWORD *)v12 + 9);
        if ( ((v69 ^ v68) & 0x200) != 0 )
          v7 = (**(_BYTE **)(v11 + 976) & 1) != 0 && (*((_DWORD *)v12 + 9) & 0x8000) != 0
            || ((__int64)v12[122]->SystemResourcesList.Flink & 1) != 0 && (v68 & 0x8000) != 0;
        else
          v7 = ((unsigned __int16)v69 & (unsigned __int16)v68 & 0x8200) == 33280;
      }
      v105 = *(_QWORD *)(v11 + 48);
      v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v105);
    }
    if ( *a2 )
    {
      v106 = (*a2)[6];
      v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v106);
    }
  }
  v13 = *(Gre::Base **)a3;
  v14 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v14 & 0x200) != 0 )
  {
    if ( (v14 & 0x8000) == 0 || !v7 )
    {
      v95 = (struct _ERESOURCE *)*((_QWORD *)v13 + 8);
      *((_QWORD *)this + 1) = v95;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      if ( v3 && v95 == &(*v9)[11] )
      {
        GreReleaseSemaphoreShared<2,>((__int64 *)v9);
        v3 = 0;
      }
      if ( *((struct _ERESOURCE **)this + 1) == &(*v9)[11] )
      {
        *((_DWORD *)this + 28) |= 0x200000u;
        GreAcquireSemaphore<2,>((__int64 *)v9);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 4));
      }
    }
    if ( (!*a2 || (*((_DWORD *)*a2 + 9) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      CurrentThread = GreGetCurrentThread(v76, v75);
      if ( CurrentThread )
      {
        *((_QWORD *)CurrentThread + 38) = 0LL;
        *((_QWORD *)CurrentThread + 37) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreShared<3,>(v9);
    }
    v13 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)a3 + 36LL);
    if ( ((unsigned __int16)v13 & 0x1000) != 0 && ((unsigned __int16)v13 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
        GreReleaseSemaphoreShared<3,>((__int64 *)v9);
      *((_DWORD *)this + 28) &= ~1u;
      if ( v3 )
      {
        GreReleaseSemaphoreShared<2,>((__int64 *)v9);
        return 0LL;
      }
      return 0LL;
    }
  }
  v15 = Gre::Base::Globals(v13);
  v17 = *(Gre::Base **)a3;
  v18 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  if ( v18 )
  {
    if ( *((_QWORD *)a3 + 3) )
      v18 = *((_QWORD *)a3 + 3);
  }
  else
  {
    v18 = *((_QWORD *)v15 + 533);
  }
  v19 = 0;
  if ( !*(_DWORD *)(v18 + 656) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *(_DWORD *)(v18 + 656) )
  {
    v20 = *(_DWORD *)(v18 + 112);
    if ( (v20 & 0x800) != 0 )
    {
      v21 = UserSurfaceAccessCheck(*(_QWORD *)(v18 + 648));
      goto LABEL_23;
    }
    if ( (v20 & 0x10000000) != 0 )
    {
      v21 = UserScreenAccessCheck(v17, v16);
LABEL_23:
      v19 = v21;
      goto LABEL_24;
    }
    v19 = 1;
  }
LABEL_24:
  *((_DWORD *)this + 28) ^= (*((_DWORD *)this + 28) ^ (v19 << 22)) & 0x400000;
  v22 = Gre::Base::Globals(v17);
  v23 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  if ( v23 )
  {
    if ( *((_QWORD *)a3 + 3) )
      v23 = *((_QWORD *)a3 + 3);
  }
  else
  {
    v23 = *((_QWORD *)v22 + 533);
  }
  v24 = *((_DWORD *)this + 28) & 0xFF7FFFFF | ~(*(_DWORD *)(v23 + 112) >> 5) & 0x800000;
  *((_DWORD *)this + 28) = v24;
  v25 = *a2;
  if ( *a2 )
  {
    v26 = *((_DWORD *)v25 + 9);
    if ( (v26 & 0x200) == 0 )
      goto LABEL_318;
    if ( (v26 & 0x8000) == 0 || !v7 )
    {
      v82 = v25[8];
      *(_QWORD *)this = v82;
      *((_QWORD *)this + 3) = (*a2)[6];
      if ( v3 && v82 == &(*v9)[11] )
      {
        GreReleaseSemaphoreShared<2,>((__int64 *)v9);
        v24 = *((_DWORD *)this + 28);
        v3 = 0;
      }
      if ( *(struct _ERESOURCE **)this == &(*v9)[11] )
      {
        *((_DWORD *)this + 28) = v24 | 0x100000;
        GreAcquireSemaphore<2,>((__int64 *)v9);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 3));
      }
      v83 = *((_DWORD *)this + 28);
      if ( (v83 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 28) = v83 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v28, v27);
      if ( CurrentThreadNonPaged )
      {
        v30 = *CurrentThreadNonPaged;
        if ( v30 )
        {
          v99 = v30 + 8;
          if ( v99 )
          {
            *(_QWORD *)(v99 + 304) = 0LL;
            *(_QWORD *)(v99 + 296) = 0LL;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreShared<3,>(v9);
    }
    v25 = *a2;
    v31 = *((_DWORD *)*a2 + 9);
    if ( (v31 & 0x1000) != 0 && (v31 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
        GreReleaseSemaphoreShared<3,>((__int64 *)v9);
      v70 = v3 == 0;
LABEL_264:
      if ( !v70 )
      {
LABEL_183:
        GreReleaseSemaphoreShared<2,>((__int64 *)v9);
        *((_DWORD *)this + 28) &= ~1u;
        return 0LL;
      }
LABEL_191:
      *((_DWORD *)this + 28) &= ~1u;
      return 0LL;
    }
    if ( v25 )
    {
LABEL_318:
      v32 = v3;
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && (*((_DWORD *)v25 + 9) & 0x80000) != 0 )
      {
        if ( !*((_QWORD *)this + 2) )
          goto LABEL_153;
        goto LABEL_152;
      }
    }
  }
  v32 = v3;
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      GreReleaseSemaphoreShared<3,>((__int64 *)v9);
    if ( v3 )
      GreReleaseSemaphoreShared<2,>((__int64 *)v9);
    goto LABEL_191;
  }
  if ( v25
    && ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*((_DWORD *)v25 + 9) & 0x200) == 0)
    && (*((_DWORD *)v25 + 9) & 0x10) != 0
    && !DC::bCompute((DC *)v25) )
  {
    if ( !*((_QWORD *)this + 2) )
    {
LABEL_153:
      v70 = v32 == 0;
      goto LABEL_264;
    }
LABEL_152:
    GreReleaseSemaphoreShared<3,>((__int64 *)v9);
    goto LABEL_153;
  }
  v33 = *a2;
  if ( (!(*a2)[146] || ((_DWORD)v33[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)*a2))
    && !v33[144]
    && (!v33[145] || ((_DWORD)v33[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v33))
    && !v33[143] )
  {
    goto LABEL_191;
  }
  if ( ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    if ( *((_QWORD *)this + 2) )
      GreReleaseSemaphoreShared<3,>((__int64 *)v9);
    if ( v3 )
      goto LABEL_183;
    goto LABEL_191;
  }
  v34 = *(_QWORD *)a3;
  if ( (!*(_QWORD *)(*(_QWORD *)a3 + 1168LL)
     || (*(_DWORD *)(v34 + 40) & 2) == 0
     || !(unsigned int)DC::bDpiScaledSurface(*(DC **)a3))
    && !*(_QWORD *)(v34 + 1152)
    && (!*(_QWORD *)(v34 + 1160) || (*(_DWORD *)(v34 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v34))
    && !*(_QWORD *)(v34 + 1144) )
  {
    goto LABEL_191;
  }
  v35 = *a2;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 || (*(_DWORD *)(v34 + 36) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_69;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 36) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering((DC *)*a2);
      v38 = (__int64 *)W32GetCurrentThreadNonPaged(v37, v36);
      if ( v38 )
      {
        v39 = *v38;
        if ( *v38 )
        {
          v96 = v39 + 8;
          if ( v39 != -8 )
          {
            *(_QWORD *)(v39 + 304) = *a2;
            if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
            {
              *(_DWORD *)(v39 + 352) |= 1u;
              (*a2)[247] = 0LL;
              v97 = (HSEMAPHORE)&(*v9)[8];
              GreAcquireSemaphoreSharedInternal(v97);
              GrepAcquireLockValidate<14>();
              *(_DWORD *)(v96 + 356) = *((_DWORD *)v9 + 1070);
              EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", v97);
              v98 = GreGetCurrentThreadCrossSessionCheck();
              if ( v98 )
              {
                v70 = (*((_BYTE *)v98 + 22))-- == 1;
                if ( v70 )
                  *(_QWORD *)v98 &= ~0x4000uLL;
                if ( !*(_QWORD *)v98 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreSharedInternal(v97);
            }
          }
        }
      }
    }
    v40 = *(DC **)a3;
    if ( **(struct _ERESOURCE ***)a3 != **a2 && (*((_DWORD *)v40 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 39) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v40);
      v43 = W32GetCurrentThreadNonPaged(v42, v41);
      if ( v43 )
      {
        if ( *(_QWORD *)v43 && *(_QWORD *)v43 != -8LL )
          *(_QWORD *)(*(_QWORD *)v43 + 312LL) = *(_QWORD *)a3;
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x80000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    GreReleaseSemaphoreShared<3,>((__int64 *)v9);
LABEL_69:
  if ( v3 )
  {
    v44 = *v9;
    EtwTraceGreLockReleaseSemaphore(L"GreLock", &(*v9)[11]);
    v45 = GreGetCurrentThreadCrossSessionCheck();
    if ( v45 )
    {
      v70 = (*((_BYTE *)v45 + 10))-- == 1;
      if ( v70 )
        *(_QWORD *)v45 &= ~4uLL;
      if ( !*(_QWORD *)v45 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreSharedInternal((HSEMAPHORE)&v44[11]);
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    goto LABEL_105;
  if ( *(_QWORD *)a3 )
    v46 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v46 = 0LL;
  v47 = *a2;
  if ( *a2 )
    v48 = v47[62];
  else
    v48 = 0LL;
  v49 = 0;
  if ( !v46 || !v48 || (struct _ERESOURCE *)v46 == v48 )
  {
    if ( v47 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1) )
      v49 = 1;
    if ( (!*a2 || **a2 != **(struct _ERESOURCE ***)a3)
      && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, (int)v35, 0) )
    {
      goto LABEL_191;
    }
LABEL_102:
    if ( v49 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0 && (*a2)[62] && *(_QWORD *)this )
      goto LABEL_191;
    if ( ((__int64)(*a2)[6]->ExclusiveWaiters & 0x8000) != 0
      && *(_QWORD *)(*(_QWORD *)a3 + 496LL)
      && *((_QWORD *)this + 1) )
    {
      *((_QWORD *)this + 13) = a3;
      v85 = (struct SURFACE **)((char *)this + 40);
      *((_QWORD *)this + 12) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL);
      if ( !bCopySurface(
              (DEVLOCKBLTOBJ *)((char *)this + 40),
              (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 24LL)) )
        goto LABEL_191;
      v86 = *v85;
      if ( *((_QWORD *)a3 + 3) )
        goto LABEL_191;
      SURFREF::SURFREF((SURFREF *)v103, *v85);
      v87 = v104;
      *((_QWORD *)a3 + 3) = v86;
      INC_SHARE_REF_CNT(v87);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v103);
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      LOBYTE(v88) = 5;
      GrepSelectBitmap(v101, a3, *((_QWORD *)*v85 + 4), v88);
      if ( v102 )
      {
        v91 = GreGetCurrentThread(v90, v89);
        v93 = v91;
        if ( !v91 || *((_QWORD *)v91 + 41) )
          goto LABEL_191;
        if ( !*((_DWORD *)this + 22) )
        {
          PushThreadGuardedObject((char *)this + 56, 0LL, DEVLOCKBLTOBJ::TmpSrcThreadCleanup, v92);
          *((_DWORD *)this + 22) = 1;
          v85 = (struct SURFACE **)((char *)this + 40);
        }
        v94 = (__int64)*v85 + 24;
        if ( !*v85 )
          v94 = 0LL;
        *((_QWORD *)v93 + 41) = v94;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x4000) == 0 )
          TraceLoggingWriteUnsupportedGdiUsage(
            16LL,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 100LL),
            v102,
            0LL);
      }
      if ( (*((_DWORD *)this + 28) & 0x200000) != 0 )
      {
        GreReleaseSemaphoreExclusive<2>();
        *((_DWORD *)this + 28) &= ~0x200000u;
      }
      else if ( *((_QWORD *)this + 1) )
      {
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
      }
      v70 = *((_QWORD *)this + 2) == 0LL;
      *((_QWORD *)this + 1) = 0LL;
      *((_QWORD *)this + 4) = 0LL;
      if ( !v70 )
      {
        GreReleaseSemaphoreShared<1,>((__int64 *)v9);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
LABEL_105:
    v59 = *((_DWORD *)this + 28);
    if ( (v59 & 0x1000) == 0 && (v59 & 0x80000) == 0 )
      return 1LL;
    v60 = *((_QWORD *)this + 15);
    if ( v60 )
      goto LABEL_116;
    XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), (HDC)**a2);
    v61 = *((_QWORD *)this + 15);
    if ( v61 )
    {
      if ( (*(_DWORD *)(v61 + 44) & 2) == 0 )
      {
        if ( (*((_DWORD *)this + 38) & 2) == 0 )
        {
          UserAttr = XDCOBJ::GetUserAttr((DEVLOCKBLTOBJ *)((char *)this + 120));
          if ( UserAttr )
          {
            if ( !DC::SaveAttributes(*((DC **)this + 15), UserAttr) )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*((OBJECT **)this + 15));
              *((_QWORD *)this + 15) = 0LL;
              goto LABEL_114;
            }
          }
        }
        *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 2u;
        *((_DWORD *)this + 32) = 1;
      }
      v84 = (DC *)*((_QWORD *)this + 15);
      if ( (*((_DWORD *)v84 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v84);
    }
LABEL_114:
    v60 = *((_QWORD *)this + 15);
    if ( !v60 )
      goto LABEL_117;
    *((_BYTE *)this + 193) = 0;
LABEL_116:
    *(_DWORD *)(v60 + 40) |= 2u;
    *((_BYTE *)this + 192) = 1;
LABEL_117:
    v63 = **(HDC **)a3;
    if ( v63 == (HDC)**a2 )
      return 1LL;
    v64 = (DEVLOCKBLTOBJ *)((char *)this + 200);
    v65 = *(OBJECT **)v64;
    if ( *(_QWORD *)v64 )
    {
LABEL_3:
      *((_DWORD *)v65 + 10) |= 2u;
      *((_BYTE *)v64 + 72) = 1;
      return 1LL;
    }
    XDCOBJ::vLockIgnoreAttributes(v64, v63);
    if ( *(_QWORD *)v64 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v64 + 44LL) & 2) == 0 )
      {
        if ( (*((_DWORD *)v64 + 8) & 2) == 0 )
        {
          v66 = XDCOBJ::GetUserAttr(v64);
          if ( v66 )
          {
            if ( !DC::SaveAttributes(*(DC **)v64, v66) )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)v64);
              *(_QWORD *)v64 = 0LL;
              goto LABEL_125;
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)v64 + 44LL) |= 2u;
        *((_DWORD *)v64 + 2) = 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v64 + 520LL) & 4) != 0 )
        DC::vMarkTransformDirty(*(DC **)v64);
    }
LABEL_125:
    v65 = *(OBJECT **)v64;
    if ( !*(_QWORD *)v64 )
      return 1LL;
    *((_BYTE *)v64 + 73) = 0;
    goto LABEL_3;
  }
  if ( v46 < (unsigned __int64)v48 )
  {
    *((_DWORD *)this + 28) |= 0x8000u;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
    {
      XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 200), **(HDC **)a3);
      if ( *((_QWORD *)this + 25) )
      {
        v50 = XDCOBJ::SaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 200));
        v52 = (DC *)*((_QWORD *)this + 25);
        if ( v50 )
        {
          if ( (*((_DWORD *)v52 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(v52);
        }
        else
        {
          OBJECT::InterlockedDecrementExclusiveLockCount(v52);
          *((_QWORD *)this + 25) = 0LL;
        }
        if ( *((_QWORD *)this + 25) && *((_BYTE *)this + 273) )
        {
          v67 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v67 & 1) != 0 && (v67 & 0x4000) == 0 && *((_QWORD *)this + 35) && !*((_QWORD *)this + 39) )
          {
            *(_DWORD *)(*((_QWORD *)this + 25) + 36LL) |= 0x4000u;
            DC::pSurface(*((DC **)this + 25), *((struct SURFACE **)this + 35));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v51) )
          {
            v49 = 1;
            *(_DWORD *)(*((_QWORD *)this + 25) + 44LL) |= 1u;
          }
          goto LABEL_93;
        }
      }
      v49 = 1;
    }
    *((_QWORD *)this + 25) = 0LL;
LABEL_93:
    _InterlockedOr(v100, 0);
    v53 = *a2;
    v54 = 1;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
    {
      v55 = v53[6];
      XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), (HDC)*v53);
      if ( *((_QWORD *)this + 15) )
      {
        v56 = XDCOBJ::SaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 120));
        v57 = (DC *)*((_QWORD *)this + 15);
        if ( v56 )
        {
          if ( (*((_DWORD *)v57 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(v57);
        }
        else
        {
          OBJECT::InterlockedDecrementExclusiveLockCount(v57);
          *((_QWORD *)this + 15) = 0LL;
        }
      }
      v58 = *(_QWORD *)&v55[13].OwnerEntry.0;
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 193) )
      {
        v78 = *((_DWORD *)*a2 + 9);
        if ( (v78 & 1) != 0 && (v78 & 0x4000) == 0 && v58 && !*((_QWORD *)this + 36) )
        {
          *(_DWORD *)(*((_QWORD *)this + 15) + 36LL) |= 0x4000u;
          DC::pSurface(*((DC **)this + 15), (struct SURFACE *)(v58 - 24));
          *((_DWORD *)this + 28) |= 0x10u;
        }
        if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
        {
          *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 1u;
          goto LABEL_191;
        }
        goto LABEL_102;
      }
      v54 = 0;
    }
    *((_QWORD *)this + 15) = 0LL;
LABEL_101:
    if ( !v54 )
      goto LABEL_191;
    goto LABEL_102;
  }
  if ( (*((_DWORD *)v47 + 9) & 0x200) == 0 )
    goto LABEL_173;
  v71 = v47[6];
  XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), (HDC)*v47);
  if ( *((_QWORD *)this + 15) )
  {
    v72 = XDCOBJ::SaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 120));
    v73 = (DC *)*((_QWORD *)this + 15);
    if ( v72 )
    {
      if ( (*((_DWORD *)v73 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v73);
    }
    else
    {
      OBJECT::InterlockedDecrementExclusiveLockCount(v73);
      *((_QWORD *)this + 15) = 0LL;
    }
  }
  v74 = *(_QWORD *)&v71[13].OwnerEntry.0;
  if ( !*((_QWORD *)this + 15) || !*((_BYTE *)this + 193) )
  {
    v49 = 1;
LABEL_173:
    *((_QWORD *)this + 15) = 0LL;
    goto LABEL_206;
  }
  v79 = *((_DWORD *)*a2 + 9);
  if ( (v79 & 1) != 0 && (v79 & 0x4000) == 0 && v74 && !*((_QWORD *)this + 36) )
  {
    *(_DWORD *)(*((_QWORD *)this + 15) + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 15), (struct SURFACE *)(v74 - 24));
    *((_DWORD *)this + 28) |= 0x10u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
  {
    v49 = 1;
    *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 1u;
  }
LABEL_206:
  _InterlockedOr(v100, 0);
  v54 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0 )
  {
LABEL_313:
    *((_QWORD *)this + 25) = 0LL;
    goto LABEL_101;
  }
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 200), **(HDC **)a3);
  if ( !DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 200)) )
  {
    v54 = 0;
    goto LABEL_313;
  }
  v81 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v81 & 1) != 0 && (v81 & 0x4000) == 0 && *((_QWORD *)this + 35) && !*((_QWORD *)this + 39) )
  {
    *(_DWORD *)(*((_QWORD *)this + 25) + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 25), *((struct SURFACE **)this + 35));
    *((_DWORD *)this + 28) |= 0x20u;
  }
  if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v80) )
    goto LABEL_102;
  *(_DWORD *)(*((_QWORD *)this + 25) + 44LL) |= 1u;
  *((_DWORD *)this + 28) &= ~1u;
  return 0LL;
}
