/*
 * XREFs of IrqArbAddAllocation @ 0x1400BD7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x140044058 (ProcessorDeleteDeviceIdtAssignment.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x140046DEC (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x14004A548 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     WPP_RECORDER_SF_Dq @ 0x140052D04 (WPP_RECORDER_SF_Dq.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x140055CB8 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 *     IcGetPossibleInput @ 0x1400A88FC (IcGetPossibleInput.c)
 *     IcAddPossibleReference @ 0x1400A8D48 (IcAddPossibleReference.c)
 *     ProcessorGetDestinationMode @ 0x1400A8ECC (ProcessorGetDestinationMode.c)
 *     LinkNodeGetPossibleGsiv @ 0x1400BC2A4 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1400BC2C8 (LinkNodeGetPossibleResources.c)
 *     IcRemovePossibleReference @ 0x1400BEC94 (IcRemovePossibleReference.c)
 *     IcSetPossibleInput @ 0x1400C2ED8 (IcSetPossibleInput.c)
 *     IrqArbGetDeviceIrql @ 0x1400C325C (IrqArbGetDeviceIrql.c)
 *     PcisuppIsPciDevice @ 0x1400C3ACC (PcisuppIsPciDevice.c)
 *     IrqArbGsivFromIrq @ 0x1400C4EA4 (IrqArbGsivFromIrq.c)
 *     IcIsInterruptTypeSecondary @ 0x1400D3968 (IcIsInterruptTypeSecondary.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1400D39C0 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     ProcessorGetMsiConnectionData @ 0x1400D3C78 (ProcessorGetMsiConnectionData.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, unsigned int *a2, int a3)
{
  int v3; // r13d
  char v4; // r14
  __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // r15d
  __int64 v12; // rdx
  int IsPciDevice; // r14d
  int PossibleInput; // eax
  int v15; // r13d
  unsigned __int8 v16; // bl
  bool v17; // zf
  __int64 v18; // rcx
  __int16 v19; // bx
  char v20; // bl
  __int64 v21; // rax
  BOOL v22; // r10d
  __int64 v23; // r11
  int v24; // r8d
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r9d
  int v30; // edx
  __int64 Pool2; // rax
  int v32; // edx
  int v33; // ecx
  __int64 v34; // r8
  unsigned int i; // ebx
  __int64 v36; // r8
  int v37; // eax
  _DWORD *v38; // rcx
  __int128 v39; // xmm0
  unsigned int v40; // edx
  BOOL v41; // eax
  char v42; // bl
  int v43; // eax
  int v44; // ecx
  int v45; // r8d
  int v46; // ebx
  const char *v47; // r9
  const char *v48; // rdx
  const char *v49; // r8
  UCHAR v50; // r14
  NTSTATUS v51; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  PVOID UserData; // [rsp+28h] [rbp-D8h]
  char v54; // [rsp+80h] [rbp-80h] BYREF
  char v55; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned __int8 v56; // [rsp+82h] [rbp-7Eh] BYREF
  char v57; // [rsp+83h] [rbp-7Dh]
  char v58; // [rsp+84h] [rbp-7Ch]
  char v59; // [rsp+85h] [rbp-7Bh]
  int v60; // [rsp+88h] [rbp-78h]
  int v61; // [rsp+8Ch] [rbp-74h]
  unsigned int v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v65; // [rsp+A0h] [rbp-60h] BYREF
  int v66; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h]
  __int128 v70; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+F0h] [rbp-10h]
  _QWORD v74[12]; // [rsp+100h] [rbp+0h] BYREF

  v69 = a1;
  v4 = 0;
  P = 0LL;
  v70 = 0LL;
  v54 = 0;
  v71 = 0LL;
  v66 = 0;
  v72 = 0LL;
  v55 = 0;
  v73 = 0LL;
  v65 = 0;
  v63 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, 13);
  v6 = *a2;
  v64 = 0LL;
  v58 = 0;
  v59 = 0;
  v67 = v6;
  v7 = IrqArbGsivFromIrq(v6);
  v9 = *((_QWORD *)a2 + 5);
  v10 = 0LL;
  LOBYTE(v3) = 0;
  v62 = 0;
  v11 = v7;
  v60 = v3;
  v57 = 0;
  v12 = *(_QWORD *)(v9 + 40);
  if ( (*(_BYTE *)(v12 + 4) & 0x20) == 0 )
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL), &v54);
    if ( IsPciDevice < 0 )
    {
LABEL_33:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(UserData) = IsPciDevice;
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          20,
          17,
          (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
          UserData);
      }
      if ( DWORD1(v71) )
        ProcessorDeleteDeviceIdtAssignment(*(void **)(*((_QWORD *)a2 + 4) + 32LL), v11, DWORD1(v71), 1);
      if ( v58 )
        --*(_DWORD *)(v64 + 28);
      if ( v59 )
      {
        LOBYTE(v12) = (a2[16] & 2) != 0;
        IcRemovePossibleReference(v11, v12);
      }
      if ( v10 && !(_BYTE)v3 )
        ExFreePoolWithTag((PVOID)v10, 0);
      return;
    }
    v4 = v54;
  }
  if ( (a2[16] & 2) != 0 && v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        20,
        14,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
    }
    return;
  }
  LOBYTE(v8) = 0;
  v56 = 0;
  v61 = v8;
  if ( v11 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v11, v12, &v56);
    if ( PossibleInput >= 0 )
    {
      v8 = (unsigned __int8)v8;
      if ( PossibleInput != 263 )
        v8 = 1;
      v61 = v8;
    }
  }
  v15 = 3;
  if ( v4 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL) + 4LL) & 2) == 0 )
  {
    v16 = 3;
    if ( (a2[16] & 2) != 0 )
    {
LABEL_21:
      v12 = 1LL;
      goto LABEL_22;
    }
    IsPciDevice = LinkNodeCrackPrt(*(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL), &v64, &v65, 1);
    if ( IsPciDevice < 0 )
      goto LABEL_32;
    if ( !v64 )
    {
      v11 = v65;
      LOBYTE(v8) = v61;
      goto LABEL_21;
    }
    IsPciDevice = LinkNodeGetPossibleResources(v64, &P, &v55);
    if ( IsPciDevice < 0 )
      goto LABEL_32;
    ExFreePoolWithTag(P, 0);
    v16 = v55 & 2 | 1;
    if ( (int)LinkNodeGetPossibleGsiv(v64, &v65) < 0 )
    {
      if ( *(_DWORD *)(v18 + 28) )
      {
        IsPciDevice = -1073741823;
        goto LABEL_32;
      }
      *(_DWORD *)(v64 + 36) = v11;
    }
    v12 = 1LL;
    v58 = 1;
    ++*(_DWORD *)(v64 + 28);
LABEL_47:
    LOBYTE(v8) = v61;
    goto LABEL_22;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v11, &v62) )
  {
    v16 = byte_14008E0C4[8 * v62];
    if ( v16 != 0xFF )
      goto LABEL_21;
  }
  v19 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL) + 4LL);
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(v11) )
  {
    v57 = 1;
    v20 = v19 & 1;
    IsPciDevice = AcpiIrqTranslateSecondaryInterruptToNtResources();
    if ( IsPciDevice < 0 )
      goto LABEL_32;
    v12 = 1LL;
    v16 = v73 | v20 ^ 1;
    goto LABEL_47;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL), v67, &v63) )
  {
    v12 = 1LL;
    v16 = (v19 & 1) == 0 ? 3 : 0;
  }
  else
  {
    v12 = 1LL;
    v16 = v63 | ((v19 & 1) == 0);
  }
  LOBYTE(v8) = v61;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL) + 4LL) & 2) != 0 )
    v16 |= 4u;
LABEL_22:
  v17 = (a2[16] & 2) == 0;
  v54 = 0;
  if ( !v17 )
  {
    v54 = 1;
    if ( (_BYTE)v8 )
    {
      if ( ((v16 ^ v56) & 0xFFFFFFFB) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            20,
            15,
            (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
        }
        LOBYTE(v3) = v60;
        IsPciDevice = -1073741823;
        goto LABEL_33;
      }
    }
  }
  v21 = *((_QWORD *)a2 + 5);
  v22 = 0;
  v23 = *(_QWORD *)(v21 + 40);
  v67 = v23;
  if ( (*(_WORD *)(v23 + 4) & 2) != 0 )
  {
    v24 = *(_DWORD *)(v23 + 12) - *(_DWORD *)(v23 + 8) + 1;
    v62 = v24;
  }
  else
  {
    v17 = (*(_BYTE *)(v21 + 36) & 1) == 0;
    v24 = 1;
    v62 = 1;
    v22 = !v17;
  }
  v25 = *((_QWORD *)a2 + 9);
  v63 = 0;
  v26 = v22 | 2;
  v17 = (*(_BYTE *)(v23 + 4) & 8) == 0;
  v63 = ((v16 & 1) == 0) | (v16 >> 2) & 2;
  if ( v17 )
    v26 = v22;
  IsPciDevice = ProcessorReserveIdtEntries(
                  *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
                  v23,
                  v11,
                  v25,
                  v24,
                  v63,
                  v26,
                  1,
                  &v70);
  if ( IsPciDevice >= 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL) + 4LL) & 2) != 0 )
    {
      v29 = 1;
LABEL_70:
      v61 = 0;
      if ( (v16 & 4) == 0 )
      {
        v30 = v29;
        if ( ((unsigned __int8)v29 & *(_BYTE *)(*((_QWORD *)a2 + 5) + 36LL)) != 0 )
          v30 = 3;
        v61 = v30;
      }
      Pool2 = ExAllocatePool2(256LL, 88LL * (v62 - 1) + 120, 1232102209LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 4) = 4;
        *(_DWORD *)Pool2 = 1;
        v32 = 4;
        v33 = *(_DWORD *)(*((_QWORD *)a2 + 4) + 40LL);
        if ( v33 && v33 != 2 )
        {
          v32 = 5;
          *(_DWORD *)(Pool2 + 4) = 5;
        }
        if ( (*(_DWORD *)(*((_QWORD *)a2 + 5) + 36LL) & 4) != 0 )
        {
          v32 |= 2u;
          *(_DWORD *)(Pool2 + 4) = v32;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL) + 4LL) & 0x20) != 0 )
          *(_DWORD *)(Pool2 + 4) = v32 | 0x10;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL) + 4LL) & 2) != 0 )
        {
          *(_DWORD *)(Pool2 + 8) = 3;
          memset(v74, 0, 0x5CuLL);
          IsPciDevice = ProcessorGetMsiConnectionData(&v70, DWORD1(v71), v34, v74);
          if ( IsPciDevice >= 0 )
          {
            *(_QWORD *)(v10 + 16) = v74[10];
            *(_WORD *)(v10 + 24) = v74[11];
            *(_BYTE *)(v10 + 26) = BYTE8(v71);
            ProcessorGetDestinationMode((__int64)&v70, &v66);
            for ( i = 0; i < v62; ++i )
            {
              v36 = 88LL * i;
              v37 = v66;
              v38 = (_DWORD *)(v36 + v10 + 32);
              *v38 = 3;
              v39 = v70;
              *(_DWORD *)(v36 + v10 + 48) = 1;
              *(_DWORD *)(v36 + v10 + 44) = 0;
              *(_OWORD *)(v36 + v10 + 56) = v39;
              v40 = i + DWORD1(v71);
              *(_DWORD *)(v36 + v10 + 104) = v37;
              *(_DWORD *)(v36 + v10 + 36) = v40;
              *(_DWORD *)(v36 + v10 + 88) = i + v11;
              IsPciDevice = IrqArbGetDeviceIrql(v38, v36 + v10 + 40);
              if ( IsPciDevice < 0 )
                goto LABEL_32;
            }
LABEL_103:
            v46 = v61;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v50 = v54;
            }
            else
            {
              v47 = "RTL_RANGE_LIST_ADD_SHARED";
              v48 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
              v49 = "ARBITER_RANGE_BOOT_ALLOCATED";
              if ( (v61 & 2) == 0 )
                v47 = " ";
              v50 = v54;
              if ( (v61 & 1) == 0 )
                v48 = " ";
              if ( !v54 )
                v49 = " ";
              WPP_RECORDER_SF_DDDssDssqq(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                (__int64)v48,
                (__int64)v49,
                (__int64)v47,
                Flags);
            }
            v51 = RtlAddRange(
                    *(PRTL_RANGE_LIST *)(v69 + 48),
                    *(_QWORD *)a2,
                    *((_QWORD *)a2 + 1),
                    v50,
                    v46 | 0x10,
                    (PVOID)v10,
                    *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL));
            IsPciDevice = v51;
            if ( v51 < 0 )
            {
              LOBYTE(v3) = v60;
              if ( v51 != -1073741823 )
                LOBYTE(v3) = 1;
              goto LABEL_33;
            }
            return;
          }
        }
        else
        {
          if ( v64 )
          {
            *(_DWORD *)(Pool2 + 8) = 2;
            *(_QWORD *)(Pool2 + 16) = v64;
          }
          else
          {
            *(_DWORD *)(Pool2 + 8) = 1;
          }
          v17 = v57 == 0;
          *(_DWORD *)(Pool2 + 32) = 0;
          *(_DWORD *)(Pool2 + 36) = DWORD1(v71);
          *(_OWORD *)(Pool2 + 56) = v70;
          v41 = (!v17 || (v16 & 8) != 0) && (v16 & 1) == 0;
          v42 = v16 & 0xA;
          *(_DWORD *)(v10 + 48) = v41;
          if ( v42 != 10 )
          {
            if ( v42 == 8 )
            {
              v15 = 4;
            }
            else if ( v42 == 2 )
            {
              v15 = 2;
            }
            else
            {
              v15 = v42 == 0;
            }
          }
          *(_DWORD *)(v10 + 44) = v15;
          v43 = IrqArbGsivFromIrq(*(_QWORD *)a2);
          v44 = *(_DWORD *)(v10 + 4) >> 4;
          *(_DWORD *)(v10 + 88) = v43;
          *(_DWORD *)(v10 + 92) = *(_DWORD *)(v10 + 92) & 0xFFFFFFFE | v45 & v44;
          IsPciDevice = IrqArbGetDeviceIrql(v10 + 32, v10 + 40);
          if ( IsPciDevice >= 0 )
            goto LABEL_103;
        }
      }
      goto LABEL_32;
    }
    if ( (_BYTE)v61
      || (v28 = v67,
          LOBYTE(v27) = v16,
          LOBYTE(v28) = (*(_BYTE *)(v67 + 4) & 8) != 0,
          IsPciDevice = IcSetPossibleInput(v11, &v70, v27, v28),
          IsPciDevice >= 0) )
    {
      IcAddPossibleReference(v11, (a2[16] & 2) != 0);
      v59 = v29;
      goto LABEL_70;
    }
LABEL_32:
    LOBYTE(v3) = v60;
    goto LABEL_33;
  }
}
