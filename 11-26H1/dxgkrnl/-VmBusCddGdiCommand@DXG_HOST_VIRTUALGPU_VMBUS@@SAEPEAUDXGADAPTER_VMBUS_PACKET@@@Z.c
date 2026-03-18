/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14004AB28 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1402213C8 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x140298100 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1402997C0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1403A8650 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1403A9078 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  struct DXGADAPTER_VMBUS_PACKET *v3; // r13
  __int64 v5; // rax
  __int64 v6; // r15
  struct DXGALLOCATION **v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  const wchar_t *v10; // r9
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  struct _KTHREAD **v14; // r8
  unsigned int v15; // edx
  struct DXGCONTEXT *v16; // r13
  __int64 v17; // rax
  struct DXGCONTEXT *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  _BYTE *Pool2; // r12
  struct DXGCONTEXT *v22; // r13
  struct DXGCONTEXT *v23; // rax
  struct DXGALLOCATION *v24; // rax
  const struct VIDMM_MULTI_ALLOC *v25; // rdx
  __int64 AllocationSizeInSystemMemory; // rax
  __int64 v27; // rax
  const wchar_t *v28; // r9
  const unsigned __int8 *v29; // r13
  const unsigned __int8 *v30; // r9
  const unsigned __int8 *v31; // r8
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r11
  const unsigned __int8 *v35; // r10
  __int64 v36; // r9
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // eax
  int v41; // edx
  unsigned int v42; // eax
  int v43; // ecx
  int v44; // edx
  __int64 v45; // rcx
  unsigned __int8 *v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  unsigned __int8 *v54; // r9
  __int64 v55; // r8
  __int16 v56; // cx
  char v57; // al
  unsigned __int8 v58; // al
  unsigned int v59; // eax
  __int16 v60; // cx
  __int64 v61; // [rsp+28h] [rbp-E0h]
  const struct tagRECT *v62; // [rsp+40h] [rbp-C8h]
  const struct tagRECT *v63; // [rsp+48h] [rbp-C0h]
  unsigned int v64; // [rsp+50h] [rbp-B8h]
  unsigned int v65; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v66; // [rsp+60h] [rbp-A8h]
  char v67; // [rsp+68h] [rbp-A0h]
  unsigned int v68; // [rsp+70h] [rbp-98h]
  unsigned __int8 **v69; // [rsp+78h] [rbp-90h]
  struct DXGALLOCATION **v71; // [rsp+90h] [rbp-78h]
  _BYTE v72[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v73[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v74; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGCONTEXT *v75; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int i; // [rsp+C8h] [rbp-40h]
  unsigned int v77; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned __int64 v78; // [rsp+D0h] [rbp-38h]
  int v79; // [rsp+D8h] [rbp-30h]
  struct tagRECT *v80; // [rsp+E0h] [rbp-28h]
  _DWORD v81[4]; // [rsp+E8h] [rbp-20h] BYREF
  const unsigned __int8 *v82; // [rsp+F8h] [rbp-10h]
  _BYTE v83[24]; // [rsp+100h] [rbp-8h] BYREF
  PVOID v84; // [rsp+118h] [rbp+10h] BYREF
  char v85; // [rsp+120h] [rbp+18h] BYREF
  int v86; // [rsp+220h] [rbp+118h]
  __int64 v87; // [rsp+228h] [rbp+120h] BYREF
  int v88; // [rsp+230h] [rbp+128h]
  PVOID P; // [rsp+238h] [rbp+130h]
  _BYTE v90[256]; // [rsp+240h] [rbp+138h] BYREF
  int v91; // [rsp+340h] [rbp+238h]
  _QWORD v92[48]; // [rsp+348h] [rbp+240h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  v3 = a1;
  if ( *(_BYTE *)(v1 + 154) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2494;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"GDI acceleration is disabled", 2494LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v83, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)v3 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2498;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2498LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v83);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)v3);
  v6 = v5;
  if ( !v5 )
    goto LABEL_166;
  v74 = -1073741811;
  v7 = 0LL;
  v84 = 0LL;
  v86 = 0;
  P = 0LL;
  v91 = 0;
  v8 = *(unsigned int *)(v5 + 32);
  v77 = 0;
  v79 = 0;
  if ( (unsigned int)v8 > 0x100 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2515LL;
    v10 = L"Invalid allocation count";
    goto LABEL_156;
  }
  v11 = *(_DWORD *)(v6 + 28);
  if ( v11 > 0x10000 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2520LL;
    v10 = L"Invalid command buffer size";
LABEL_156:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_157;
  }
  v12 = 8 * v8;
  v78 = v12;
  if ( v12 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2525LL;
    goto LABEL_155;
  }
  v13 = v12 + 56;
  if ( v13 < 0x38 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2530LL;
    goto LABEL_155;
  }
  if ( v11 + v13 < v13 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2535LL;
    goto LABEL_155;
  }
  if ( v11 + v13 > *((_DWORD *)v3 + 36) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2540LL;
LABEL_155:
    v10 = L"Malformed packet";
    goto LABEL_156;
  }
  if ( (*(_DWORD *)(v6 + 48) & 0x20) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2545LL;
    goto LABEL_155;
  }
  v14 = (struct _KTHREAD **)*((_QWORD *)v3 + 11);
  v15 = *(_DWORD *)(v6 + 24);
  v75 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v72, v15, v14, &v75, 0, 1);
  v16 = v75;
  if ( !v75 )
  {
    WdLogSingleEntry1(2LL);
    v61 = *(unsigned int *)(v6 + 24);
    WdLogGlobalForLineNumber = 2554;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid context handle 0x%I64x", v61, 0LL, 0LL, 0LL, 0LL);
LABEL_21:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v72);
    v3 = a1;
    goto LABEL_157;
  }
  v75 = (struct DXGCONTEXT *)*((_QWORD *)v75 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v73, v75);
  if ( (*((_DWORD *)v16 + 98) & 0x10) != 0 )
  {
    v17 = 0LL;
    v18 = (struct DXGCONTEXT *)*((_QWORD *)v16 + 50);
    if ( v18 != (struct DXGCONTEXT *)((char *)v16 + 400) )
      v17 = *((_QWORD *)v16 + 50);
    if ( !v17 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2581;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"No HwQueue found for CDD HW Context, pContext 0x%I64x",
        (__int64)v16,
        0LL,
        0LL,
        0LL,
        0LL);
      v87 = 58273005LL;
      v88 = 0;
      RtlLogUnexpectedCodepath(&v87);
LABEL_27:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v73);
      goto LABEL_21;
    }
    v19 = 0LL;
    if ( v18 != (struct DXGCONTEXT *)((char *)v16 + 400) )
      v19 = *((_QWORD *)v16 + 50);
    v79 = *(_DWORD *)(v19 + 24);
  }
  v71 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                   &v84,
                                   *(unsigned int *)(v6 + 32));
  v7 = v71;
  if ( !v71 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2594;
    goto LABEL_27;
  }
  v20 = *(unsigned int *)(v6 + 32);
  if ( (unsigned int)v20 <= 0x20 )
  {
    Pool2 = v90;
    P = v90;
    if ( (_DWORD)v20 )
    {
      memset(v90, 0, 8 * v20);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 8 )
    {
LABEL_40:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2600;
      goto LABEL_27;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v20, 1265072196LL);
    P = Pool2;
  }
  v91 = v20;
  if ( !Pool2 )
  {
    v7 = v71;
    goto LABEL_40;
  }
  v22 = v75;
  v77 = *(_DWORD *)(v6 + 32);
  v74 = DxgkReferenceAllocationList(&v77, (struct _D3DDDI_ALLOCATIONLIST *)(v6 + 56), v71, v75);
  if ( v74 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2607;
    goto LABEL_43;
  }
  v23 = 0LL;
  for ( i = 0; (unsigned int)v23 < *(_DWORD *)(v6 + 32); i = (unsigned int)v23 )
  {
    v75 = v23;
    v24 = v71[(_QWORD)v23];
    if ( !v24 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2616;
      goto LABEL_43;
    }
    if ( *((struct DXGCONTEXT **)v24 + 1) != v22 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2621LL;
      v28 = L"Invalid allocation device";
      goto LABEL_56;
    }
    v25 = (const struct VIDMM_MULTI_ALLOC *)*((_QWORD *)v24 + 3);
    if ( !v25 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2626LL;
      v28 = L"Invalid allocation";
      goto LABEL_56;
    }
    AllocationSizeInSystemMemory = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                                     *(VIDMM_EXPORT **)(*((_QWORD *)v22 + 2) + 760LL),
                                     v25,
                                     0);
    *(_QWORD *)&Pool2[8 * (_QWORD)v75] = AllocationSizeInSystemMemory;
    if ( !AllocationSizeInSystemMemory )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2634LL;
      v28 = L"Invalid allocation size";
      goto LABEL_56;
    }
    v23 = (struct DXGCONTEXT *)(i + 1);
  }
  v75 = *(struct DXGCONTEXT **)(*((_QWORD *)v22 + 2) + 16LL);
  if ( (*((_DWORD *)v75 + 623) & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v27 = 2642LL;
    v28 = L"Driver does not support GDI interrop";
    goto LABEL_56;
  }
  v29 = (const unsigned __int8 *)(v6 + (unsigned int)v78 + 56LL);
  v30 = &v29[*(unsigned int *)(v6 + 28)];
  v31 = v29;
  v32 = (_DWORD)v29 + *(_DWORD *)(v6 + 28);
  v87 = (__int64)v30;
  v33 = v32 - (_DWORD)v29;
  if ( !v33 )
  {
LABEL_151:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v73);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v72);
    memset(v92, 0, 0x178uLL);
    LODWORD(v92[0]) = v79;
    LODWORD(v92[1]) = *(_DWORD *)(v6 + 24);
    LODWORD(v92[2]) = *(_DWORD *)(v6 + 28);
    v92[6] = v6 + 56;
    HIDWORD(v92[2]) = *(_DWORD *)(v6 + 32);
    HIDWORD(v92[9]) = *(_DWORD *)(v6 + 48);
    v92[4] = v29;
    v74 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v92, 0LL);
    goto LABEL_44;
  }
  while ( 1 )
  {
    if ( v33 < 8 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2658LL;
      goto LABEL_150;
    }
    v34 = *((unsigned int *)v31 + 1);
    v35 = v31;
    if ( v33 < (unsigned int)v34 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2664LL;
      goto LABEL_150;
    }
    i = v33 - v34;
    v82 = &v31[v34];
    if ( &v31[v34] > v30 || (unsigned int)v34 > *(_DWORD *)(v6 + 28) )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2671LL;
LABEL_150:
      v28 = L"Malformed packet";
      goto LABEL_56;
    }
    if ( *(_DWORD *)v31 == 1 )
      break;
    switch ( *(_DWORD *)v31 )
    {
      case 2:
        v54 = (unsigned __int8 *)(v31 + 8);
        if ( (unsigned int)v34 < 0x28 )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2738LL;
          goto LABEL_150;
        }
        v55 = *((unsigned int *)v31 + 6);
        if ( (unsigned int)v55 >= *(_DWORD *)(v6 + 32) )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2743LL;
          goto LABEL_145;
        }
        v56 = *((_WORD *)v35 + 22);
        if ( (unsigned __int16)(v56 - 1) > 6u )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2748LL;
          goto LABEL_143;
        }
        if ( v56 != 7 )
        {
          if ( *((_WORD *)v35 + 23) )
          {
            WdLogSingleEntry0(2LL);
            v27 = 2769LL;
            goto LABEL_114;
          }
          goto LABEL_104;
        }
        if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*((_DWORD *)v75 + 623) & 0x100000) != 0 )
        {
          v57 = gajRop3[(unsigned __int8)*((_WORD *)v35 + 23)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v35 + 23) >> 8];
          if ( (v57 & 0xE8) != 0 || (v57 & 0xD4) != 0 )
          {
            WdLogSingleEntry0(2LL);
            v27 = 2761LL;
LABEL_114:
            v28 = L"Invalid ROP3";
            goto LABEL_56;
          }
