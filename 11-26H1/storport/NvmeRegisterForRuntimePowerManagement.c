/*
 * XREFs of NvmeRegisterForRuntimePowerManagement @ 0x14012A824
 * Callers:
 *     NvmeAdapterInitializePoFx @ 0x140123A1C (NvmeAdapterInitializePoFx.c)
 *     NvmeNamespaceRegisterForIdleDetection @ 0x14012911C (NvmeNamespaceRegisterForIdleDetection.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x140031BA0 (RaidGetStorPoFxComponent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidGetStorPoFxFState @ 0x140079D58 (RaidGetStorPoFxFState.c)
 *     RaidCheckAndReportDeviceD0OnlyToPoFx @ 0x1400C52E8 (RaidCheckAndReportDeviceD0OnlyToPoFx.c)
 *     RaidNotifyPoAboutDFxOptOut @ 0x1400C5490 (RaidNotifyPoAboutDFxOptOut.c)
 *     NvmeControllerIsDisableDfx @ 0x140127038 (NvmeControllerIsDisableDfx.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeRegisterForRuntimePowerManagement(__int64 a1, int *a2, int *a3, __int64 a4)
{
  bool IsDisableDfx; // r12
  __int64 v5; // r14
  __int64 v6; // r13
  int *v7; // rdi
  char v8; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // r10d
  unsigned int i; // r9d
  int *StorPoFxComponent; // rax
  unsigned int v16; // r8d
  int v17; // r10d
  int *v18; // rbx
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  char *StorPoFxFState; // rax
  int v23; // edx
  unsigned int v24; // r9d
  unsigned int v25; // r11d
  unsigned int v26; // ecx
  __int64 Pool; // rax
  __int64 v28; // rbx
  int v29; // ecx
  unsigned int v30; // r9d
  int *v31; // rax
  int v32; // r9d
  __int64 v33; // r11
  __int64 v34; // r10
  unsigned int v35; // edx
  __int128 v36; // xmm0
  char v37; // cl
  __int64 v38; // rsi
  int *v39; // rdi
  char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r10
  __int64 v43; // r11
  _QWORD *v44; // rax
  KSPIN_LOCK *v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  int v48; // esi
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r10d
  int v52; // r11d
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  char v59; // [rsp+30h] [rbp-D0h] BYREF
  char v60; // [rsp+31h] [rbp-CFh] BYREF
  char v61; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v62; // [rsp+34h] [rbp-CCh] BYREF
  int *v63; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+50h] [rbp-B0h] BYREF
  int *v67; // [rsp+58h] [rbp-A8h] BYREF
  int v68; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  __int64 *v72; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  __int64 *v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  int **v76; // [rsp+C0h] [rbp-40h]
  __int64 v77; // [rsp+C8h] [rbp-38h]
  int **v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  __int64 *v80; // [rsp+E0h] [rbp-20h]
  __int64 v81; // [rsp+E8h] [rbp-18h]
  __int64 *v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  int **v84; // [rsp+100h] [rbp+0h]
  __int64 v85; // [rsp+108h] [rbp+8h]
  unsigned int *v86; // [rsp+110h] [rbp+10h]
  __int64 v87; // [rsp+118h] [rbp+18h]
  int **v88; // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  __int64 *v90; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+138h] [rbp+38h]
  __int64 *v92; // [rsp+140h] [rbp+40h]
  __int64 v93; // [rsp+148h] [rbp+48h]

  v63 = a3;
  IsDisableDfx = 0;
  v66 = a4;
  v5 = 0LL;
  v67 = a2;
  v6 = 0LL;
  v65 = a1;
  v7 = a2;
  v8 = 1;
  v62 = 0;
  if ( RuntimePowerDisabled )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v10 == 1314278989 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v11 = *(_QWORD *)(v10 + 16);
    v64 = *(_QWORD *)(v10 + 8);
LABEL_8:
    IsDisableDfx = NvmeControllerIsDisableDfx(v11);
    goto LABEL_9;
  }
  if ( *(_DWORD *)v10 != 1314275652 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 64);
  v64 = *(_QWORD *)(v10 + 32);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 400) + 184LL) & 0x40000000) != 0 )
  {
    v11 = *(_QWORD *)(v10 + 1152);
    goto LABEL_8;
  }
LABEL_9:
  v12 = v7[2];
  v13 = 0;
  for ( i = 104; v13 < v12; v13 = v17 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(v7, v13);
    v18 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      v19 = StorPoFxComponent[2];
      i += 56;
      v20 = v19;
      if ( v19 <= v16 )
        v20 = v16;
      v21 = 0;
      v62 = v20;
      if ( v19 )
      {
        do
        {
          StorPoFxFState = RaidGetStorPoFxFState(v18, v21);
          v26 = v24 + 24;
          if ( !StorPoFxFState )
            v26 = v24;
          v21 = v23 + 1;
          i = v26;
        }
        while ( v21 < v25 );
      }
    }
  }
  Pool = RaidAllocatePool(64LL, i, 1330667858LL, v65);
  v28 = Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_DWORD *)Pool = 3;
  *(_DWORD *)(Pool + 96) = v12;
  *(_QWORD *)(Pool + 88) = v63;
  if ( v5 )
    RaidCheckAndReportDeviceD0OnlyToPoFx((unsigned int *)v5, (__int64)v7, Pool);
  v29 = *(_DWORD *)(v28 + 96);
  v30 = 0;
  *(_QWORD *)(v28 + 8) |= 0x20uLL;
  if ( v29 )
  {
    do
    {
      v31 = RaidGetStorPoFxComponent(v7, v30);
      *(_QWORD *)(v33 + v28 + 136) = v34;
      v63 = v31;
      v35 = v31[2];
      *(_DWORD *)(v33 + v28 + 132) = v35;
      *(_DWORD *)(v33 + v28 + 128) = v31[3];
      v36 = *((_OWORD *)v31 + 1);
      *(_QWORD *)(v33 + v28 + 120) = 1LL;
      *(_OWORD *)(v33 + v28 + 104) = v36;
      if ( (v7[3] & 0x100) != 0 )
        *(_QWORD *)(v33 + v28 + 120) = 3LL;
      v37 = 0;
      if ( v35 <= 1 )
        v37 = v8;
      v38 = 0LL;
      v8 = v37;
      if ( v35 )
      {
        v39 = v63;
        do
        {
          v40 = RaidGetStorPoFxFState(v39, v38);
          v41 = 3 * v38;
          v38 = (unsigned int)(v38 + 1);
          *(_DWORD *)(v42 + 8 * v41 + 16) = *((_DWORD *)v40 + 6);
          *(_QWORD *)(v42 + 8 * v41 + 8) = *((_QWORD *)v40 + 2);
          *(_QWORD *)(v42 + 8 * v41) = *((_QWORD *)v40 + 1);
        }
        while ( (unsigned int)v38 < *(_DWORD *)(v43 + v28 + 132) );
        v7 = v67;
      }
      v30 = v32 + 1;
    }
    while ( v30 < *(_DWORD *)(v28 + 96) );
  }
  if ( v6 )
  {
    if ( !v8 )
      *(_QWORD *)(v28 + 32) = NvmeNamespaceIdleState;
    *(_QWORD *)(v28 + 16) = NvmeNamespaceActiveConditionStep1;
    *(_QWORD *)(v28 + 24) = NvmeNamespaceIdleCondition;
    *(_QWORD *)(v28 + 48) = NvmeNamespacePowerNotRequiredStep1;
    *(_QWORD *)(v28 + 40) = NvmeNamespacePowerRequiredStep1;
    *(_QWORD *)(v28 + 56) = NvmeAdapterPowerControl;
    if ( IsDisableDfx || (v7[3] & 3) != 0 )
      goto LABEL_44;
    *(_QWORD *)(v28 + 64) = NvmeNamespaceDirectedPowerUp;
    *(_QWORD *)(v28 + 72) = NvmeNamespaceDirectedPowerDown;
    v44 = (_QWORD *)(*(_QWORD *)(v6 + 128) + 104LL);
    v44[1] = v44;
    *v44 = v44;
    v45 = (KSPIN_LOCK *)(*(_QWORD *)(v6 + 128) + 128LL);
  }
  else
  {
    if ( !v8 )
      *(_QWORD *)(v28 + 32) = NvmeAdapterIdleState;
    *(_QWORD *)(v28 + 16) = NvmeAdapterActiveCondition;
    *(_QWORD *)(v28 + 24) = NvmeAdapterIdleCondition;
    *(_QWORD *)(v28 + 48) = NvmeAdapterPowerNotRequiredStep1;
    *(_QWORD *)(v28 + 40) = NvmeAdapterPowerRequiredStep1;
    *(_QWORD *)(v28 + 56) = NvmeAdapterPowerControl;
    if ( IsDisableDfx || (v7[3] & 3) != 0 )
      goto LABEL_44;
    *(_QWORD *)(v28 + 64) = NvmeAdapterDirectedPowerUp;
    *(_QWORD *)(v28 + 72) = NvmeAdapterDirectedPowerDown;
    v46 = (_QWORD *)(*(_QWORD *)(v5 + 160) + 144LL);
    v46[1] = v46;
    *v46 = v46;
    v45 = (KSPIN_LOCK *)(*(_QWORD *)(v5 + 160) + 168LL);
  }
  KeInitializeSpinLock(v45);
LABEL_44:
  v48 = PoFxRegisterDevice(v65, v28, v66);
  if ( v48 >= 0 )
  {
    if ( IsDisableDfx )
      RaidNotifyPoAboutDFxOptOut(v64, v7[3] & 0x40);
    if ( v6 )
    {
      if ( (unsigned int)dword_140172178 > 5 )
      {
        if ( tlgKeywordOn(v47, 0x400000000000LL) )
        {
          v53 = *(_QWORD *)(v6 + 16);
          v54 = *(_QWORD *)(v53 + 128);
          v71 = 16LL;
          v70 = v54 + 1048;
          v72 = (__int64 *)(v6 + 160);
          v73 = 16LL;
          v55 = *(unsigned int *)(*(_QWORD *)(v53 + 128) + 56LL);
          v74 = (__int64 *)&v68;
          v59 = *(_BYTE *)(v6 + 100);
          v76 = (int **)&v59;
          v60 = *(_BYTE *)(v6 + 101);
          v78 = (int **)&v60;
          v61 = *(_BYTE *)(v6 + 102);
          v80 = (__int64 *)&v61;
          v82 = &v66;
          LODWORD(v67) = v7[2];
          v84 = &v67;
          v86 = &v62;
          LODWORD(v63) = v7[3];
          v88 = &v63;
          v90 = &v64;
          v92 = &v65;
          v68 = v55;
          v75 = 4LL;
          v77 = 1LL;
          v79 = 1LL;
          v81 = 1LL;
          LODWORD(v66) = v50;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 4LL;
          LODWORD(v64) = v52;
          v91 = 4LL;
          LODWORD(v65) = v51;
          v93 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(v55, byte_1401653A1, v49, v50, 0xEu, v69);
        }
      }
    }
    else if ( v5 && (unsigned int)dword_140172178 > 5 && tlgKeywordOn((unsigned int)*v7, 0x400000000000LL) )
    {
      v71 = 16LL;
      v70 = v5 + 1048;
      LODWORD(v65) = v56;
      v72 = &v65;
      LODWORD(v64) = v7[2];
      v74 = &v64;
      LODWORD(v63) = v62;
      v76 = &v63;
      LODWORD(v67) = v7[3];
      v78 = &v67;
      v80 = &v66;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 4LL;
      LODWORD(v66) = v58;
      v81 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v56, (unsigned __int8 *)dword_140165468, v57, v58, 8u, v69);
    }
  }
  ExFreePoolWithTag((PVOID)v28, 0x4F506152u);
  return (unsigned int)v48;
}
