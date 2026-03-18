/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x14000BBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004B7F4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // edx
  int Ulong; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  int v14; // ebx
  unsigned int v15; // r12d
  unsigned int *v16; // r13
  char v17; // dl
  unsigned int *v18; // r9
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // edx
  int v28; // ebx
  int v29; // ebx
  char v30; // al
  int v31; // edx
  int v32; // r9d
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  _UNKNOWN **v36; // rdx
  int v37; // ebx
  char v38; // al
  int v39; // edx
  __int64 v40; // rdx
  unsigned __int16 v41; // ax
  int v42; // edx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  int v49; // ebx
  int v50; // ebx
  int v51; // ebx
  int v52; // edx
  int v53; // ebx
  int v54; // ebx
  char v55; // dl
  int v56; // r8d
  int v57; // r9d
  int v58; // edx
  int v59; // ebx
  int v60; // ebx
  int v61; // edx
  int v62; // ebx
  int v63; // ebx
  int v64; // edx
  int v65; // ebx
  int v66; // ebx
  int v67; // eax
  int v68; // edx
  int v69; // ebx
  bool v70; // zf
  __int64 v71; // rbx
  __int64 v72; // rax
  int v73; // r9d
  int v74; // edx
  int v75; // ebx
  int v76; // ebx
  int v77; // eax
  int v78; // ebx
  int v79; // edx
  int v80; // ebx
  int v81; // ebx
  int v82; // r9d
  int v83; // edx
  int v84; // r8d
  int v85; // edx
  int v86; // ebx
  int v87; // ebx
  int v88; // edx
  int v89; // ebx
  int v90; // ebx
  int v91; // edx
  int v92; // ebx
  int v93; // ebx
  int v94; // eax
  int v95; // ebx
  _UNKNOWN **v96; // rdx
  __int64 v97; // r10
  int v98; // ebx
  int v99; // r9d
  __int64 v100; // rcx
  int v101; // edx
  int v102; // ebx
  int v103; // ebx
  int v104; // eax
  int v105; // edx
  int v106; // ebx
  unsigned int v107; // ebx
  int v108; // edx
  int v109; // ebx
  int v110; // ebx
  int v111; // edx
  int v112; // ebx
  int v113; // ebx
  const char *v114; // [rsp+28h] [rbp-D0h]
  const char *v115; // [rsp+38h] [rbp-C0h]
  unsigned int v116; // [rsp+70h] [rbp-88h]
  int v117; // [rsp+70h] [rbp-88h]
  int v118; // [rsp+70h] [rbp-88h]
  unsigned int v119; // [rsp+74h] [rbp-84h]
  __int64 v120; // [rsp+78h] [rbp-80h]
  unsigned int *v121; // [rsp+80h] [rbp-78h]
  _OWORD v123[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v124; // [rsp+B0h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 1001) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v115 = "Code Path Requires Passive Level";
      v114 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v55, v56, v57);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  memset(v123, 0, sizeof(v123));
  v124 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x33 )
      LOWORD(v123[0]) = -1;
    else
      LOWORD(v123[0]) = *(_WORD *)(WdfStructures + 408);
  }
  else
  {
    LOWORD(v123[0]) = 40;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v123);
  v6 = *((_QWORD *)&v123[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v7,
        11,
        39,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    goto LABEL_9;
  }
  Ulong = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v3 + 32) + 4LL));
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v9,
        11,
        40,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    LOBYTE(v9) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v9);
LABEL_9:
    *(_DWORD *)(v6 + 4) = -1073713152;
    v10 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v10);
  }
  if ( (Ulong & 1) == 0 )
  {
    v12 = *(unsigned __int8 *)(v6 + 132);
    v13 = *(unsigned __int8 *)(v6 + 133);
    v14 = *(unsigned __int16 *)(v6 + 130);
    v116 = v12;
    v119 = v13;
    if ( *(_WORD *)(v6 + 128) != 291 || !*(_BYTE *)(v6 + 132) || v12 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v6 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v83 = *(unsigned __int8 *)(v6 + 134);
        v82 = 42;
        v84 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_207;
      }
      goto LABEL_84;
    }
    v15 = v12 - 1;
    v16 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16LL * (v12 - 1));
    v120 = 120LL * (v12 - 1);
    v17 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v120 + 13);
    v18 = v16 + 1;
    v121 = v16 + 1;
    if ( v17 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v115) = *(unsigned __int8 *)(v6 + 133);
        LODWORD(v114) = *(unsigned __int8 *)(v6 + 132);
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x2Bu,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v114,
          *(unsigned __int16 *)(v6 + 130),
          v115);
        v12 = v116;
        v13 = v119;
      }
      if ( v14 == 22 )
      {
        if ( v13 > 3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v82 = 57;
            goto LABEL_129;
          }
          goto LABEL_84;
        }
