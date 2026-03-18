/*
 * XREFs of RootHub_PrepareHardware @ 0x14007D980
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     RootHub_DumpPortData @ 0x14000B97C (RootHub_DumpPortData.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     XilRegister_ReadBufferUlong @ 0x140036C58 (XilRegister_ReadBufferUlong.c)
 *     Register_FindFirstExtendedCapability @ 0x1400380F4 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x140038160 (Register_FindNextExtendedCapability.c)
 *     XilRegister_GetOperationalRegisters @ 0x14003DB6C (XilRegister_GetOperationalRegisters.c)
 *     WPP_RECORDER_SF_dddd @ 0x140045840 (WPP_RECORDER_SF_dddd.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x14004A410 (RootHub_InitializeReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_cccc @ 0x14004B990 (WPP_RECORDER_SF_cccc.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x14008205C (RootHub_PopulatePortFlagsFromRegistry.c)
 */

__int64 __fastcall RootHub_PrepareHardware(__int64 a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int *FirstExtendedCapability; // rax
  __int64 Pool2; // rax
  unsigned int v8; // edi
  unsigned int i; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int *NextExtendedCapability; // rax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int v19; // edx
  int v20; // r15d
  unsigned int v21; // eax
  int v22; // r8d
  __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rcx
  int Ulong; // eax
  char v28; // cl
  unsigned int v29; // eax
  unsigned int j; // edi
  int v31; // eax
  int v32; // r9d
  unsigned int k; // esi
  __int64 v34; // r14
  __int64 v36; // rcx
  char IsSecureDevice; // al
  int v38; // r8d
  int v39; // ecx
  __int64 v40; // r9
  int v41; // eax
  int v42; // edx
  __int64 v43; // rdi
  __int64 v44; // rcx
  char v45; // al
  int v46; // r8d
  int v47; // ecx
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // r9d
  int v53; // [rsp+28h] [rbp-99h]
  char v54; // [rsp+58h] [rbp-69h]
  unsigned int v55; // [rsp+5Ch] [rbp-65h] BYREF
  __int128 v56; // [rsp+60h] [rbp-61h] BYREF
  __int128 v57; // [rsp+70h] [rbp-51h]
  __int64 v58; // [rsp+80h] [rbp-41h]
  __int128 v59; // [rsp+88h] [rbp-39h] BYREF
  __int128 v60; // [rsp+98h] [rbp-29h]
  __int128 v61; // [rsp+A8h] [rbp-19h]
  void *v62; // [rsp+B8h] [rbp-9h]
  unsigned int v63; // [rsp+C0h] [rbp-1h]
  unsigned int v64; // [rsp+C4h] [rbp+3h]
  __int64 v65; // [rsp+C8h] [rbp+7h]
  int v66; // [rsp+D0h] [rbp+Fh]
  unsigned int v67; // [rsp+D4h] [rbp+13h]
  unsigned int *v68; // [rsp+D8h] [rbp+17h]
  __int128 v69; // [rsp+E0h] [rbp+1Fh] BYREF

  LODWORD(v62) = 0;
  LODWORD(v58) = 0;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v59 = 0LL;
  v54 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v4 = *(_QWORD *)(v3 + 88);
  v69 = 0LL;
  v65 = v4;
  *(_DWORD *)(a1 + 16) = *(unsigned __int8 *)(v4 + 87);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = (unsigned __int8)*(_WORD *)(v4 + 100);
  *(_WORD *)(a1 + 26) = *(_WORD *)(v4 + 102);
  *(_QWORD *)(a1 + 32) = XilRegister_GetOperationalRegisters(v4);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v4 + 32) + 1024LL;
  if ( Register_FindFirstExtendedCapability(v5, 0xAu) )
    *(_BYTE *)(a1 + 56) = 1;
  v55 = 0;
  FirstExtendedCapability = Register_FindFirstExtendedCapability(v4, 0x12u);
  if ( FirstExtendedCapability )
  {
    XilRegister_ReadBufferUlong(v4, (__int64)FirstExtendedCapability, &v55, 1u);
    if ( (v55 & 0x10000) != 0 )
      *(_BYTE *)(a1 + 58) = 1;
  }
  Pool2 = ExAllocatePool2(64LL, 120LL * *(unsigned int *)(a1 + 16), 1229146200LL);
  *(_QWORD *)(a1 + 48) = Pool2;
  if ( Pool2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); *(_DWORD *)(v10 + v11 + 8) = i )
    {
      v10 = 120LL * i;
      v11 = *(_QWORD *)(a1 + 48);
      ++i;
      *(_QWORD *)(v10 + v11) = a1;
    }
    NextExtendedCapability = Register_FindFirstExtendedCapability(v4, 2u);
    v68 = NextExtendedCapability;
    if ( NextExtendedCapability )
    {
      do
      {
        XilRegister_ReadBufferUlong(v4, (__int64)NextExtendedCapability, &v69, 4u);
        if ( DWORD1(v69) == 541217621 )
        {
          v16 = v69;
          v17 = BYTE3(v69);
          v64 = v69;
          if ( BYTE3(v69) == 2 || v17 == 3 )
          {
            v18 = DWORD2(v69);
            v19 = BYTE9(v69);
            v20 = BYTE8(v69);
            v63 = BYTE9(v69);
            v66 = BYTE8(v69);
            if ( v17 == 3 )
              *(_DWORD *)(v4 + 140) = BYTE8(v69);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_dddd(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                4u,
                0xBu,
                0x15u,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
              v16 = v64;
              v19 = v63;
              v18 = DWORD2(v69);
            }
            if ( v20 && v19 && v19 + v20 - 1 <= *(_DWORD *)(a1 + 16) )
            {
              v21 = 0;
              v54 = 1;
              v55 = 0;
              v19 = HIBYTE(v16);
              v67 = HIBYTE(v16);
              while ( 1 )
              {
                v22 = v20 - 1;
                v23 = *(_QWORD *)(a1 + 48);
                v24 = v21 + v22;
                v25 = 120 * v24;
                if ( *(_BYTE *)(120 * v24 + v23 + 13) )
                  break;
                if ( v19 == 2 )
                  ++*(_WORD *)(a1 + 20);
                else
                  ++*(_WORD *)(a1 + 22);
                *(_BYTE *)(v25 + v23 + 12) = BYTE2(v16);
                v26 = v65;
                *(_BYTE *)(v25 + v23 + 15) = (v18 & 0x20000) != 0;
                *(_BYTE *)(v25 + v23 + 13) = v19;
                *(_BYTE *)(v25 + v23 + 16) = (v18 & 0x40000) != 0;
                Ulong = XilRegister_ReadUlong(v26, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v24));
                v18 = DWORD2(v69);
                v28 = 0;
                *(_BYTE *)(v25 + v23 + 19) = 0;
                if ( (v18 & 0x80000) != 0 )
                {
                  *(_BYTE *)(v25 + v23 + 19) = 1;
                  v28 = 1;
                }
                if ( (v18 & 0x100000) != 0 )
                  *(_BYTE *)(v25 + v23 + 19) = v28 | 2;
                if ( (Ulong & 0x40000000) == 0 )
                  *(_BYTE *)(v25 + v23 + 17) = 1;
                BYTE2(v16) = BYTE2(v64);
                v19 = v67;
                *(_BYTE *)(v25 + v23 + 14) = (v18 >> 25) & 7;
                *(_WORD *)(v25 + v23 + 54) = v18 >> 28;
                *(_QWORD *)(v25 + v23 + 56) = v68 + 4;
                v20 = v66;
                v21 = v55 + 1;
                v55 = v21;
                if ( v21 >= v63 )
                {
                  v4 = v65;
                  v2 = 0;
                  goto LABEL_38;
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v32 = 23;
                goto LABEL_51;
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v32 = 22;
LABEL_51:
              LOBYTE(v19) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                v19,
                11,
                v32,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
            }
            v8 = -1073741811;
            goto LABEL_53;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              2u,
              0xBu,
              0x18u,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_cccc(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), DWORD1(v69), v14, v15, v53);
        }
LABEL_38:
        NextExtendedCapability = Register_FindNextExtendedCapability(v4, v68);
        v68 = NextExtendedCapability;
      }
      while ( NextExtendedCapability );
      if ( !v54 )
        goto LABEL_113;
      v29 = *(_DWORD *)(a1 + 16);
      for ( j = 0; j < v29; ++j )
      {
        RootHub_DumpPortData((unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * j), *(_QWORD *)(a1 + 8));
        v29 = *(_DWORD *)(a1 + 16);
      }
      v8 = 0;
      if ( !v29 )
      {
LABEL_103:
        RootHub_PopulatePortFlagsFromRegistry(a1);
        return v8;
      }
      while ( 1 )
      {
        v31 = RootHub_InitializeReadModifyWriteLock((_QWORD *)a1, v2);
        v8 = v31;
        if ( v31 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              2u,
              0xBu,
              0x1Bu,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v31,
              v2);
          goto LABEL_53;
        }
        v58 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        if ( WdfClientVersionHigherThanFramework )
        {
          if ( (unsigned int)WdfStructureCount <= 0x37 )
            LODWORD(v56) = -1;
          else
            LODWORD(v56) = *(_DWORD *)(WdfStructures + 440);
        }
        else
        {
          LODWORD(v56) = 40;
        }
        LODWORD(v57) = 0;
        *((_QWORD *)&v56 + 1) = RootHub_WdfEvtTimerPortOperationPendingTimerDpc;
        BYTE4(v57) = 1;
        DWORD2(v57) = 0;
        LOBYTE(v58) = 1;
        v62 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        if ( WdfClientVersionHigherThanFramework )
        {
          if ( (unsigned int)WdfStructureCount <= 0x26 )
            LODWORD(v59) = -1;
          else
            LODWORD(v59) = *(_DWORD *)(WdfStructures + 304);
        }
        else
        {
          LODWORD(v59) = 56;
        }
        v36 = *(_QWORD *)(a1 + 8);
        v62 = off_14006B268;
        *(_QWORD *)&v61 = *(_QWORD *)a1;
        *((_QWORD *)&v60 + 1) = 0x100000001LL;
        IsSecureDevice = Controller_IsSecureDevice(v36);
        v39 = v38;
        if ( IsSecureDevice )
          v39 = 2;
        v40 = *(_QWORD *)(a1 + 48) + 72LL;
        DWORD2(v60) = v39;
        v65 = 120LL * v2;
        v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
                WdfDriverGlobals,
                &v56,
                &v59,
                v65 + v40);
        v8 = v41;
        if ( v41 < 0 )
          break;
        v43 = v65;
        *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     *(_QWORD *)(v65 + *(_QWORD *)(a1 + 48) + 72),
                     off_14006B268) = v43 + *(_QWORD *)(a1 + 48);
        v58 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        if ( WdfClientVersionHigherThanFramework )
        {
          if ( (unsigned int)WdfStructureCount <= 0x37 )
            LODWORD(v56) = -1;
          else
            LODWORD(v56) = *(_DWORD *)(WdfStructures + 440);
        }
        else
        {
          LODWORD(v56) = 40;
        }
        LODWORD(v57) = 0;
        *((_QWORD *)&v56 + 1) = RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc;
        BYTE4(v57) = 1;
        DWORD2(v57) = 0;
        LOBYTE(v58) = 1;
        v62 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        if ( WdfClientVersionHigherThanFramework )
        {
          if ( (unsigned int)WdfStructureCount <= 0x26 )
            LODWORD(v59) = -1;
          else
            LODWORD(v59) = *(_DWORD *)(WdfStructures + 304);
        }
        else
        {
          LODWORD(v59) = 56;
        }
        v44 = *(_QWORD *)(a1 + 8);
        v62 = off_14006B268;
        *(_QWORD *)&v61 = *(_QWORD *)a1;
        *((_QWORD *)&v60 + 1) = 0x100000001LL;
        v45 = Controller_IsSecureDevice(v44);
        v47 = v46;
        if ( v45 )
          v47 = 2;
        v48 = *(_QWORD *)(a1 + 48) + 80LL;
        DWORD2(v60) = v47;
        v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
                WdfDriverGlobals,
                &v56,
                &v59,
                120LL * v2 + v48);
        v8 = v41;
        if ( v41 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v52 = 29;
LABEL_106:
            LOBYTE(v42) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v42,
              11,
              v52,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v41);
            goto LABEL_53;
          }
          goto LABEL_53;
        }
        *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     *(_QWORD *)(120LL * v2 + *(_QWORD *)(a1 + 48) + 80),
                     off_14006B268) = *(_QWORD *)(a1 + 48) + 120LL * v2;
        if ( *(_BYTE *)(120LL * v2 + *(_QWORD *)(a1 + 48) + 13) == 2 )
        {
          v58 = 0LL;
          v56 = 0LL;
          v57 = 0LL;
          if ( WdfClientVersionHigherThanFramework )
          {
            if ( (unsigned int)WdfStructureCount <= 0x37 )
              LODWORD(v56) = -1;
            else
              LODWORD(v56) = *(_DWORD *)(WdfStructures + 440);
          }
          else
          {
            LODWORD(v56) = 40;
          }
          LODWORD(v57) = 0;
          *((_QWORD *)&v56 + 1) = RootHub_WdfEvtTimer20PortResumeCompleteDpc;
          BYTE4(v57) = 1;
          DWORD2(v57) = 0;
          LOBYTE(v58) = 1;
          v62 = 0LL;
          v59 = 0LL;
          v60 = 0LL;
          v61 = 0LL;
          if ( WdfClientVersionHigherThanFramework )
          {
            if ( (unsigned int)WdfStructureCount <= 0x26 )
              LODWORD(v59) = -1;
            else
              LODWORD(v59) = *(_DWORD *)(WdfStructures + 304);
          }
          else
          {
            LODWORD(v59) = 56;
          }
          v49 = *(_QWORD *)(a1 + 8);
          v62 = off_14006B268;
          *(_QWORD *)&v61 = *(_QWORD *)a1;
          *((_QWORD *)&v60 + 1) = 0x100000001LL;
          if ( Controller_IsSecureDevice(v49) )
          {
            DWORD2(v60) = 2;
            v50 = v51;
          }
          v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033
                                                                                                + 2544))(
                  WdfDriverGlobals,
                  &v56,
                  &v59,
                  120LL * v2 + v50 + 40);
          v8 = v41;
          if ( v41 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_53;
            v52 = 30;
            goto LABEL_106;
          }
          *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(120LL * v2 + *(_QWORD *)(a1 + 48) + 40),
                       off_14006B268) = *(_QWORD *)(a1 + 48) + 120LL * v2;
        }
        if ( ++v2 >= *(_DWORD *)(a1 + 16) )
          goto LABEL_103;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v52 = 28;
        goto LABEL_106;
      }
    }
    else
    {
LABEL_113:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v13,
          11,
          26,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      }
      v8 = -1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2,
        11,
        20,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    v8 = -1073741670;
  }
LABEL_53:
  if ( *(_QWORD *)(a1 + 48) )
  {
    for ( k = 0; k < *(_DWORD *)(a1 + 16); ++k )
    {
      v34 = 120LL * k;
      if ( *(_QWORD *)(v34 + *(_QWORD *)(a1 + 48) + 72) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(v34 + *(_QWORD *)(a1 + 48) + 72) = 0LL;
      }
      if ( *(_QWORD *)(v34 + *(_QWORD *)(a1 + 48) + 80) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(v34 + *(_QWORD *)(a1 + 48) + 80) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return v8;
}
