/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x140009050
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
 *     RootHub_ForceU0AndWait @ 0x14002C35C (RootHub_ForceU0AndWait.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004B7F4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  __int16 v6; // ax
  __int64 v7; // rbp
  int v8; // edx
  int Ulong; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v13; // r10d
  int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // r8d
  _DWORD *v17; // rsi
  char v18; // dl
  _DWORD *v19; // rcx
  int v20; // edx
  int v21; // edi
  unsigned int v22; // edi
  char v23; // al
  int v24; // edx
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  __int16 v31; // ax
  __int16 v32; // di
  _UNKNOWN **v33; // rdx
  int v34; // edi
  int v35; // ebx
  char v36; // al
  int v37; // edx
  int v38; // edi
  int v39; // edi
  int v40; // edi
  int v41; // eax
  int v42; // edx
  int v43; // ebx
  int v44; // ebx
  int v45; // r9d
  int v46; // eax
  int v47; // edx
  int v48; // ebx
  int v49; // ebx
  char v50; // dl
  int v51; // r8d
  int v52; // r9d
  int v53; // eax
  int v54; // edx
  int v55; // ebx
  int v56; // ebx
  int v57; // edi
  unsigned int v58; // edi
  int v59; // edx
  int v60; // ebx
  unsigned int v61; // ebx
  int v62; // eax
  int v63; // edx
  int v64; // esi
  char v65; // al
  int v66; // edx
  int v67; // r9d
  int v68; // edx
  int v69; // r8d
  int v70; // edi
  int v71; // edx
  int v72; // ebx
  unsigned int v73; // ebx
  int v74; // edx
  int v75; // ebx
  unsigned int v76; // ebx
  int v77; // edx
  int v78; // edi
  int v79; // ebx
  int v80; // eax
  int v81; // edx
  int v82; // edi
  int v83; // edi
  int v84; // eax
  int v85; // edx
  int v86; // ebx
  int v87; // ebx
  unsigned int v88; // edi
  int v89; // edx
  int v90; // ebx
  int v91; // ebx
  unsigned int v92; // edi
  int v93; // edx
  int v94; // ebx
  int v95; // ebx
  int v96; // eax
  int v97; // eax
  int v98; // edx
  int v99; // edi
  int v100; // edi
  int v101; // edi
  char v102; // al
  int v103; // edx
  __int64 v104; // r8
  int v105; // eax
  const char *v106; // [rsp+28h] [rbp-D0h]
  const char *v107; // [rsp+38h] [rbp-C0h]
  unsigned int v108; // [rsp+70h] [rbp-88h]
  unsigned int v109; // [rsp+74h] [rbp-84h]
  unsigned int v110; // [rsp+74h] [rbp-84h]
  _DWORD *v111; // [rsp+78h] [rbp-80h]
  __int64 v112; // [rsp+80h] [rbp-78h]
  _OWORD v114[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v115; // [rsp+B0h] [rbp-48h]

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
      v107 = "Code Path Requires Passive Level";
      v106 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v50, v51, v52);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  memset(v114, 0, sizeof(v114));
  v115 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v6 = 40;
LABEL_4:
    LOWORD(v114[0]) = v6;
    goto LABEL_5;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v6 = -1;
    goto LABEL_4;
  }
  LOWORD(v114[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_5:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v114);
  v7 = *((_QWORD *)&v114[0] + 1);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v8,
        11,
        124,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    goto LABEL_10;
  }
  Ulong = XilRegister_ReadUlong(v5, *(_QWORD *)(v3 + 32) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v10,
        11,
        125,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    LOBYTE(v10) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v10);