LABEL_104:
          v58 = ValidateGdiCommand(
                  0x28u,
                  v34,
                  v29,
                  v54,
                  *(const unsigned __int8 **)(v6 + 40),
                  *(_QWORD *)&Pool2[8 * v55],
                  0LL,
                  (const struct tagRECT *)v54,
                  0LL,
                  0,
                  0,
                  v66,
                  0,
                  *((_DWORD *)v35 + 7),
                  (unsigned __int8 **)v35 + 4);
          goto LABEL_119;
        }
        WdLogSingleEntry0(2LL);
        v27 = 2755LL;
LABEL_140:
        v28 = L"Driver does not support all ROPs";
        goto LABEL_56;
      case 3:
        v46 = (unsigned __int8 *)(v31 + 8);
        if ( (unsigned int)v34 < 0x40 )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2794LL;
          goto LABEL_150;
        }
        v48 = *((unsigned int *)v31 + 10);
        v53 = *(_DWORD *)(v6 + 32);
        if ( (unsigned int)v48 >= v53 || (v39 = *((unsigned int *)v31 + 11), (unsigned int)v39 >= v53) )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2800LL;
          goto LABEL_145;
        }
        goto LABEL_89;
      case 4:
        v46 = (unsigned __int8 *)(v31 + 8);
        if ( (unsigned int)v34 < 0x40 )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2824LL;
          goto LABEL_150;
        }
        v48 = *((unsigned int *)v31 + 11);
        v51 = *(_DWORD *)(v6 + 32);
        if ( (unsigned int)v48 >= v51 || (v39 = *((unsigned int *)v31 + 10), (unsigned int)v39 >= v51) )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2830LL;
          goto LABEL_145;
        }
        v52 = *((_DWORD *)v35 + 16);
        if ( (_WORD)v52 != 3 )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2835LL;
          v28 = L"Invalid stretch BLT mode";
          goto LABEL_56;
        }
        if ( (v52 & 0x30000) != 0 && (*((_DWORD *)v75 + 623) & 0x200000) == 0 )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2841LL;
          v28 = L"Invalid stretch BLT flags";
          goto LABEL_56;
        }
