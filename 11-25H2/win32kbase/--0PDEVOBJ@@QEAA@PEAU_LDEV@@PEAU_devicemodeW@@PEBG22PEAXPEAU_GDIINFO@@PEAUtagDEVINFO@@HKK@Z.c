/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820
 * Callers:
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14001C960 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x140027848 (GreCreateSemaphoreInternal.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x14004E320 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1400729C0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x140074530 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140074764 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1400749F8 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     IsvConvertLogFontWSupported @ 0x140074A28 (IsvConvertLogFontWSupported.c)
 *     IshfontCreatePublicSupported @ 0x140074A60 (IshfontCreatePublicSupported.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x140074A98 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1400751B0 (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x140093FC8 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1400C67F4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x140102080 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     hfontCreatePublic @ 0x140146B10 (hfontCreatePublic.c)
 *     vConvertLogFontW @ 0x14014BDEC (vConvertLogFontW.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x140155514 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     PanningGetFunctionTable @ 0x14023E5E0 (PanningGetFunctionTable.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
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
  __int64 v16; // rsi
  struct PDEV *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _GDIINFO *v21; // rcx
  int v22; // ecx
  void *v23; // r14
  unsigned int v24; // r9d
  int v25; // eax
  unsigned __int64 v26; // rax
  int *v27; // r8
  int v28; // ecx
  unsigned __int64 v29; // rcx
  int v30; // r15d
  __int64 v31; // r8
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _DWORD *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  int (*v43)(void); // rax
  unsigned int (__fastcall *v44)(PDEVOBJ *); // rax
  unsigned int *v46; // rax
  bool v47; // cc
  unsigned int v48; // r9d
  int (*v49)(void); // rax
  int v50; // edx
  struct _ERESOURCE *v51; // rbx
  int (*v52)(void); // rax
  __int64 v53; // rdx
  signed __int32 v54; // ett
  __int64 v55; // r14
  unsigned int v56; // ebx
  __int64 v57; // rbx
  void (__fastcall *v58)(_BYTE *, __int64); // rax
  __int64 (__fastcall *v59)(_BYTE *, __int64); // rax
  __int64 v60; // rcx
  __int64 (__fastcall *v61)(_BYTE *, __int64); // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  struct _ERESOURCE *v64; // rbx
  _QWORD *v65; // rax
  __int64 (*v66)(void); // rax
  _DWORD *v67; // rax
  int (*v68)(void); // rax
  unsigned int v69; // ebx
  void (__fastcall *v70)(_QWORD); // rax
  struct _ERESOURCE *v71; // rbx
  int (*v72)(void); // rax
  __int64 v73; // rdx
  _OWORD *v74; // rax
  __int128 v75; // xmm1
  __int64 v76; // rdx
  _OWORD *v78; // rcx
  __int128 v79; // xmm1
  __int64 v80; // rcx
  int v81; // edx
  unsigned int v82; // ecx
  int v83; // edx
  __int64 Public; // rax
  HSURF *v85; // [rsp+20h] [rbp-E0h]
  unsigned int v86; // [rsp+28h] [rbp-D8h]
  struct _GDIINFO *v87; // [rsp+30h] [rbp-D0h]
  unsigned int v88; // [rsp+38h] [rbp-C8h]
  struct tagDEVINFO *v89; // [rsp+40h] [rbp-C0h]
  HDEV v90; // [rsp+48h] [rbp-B8h]
  unsigned int v91; // [rsp+60h] [rbp-A0h] BYREF
  void *v92; // [rsp+68h] [rbp-98h] BYREF
  struct _DRVFN *v93; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v94[4]; // [rsp+78h] [rbp-88h] BYREF
  int v95; // [rsp+98h] [rbp-68h]
  _BYTE v96[432]; // [rsp+A0h] [rbp-60h] BYREF

  v92 = a7;
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
      goto LABEL_43;
  }
  if ( (a11 & 1) != 0 )
    *(_DWORD *)(v18 + 2604) = 5;
  v19 = *(_QWORD *)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
  if ( *(_DWORD *)(v20 + 32) == 1 && *(_DWORD *)(v19 + 2604) == 5 )
  {
    v72 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1688LL);
    if ( v72 && v72() >= 0 )
    {
      v93 = 0LL;
      v91 = 0;
      PanningGetFunctionTable(&v93, &v91);
      bFillFunctionTable(v93, v91, (__int64 (**)(void))(*(_QWORD *)this + 2680LL));
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
    v73 = 2LL;
    v74 = (_OWORD *)(*(_QWORD *)this + 2120LL);
    do
    {
      *v74 = *(_OWORD *)&v21->ulVersion;
      v74[1] = *(_OWORD *)&v21->ulHorzRes;
      v74[2] = *(_OWORD *)&v21->ulNumColors;
      v74[3] = *(_OWORD *)&v21->flTextCaps;
      v74[4] = *(_OWORD *)&v21->ulAspectX;
      v74[5] = *(_OWORD *)&v21->yStyleStep;
      v74[6] = *(_OWORD *)&v21->szlPhysSize.cx;
      v74 += 8;
      v75 = *(_OWORD *)&v21->ciDevice.Red.y;
      v21 = (struct _GDIINFO *)((char *)v21 + 128);
      *(v74 - 1) = v75;
      --v73;
    }
    while ( v73 );
    v76 = 2LL;
    *v74 = *(_OWORD *)&v21->ulVersion;
    v74[1] = *(_OWORD *)&v21->ulHorzRes;
    v74[2] = *(_OWORD *)&v21->ulNumColors;
    v74[3] = *(_OWORD *)&v21->flTextCaps;
    v78 = (_OWORD *)(*(_QWORD *)this + 1808LL);
    do
    {
      *v78 = *(_OWORD *)a9;
      v78[1] = *((_OWORD *)a9 + 1);
      v78[2] = *((_OWORD *)a9 + 2);
      v78[3] = *((_OWORD *)a9 + 3);
      v78[4] = *((_OWORD *)a9 + 4);
      v78[5] = *((_OWORD *)a9 + 5);
      v78[6] = *((_OWORD *)a9 + 6);
      v78 += 8;
      v79 = *((_OWORD *)a9 + 7);
      a9 = (struct tagDEVINFO *)((char *)a9 + 128);
      *(v78 - 1) = v79;
      --v76;
    }
    while ( v76 );
    *v78 = *(_OWORD *)a9;
    v78[1] = *((_OWORD *)a9 + 1);
    v78[2] = *((_OWORD *)a9 + 2);
    *((_QWORD *)v78 + 6) = *((_QWORD *)a9 + 6);
  }
  SETFLAG(a10, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x8000);
  if ( v22 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 6);
    v71 = *(struct _ERESOURCE **)v16;
    GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
    GrepAcquireLockValidate<19>();
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = *(_QWORD *)(v16 + 3840);
    *(_QWORD *)(v16 + 3840) = *(_QWORD *)this;
    if ( v71 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v71);
  }
  v95 = 0;
  PushThreadGuardedObject(v94, this, PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::_lambda_invoker_cdecl_);
  v23 = v92;
  v90 = *(HDEV *)this;
  v89 = (struct tagDEVINFO *)(*(_QWORD *)this + 1808LL);
  v24 = *(_QWORD *)this + 2120;
  v87 = (struct _GDIINFO *)(*(_QWORD *)this + 2120LL);
  v85 = (HSURF *)(*(_QWORD *)this + 1456LL);
  v95 = 1;
  *(_QWORD *)(*(_QWORD *)this + 1784LL) = PDEVOBJ::EnablePDEV(this, a3, a4, v24, v85, v86, v87, v88, v89, v90, a6, v92);
  if ( v95 )
  {
    PopThreadGuardedObject(v94);
    v95 = 0;
  }
  v18 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1784LL) )
    goto LABEL_43;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1776) + 32LL) != 6 )
  {
    v25 = *(_DWORD *)(v18 + 2128);
    if ( v25 <= 0 )
    {
      if ( v25 )
        LODWORD(v26) = -v25;
      else
        v26 = 25400 * (unsigned __int64)*(unsigned int *)(v18 + 2136) / 0x60;
    }
    else
    {
      LODWORD(v26) = 1000 * v25;
    }
    *(_DWORD *)(v18 + 2128) = v26;
    v27 = (int *)(*(_QWORD *)this + 2132LL);
    v28 = *v27;
    if ( *v27 <= 0 )
    {
      if ( v28 )
        LODWORD(v29) = -v28;
      else
        v29 = 25400 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 2140LL) / 0x60;
    }
    else
    {
      LODWORD(v29) = 1000 * v28;
    }
    v30 = a10;
    *v27 = v29;
    if ( !a10 )
    {
      v80 = *(_QWORD *)this;
      v81 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2160LL) != v81 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v80 + 2166) - 100) <= 0x190u )
        {
          *(_DWORD *)(v80 + 3544) = v81;
          *(_DWORD *)(*(_QWORD *)this + 2164LL) = *(_DWORD *)(*(_QWORD *)this + 2160LL);
        }
        else
        {
          *(_DWORD *)(v80 + 2164) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2160LL) = 0;
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
    v31 = *(_QWORD *)this;
    v32 = 17424;
    v33 = *(_DWORD *)(*(_QWORD *)this + 2124LL);
    if ( (v33 & 0xFFFFFFFB) != 0 )
      v32 = 28313;
    v34 = v32 | 0x1000;
    if ( v33 != 1 )
      v34 = v32;
    v35 = v34 | 0x100;
    if ( (*(_DWORD *)(v31 + 1808) & 0x80000) == 0 )
      v35 = v34;
    *(_DWORD *)(v31 + 2156) = v35;
    v36 = (_DWORD *)HmgShareLockCheck(*(_QWORD *)(*(_QWORD *)this + 2104LL), 8);
    v92 = v36;
    v40 = v36;
    if ( !v36 )
      goto LABEL_45;
    if ( (v36[6] & 0x1000000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
    if ( (v40[6] & 0x1000000) == 0 )
      goto LABEL_45;
    if ( v40[7] )
    {
LABEL_35:
      if ( (*(_DWORD *)(*(_QWORD *)this + 2156LL) & 0x100) == 0 )
        goto LABEL_36;
      if ( a10 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
        if ( v40[7] != 256 )
        {
          *(_DWORD *)(*(_QWORD *)this + 1808LL) &= ~0x80000u;
          *(_DWORD *)(*(_QWORD *)this + 2156LL) &= ~0x100u;
LABEL_139:
          *((_WORD *)v40 + 7) |= 0x40u;
LABEL_37:
          v41 = *(_QWORD *)this;
          v92 = 0LL;
          *(_QWORD *)(v41 + 1792) = v40;
          v42 = *(_QWORD *)this;
          if ( *(_QWORD *)(*(_QWORD *)this + 1456LL) )
          {
            v83 = *(_DWORD *)(*(_QWORD *)(v42 + 1776) + 32LL);
            if ( v83 != 1 && v83 != 4 )
              goto LABEL_54;
          }
          if ( *(_DWORD *)(*(_QWORD *)(v42 + 1776) + 32LL) == 2 )
          {
            v43 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1704LL);
            if ( !v43 || v43() < 0 )
              goto LABEL_54;
            v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
            v44 = *(unsigned int (__fastcall **)(PDEVOBJ *))(v18 + 1712);
          }
          else
          {
            v49 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1720LL);
            if ( !v49 || v49() < 0 )
              goto LABEL_54;
            v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
            v44 = *(unsigned int (__fastcall **)(PDEVOBJ *))(v18 + 1728);
          }
          if ( v44 && v44(this) )
          {
LABEL_54:
            *(_QWORD *)(*(_QWORD *)this + 2552LL) = v23;
            v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 32LL);
            if ( ((v50 - 1) & 0xFFFFFFFC) == 0 && v50 != 2 )
            {
              *(_QWORD *)(*(_QWORD *)this + 1720LL) = *(_QWORD *)(*(_QWORD *)this + 2920LL);
              *(_QWORD *)(*(_QWORD *)this + 1712LL) = *(_QWORD *)(*(_QWORD *)this + 2912LL);
              v51 = *(struct _ERESOURCE **)v16;
              GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
              GrepAcquireLockValidate<19>();
              *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0);
              if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) )
              {
                if ( v51 )
                  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                    (__int64)v51);
                goto LABEL_43;
              }
              *(_DWORD *)(*(_QWORD *)this + 40LL) |= 1u;
              if ( v51 )
                GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                  (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                  (__int64)v51);
            }
            *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(*(_QWORD *)this + 2856LL);
            *(_QWORD *)(*(_QWORD *)this + 1736LL) = *(_QWORD *)(*(_QWORD *)this + 2984LL);
            *(_QWORD *)(*(_QWORD *)this + 1744LL) = *(_QWORD *)(*(_QWORD *)this + 3384LL);
            *(_QWORD *)(*(_QWORD *)this + 1760LL) = *(_QWORD *)(*(_QWORD *)this + 3376LL);
            v52 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1736LL);
            if ( v52 && v52() >= 0 )
            {
              v66 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1744LL);
              v67 = v66 ? (_DWORD *)v66() : 0LL;
              *(_QWORD *)(v16 + 3832) = v67;
              if ( *v67 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 32LL) == 1 )
                {
                  v68 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1752LL);
                  if ( v68 )
                  {
                    if ( v68() >= 0 )
                    {
                      v69 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
                      v70 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1760LL);
                      if ( v70 )
                        v70(v69);
                    }
                  }
                  **(_DWORD **)(v16 + 3832) = 0;
                }
              }
            }
            v53 = *(_QWORD *)this;
            _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
            do
              v54 = *(_DWORD *)(v53 + 40);
            while ( v54 != _InterlockedCompareExchange((volatile signed __int32 *)(v53 + 40), v54 & 0xFFFFFFBF, v54) );
            *(_DWORD *)(*(_QWORD *)this + 3548LL) = 0;
            v55 = *(_QWORD *)this;
            v56 = 12 * *(_DWORD *)(*(_QWORD *)this + 2164LL) / 0x48u;
            memset(v96, 0, 0x1A4uLL);
            if ( !*(_DWORD *)(v55 + 1812) )
              *(_DWORD *)(v55 + 1812) = v56;
            if ( !*(_DWORD *)(*(_QWORD *)this + 1904LL) )
              *(_DWORD *)(*(_QWORD *)this + 1904LL) = v56;
            if ( !*(_DWORD *)(*(_QWORD *)this + 1996LL) )
              *(_DWORD *)(*(_QWORD *)this + 1996LL) = v56;
            if ( (int)IsvConvertLogFontWSupported() >= 0 )
              vConvertLogFontW(v96, *(_QWORD *)this + 1812LL);
            if ( *(_DWORD *)(*(_QWORD *)this + 2124LL) == 1 )
            {
              *(_QWORD *)(*(_QWORD *)this + 1432LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 104LL);
            }
            else if ( (int)IshfontCreatePublicSupported() >= 0 )
            {
              Public = hfontCreatePublic(v96, 4LL);
              *(_QWORD *)(*(_QWORD *)this + 1432LL) = Public;
              if ( !Public )
                *(_QWORD *)(*(_QWORD *)this + 1432LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 104LL);
            }
            if ( (int)IsvConvertLogFontWSupported() >= 0 )
            {
              v57 = *(_QWORD *)this;
              v58 = *(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1776LL);
              if ( v58 )
                v58(v96, v57 + 1904);
            }
            if ( (int)IshfontCreatePublicSupported() >= 0 )
            {
              v59 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1792LL);
              v60 = v59 ? v59(v96, 5LL) : 0LL;
              *(_QWORD *)(*(_QWORD *)this + 1440LL) = v60;
              if ( !v60 )
                *(_QWORD *)(*(_QWORD *)this + 1440LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 104LL);
            }
            if ( (int)IsvConvertLogFontWSupported() >= 0 )
              vConvertLogFontW(v96, *(_QWORD *)this + 1996LL);
            if ( (int)IshfontCreatePublicSupported() >= 0 )
            {
              v61 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1792LL);
              v62 = v61 ? v61(v96, 6LL) : 0LL;
              *(_QWORD *)(*(_QWORD *)this + 1448LL) = v62;
              if ( !v62 )
                *(_QWORD *)(*(_QWORD *)this + 1448LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 128LL);
            }
            goto LABEL_90;
          }