LABEL_10:
    *(_DWORD *)(v7 + 4) = -1073713152;
    v11 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v11);
  }
  if ( (Ulong & 1) == 0 )
  {
    v13 = *(unsigned __int8 *)(v7 + 132);
    v14 = *(unsigned __int16 *)(v7 + 130);
    v15 = *(unsigned __int8 *)(v7 + 133);
    v108 = v13;
    if ( *(_WORD *)(v7 + 128) != 803 || !*(_BYTE *)(v7 + 132) || v13 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v7 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v68 = *(unsigned __int8 *)(v7 + 134);
        v67 = 127;
        v69 = *(unsigned __int8 *)(v7 + 131);
LABEL_111:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v68, v69, v67);
        goto LABEL_98;
      }
      goto LABEL_98;
    }
    v16 = v13 - 1;
    v17 = (_DWORD *)(*(_QWORD *)(v3 + 40) + 16LL * (v13 - 1));
    v112 = 120LL * (v13 - 1);
    v18 = *(_BYTE *)(v112 + *(_QWORD *)(v3 + 48) + 13);
    v109 = v13 - 1;
    v19 = v17 + 1;
    v111 = v17 + 1;
    if ( v18 != 2 )
    {
      if ( v18 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_98;
        v69 = *(unsigned __int8 *)(v7 + 133);
        v68 = *(unsigned __int8 *)(v7 + 134);
        v67 = 183;
        goto LABEL_111;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v107) = *(unsigned __int8 *)(v7 + 133);
        LODWORD(v106) = *(unsigned __int8 *)(v7 + 132);
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x99u,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v106,
          *(unsigned __int16 *)(v7 + 130),
          v107);
        v13 = v108;
        v19 = v17 + 1;
      }
      switch ( v14 )
      {
        case 27:
          goto LABEL_39;
        case 23:
LABEL_23:
          v21 = XilRegister_ReadUlong(v5, v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v20,
              11,
              165,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v21);
          }
          v22 = v15 | v21 & 0xFFFFFF00;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v20,
              11,
              166,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v22);
          }
          XilRegister_WriteUlong(v5, v111, v22);
          v23 = XilRegister_ReadUlong(v5, v111);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v24,
              11,
              167,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v23);
          }
          *(_BYTE *)(120LL * (v108 - 1) + *(_QWORD *)(v3 + 48) + 21) = v15;
          goto LABEL_47;
        case 24:
          goto LABEL_100;
      }
      if ( v14 != 5 )
      {
        if ( v15 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_98;
          v67 = 154;
          goto LABEL_119;
        }
        v25 = v14 - 4;
        if ( !v25 )
        {
          v92 = v13 - 1;
          RootHub_AcquireReadModifyWriteLock(v3, v13 - 1);
          v94 = XilRegister_ReadUlong(v5, v17);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v93) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v93,
              11,
              155,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v94);
          }
          v95 = v94 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v93) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v93,
              11,
              156,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v95);
          }
          XilRegister_WriteUlong(v5, v17, v95);
          RootHub_ReleaseReadModifyWriteLock(v3, v92);
          v36 = XilRegister_ReadUlong(v5, v17);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v45 = 157;
          goto LABEL_73;
        }
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 3;
          if ( !v27 )
          {
            v88 = v13 - 1;
            RootHub_AcquireReadModifyWriteLock(v3, v13 - 1);
            v90 = XilRegister_ReadUlong(v5, v17);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v89) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v89,
                11,
                161,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v90);
            }
            v91 = v90 & 0xE00C000 | 0x200;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v89) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v89,
                11,
                162,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v91);
            }
            XilRegister_WriteUlong(v5, v17, v91);
            RootHub_ReleaseReadModifyWriteLock(v3, v88);
            v36 = XilRegister_ReadUlong(v5, v17);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v45 = 163;
            goto LABEL_73;
          }
          v28 = v27 - 15;
          if ( !v28 )
            goto LABEL_23;
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 3;
            if ( !v30 )
            {
LABEL_39:
              if ( (unsigned __int8)v15 < 8u )
              {
                v110 = v13 - 1;
                RootHub_AcquireReadModifyWriteLock(v3, v13 - 1);
                v31 = XilRegister_ReadUlong(v5, v17);
                v32 = v31;
                v33 = &WPP_RECORDER_INITIALIZED;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v33) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    (_DWORD)v33,
                    11,
                    176,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v31);
                  v33 = &WPP_RECORDER_INITIALIZED;
                }
                v34 = v32 & 0xC200;
                if ( (*(_DWORD *)(120LL * (v108 - 1) + *(_QWORD *)(v3 + 48) + 64) & 2) != 0 )
                  v35 = v34;
                else
                  v35 = v34 | ((v15 & 7) << 25);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v33) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    (_DWORD)v33,
                    11,
                    177,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v35);
                }
                XilRegister_WriteUlong(v5, v17, v35);
                RootHub_ReleaseReadModifyWriteLock(v3, v110);
                v36 = XilRegister_ReadUlong(v5, v17);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_47;
                v45 = 178;
                goto LABEL_73;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_98;
              v67 = 175;
              goto LABEL_119;
            }
            v57 = v30 - 1;
            if ( v57 )
            {
              if ( v57 != 2 )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_98;
                v67 = 182;
                goto LABEL_119;
              }
              v84 = XilRegister_ReadUlong(v5, v19);
              v86 = v84;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v85) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v85,
                  11,
                  179,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v84);
              }
              v87 = v86 | 0x10000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v85) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v85,
                  11,
                  180,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v87);
              }
              XilRegister_WriteUlong(v5, v111, v87);
              v36 = XilRegister_ReadUlong(v5, v111);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_47;
              v45 = 181;
            }
            else
            {
              v58 = v13 - 1;
              RootHub_AcquireReadModifyWriteLock(v3, v13 - 1);
              v60 = XilRegister_ReadUlong(v5, v17);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v59) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v59,
                  11,
                  158,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v60);
              }
              v61 = v60 & 0xE00C200 | 0x80000000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v59) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v59,
                  11,
                  159,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v61);
              }
              XilRegister_WriteUlong(v5, v17, v61);
              RootHub_ReleaseReadModifyWriteLock(v3, v58);
              v36 = XilRegister_ReadUlong(v5, v17);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_47;
              v45 = 160;
            }