LABEL_89:
        v69 = (unsigned __int8 **)(v35 + 56);
        v68 = *((_DWORD *)v35 + 12);
        v67 = 1;
        goto LABEL_82;
    }
    if ( *(_DWORD *)v31 != 6 )
    {
      if ( *(_DWORD *)v31 != 7 )
      {
        WdLogSingleEntry0(2LL);
        v27 = 2943LL;
        goto LABEL_150;
      }
      v80 = (struct tagRECT *)(v31 + 8);
      if ( (unsigned int)v34 < 0x48 )
      {
        WdLogSingleEntry0(2LL);
        v27 = 2895LL;
        goto LABEL_150;
      }
      v36 = *((unsigned int *)v31 + 8);
      v37 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v36 >= v37
        || *((_DWORD *)v31 + 7) >= v37
        || (v38 = *((unsigned int *)v31 + 6), (unsigned int)v38 >= v37)
        || (v39 = *((unsigned int *)v31 + 9), (unsigned int)v39 >= v37) )
      {
        WdLogSingleEntry0(2LL);
        v27 = 2903LL;
        goto LABEL_145;
      }
      v40 = *((_DWORD *)v35 + 13);
      if ( v40 != -1 )
      {
        if ( v40 > 0xF )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2910LL;
          v28 = L"Invalid gamma";
          goto LABEL_56;
        }
        if ( *(_QWORD *)&Pool2[8 * v38] < 0x2000uLL )
        {
          WdLogSingleEntry0(2LL);
          v27 = 2915LL;
          v28 = L"Invalid temporary allocation size";
          goto LABEL_56;
        }
      }
      v41 = *((_DWORD *)v35 + 10);
      v69 = (unsigned __int8 **)(v35 + 64);
      v68 = *((_DWORD *)v35 + 14);
      v42 = *((_DWORD *)v35 + 18);
      v81[0] = v41 + *((_DWORD *)v35 + 2);
      v43 = v41 + *((_DWORD *)v35 + 4);
      v67 = 0;
      v44 = *((_DWORD *)v35 + 11);
      v81[2] = v43;
      v65 = v42;
      v81[1] = v44 + *((_DWORD *)v35 + 3);
      v64 = 0;
      v63 = (const struct tagRECT *)v81;
      v81[3] = v44 + *((_DWORD *)v35 + 5);
      v45 = v36;
      v46 = (unsigned __int8 *)v80;
      v62 = v80;
      v47 = *(_QWORD *)&Pool2[8 * v45];
      goto LABEL_117;
    }
    v46 = (unsigned __int8 *)(v31 + 8);
    if ( (unsigned int)v34 < 0x40 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2865LL;
      goto LABEL_150;
    }
    v48 = *((unsigned int *)v31 + 10);
    v49 = *(_DWORD *)(v6 + 32);
    if ( (unsigned int)v48 >= v49 || (v39 = *((unsigned int *)v31 + 11), (unsigned int)v39 >= v49) )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2871LL;
      goto LABEL_145;
    }
    v69 = (unsigned __int8 **)(v35 + 56);
    v68 = *((_DWORD *)v35 + 13);
    v67 = 0;