LABEL_43:
          PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator()(v18, this);
          return this;
        }
      }
      if ( (unsigned int)CreateSurfacePal(
                           v40,
                           v37,
                           *(unsigned int *)(*(_QWORD *)this + 2152LL),
                           *(unsigned int *)(*(_QWORD *)this + 2224LL)) )
      {
LABEL_36:
        if ( !a10 )
          goto LABEL_37;
        goto LABEL_139;
      }
LABEL_45:
      EPALOBJ::~EPALOBJ((struct _BASEOBJECT **)&v92);
      goto LABEL_43;
    }
    v46 = (unsigned int *)*((_QWORD *)v40 + 14);
    v39 = *v46;
    v37 = v46[1];
    v47 = (unsigned int)v37 <= (unsigned int)v39;
    if ( (unsigned int)v37 < (unsigned int)v39 )
    {
      v48 = v46[2];
      if ( (unsigned int)v39 > v48 )
      {
        v38 = (unsigned int)v37 <= v48;
LABEL_49:
        *(_DWORD *)(*(_QWORD *)this + 2352LL) = v38;
        goto LABEL_35;
      }
      v47 = (unsigned int)v37 <= (unsigned int)v39;
    }
    if ( v47 || (v82 = v46[2], (unsigned int)v37 <= v82) )
    {
      v38 = *(_QWORD *)this;
      *(_DWORD *)(*(_QWORD *)this + 2352LL) = ((unsigned int)v37 < (unsigned int)v39) + 4;
      goto LABEL_35;
    }
    v38 = 3 - (unsigned int)(v82 < (unsigned int)v39);
    goto LABEL_49;
  }
  v30 = a10;
LABEL_90:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
  {
    PDEVOBJ::bDisabled(this, 1);
    vResetSurfacePalette(*(HDEV *)this);
  }
  v63 = (_QWORD *)(*(_QWORD *)this + 2616LL);
  v63[1] = v63;
  *v63 = v63;
  v64 = *(struct _ERESOURCE **)v16;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
  GrepAcquireLockValidate<19>();
  if ( v30 )
    RemoveHDEVFromList((HDEV *)(v16 + 3840), *(HDEV *)this);
  **(_QWORD **)this = *(_QWORD *)(v16 + 3848);
  *(_QWORD *)(v16 + 3848) = *(_QWORD *)this;
  if ( v64 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v64);
  PDEVOBJ::CompletePDEV(this, *(struct DHPDEV__ **)(*(_QWORD *)this + 1784LL), *(HDEV *)this);
  v65 = (_QWORD *)(*(_QWORD *)this + 3520LL);
  v65[1] = v65;
  *v65 = v65;
  return this;
}
