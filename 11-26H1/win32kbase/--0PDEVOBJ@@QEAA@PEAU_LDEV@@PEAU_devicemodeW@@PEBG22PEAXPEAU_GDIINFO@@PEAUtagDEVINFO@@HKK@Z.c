/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x14000D1A8 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x140030748 (-SETFLAG@@YAXHAECKK@Z.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     GreCreateSemaphoreInternal @ 0x1400A69FC (GreCreateSemaphoreInternal.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     IsvConvertLogFontWSupported @ 0x1400C93D4 (IsvConvertLogFontWSupported.c)
 *     IshfontCreatePublicSupported @ 0x1400C940C (IshfontCreatePublicSupported.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1400C9450 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1400C94E4 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1400C9574 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1400C9618 (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1400C985C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1400C988C (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1400C9EC4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1401A50F4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     PanningGetFunctionTable @ 0x140248C74 (PanningGetFunctionTable.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        unsigned __int16 *a6,
        void *a7,
        struct _GDIINFO *a8,
        struct tagDEVINFO *a9,
        int a10,
        unsigned int a11,
        unsigned int a12)
{
  __int64 v16; // r14
  struct PDEV *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _GDIINFO *v21; // rcx
  int v22; // ecx
  struct _ERESOURCE *v23; // rbx
  int v24; // r8d
  void *v25; // rsi
  struct DHPDEV__ *v26; // rax
  __int64 v27; // r8
  int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  unsigned __int64 v32; // rcx
  int v33; // r15d
  __int64 v34; // r8
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rbx
  unsigned int *v42; // rax
  unsigned int v43; // r8d
  bool v44; // cc
  unsigned int v45; // ecx
  __int64 v46; // rcx
  int (*v47)(void); // rax
  __int64 v48; // rcx
  unsigned int (__fastcall *v49)(PDEVOBJ *); // rax
  int v50; // edx
  int v51; // eax
  __int64 v52; // rcx
  int (*v53)(void); // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  signed __int32 v56; // ett
  __int64 v57; // rsi
  unsigned int v58; // ebx
  __int64 v59; // rcx
  __int64 v60; // rbx
  void (__fastcall *v61)(_BYTE *, __int64); // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  void (__fastcall *v64)(_BYTE *, __int64); // rax
  __int64 v65; // rcx
  __int64 (__fastcall *v66)(_BYTE *, __int64); // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rbx
  void (__fastcall *v70)(_BYTE *, __int64); // rax
  __int64 v71; // rcx
  __int64 (__fastcall *v72)(_BYTE *, __int64); // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // rax
  struct _ERESOURCE *v76; // rbx
  int v77; // r8d
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  __int64 (*v81)(void); // rax
  _DWORD *v82; // rax
  __int64 v83; // rcx
  int (*v84)(void); // rax
  __int64 v85; // rcx
  unsigned int v86; // ebx
  void (__fastcall *v87)(_QWORD); // rax
  unsigned int v88; // r9d
  int v89; // ecx
  __int64 v90; // rcx
  __int64 (__fastcall *v91)(_BYTE *, __int64); // rax
  __int64 v92; // rcx
  struct _ERESOURCE *v93; // rbx
  int v94; // r8d
  int (*v95)(void); // rax
  __int64 v96; // rcx
  signed __int32 v97; // ett
  __int64 v98; // rcx
  unsigned int Objt; // eax
  __int64 v100; // rdx
  int v101; // r8d
  int (*v102)(void); // rax
  __int64 v103; // rdx
  _OWORD *v104; // rax
  __int128 v105; // xmm1
  __int64 v106; // rdx
  _OWORD *v108; // rcx
  __int128 v109; // xmm1
  __int64 v110; // rcx
  int v111; // edx
  unsigned int v112; // [rsp+28h] [rbp-D8h]
  unsigned int v113; // [rsp+38h] [rbp-C8h]
  unsigned int v114[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v115; // [rsp+68h] [rbp-98h] BYREF
  struct _DRVFN *v116; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v117[4]; // [rsp+78h] [rbp-88h] BYREF
  int v118; // [rsp+98h] [rbp-68h]
  _BYTE v119[432]; // [rsp+A0h] [rbp-60h] BYREF

  v115 = a7;
  v16 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v17 = PDEV::Allocate(a10);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 222) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1768LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2600LL) = a11;
  *(_DWORD *)(*(_QWORD *)this + 2604LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 3544LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
  v18 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 32LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 48LL) = GreCreateSemaphoreInternal(0);
    v18 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 48LL) )
      goto LABEL_33;
  }
  if ( (a11 & 1) != 0 )
    *(_DWORD *)(v18 + 2604) = 5;
  v19 = *(_QWORD *)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
  if ( *(_DWORD *)(v20 + 32) == 1 && *(_DWORD *)(v19 + 2604) == 5 )
  {
    v102 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 24) + 1664LL);
    if ( v102 && v102() >= 0 )
    {
      v116 = 0LL;
      v114[0] = 0;
      PanningGetFunctionTable(&v116, v114);
      bFillFunctionTable(v116, v114[0], (__int64 (**)(void))(*(_QWORD *)this + 2680LL));
    }
  }
  else
  {
    memmove((void *)(v19 + 2680), (const void *)(v20 + 72), 0x340uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1504LL) = a5;
  v21 = a8;
  if ( a8 )
  {
    v103 = 2LL;
    v104 = (_OWORD *)(*(_QWORD *)this + 2120LL);
    do
    {
      *v104 = *(_OWORD *)&v21->ulVersion;
      v104[1] = *(_OWORD *)&v21->ulHorzRes;
      v104[2] = *(_OWORD *)&v21->ulNumColors;
      v104[3] = *(_OWORD *)&v21->flTextCaps;
      v104[4] = *(_OWORD *)&v21->ulAspectX;
      v104[5] = *(_OWORD *)&v21->yStyleStep;
      v104[6] = *(_OWORD *)&v21->szlPhysSize.cx;
      v104 += 8;
      v105 = *(_OWORD *)&v21->ciDevice.Red.y;
      v21 = (struct _GDIINFO *)((char *)v21 + 128);
      *(v104 - 1) = v105;
      --v103;
    }
    while ( v103 );
    v106 = 2LL;
    *v104 = *(_OWORD *)&v21->ulVersion;
    v104[1] = *(_OWORD *)&v21->ulHorzRes;
    v104[2] = *(_OWORD *)&v21->ulNumColors;
    v104[3] = *(_OWORD *)&v21->flTextCaps;
    v108 = (_OWORD *)(*(_QWORD *)this + 1808LL);
    do
    {
      *v108 = *(_OWORD *)a9;
      v108[1] = *((_OWORD *)a9 + 1);
      v108[2] = *((_OWORD *)a9 + 2);
      v108[3] = *((_OWORD *)a9 + 3);
      v108[4] = *((_OWORD *)a9 + 4);
      v108[5] = *((_OWORD *)a9 + 5);
      v108[6] = *((_OWORD *)a9 + 6);
      v108 += 8;
      v109 = *((_OWORD *)a9 + 7);
      a9 = (struct tagDEVINFO *)((char *)a9 + 128);
      *(v108 - 1) = v109;
      --v106;
    }
    while ( v106 );
    *v108 = *(_OWORD *)a9;
    v108[1] = *((_OWORD *)a9 + 1);
    v108[2] = *((_OWORD *)a9 + 2);
    *((_QWORD *)v108 + 6) = *((_QWORD *)a9 + 6);
  }
  SETFLAG(a10, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x8000);
  if ( v22 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 6);
    v23 = *(struct _ERESOURCE **)v16;
    GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
    GrepAcquireLockValidate<19>();
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = *(_QWORD *)(v16 + 3944);
    *(_QWORD *)(v16 + 3944) = *(_QWORD *)this;
    if ( v23 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v23,
        v24);
  }
  v118 = 0;
  CAutoTGO::vGuard((CAutoTGO *)v117, this, PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::_lambda_invoker_cdecl_);
  v25 = v115;
  v26 = PDEVOBJ::EnablePDEV(
          this,
          a3,
          a4,
          (unsigned int)*(_QWORD *)this + 2120,
          (HSURF *)(*(_QWORD *)this + 1456LL),
          v112,
          (struct _GDIINFO *)(*(_QWORD *)this + 2120LL),
          v113,
          (struct tagDEVINFO *)(*(_QWORD *)this + 1808LL),
          *(HDEV *)this,
          a6,
          v115);
  v18 = *(_QWORD *)this;
  *(_QWORD *)(*(_QWORD *)this + 1784LL) = v26;
  if ( v118 )
  {
    PopThreadGuardedObject(v117);
    v118 = 0;
  }
  v27 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1784LL) )
    goto LABEL_33;
  if ( *(_DWORD *)(*(_QWORD *)(v27 + 1776) + 32LL) != 6 )
  {
    v28 = *(_DWORD *)(v27 + 2128);
    if ( v28 <= 0 )
    {
      if ( v28 )
        LODWORD(v29) = -v28;
      else
        v29 = 25400 * (unsigned __int64)*(unsigned int *)(v27 + 2136) / 0x60;
    }
    else
    {
      LODWORD(v29) = 1000 * v28;
    }
    *(_DWORD *)(v27 + 2128) = v29;
    v30 = *(_QWORD *)this;
    v31 = *(_DWORD *)(*(_QWORD *)this + 2132LL);
    if ( v31 <= 0 )
    {
      if ( v31 )
        LODWORD(v32) = -v31;
      else
        v32 = 25400 * (unsigned __int64)*(unsigned int *)(v30 + 2140) / 0x60;
    }
    else
    {
      LODWORD(v32) = 1000 * v31;
    }
    v33 = a10;
    *(_DWORD *)(v30 + 2132) = v32;
    if ( !a10 )
    {
      v110 = *(_QWORD *)this;
      v111 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2160LL) != v111 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v110 + 2166) - 100) > 0x190u )
        {
          *(_DWORD *)(v110 + 2164) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2160LL) = 0;
        }
        else
        {
          *(_DWORD *)(v110 + 3544) = v111;
          *(_DWORD *)(*(_QWORD *)this + 2164LL) = *(_DWORD *)(*(_QWORD *)this + 2160LL);
        }
      }
    }
    if ( !*(_DWORD *)(*(_QWORD *)this + 2160LL) )
      *(_DWORD *)(*(_QWORD *)this + 2160LL) = 96;
    if ( !*(_DWORD *)(*(_QWORD *)this + 2164LL) )
      *(_DWORD *)(*(_QWORD *)this + 2164LL) = 96;
    if ( *(_DWORD *)(*(_QWORD *)this + 2124LL) == 1 )
    {
      *(_DWORD *)(*(_QWORD *)this + 2196LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = 3;
    }
    v34 = *(_QWORD *)this;
    v35 = 17424;
    v36 = *(_DWORD *)(*(_QWORD *)this + 2124LL);
    if ( v36 && v36 != 4 )
      v35 = 28313;
    v37 = v35 | 0x1000;
    if ( v36 != 1 )
      v37 = v35;
    v38 = v37 | 0x100;
    if ( (*(_DWORD *)(v34 + 1808) & 0x80000) == 0 )
      v38 = v37;
    *(_DWORD *)(v34 + 2156) = v38;
    EPALOBJ::EPALOBJ((EPALOBJ *)v114, *(HPALETTE *)(*(_QWORD *)this + 2104LL));
    v40 = *(_QWORD *)v114;
    if ( !*(_QWORD *)v114 )
      goto LABEL_32;
    if ( (*(_DWORD *)(*(_QWORD *)v114 + 24LL) & 0x1000000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( (*(_DWORD *)(v40 + 24) & 0x1000000) == 0 )
        goto LABEL_32;
    }
    if ( *(_DWORD *)(v40 + 28) )
    {
LABEL_41:
      if ( (*(_DWORD *)(*(_QWORD *)this + 2156LL) & 0x100) != 0 )
      {
        if ( a10 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          if ( *(_DWORD *)(v40 + 28) != 256 )
          {
            *(_DWORD *)(*(_QWORD *)this + 1808LL) &= ~0x80000u;
            *(_DWORD *)(*(_QWORD *)this + 2156LL) &= ~0x100u;
            goto LABEL_43;
          }
        }
        if ( !(unsigned int)CreateSurfacePal(
                              v40,
                              v39,
                              *(unsigned int *)(*(_QWORD *)this + 2152LL),
                              *(unsigned int *)(*(_QWORD *)this + 2224LL)) )
        {
LABEL_32:
          EPALOBJ::~EPALOBJ((EPALOBJ *)v114);
LABEL_33:
          PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator()(v18, this);
          return this;
        }
      }
      if ( !a10 )
      {
LABEL_44:
        *(_QWORD *)(*(_QWORD *)this + 1792LL) = v40;
        v46 = *(_QWORD *)this;
        if ( *(_QWORD *)(*(_QWORD *)this + 1456LL) )
        {
          v50 = *(_DWORD *)(*(_QWORD *)(v46 + 1776) + 32LL);
          if ( v50 != 1 && v50 != 4 )
            goto LABEL_54;
        }
        if ( *(_DWORD *)(*(_QWORD *)(v46 + 1776) + 32LL) == 2 )
        {
          v47 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46) + 24) + 1680LL);
          if ( v47 && v47() >= 0 )
          {
            v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v48) + 24);
            v49 = *(unsigned int (__fastcall **)(PDEVOBJ *))(v18 + 1688);
LABEL_49:
            if ( !v49 || !v49(this) )
              goto LABEL_33;
          }
        }
        else
        {
          v95 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46) + 24) + 1696LL);
          if ( v95 && v95() >= 0 )
          {
            v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v96) + 24);
            v49 = *(unsigned int (__fastcall **)(PDEVOBJ *))(v18 + 1704);
            goto LABEL_49;
          }
        }
