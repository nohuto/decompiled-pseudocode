/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x14007FE4C
 * Callers:
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B7450 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x140031BA0 (RaidGetStorPoFxComponent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidGetStorPoFxFState @ 0x140079D58 (RaidGetStorPoFxFState.c)
 *     RaidCheckAndReportDeviceD0OnlyToPoFx @ 0x1400C52E8 (RaidCheckAndReportDeviceD0OnlyToPoFx.c)
 *     RaidNotifyPoAboutDFxOptOut @ 0x1400C5490 (RaidNotifyPoAboutDFxOptOut.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r12d
  unsigned int v6; // r10d
  unsigned int v10; // r9d
  char i; // r14
  int *StorPoFxComponent; // rax
  int v13; // r10d
  int *v14; // r11
  unsigned int v15; // ebx
  unsigned int j; // edx
  char *StorPoFxFState; // rax
  int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  __int64 Pool; // rax
  __int64 v22; // rbx
  _DWORD *v24; // rcx
  int v25; // ecx
  unsigned int v26; // r11d
  __int64 v27; // rsi
  int *v28; // rax
  int v29; // r11d
  __int64 v30; // r10
  int *v31; // r15
  unsigned int v32; // edx
  __int128 v33; // xmm0
  unsigned int v34; // r9d
  char *v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rcx
  __int64 v40; // r15
  bool v41; // zf
  _QWORD *v42; // rax
  KSPIN_LOCK *v43; // rcx
  char v44; // r14
  int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  int v49; // ebx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // r10d
  int v53; // r11d
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // r10d
  char v59; // [rsp+30h] [rbp-D0h] BYREF
  char v60; // [rsp+31h] [rbp-CFh] BYREF
  char v61; // [rsp+32h] [rbp-CEh] BYREF
  int v62; // [rsp+34h] [rbp-CCh] BYREF
  int v63; // [rsp+38h] [rbp-C8h] BYREF
  int v64; // [rsp+3Ch] [rbp-C4h] BYREF
  int v65; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  int v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+54h] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  __int64 *v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  int *v74; // [rsp+A0h] [rbp-60h]
  __int64 v75; // [rsp+A8h] [rbp-58h]
  char *v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  int *v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  int *v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]
  int *v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  int *v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  int *v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h]
  int *v88; // [rsp+110h] [rbp+10h]
  __int64 v89; // [rsp+118h] [rbp+18h]
  int *v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+128h] [rbp+28h]
  __int64 *v92; // [rsp+130h] [rbp+30h]
  __int64 v93; // [rsp+138h] [rbp+38h]

  v4 = a2[2];
  v5 = 0;
  v6 = 0;
  v66 = a4;
  v59 = 0;
  v10 = 104;
  for ( i = 1; v6 < v4; v6 = v13 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(a2, v6);
    v14 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      v10 += 56;
      if ( StorPoFxComponent[2] > v5 )
        v5 = StorPoFxComponent[2];
    }
    v15 = StorPoFxComponent[2];
    for ( j = 0; j < v15; v10 = v20 )
    {
      StorPoFxFState = RaidGetStorPoFxFState(v14, j);
      v20 = v19 + 24;
      if ( !StorPoFxFState )
        v20 = v19;
      j = v18 + 1;
    }
  }
  Pool = RaidAllocatePool(64LL, v10, 1330667858LL, a1);
  v22 = Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_DWORD *)Pool = 3;
  *(_DWORD *)(Pool + 96) = v4;
  *(_QWORD *)(Pool + 88) = a3;
  v24 = *(_DWORD **)(a1 + 64);
  if ( *v24 == 1094997074 )
    RaidCheckAndReportDeviceD0OnlyToPoFx(v24, a2, Pool);
  v25 = *(_DWORD *)(v22 + 96);
  v26 = 0;
  *(_QWORD *)(v22 + 8) |= 0x20uLL;
  if ( v25 )
  {
    while ( 1 )
    {
      v27 = 56LL * v26;
      v28 = RaidGetStorPoFxComponent(a2, v26);
      *(_QWORD *)(v27 + v22 + 136) = v30;
      v31 = v28;
      v32 = v28[2];
      *(_DWORD *)(v27 + v22 + 132) = v32;
      *(_DWORD *)(v27 + v22 + 128) = v28[3];
      v33 = *((_OWORD *)v28 + 1);
      *(_QWORD *)(v27 + v22 + 120) = 1LL;
      *(_OWORD *)(v27 + v22 + 104) = v33;
      if ( (a2[3] & 0x100) != 0 )
        *(_QWORD *)(v27 + v22 + 120) = 3LL;
      if ( v32 > 1 )
        break;
      v34 = 0;
      if ( v32 )
        goto LABEL_20;
LABEL_21:
      v26 = v29 + 1;
      if ( v26 >= *(_DWORD *)(v22 + 96) )
        goto LABEL_22;
    }
    i = 0;
    v34 = 0;
    do
    {
LABEL_20:
      v35 = RaidGetStorPoFxFState(v31, v34);
      v37 = 3 * v36;
      v34 = v36 + 1;
      *(_DWORD *)(v38 + 8 * v37 + 16) = *((_DWORD *)v35 + 6);
      *(_QWORD *)(v38 + 8 * v37 + 8) = *((_QWORD *)v35 + 2);
      *(_QWORD *)(v38 + 8 * v37) = *((_QWORD *)v35 + 1);
    }
    while ( v34 < *(_DWORD *)(v27 + v22 + 132) );
    goto LABEL_21;
  }