LABEL_172:
        RootHub_AcquireReadModifyWriteLock(v3, v15);
        v102 = XilRegister_ReadUlong(v5, v16);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v101) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v101,
            11,
            58,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v102);
        }
        v103 = v102 & 0xE000200;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v101) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v101,
            11,
            59,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v103);
        }
        XilRegister_WriteUlong(v5, v16, v103);
        RootHub_ReleaseReadModifyWriteLock(v3, v15);
        v30 = XilRegister_ReadUlong(v5, v16);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v32 = 60;
        goto LABEL_53;
      }
      if ( v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v82 = 44;
LABEL_129:
          v83 = *(unsigned __int8 *)(v6 + 134);
          v84 = *(unsigned __int8 *)(v6 + 133);
LABEL_207:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v83, v84, v82);
        }
LABEL_84:
        v10 = 3221225473LL;
        goto LABEL_85;
      }
      v19 = v14 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          v33 = RootHub_WaitForPendingU3TransitionCompletion(v3, v12, 0LL);
          v10 = (unsigned int)v33;
          if ( v33 >= 0 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v15);
            v34 = XilRegister_ReadUlong(v5, v16);
            v35 = v34;
            v36 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v36) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                (_DWORD)v36,
                11,
                50,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v34);
              v36 = &WPP_RECORDER_INITIALIZED;
            }
            if ( ((v35 & 2) == 0 || (v35 & 0x1E0) != 0x60 && (v35 & 0x1E0) != 0x1E0)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v36) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                (_DWORD)v36,
                11,
                51,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
            }
            v37 = v35 & 0xE00C200 | 0x101E0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v36) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                (_DWORD)v36,
                11,
                52,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v37);
            }
            XilRegister_WriteUlong(v5, v16, v37);
            RootHub_ReleaseReadModifyWriteLock(v3, v15);
            v38 = XilRegister_ReadUlong(v5, v16);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v39) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v39,
                11,
                53,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v38);
            }
            v40 = *(_QWORD *)(v3 + 48);
            if ( *(int *)(v40 + v120 + 48) > 0 )
              v41 = *(_WORD *)(v40 + v120 + 52);
            else
              v41 = 50;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
              WdfDriverGlobals,
              *(_QWORD *)(v40 + v120 + 40),
              -10000LL * v41);
            goto LABEL_54;
          }
LABEL_85:
          *(_DWORD *)(v6 + 4) = -1073741820;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v10);
        }
        v21 = v20 - 6;
        if ( v21 )
        {
          v22 = v21 - 8;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( !v26 )
                  {
                    RootHub_AcquireReadModifyWriteLock(v3, v15);
                    v28 = XilRegister_ReadUlong(v5, v16);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v27) = 4;
                      WPP_RECORDER_SF_D(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v27,
                        11,
                        64,
                        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                        v28);
                    }
                    v29 = v28 & 0xE00C200 | 0x200000;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v27) = 4;
                      WPP_RECORDER_SF_D(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v27,
                        11,
                        65,
                        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                        v29);
                    }
                    XilRegister_WriteUlong(v5, v16, v29);
                    RootHub_ReleaseReadModifyWriteLock(v3, v15);
                    v30 = XilRegister_ReadUlong(v5, v16);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_54;
                    v32 = 66;
                    goto LABEL_53;
                  }
                  if ( v26 != 2 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v82 = 76;
                      goto LABEL_129;
                    }
                    goto LABEL_84;
                  }
                  goto LABEL_172;
                }
                RootHub_AcquireReadModifyWriteLock(v3, v15);
                v86 = XilRegister_ReadUlong(v5, v16);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v85) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v85,
                    11,
                    73,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v86);
                }
                v87 = v86 & 0xE00C200 | 0x100000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v85) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v85,
                    11,
                    74,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v87);
                }
                XilRegister_WriteUlong(v5, v16, v87);
                RootHub_ReleaseReadModifyWriteLock(v3, v15);
                v30 = XilRegister_ReadUlong(v5, v16);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_54;
                v32 = 75;
              }
              else
              {
                RootHub_AcquireReadModifyWriteLock(v3, v15);
                v59 = XilRegister_ReadUlong(v5, v16);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v58) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v58,
                    11,
                    70,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v59);
                }
                v60 = v59 & 0xE00C200 | 0x400000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v58) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v58,
                    11,
                    71,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v60);
                }
                XilRegister_WriteUlong(v5, v16, v60);
                RootHub_ReleaseReadModifyWriteLock(v3, v15);
                v30 = XilRegister_ReadUlong(v5, v16);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_54;
                v32 = 72;
              }
            }
            else
            {
              RootHub_AcquireReadModifyWriteLock(v3, v15);
              v89 = XilRegister_ReadUlong(v5, v16);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v88) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v88,
                  11,
                  67,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v89);
              }
              v90 = v89 & 0xE00C200 | 0x40000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v88) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v88,
                  11,
                  68,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v90);
              }
              XilRegister_WriteUlong(v5, v16, v90);
              RootHub_ReleaseReadModifyWriteLock(v3, v15);
              v30 = XilRegister_ReadUlong(v5, v16);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_54;
              v32 = 69;
            }
          }
          else
          {
            RootHub_AcquireReadModifyWriteLock(v3, v15);
            v43 = XilRegister_ReadUlong(v5, v16);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v42) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v42,
                11,
                61,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v43);
            }
            v44 = v43 & 0xE00C200 | 0x20000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v42) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v42,
                11,
                62,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v44);
            }
            XilRegister_WriteUlong(v5, v16, v44);
            RootHub_ReleaseReadModifyWriteLock(v3, v15);
            v30 = XilRegister_ReadUlong(v5, v16);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_54;
            v32 = 63;
          }
        }
        else
        {
          RootHub_AcquireReadModifyWriteLock(v3, v15);
          v92 = XilRegister_ReadUlong(v5, v16);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v91) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v91,
              11,
              54,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v92);
          }
          v93 = v92 & 0xE00C000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v91) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v91,
              11,
              55,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v93);
          }
          XilRegister_WriteUlong(v5, v16, v93);
          RootHub_ReleaseReadModifyWriteLock(v3, v15);
          v30 = XilRegister_ReadUlong(v5, v16);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_54;
          v32 = 56;
        }