LABEL_54:
        *(_QWORD *)(*(_QWORD *)this + 2552LL) = v25;
        v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 32LL);
        if ( v51 == 1 || (unsigned int)(v51 - 3) <= 1 )
        {
          *(_QWORD *)(*(_QWORD *)this + 1720LL) = *(_QWORD *)(*(_QWORD *)this + 2920LL);
          *(_QWORD *)(*(_QWORD *)this + 1712LL) = *(_QWORD *)(*(_QWORD *)this + 2912LL);
          v93 = *(struct _ERESOURCE **)v16;
          GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
          GrepAcquireLockValidate<19>();
          *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0);
          if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) )
          {
            if ( v93 )
              GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)v93,
                v94);
            goto LABEL_33;
          }
          *(_DWORD *)(*(_QWORD *)this + 40LL) |= 1u;
          if ( v93 )
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)v93,
              v94);
        }
        *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(*(_QWORD *)this + 2856LL);
        *(_QWORD *)(*(_QWORD *)this + 1736LL) = *(_QWORD *)(*(_QWORD *)this + 2984LL);
        *(_QWORD *)(*(_QWORD *)this + 1744LL) = *(_QWORD *)(*(_QWORD *)this + 3384LL);
        v52 = *(_QWORD *)this;
        *(_QWORD *)(v52 + 1760) = *(_QWORD *)(*(_QWORD *)this + 3376LL);
        v53 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v52) + 24) + 1712LL);
        if ( v53 && v53() >= 0 )
        {
          v81 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v54) + 24) + 1720LL);
          v82 = v81 ? (_DWORD *)v81() : 0LL;
          *(_QWORD *)(v16 + 3936) = v82;
          if ( *v82 )
          {
            v83 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
            if ( *(_DWORD *)(v83 + 32) == 1 )
            {
              v84 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v83) + 24) + 1728LL);
              if ( v84 )
              {
                if ( v84() >= 0 )
                {
                  v86 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
                  v87 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v85) + 24) + 1736LL);
                  if ( v87 )
                    v87(v86);
                }
              }
              **(_DWORD **)(v16 + 3936) = 0;
            }
          }
        }
        v55 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v56 = *(_DWORD *)(v55 + 40);
        while ( v56 != _InterlockedCompareExchange((volatile signed __int32 *)(v55 + 40), v56 & 0xFFFFFFBF, v56) );
        *(_DWORD *)(*(_QWORD *)this + 3548LL) = 0;
        v57 = *(_QWORD *)this;
        v58 = 12 * *(_DWORD *)(*(_QWORD *)this + 2164LL) / 0x48u;
        memset(v119, 0, 0x1A4uLL);
        if ( !*(_DWORD *)(v57 + 1812) )
          *(_DWORD *)(v57 + 1812) = v58;
        if ( !*(_DWORD *)(*(_QWORD *)this + 1904LL) )
          *(_DWORD *)(*(_QWORD *)this + 1904LL) = v58;
        if ( !*(_DWORD *)(*(_QWORD *)this + 1996LL) )
          *(_DWORD *)(*(_QWORD *)this + 1996LL) = v58;
        if ( (int)IsvConvertLogFontWSupported() >= 0 )
        {
          v60 = *(_QWORD *)this;
          v61 = *(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v59) + 24) + 1752LL);
          if ( v61 )
            v61(v119, v60 + 1812);
        }
        if ( *(_DWORD *)(*(_QWORD *)this + 2124LL) == 1 )
        {
          *(_QWORD *)(*(_QWORD *)this + 1432LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3088) + 104LL);
        }
        else if ( (int)IshfontCreatePublicSupported() >= 0 )
        {
          v91 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v90) + 24) + 1768LL);
          v92 = v91 ? v91(v119, 4LL) : 0LL;
          *(_QWORD *)(*(_QWORD *)this + 1432LL) = v92;
          if ( !v92 )
            *(_QWORD *)(*(_QWORD *)this + 1432LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3088) + 104LL);
        }
        if ( (int)IsvConvertLogFontWSupported() >= 0 )
        {
          v63 = *(_QWORD *)this;
          v64 = *(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v62) + 24) + 1752LL);
          if ( v64 )
            v64(v119, v63 + 1904);
        }
        if ( (int)IshfontCreatePublicSupported() >= 0 )
        {
          v66 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v65) + 24) + 1768LL);
          v67 = v66 ? v66(v119, 5LL) : 0LL;
          *(_QWORD *)(*(_QWORD *)this + 1440LL) = v67;
          if ( !v67 )
            *(_QWORD *)(*(_QWORD *)this + 1440LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3088) + 104LL);
        }
        if ( (int)IsvConvertLogFontWSupported() >= 0 )
        {
          v69 = *(_QWORD *)this;
          v70 = *(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v68) + 24) + 1752LL);
          if ( v70 )
            v70(v119, v69 + 1996);
        }
        if ( (int)IshfontCreatePublicSupported() >= 0 )
        {
          v72 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v71) + 24) + 1768LL);
          v73 = v72 ? v72(v119, 6LL) : 0LL;
          *(_QWORD *)(*(_QWORD *)this + 1448LL) = v73;
          if ( !v73 )
            *(_QWORD *)(*(_QWORD *)this + 1448LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3088) + 128LL);
        }
        goto LABEL_87;
      }
