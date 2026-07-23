/*
 * XREFs of MiCompletePrivateZeroFault @ 0x1402B8530
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     MiInitializeDemandFillProtoContents @ 0x140480DBC (MiInitializeDemandFillProtoContents.c)
 *     MiRevertPrivateZeroFault @ 0x1404ED7F4 (MiRevertPrivateZeroFault.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(int *a1, unsigned __int64 *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r10
  __int64 v5; // rdx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  int v14; // r9d
  int v15; // r13d
  int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  char v25; // al
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rbx
  unsigned __int64 *v29; // rbp
  unsigned __int64 v30; // rax
  bool v31; // zf
  int v32; // ecx
  int v33; // ecx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // esi
  __int64 v37; // r8
  char v38; // cl
  __int64 *v39; // r10
  int v40; // eax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  __int16 v44; // ax
  unsigned int v45; // esi
  int v46; // ecx
  char v47; // si
  unsigned __int64 DemandZeroPte; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // edx
  __int64 v52; // rax
  _KPROCESS *v53; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 HasShadow; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned __int64 *v62; // rcx
  unsigned __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rbp
  unsigned int v66; // r15d
  unsigned int v67; // esi
  unsigned __int64 v69; // rcx
  _QWORD *v70; // rdx
  unsigned __int64 *v71; // r9
  unsigned __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rdx
  char v77; // al
  char v78; // cl
  char v79; // al
  __int64 v80; // rdi
  bool v81; // cc
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 TransitionPte; // rax
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // edx
  unsigned __int64 v92; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v93; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v94; // [rsp+50h] [rbp-B8h]
  __int64 v95; // [rsp+58h] [rbp-B0h]
  int v96; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v97; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v98; // [rsp+70h] [rbp-98h]
  unsigned __int64 v99; // [rsp+78h] [rbp-90h]
  unsigned __int64 v100; // [rsp+80h] [rbp-88h]
  __int64 *v101; // [rsp+88h] [rbp-80h]
  __int64 v102; // [rsp+90h] [rbp-78h]
  __int64 v103; // [rsp+98h] [rbp-70h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-68h]
  __int64 v105; // [rsp+A8h] [rbp-60h]
  __int64 v106; // [rsp+B0h] [rbp-58h]
  char v107; // [rsp+110h] [rbp+8h]
  int v108; // [rsp+118h] [rbp+10h]
  unsigned int v109; // [rsp+120h] [rbp+18h]
  BOOL v110; // [rsp+128h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 1);
  v3 = 0LL;
  v5 = *((_QWORD *)a1 + 6);
  v102 = *(_QWORD *)(v2 + 56);
  v105 = v5;
  v98 = a2[2];
  v7 = *(_QWORD *)(v2 + 16);
  v95 = v2;
  v101 = (__int64 *)(v2 + 56);
  v107 = 0;
  v103 = 0LL;
  v110 = 0;
  if ( (v7 & 1) != 0 )
    v110 = *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v8 = *a1;
  v9 = 0LL;
  if ( (*a1 & 0x20) != 0 )
    v9 = v5;
  v106 = v9;
  if ( (v8 & 0x21) != 0 )
  {
    v70 = *(_QWORD **)(v5 + 8);
    v10 = ((*v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v100 = v10 + 8 * ((((*v70 & 0xFFFuLL) + v70[1] + 4095LL) >> 12) - 1);
  }
  else
  {
    v10 = ((*(_QWORD *)v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v100 = v10;
  }
  v11 = *((_QWORD *)a1 + 2) >> 9;
  v99 = v10;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = *((_QWORD *)a1 + 7);
  v13 = (v11 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v96 = 0;
  v14 = 8208;
  v108 = 8208;
  if ( v12 )
  {
    if ( (*(unsigned int *)(v12 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 32)) == 0x7FFFFFFFELL )
      v14 = 8272;
    v108 = v14;
  }
  v15 = a1[8];
  if ( (v15 & 2) == 0 || v13 > 0xFFFFF6BFFFFFFF78uLL || v13 < 0xFFFFF68000000000uLL )
    v15 |= 0x80000000;
  if ( v12 )
  {
    v16 = *(_DWORD *)(v12 + 48);
    if ( (v16 & 0x8080000) == 0x8080000 )
      v15 |= 0x800000u;
    if ( v15 < 0 && (v16 & 0x180000) == 0x180000 )
      v96 = 1;
  }
  if ( !a1[9] )
    __incgsdword(0x2E9Cu);
  v109 = 0;
  v94 = 0;
  v17 = 0LL;
  v18 = MmProtectToPteMask[v15 & 0x1F] & 0xFFF0000000000E5EuLL | 0x21;
  if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = MmProtectToPteMask[v15 & 0x1F] & 0xFFF0000000000E5EuLL | 0x121;
    v19 = v15 & 0x4000000;
    goto LABEL_23;
  }
  if ( v13 >= 0xFFFFF6FB40000000uLL && v13 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v18 = MmProtectToPteMask[v15 & 0x1F] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
    }
    else if ( (v15 & 0x4000000) == 0 )
    {
      v18 = MmProtectToPteMask[v15 & 0x1F] & 0x7FF0000000000E5ELL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(v13) )
      v18 |= 4uLL;
    v3 = 0LL;
  }
  v63 = (__int64)(v13 << 25) >> 16;
  v19 = v15 & 0x4000000;
  if ( (v15 & 0x4000000) != 0 && v63 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v63 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v63 = (__int64)(v63 << 25) >> 16;
    }
    while ( v63 >= 0xFFFFF68000000000uLL );
  }
  if ( v63 < 0x7FFFFFFF0000LL )
  {
    v18 |= 4uLL;
LABEL_123:
    v64 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink);
LABEL_124:
    if ( v64 )
      v18 |= 0x100uLL;
    goto LABEL_126;
  }
  if ( v63 < 0xFFFF800000000000uLL )
    goto LABEL_123;
  if ( v63 < 0xFFFFF68000000000uLL || v63 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v63 < qword_140E2DFC0
      || (v81 = v63 <= qword_140E2DFD0, v64 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink), !v81) )
    {
      v64 = BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink);
    }
    goto LABEL_124;
  }
LABEL_126:
  v17 = 0LL;
LABEL_23:
  if ( v15 < 0 && (v15 & 5) == 4 )
    v18 |= 0x42uLL;
  v20 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v15 & 0x40000000) == 0 )
    v20 = v18;
  if ( (v15 & 0x20000000) != 0 )
    v20 = ((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ (((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ v20) & 0xFFFFFFFFFFFFFEFFuLL;
  v21 = v20 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v15 & 0x8000000) == 0 )
    v21 = v20;
  v22 = v21 | 0x80;
  if ( !v19 )
    v22 = v21;
  v23 = v22 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v24 = v98;
  v92 = v23;
  if ( v98 > 1 )
  {
    v25 = *(_BYTE *)(v2 + 69);
    if ( (v25 & 8) == 0 )
    {
      v107 = 1;
      *(_BYTE *)(v2 + 69) = v25 | 8;
    }
    v24 = v98;
  }
  v26 = 0LL;
  while ( 1 )
  {
    v27 = 0xFFFFF6FB7DBED7F8uLL;
    v97 = v26;
    if ( v26 >= v24 )
    {
      v65 = v95;
      v66 = 273;
      goto LABEL_131;
    }
    v28 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v52 = *(_QWORD *)v13;
      if ( (v28 & 1) != 0 && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        if ( (MiFlags & 0x1800000) != 0 )
        {
          v53 = KeGetCurrentThread()->ApcState.Process;
          if ( v53->AddressPolicy != 1 )
          {
            KernelWaitTime = v53[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v55 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
              if ( (v55 & 0x20) != 0 )
                v52 = v28 | 0x20;
              v28 = v52 | 0x42;
              if ( (v55 & 0x42) == 0 )
                v28 = v52;
            }
            v27 = 0xFFFFF6FB7DBED7F8uLL;
          }
        }
        v26 = v97;
      }
    }
    if ( a1[9] )
    {
      if ( (v28 & 0x400) == 0 && (v28 & 0x8000000) != 0 && !v26 )
      {
        v87 = v92;
        if ( (unsigned __int64)&v92 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v92 <= 0xFFFFF6FB7DBED7F8uLL )
          v87 = MiReadPteShadow(&v92, v92);
        MiWriteValidPteNewProtection(&v92, v87 | 0x40);
        v23 = v92;
        v3 = 0LL;
      }
      goto LABEL_42;
    }
    if ( v28 )
      goto LABEL_42;
    v27 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v109 = v17 + 1;
    v28 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v15 & 0x1F));
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & v28) != 0 )
        v28 |= 0x10uLL;
      else
        v28 |= qword_140E2D8C0;
    }
    v58 = v28;
    v93 = v28;
    v17 = 0LL;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( !MiPteHasShadow(v26, v28, *(_QWORD *)&CLFS_LSN_NULL_EXT) )
      {
        v26 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( (*(_DWORD *)(v26 + 1532) & 0x1000) == 0 )
          goto LABEL_229;
        v82 = v93;
        if ( (v93 & 1) == 0 )
          goto LABEL_229;
        goto LABEL_228;
      }
      v17 = 1LL;
      if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
      {
        v82 = v93;
        if ( (v93 & 1) == 0 )
        {
LABEL_229:
          v27 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          goto LABEL_109;
        }
LABEL_228:
        v58 = v82 | 0x8000000000000000uLL;
        goto LABEL_229;
      }
    }
LABEL_109:
    *(_QWORD *)v13 = v58;
    if ( (_DWORD)v17 )
    {
      HasShadow = MiPteHasShadow(v26, v58, v27);
      if ( HasShadow )
      {
        v61 = *(_QWORD *)(HasShadow + 1288);
        if ( v61 )
        {
          v17 = 0x7FFFFFFFFFFFFFFFLL;
          v62 = (unsigned __int64 *)(v61 + 8 * ((v13 >> 3) & 0x1FF));
          if ( (v60 & 1) != 0 )
            v27 = v60 & 0x7FFFFFFFFFFFFFFFLL;
          *v62 = v27;
        }
      }
    }
LABEL_42:
    v29 = (unsigned __int64 *)*a2;
    if ( *a2 )
    {
      v30 = *v29;
      v31 = a2[2]-- == 1;
      *a2 = v30;
      if ( v31 )
        a2[1] = v3;
    }
    if ( a1[9] && !*((_QWORD *)a1 + 8) && (v28 & 0x400) != 0 )
    {
      MiInitializeDemandFillProtoContents((__int64)(v29 + 0x44000000000LL) / 48, v28, v27, v17);
      DemandZeroPte = MiMakeDemandZeroPte(4);
      v93 = DemandZeroPte;
      v51 = 0;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v51 = MiSanitizeShadowPxe(0xFFFFF6FB7DBED7F8uLL, &v93, v49);
        DemandZeroPte = v93;
      }
      *(_QWORD *)v13 = DemandZeroPte;
      if ( v51 )
        MiWritePteShadow(v13, DemandZeroPte, v49, v50);
      v32 = v108 | 8;
      v108 |= 8u;
    }
    else
    {
      v32 = v108;
    }
    v33 = v32 | 0x20;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      v33 = v108;
    v108 = v33;
    MiInitializePfn((ULONG_PTR)v29, v13);
    if ( v105 )
    {
      if ( *(_BYTE *)v105 == 1 )
      {
        v69 = *(_QWORD *)(v105 + 24);
        if ( v69 < *(_QWORD *)(v105 + 16)
          && (__int64)(v13 << 25) >> 16 == *(_QWORD *)(16 * v69 + *(_QWORD *)(v105 + 8))
                                         + (*(_QWORD *)(v105 + 32) << 12) )
        {
          MiAdvanceFaultList(v105);
        }
      }
    }
    if ( (*a1 & 0x10) == 0 )
      break;
    TransitionPte = MiMakeTransitionPte((__int64)(v29 + 0x44000000000LL) / 48, (unsigned int)a1[8]);
    v93 = TransitionPte;
    v91 = 0;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v91 = MiSanitizeShadowPxe(0xFFFFF6FB7DBED7F8uLL, &v93, v89);
      TransitionPte = v93;
    }
    *(_QWORD *)v13 = TransitionPte;
    if ( v91 )
      MiWritePteShadow(v13, TransitionPte, v89, v90);
    if ( (*a1 & 0x100) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)Process[1].Padding);
    MiLockAndDecrementShareCount((ULONG_PTR)v29);
LABEL_75:
    v13 += 8LL;
    v24 = v98;
    v26 = v97 + 1;
    v17 = v109;
    v3 = 0LL;
  }
  v34 = v23 & 0xFFF0000000000FFFuLL | ((((__int64)(v29 + 0x44000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12);
  v23 = v23 & 0xFFF0000000000FDFuLL | ((((__int64)(v29 + 0x44000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12);
  v35 = v34 | 0x20;
  if ( (*a1 & 2) == 0 )
    v23 = v35;
  v92 = v23;
  if ( *((_QWORD *)a1 + 8) )
  {
    *(_QWORD *)v13 = v23;
    goto LABEL_75;
  }
  v36 = v110 & 0xFFFFFFF7;
  if ( (v13 < v99 || v13 > v100) && (*a1 & 0x200) != 0 )
  {
    v23 &= ~0x20uLL;
    v36 |= 8u;
    v92 = v23;
    if ( v96 )
    {
      v23 &= 0xFFFFFFFFFFFFFFBDuLL;
      v92 = v23;
    }
  }
  v37 = v95;
  if ( (*(_BYTE *)(v95 + 69) & 0x20) != 0 )
  {
    v23 &= ~0x20uLL;
    v92 = v23;
  }
  v38 = *(_BYTE *)(v95 + 69);
  v39 = (__int64 *)(v95 + 56);
  if ( (v38 & 9) != 8 || (v38 & 4) != 0 )
  {
    v45 = v36 & 0xFFFFFFFB;
    goto LABEL_71;
  }
  v40 = *(unsigned __int16 *)(v95 + 66);
  if ( !(_WORD)v40 )
    goto LABEL_68;
  if ( v40 + *(unsigned __int16 *)(v95 + 64) != (((unsigned int)v13 >> 3) & 0x1FF) )
  {
LABEL_143:
    MiEmptyDeferredWorkingSetEntries(v95 + 56);
    v39 = v101;
    goto LABEL_67;
  }
  if ( (v29[5] & 0x8000000000000000uLL) != 0LL )
  {
    if ( (*(_BYTE *)(v95 + 69) & 2) == 0 )
      goto LABEL_68;
    goto LABEL_143;
  }
  if ( (*(_BYTE *)(v95 + 69) & 2) == 0 )
  {
    v41 = *v39;
    v42 = ((unsigned __int64)*(unsigned __int16 *)(v95 + 64) << 12)
        + ((__int64)(*(_QWORD *)(v95 + 72) << 25) >> 16 << 25 >> 16);
    if ( v42 < 0xFFFFF68000000000uLL || v42 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v43 = 5LL;
    }
    else
    {
      v43 = 4LL;
      if ( (*(_DWORD *)(v41 + 184) & 0xF) != 0 )
        v43 = 0LL;
    }
    MiAddWorkingSetEntries(v41, v42, *(unsigned __int16 *)(v95 + 66), v43);
    v39 = v101;
    *((_WORD *)v101 + 5) = 0;
LABEL_67:
    v37 = v95;
  }
LABEL_68:
  v44 = *((_WORD *)v39 + 5);
  if ( v44 )
  {
    *(_WORD *)(v37 + 66) = v44 + 1;
  }
  else
  {
    *(_WORD *)(v37 + 66) = 1;
    *((_WORD *)v39 + 4) = ((unsigned int)v13 >> 3) & 0x1FF;
    v77 = *(_BYTE *)(v37 + 69);
    v78 = v77 & 0xFD;
    v79 = v77 | 2;
    if ( (v29[5] & 0x8000000000000000uLL) == 0LL )
      v78 = v79;
    *(_BYTE *)(v37 + 69) = v78;
  }
  v45 = v36 | 4;
LABEL_71:
  v46 = v45 | 0x10;
  if ( (*(_BYTE *)(v37 + 69) & 1) == 0 )
    v46 = v45;
  v47 = v46;
  v110 = v46;
  if ( (unsigned int)MiAllocateWsle(v102, v13, (_DWORD)v29, 0, v23, v46, v106) )
  {
    ++v94;
    *((_QWORD *)a1 + 9) = v13;
    goto LABEL_75;
  }
  MiRevertPrivateZeroFault(v29);
  while ( 1 )
  {
    v26 = *a2;
    if ( !*a2 )
      break;
    v57 = *(_QWORD *)v26;
    v31 = a2[2]-- == 1;
    *a2 = v57;
    if ( v31 )
      a2[1] = 0LL;
    MiReleaseFreshPage(v26, v56, v27);
  }
  v65 = v95;
  if ( (v47 & 4) != 0 )
    --*(_WORD *)(v95 + 66);
  v66 = -1073741801;
LABEL_131:
  if ( v107 )
  {
    if ( (*(_BYTE *)(v65 + 69) & 8) != 0 && *(_WORD *)(v65 + 66) )
      MiEmptyDeferredWorkingSetEntries(v65 + 56);
    *(_BYTE *)(v65 + 69) &= ~8u;
  }
  if ( !a1[9] )
  {
    if ( v109 )
    {
      v71 = (unsigned __int64 *)(((*((_QWORD *)a1 + 2) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL);
      if ( ((*((_QWORD *)a1 + 2) >> 18) & 0x3FFFFFF8LL) != 0x3DBEDF68 )
      {
        v72 = *v71;
        if ( (unsigned __int64)v71 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v71 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v27 = *v71;
          if ( (v72 & 1) != 0 && ((v72 & 0x20) == 0 || (v72 & 0x42) == 0) )
          {
            v83 = MiPteHasShadow(v26, v72, v27);
            if ( v83 )
            {
              v85 = *(_QWORD *)(v83 + 1288);
              if ( v85 )
              {
                v26 = 511LL;
                v86 = *(_QWORD *)(v85 + 8 * ((v84 >> 3) & 0x1FF));
                if ( (v86 & 0x20) != 0 )
                  v27 |= 0x20uLL;
                v72 = v27 | 0x42;
                if ( (v86 & 0x42) == 0 )
                  v72 = v27;
              }
            }
          }
        }
        v73 = (v72 >> 12) & 0xFFFFFFFFFFLL;
        v74 = 48 * v73 - 0x220000000000LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
        {
          LODWORD(v80) = v103;
          do
          {
            v80 = (unsigned int)(v80 + 1);
            if ( ((unsigned int)v80 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26, v73, v27) )
            {
              HvlNotifyLongSpinWait((unsigned int)v80);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v74 + 24) < 0 );
          v103 = v80;
        }
        if ( (*(_DWORD *)(v74 + 36) & 0x4000000) != 0 )
          v75 = *(_QWORD *)v74 >> 36;
        else
          v75 = *(_QWORD *)(v74 + 16) >> 17;
        v76 = v109 + (unsigned int)v75;
        if ( (*(_DWORD *)(v74 + 36) & 0x4000000) != 0 )
          *(_QWORD *)v74 = (v76 << 36) ^ ((v76 << 36) ^ *(_QWORD *)v74) & 0xFFFFC00FFFFFFFFFuLL;
        else
          *(_QWORD *)(v74 + 16) = (v76 << 17) ^ ((v76 << 17) ^ *(_QWORD *)(v74 + 16)) & 0xFFFFFFFFF801FFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  v67 = v94;
  if ( v94 )
  {
    if ( (*a1 & 0x100) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, v94);
    __addgsdword(0x2E9Cu, v67);
  }
  return v66;
}