LABEL_53:
        LOBYTE(v31) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v31,
          11,
          v32,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v30);
LABEL_54:
        *(_DWORD *)(v6 + 4) = 0;
        v10 = 0LL;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v10);
      }
      RootHub_AcquireReadModifyWriteLock(v3, v15);
      v94 = XilRegister_ReadUlong(v5, v16);
      v95 = v94;
      v96 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v96) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          (_DWORD)v96,
          11,
          45,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v94);
        v96 = &WPP_RECORDER_INITIALIZED;
      }
      v97 = *(_QWORD *)(v3 + 8);
      if ( (*(_QWORD *)(v97 + 736) & 0x2000000LL) != 0 )
      {
        if ( ((v95 & 2) == 0 || (v95 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v96) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(v97 + 72),
            (_DWORD)v96,
            11,
            46,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
        }
        v98 = v95 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_167;
        v99 = 47;
        v100 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
      }
      else
      {
        v98 = v95 & 0xE00C200 | 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_167:
          XilRegister_WriteUlong(v5, v16, v98);
          RootHub_ReleaseReadModifyWriteLock(v3, v15);
          v30 = XilRegister_ReadUlong(v5, v16);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_54;
          v32 = 49;
          goto LABEL_53;
        }
        v100 = *(_QWORD *)(v97 + 72);
        v99 = 48;
      }
      LOBYTE(v96) = 4;
      WPP_RECORDER_SF_D(v100, (_DWORD)v96, 11, v99, (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids, v98);
      goto LABEL_167;
    }
    if ( v17 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v82 = 106;
        v83 = *(unsigned __int8 *)(v6 + 134);
        v84 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_207;
      }
      goto LABEL_84;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v115) = *(unsigned __int8 *)(v6 + 133);
      LODWORD(v114) = *(unsigned __int8 *)(v6 + 132);
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x4Du,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v114,
        *(unsigned __int16 *)(v6 + 130),
        v115);
      v13 = v119;
      v18 = v16 + 1;
    }
    if ( v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v82 = 78;
        goto LABEL_129;
      }
      goto LABEL_84;
    }
    v45 = v14 - 8;
    if ( !v45 )
    {
      RootHub_AcquireReadModifyWriteLock(v3, v15);
      v112 = XilRegister_ReadUlong(v5, v16);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v111) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v111,
          11,
          79,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v112);
      }
      v113 = v112 & 0xE00C000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v111) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v111,
          11,
          80,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v113);
      }
      XilRegister_WriteUlong(v5, v16, v113);
      RootHub_ReleaseReadModifyWriteLock(v3, v15);
      v30 = XilRegister_ReadUlong(v5, v16);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v32 = 81;
      goto LABEL_53;
    }
    v46 = v45 - 8;
    if ( v46 )
    {
      v47 = v46 - 3;
      if ( !v47 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v15);
        v62 = XilRegister_ReadUlong(v5, v16);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v61) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v61,
            11,
            89,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v62);
        }
        v63 = v62 & 0xE00C200 | 0x100000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v61) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v61,
            11,
            90,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v63);
        }
        XilRegister_WriteUlong(v5, v16, v63);
        RootHub_ReleaseReadModifyWriteLock(v3, v15);
        v30 = XilRegister_ReadUlong(v5, v16);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v32 = 91;
        goto LABEL_53;
      }
      v48 = v47 - 1;
      if ( !v48 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v15);
        v80 = XilRegister_ReadUlong(v5, v16);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v79) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v79,
            11,
            86,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v80);
        }
        v81 = v80 & 0xE00C200 | 0x200000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v79) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v79,
            11,
            87,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v81);
        }
        XilRegister_WriteUlong(v5, v16, v81);
        RootHub_ReleaseReadModifyWriteLock(v3, v15);
        v30 = XilRegister_ReadUlong(v5, v16);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v32 = 88;
        goto LABEL_53;
      }
      v49 = v48 - 5;
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( v50 )
        {
          v51 = v50 - 3;
          if ( v51 )
          {
            if ( v51 != 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v82 = 105;
                goto LABEL_129;
              }
              goto LABEL_84;
            }
            v104 = XilRegister_ReadUlong(v5, v18);
            v106 = v104;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v105) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v105,
                11,
                102,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v104);
            }
            v107 = v106 & 0xFFFEFFFF;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v105) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v105,
                11,
                103,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v107);
            }
            XilRegister_WriteUlong(v5, v121, v107);
            v30 = XilRegister_ReadUlong(v5, v121);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_54;
            v32 = 104;
          }
          else
          {
            RootHub_AcquireReadModifyWriteLock(v3, v15);
            v53 = XilRegister_ReadUlong(v5, v16);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v52) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v52,
                11,
                99,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v53);
            }
            v54 = v53 & 0xE00C200 | 0x80000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v52) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v52,
                11,
                100,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v54);
            }
            XilRegister_WriteUlong(v5, v16, v54);
            RootHub_ReleaseReadModifyWriteLock(v3, v15);
            v30 = XilRegister_ReadUlong(v5, v16);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_54;
            v32 = 101;
          }
        }
        else
        {
          RootHub_AcquireReadModifyWriteLock(v3, v15);
          v109 = XilRegister_ReadUlong(v5, v16);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v108) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v108,
              11,
              96,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v109);
          }
          v110 = v109 & 0xE00C200 | 0x800000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v108) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v108,
              11,
              97,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v110);
          }
          XilRegister_WriteUlong(v5, v16, v110);
          RootHub_ReleaseReadModifyWriteLock(v3, v15);
          v30 = XilRegister_ReadUlong(v5, v16);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_54;
          v32 = 98;
        }
        goto LABEL_53;
      }
      RootHub_AcquireReadModifyWriteLock(v3, v15);
      v75 = XilRegister_ReadUlong(v5, v16);
      v118 = v75;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v74) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v74,
          11,
          92,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v75);
      }
      v76 = v75 & 0xE00C200 | 0x400000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v74) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v74,
          11,
          93,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v76);
      }
      XilRegister_WriteUlong(v5, v16, v76);
      RootHub_ReleaseReadModifyWriteLock(v3, v15);
      v77 = XilRegister_ReadUlong(v5, v16);
      v78 = v77;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v68) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v68,
          11,
          94,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v77);
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 744LL) & 0x1000000LL) == 0 )
        goto LABEL_54;
      v70 = v118 == v78;
      v71 = 120LL * v15;
      v72 = *(_QWORD *)(v3 + 48);
      if ( v70 )
      {
        ++*(_DWORD *)(v120 + v72 + 112);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v73 = 95;
LABEL_102:
          LOBYTE(v68) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v68,
            11,
            v73,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
        }