LABEL_43:
      *(_WORD *)(v40 + 14) |= 0x10u;
      goto LABEL_44;
    }
    v42 = *(unsigned int **)(v40 + 112);
    v39 = v42[1];
    v43 = *v42;
    v44 = (unsigned int)v39 <= *v42;
    if ( (unsigned int)v39 < *v42 )
    {
      v88 = v42[2];
      if ( v43 > v88 )
      {
        v89 = (unsigned int)v39 <= v88;
LABEL_111:
        *(_DWORD *)(*(_QWORD *)this + 2352LL) = v89;
        goto LABEL_41;
      }
      v44 = (unsigned int)v39 <= v43;
    }
    if ( v44 || (v45 = v42[2], (unsigned int)v39 <= v45) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2352LL) = ((unsigned int)v39 < v43) + 4;
      goto LABEL_41;
    }
    v89 = 3 - (v45 < v43);
    goto LABEL_111;
  }
  v33 = a10;
LABEL_87:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  v74 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
  {
    _m_prefetchw((const void *)(v74 + 40));
    do
      v97 = *(_DWORD *)(v74 + 40);
    while ( v97 != _InterlockedCompareExchange((volatile signed __int32 *)(v74 + 40), v97 | 0x400, v97) );
    *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
    SEMOBJ<20>::SEMOBJ<20>((HSEMAPHORE *)&v115);
    v98 = 0LL;
    *(_QWORD *)v114 = 0LL;
    while ( 1 )
    {
      Objt = HmgSafeNextObjt(v98, 1, (__int64 **)v114);
      if ( !Objt )
        break;
      if ( !*(_DWORD *)(*(_QWORD *)v114 + 32LL) && *(_QWORD *)(*(_QWORD *)v114 + 48LL) == *(_QWORD *)this )
        *(_DWORD *)(*(_QWORD *)v114 + 36LL) |= 0x1000u;
      v98 = Objt;
    }
    SEMOBJ<20>::vUnlock((HSEMAPHORE *)&v115, v100, v101);
    vResetSurfacePalette(*(HDEV *)this);
  }
  v75 = (_QWORD *)(*(_QWORD *)this + 2616LL);
  v75[1] = v75;
  *v75 = v75;
  v76 = *(struct _ERESOURCE **)v16;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
  GrepAcquireLockValidate<19>();
  if ( v33 )
  {
    v78 = *(_QWORD **)this;
    v79 = *(_QWORD **)(v16 + 3944);
    if ( v79 == *(_QWORD **)this )
    {
      *(_QWORD *)(v16 + 3944) = *v78;
    }
    else
    {
      while ( v79 )
      {
        if ( (_QWORD *)*v79 == v78 )
        {
          *v79 = *v78;
          break;
        }
        v79 = (_QWORD *)*v79;
      }
    }
  }
  **(_QWORD **)this = *(_QWORD *)(v16 + 3952);
  *(_QWORD *)(v16 + 3952) = *(_QWORD *)this;
  if ( v76 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v76,
      v77);
  PDEVOBJ::CompletePDEV(this, *(struct DHPDEV__ **)(*(_QWORD *)this + 1784LL), *(HDEV *)this);
  v80 = (_QWORD *)(*(_QWORD *)this + 3520LL);
  v80[1] = v80;
  *v80 = v80;
  return this;
}