LABEL_82:
    v65 = *((_DWORD *)v35 + 17);
    v47 = *(_QWORD *)&Pool2[8 * v48];
    v64 = 0;
    v63 = (const struct tagRECT *)v46;
    v62 = (const struct tagRECT *)(v35 + 24);
    v50 = 64;
LABEL_118:
    v58 = ValidateGdiCommand(
            v50,
            v34,
            v29,
            v46,
            *(const unsigned __int8 **)(v6 + 40),
            *(_QWORD *)&Pool2[8 * v39],
            v47,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
LABEL_119:
    if ( !v58 )
      goto LABEL_43;
    v33 = i;
    if ( !i )
      goto LABEL_151;
    v31 = v82;
    v30 = (const unsigned __int8 *)v87;
  }
  v80 = (struct tagRECT *)(v31 + 8);
  if ( (unsigned int)v34 < 0x48 )
  {
    WdLogSingleEntry0(2LL);
    v27 = 2681LL;
    goto LABEL_150;
  }
  v59 = *(_DWORD *)(v6 + 32);
  if ( *((_DWORD *)v31 + 10) >= v59 || (v39 = *((unsigned int *)v31 + 11), (unsigned int)v39 >= v59) )
  {
    WdLogSingleEntry0(2LL);
    v27 = 2687LL;
LABEL_145:
    v28 = L"Invalid allocation index";
    goto LABEL_56;
  }
  v60 = *((_WORD *)v35 + 32);
  if ( (unsigned __int16)(v60 - 1) <= 4u )
  {
    if ( v60 == 5 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) || (*((_DWORD *)v75 + 623) & 0x100000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        v27 = 2699LL;
        goto LABEL_140;
      }
      if ( ((gajRop3[(unsigned __int8)*((_WORD *)v35 + 33)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v35 + 33) >> 8]) & 0xE8) != 0 )
      {
        WdLogSingleEntry0(2LL);
        v27 = 2704LL;
        goto LABEL_114;
      }
    }
    else if ( *((_WORD *)v35 + 33) )
    {
      WdLogSingleEntry0(2LL);
      v27 = 2712LL;
      goto LABEL_114;
    }
    v46 = (unsigned __int8 *)v80;
    v69 = (unsigned __int8 **)(v35 + 56);
    v68 = *((_DWORD *)v35 + 12);
    v67 = 0;
    v65 = *((_DWORD *)v35 + 17);
    v64 = *((_DWORD *)v35 + 18);
    v47 = *(_QWORD *)&Pool2[8 * *((unsigned int *)v35 + 10)];
    v63 = v80;
    v62 = (const struct tagRECT *)(v35 + 24);
LABEL_117:
    v50 = 72;
    goto LABEL_118;
  }
  WdLogSingleEntry0(2LL);
  v27 = 2692LL;
LABEL_143:
  v28 = L"Invalid ROP";
LABEL_56:
  WdLogGlobalForLineNumber = v27;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v27, 0LL, 0LL, 0LL, 0LL);
LABEL_43:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v73);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v72);
LABEL_44:
  v3 = a1;
  v7 = v71;
LABEL_157:
  if ( v74 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2968;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusCddGdiCommand failed: 0x%I64x",
      v74,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgkUnreferenceAllocationList(v77, v7);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v3 + 16), &v74, 4u);
  if ( P != v90 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v91 = 0;
  if ( v84 != &v85 )
  {
    if ( v84 )
      ExFreePoolWithTag(v84, 0);
  }
  v84 = 0LL;
  v86 = 0;
  v2 = 1;
LABEL_166:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v83);
  return v2;
}