LABEL_196:
        if ( *(_DWORD *)(*(_QWORD *)(v3 + 48) + v71 + 112) == 10 )
          Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 64, 4144, 0, 0LL, 0LL, 0LL);
        goto LABEL_54;
      }
    }
    else
    {
      RootHub_AcquireReadModifyWriteLock(v3, v15);
      v65 = XilRegister_ReadUlong(v5, v16);
      v117 = v65;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v64) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v64,
          11,
          82,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v65);
      }
      v66 = v65 & 0xE00C200 | 0x20000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v64) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v64,
          11,
          83,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v66);
      }
      XilRegister_WriteUlong(v5, v16, v66);
      RootHub_ReleaseReadModifyWriteLock(v3, v15);
      v67 = XilRegister_ReadUlong(v5, v16);
      v69 = v67;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v68) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v68,
          11,
          84,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v67);
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 744LL) & 0x1000000LL) == 0 )
        goto LABEL_54;
      v70 = v117 == v69;
      v71 = 120LL * v15;
      v72 = *(_QWORD *)(v3 + 48);
      if ( v70 )
      {
        ++*(_DWORD *)(v120 + v72 + 112);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_196;
        v73 = 85;
        goto LABEL_102;
      }
    }
    *(_DWORD *)(v71 + v72 + 112) = 0;
    goto LABEL_196;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v9,
      11,
      41,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
  }
  *(_DWORD *)(v6 + 4) = -1073741807;
  v10 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v10);
}