LABEL_73:
            LOBYTE(v37) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v37,
              11,
              v45,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v36);
LABEL_47:
            *(_DWORD *)(v7 + 4) = 0;
            v11 = 0LL;
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                     WdfDriverGlobals,
                     a2,
                     v11);
          }
LABEL_100:
          v64 = XilRegister_ReadUlong(v5, v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v63) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v63,
              11,
              168,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v64);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v63) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v63,
              11,
              169,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v64);
          }
          XilRegister_WriteUlong(v5, v111, v64 & 0xFFFF00FF | (v15 << 8));
          v65 = XilRegister_ReadUlong(v5, v111);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v66) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v66,
              11,
              170,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v65);
          }
          *(_BYTE *)(120LL * (v108 - 1) + *(_QWORD *)(v3 + 48) + 22) = v15;
          goto LABEL_47;
        }
LABEL_181:
        if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 736LL) & 0x80000LL) != 0 )
        {
          if ( v15 )
          {
            v96 = RootHub_ForceU0AndWait(v3);
            goto LABEL_185;
          }
        }
        else if ( v15 )
        {
          goto LABEL_188;
        }
        v96 = RootHub_WaitForPendingU3TransitionCompletion(v3, v13, 0LL);
LABEL_185:
        v11 = (unsigned int)v96;
        if ( v96 < 0 )
          goto LABEL_99;
LABEL_188:
        RootHub_AcquireReadModifyWriteLock(v3, v108 - 1);
        if ( v15 == 3 )
          *(_BYTE *)(120LL * (v108 - 1) + *(_QWORD *)(v3 + 48) + 18) = 0;
        v97 = XilRegister_ReadUlong(v5, v17);
        v99 = v97;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v98) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v98,
            11,
            172,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v97);
        }
        v100 = v99 & 0xE00C200;
        if ( v15 == 4 )
          v101 = v100 | 2;
        else
          v101 = (32 * (v15 & 0xF | 0x800)) | v100;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v98) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v98,
            11,
            173,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v101);
        }
        XilRegister_WriteUlong(v5, v17, v101);
        RootHub_ReleaseReadModifyWriteLock(v3, v108 - 1);
        v102 = XilRegister_ReadUlong(v5, v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v103) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v103,
            11,
            174,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v102);
        }
        if ( v15 != 3
          || (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 736LL) & 0x4000000LL) == 0
          || (LOBYTE(v104) = 1,
              v105 = RootHub_WaitForPendingU3TransitionCompletion(v3, v108, v104),
              v11 = (unsigned int)v105,
              v105 >= 0) )
        {
          v11 = 0LL;
          *(_DWORD *)(v7 + 4) = 0;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v11);
        }
        goto LABEL_99;
      }
      if ( v15 <= 5 )
        goto LABEL_181;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_98:
        v11 = 3221225473LL;
LABEL_99:
        *(_DWORD *)(v7 + 4) = -1073741820;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v11);
      }
      v67 = 171;