LABEL_22:
  v39 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v39 != 1431193940 )
  {
    v40 = *(_QWORD *)(v39 + 32);
    if ( !i )
      *(_QWORD *)(v22 + 32) = StorPortAdapterIdleState;
    v41 = DFxEnabled == 0;
    *(_QWORD *)(v22 + 16) = StorPortAdapterActiveCondition;
    *(_QWORD *)(v22 + 24) = StorPortAdapterIdleCondition;
    *(_QWORD *)(v22 + 48) = StorPortAdapterPowerNotRequiredStep1;
    *(_QWORD *)(v22 + 40) = StorPortAdapterPowerRequiredStep1;
    *(_QWORD *)(v22 + 56) = StorPortAdapterPowerControl;
    if ( !v41 && (a2[3] & 3) == 0 )
    {
      *(_QWORD *)(v22 + 64) = StorPortAdapterDirectedPowerUp;
      *(_QWORD *)(v22 + 72) = StorPortAdapterDirectedPowerDown;
      if ( (a2[3] & 0x40) != 0 )
        *(_QWORD *)(v22 + 8) |= 6uLL;
      v42 = (_QWORD *)(v39 + 5808);
      v43 = (KSPIN_LOCK *)(v39 + 5832);
      goto LABEL_35;
    }
LABEL_36:
    v44 = 1;
    goto LABEL_37;
  }
  v40 = *(_QWORD *)(v39 + 8);
  if ( !i )
    *(_QWORD *)(v22 + 32) = StorPortUnitIdleState;
  v41 = DFxEnabled == 0;
  *(_QWORD *)(v22 + 16) = StorPortUnitActiveConditionStep1;
  *(_QWORD *)(v22 + 24) = StorPortUnitIdleCondition;
  *(_QWORD *)(v22 + 48) = StorPortUnitPowerNotRequiredStep1;
  *(_QWORD *)(v22 + 40) = StorPortUnitPowerRequiredStep1;
  *(_QWORD *)(v22 + 56) = StorPortUnitPowerControl;
  if ( v41 || (a2[3] & 3) != 0 )
    goto LABEL_36;
  *(_QWORD *)(v22 + 64) = StorPortUnitDirectedPowerUp;
  *(_QWORD *)(v22 + 72) = StorPortUnitDirectedPowerDown;
  v42 = (_QWORD *)(v39 + 3496);
  v43 = (KSPIN_LOCK *)(v39 + 3520);
LABEL_35:
  v42[1] = v42;
  *v42 = v42;
  KeInitializeSpinLock(v43);
  v44 = v59;
LABEL_37:
  v45 = PoFxRegisterDevice(a1, v22, v66);
  ExFreePoolWithTag((PVOID)v22, 0x4F506152u);
  if ( v45 >= 0 )
  {
    if ( v44 )
    {
      LOBYTE(v46) = a2[3] & 0x40;
      RaidNotifyPoAboutDFxOptOut(v40, v46);
    }
    v48 = **(_DWORD **)(a1 + 64);
    if ( v48 == 1431193940 )
    {
      v49 = 0;
      if ( (unsigned int)*a2 >= 2 )
        v49 = a2[4];
      if ( (unsigned int)dword_140172178 > 5 )
      {
        if ( tlgKeywordOn(v47, 0x400000000000LL) )
        {
          v54 = *(_QWORD *)(v51 + 24);
          v71 = 16LL;
          v73 = 16LL;
          v70 = v54 + 5128;
          v72 = (__int64 *)(v51 + 2104);
          v67 = *(_DWORD *)(v54 + 56);
          v74 = &v67;
          v59 = *(_BYTE *)(v51 + 104);
          v76 = &v59;
          v61 = *(_BYTE *)(v51 + 105);
          v78 = (int *)&v61;
          v60 = *(_BYTE *)(v51 + 106);
          v80 = (int *)&v60;
          v82 = &v68;
          v62 = a2[2];
          v84 = &v62;
          v86 = &v63;
          v64 = a2[3];
          v88 = &v64;
          v90 = &v65;
          v92 = &v66;
          v75 = 4LL;
          v77 = 1LL;
          v79 = 1LL;
          v81 = 1LL;
          v68 = v52;
          v83 = 4LL;
          v85 = 4LL;
          v63 = v5;
          v87 = 4LL;
          v89 = 4LL;
          v65 = v49;
          v91 = 4LL;
          LODWORD(v66) = v53;
          v93 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(v54, byte_140160316, v50, v51, 0xEu, v69);
        }
      }
    }
    else if ( v48 == 1094997074
           && (unsigned int)dword_140172178 > 5
           && tlgKeywordOn((unsigned int)*a2, 0x400000000000LL) )
    {
      v71 = 16LL;
      v70 = v57 + 5128;
      LODWORD(v66) = v55;
      v72 = &v66;
      v65 = a2[2];
      v74 = &v65;
      v76 = (char *)&v64;
      v63 = a2[3];
      v78 = &v63;
      v80 = &v62;
      v73 = 4LL;
      v75 = 4LL;
      v64 = v5;
      v77 = 4LL;
      v79 = 4LL;
      v62 = v58;
      v81 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v55, (unsigned __int8 *)dword_1401603DD, v56, v57, 8u, v69);
    }
  }
  return (unsigned int)v45;
}