LABEL_119:
      v68 = *(unsigned __int8 *)(v7 + 134);
      v69 = *(unsigned __int8 *)(v7 + 133);
      goto LABEL_111;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v107) = *(unsigned __int8 *)(v7 + 133);
      LODWORD(v106) = *(unsigned __int8 *)(v7 + 132);
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x80u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v106,
        *(unsigned __int16 *)(v7 + 130),
        v107);
      v19 = v17 + 1;
      v16 = v109;
    }
    if ( v14 == 21 )
    {
      if ( v15 > 5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_98;
        v67 = 144;
        goto LABEL_119;
      }
    }
    else
    {
      if ( v14 == 22 )
      {
        if ( v15 > 3 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_98;
          v67 = 148;
          goto LABEL_119;
        }
        if ( v15 == 3 )
          LOBYTE(v15) = 0;
        goto LABEL_140;
      }
      if ( v15 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_98;
        v67 = 129;
        goto LABEL_119;
      }
      v38 = v14 - 2;
      if ( !v38 )
      {
        if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 736LL) & 0x8000000LL) != 0 )
        {
          v62 = RootHub_ForceU0AndWait(v3);
          v11 = (unsigned int)v62;
          if ( v62 < 0 )
            goto LABEL_99;
        }
        RootHub_AcquireReadModifyWriteLock(v3, v109);
        *(_BYTE *)(v112 + *(_QWORD *)(v3 + 48) + 18) = 0;
        v46 = XilRegister_ReadUlong(v5, v17);
        v48 = v46;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v47) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v47,
            11,
            137,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v46);
        }
        if ( ((v48 & 2) == 0 || (v48 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v47) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v47,
            11,
            138,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
        }
        v49 = v48 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v47) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v47,
            11,
            139,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v49);
        }
        XilRegister_WriteUlong(v5, v17, v49);
        RootHub_ReleaseReadModifyWriteLock(v3, v108 - 1);
        v36 = XilRegister_ReadUlong(v5, v17);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v45 = 140;
        goto LABEL_73;
      }
      v39 = v38 - 2;
      if ( !v39 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v16);
        if ( *(_BYTE *)(v112 + *(_QWORD *)(v3 + 48) + 20) )
        {
          v72 = XilRegister_ReadUlong(v5, v17 + 1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v71) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v71,
              11,
              130,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v72);
          }
          v73 = v72 & 0xFFFE0007;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v71) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v71,
              11,
              131,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v73);
          }
          XilRegister_WriteUlong(v5, v17 + 1, v73);
          v75 = XilRegister_ReadUlong(v5, v17 + 3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v74) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v74,
              11,
              132,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v75);
          }
          v76 = v75 & 0xFFFFC000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v74) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v74,
              11,
              133,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v76);
          }
          XilRegister_WriteUlong(v5, v17 + 3, v76);
          *(_BYTE *)(v112 + *(_QWORD *)(v3 + 48) + 20) = 0;
        }
        v53 = XilRegister_ReadUlong(v5, v17);
        v55 = v53;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v54) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v54,
            11,
            134,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v53);
        }
        v56 = v55 & 0xE00C200 | 0x10;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v54) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v54,
            11,
            135,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v56);
        }
        XilRegister_WriteUlong(v5, v17, v56);
        RootHub_ReleaseReadModifyWriteLock(v3, v109);
        v36 = XilRegister_ReadUlong(v5, v17);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v45 = 136;
        goto LABEL_73;
      }
      v40 = v39 - 4;
      if ( !v40 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v16);
        v41 = XilRegister_ReadUlong(v5, v17);
        v43 = v41;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v42,
            11,
            141,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v41);
        }
        v44 = v43 & 0xE00C000 | 0x200;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v42,
            11,
            142,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v44);
        }
        XilRegister_WriteUlong(v5, v17, v44);
        RootHub_ReleaseReadModifyWriteLock(v3, v109);
        v36 = XilRegister_ReadUlong(v5, v17);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v45 = 143;
        goto LABEL_73;
      }
      v70 = v40 - 13;
      if ( v70 )
      {
        if ( v70 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_98;
          v67 = 152;
          goto LABEL_119;
        }
LABEL_140:
        RootHub_AcquireReadModifyWriteLock(v3, v16);
        v78 = XilRegister_ReadUlong(v5, v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v77) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v77,
            11,
            149,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v78);
        }
        v79 = v78 & 0xE000200 | ((v15 & 3) << 14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v77) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v77,
            11,
            150,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v79);
        }
        XilRegister_WriteUlong(v5, v17, v79);
        RootHub_ReleaseReadModifyWriteLock(v3, v109);
        v36 = XilRegister_ReadUlong(v5, v17);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v45 = 151;
        goto LABEL_73;
      }
    }
    v80 = XilRegister_ReadUlong(v5, v19);
    v82 = v80;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v81) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v81,
        11,
        145,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v80);
    }
    v83 = (v15 << 28) | v82 & 0xFFFFFFF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v81) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v81,
        11,
        146,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v83);
    }
    XilRegister_WriteUlong(v5, v111, v83);
    v36 = XilRegister_ReadUlong(v5, v111);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v45 = 147;
    goto LABEL_73;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v10,
      11,
      126,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
  }
  *(_DWORD *)(v7 + 4) = -1073741807;
  v11 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
