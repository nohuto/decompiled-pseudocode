/*
 * XREFs of KiSetFeatureBits @ 0x140BFD4E8
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalIsHyperThreadingEnabled @ 0x14057F630 (HalIsHyperThreadingEnabled.c)
 *     HvlSetApicVirtualizationAvailable @ 0x1405BB910 (HvlSetApicVirtualizationAvailable.c)
 *     HvlSetHardwareMbecAvailable @ 0x1405BB920 (HvlSetHardwareMbecAvailable.c)
 *     KiApplyProcessorErrata @ 0x1405F723C (KiApplyProcessorErrata.c)
 *     KiGetProcessorSignature @ 0x1405F962C (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405F9644 (KiSetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x1405F9AC0 (KiDetectKvaLeakage.c)
 *     KiComputeTopologyConstants @ 0x1405FE4E8 (KiComputeTopologyConstants.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiInitializeHresetSupport @ 0x140BFBE80 (KiInitializeHresetSupport.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 */

__int64 __fastcall KiSetFeatureBits(__int64 a1)
{
  char v1; // dl
  unsigned int v2; // eax
  char v4; // cl
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  bool v10; // zf
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int ProcessorSignature; // eax
  char v23; // r8
  __int16 v39; // r13
  unsigned int v40; // esi
  ULONG_PTR v41; // r12
  unsigned int v52; // r14d
  ULONG_PTR v53; // r15
  char v54; // cl
  int v55; // eax
  __int64 v56; // rsi
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  unsigned int v59; // r15d
  unsigned int v60; // r8d
  unsigned int v61; // r12d
  __int64 v62; // rdx
  __int64 v63; // rcx
  char v64; // cl
  char v65; // bl
  int v66; // edx
  int v67; // ecx
  int v68; // edx
  unsigned int v69; // eax
  char v70; // r14
  int v71; // ebx
  unsigned __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rax
  unsigned __int64 v81; // r8
  __int64 v82; // rbx
  unsigned __int64 v83; // rax
  char v84; // r9
  __int64 v95; // r8
  __int64 v96; // rsi
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rax
  unsigned __int64 v114; // rax
  unsigned __int64 v120; // rax
  __int64 result; // rax
  char v127; // [rsp+38h] [rbp-59h]
  __int128 v128; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v129; // [rsp+68h] [rbp-29h]
  __int128 v130; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v131; // [rsp+88h] [rbp-9h]
  __int128 v132; // [rsp+90h] [rbp-1h] BYREF
  __int128 v133; // [rsp+A0h] [rbp+Fh]
  __int64 v134; // [rsp+B0h] [rbp+1Fh] BYREF
  __int16 v135; // [rsp+B8h] [rbp+27h]

  v1 = *(_BYTE *)(a1 + 64);
  v134 = 0LL;
  v135 = 0;
  v2 = *(unsigned __int8 *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v127 = 0;
  v128 = 0LL;
  v130 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  if ( v4 == 2 || v4 == 1 )
    v127 = 1;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature();
    KiSetProcessorSignature(a1, ProcessorSignature);
  }
  else
  {
    if ( v4 == 2 )
    {
      if ( v1 != 6 )
        goto LABEL_42;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v2 <= 0x2D )
      {
        if ( v2 != 45 )
        {
          if ( v2 > 0x1F )
          {
            v11 = v2 - 37;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( !v12 )
                goto LABEL_38;
              v13 = v12 - 1;
              if ( !v13 )
                goto LABEL_38;
              v14 = v13 - 3;
              if ( v14 )
              {
                v10 = v14 == 2;
LABEL_22:
                if ( !v10 )
                  goto LABEL_24;
              }
            }
          }
          else if ( v2 != 31 )
          {
            v5 = v2 - 15;
            if ( !v5 )
              goto LABEL_38;
            v6 = v5 - 8;
            if ( !v6 )
              goto LABEL_38;
            v7 = v6 - 3;
            if ( v7 )
            {
              v8 = v7 - 2;
              if ( v8 )
              {
                v9 = v8 - 1;
                if ( v9 )
                {
                  v10 = v9 == 1;
                  goto LABEL_22;
                }
              }
LABEL_38:
              KiLastBranchFromBaseMSR = 64;
              KiLastBranchToBaseMSR = 96;
LABEL_25:
              KiLastBranchTOSMSR = 457;
              goto LABEL_42;
            }
          }
        }
LABEL_23:
        KiLastBranchFromBaseMSR = 1664;
        KiLastBranchToBaseMSR = 1728;
        goto LABEL_24;
      }
      if ( v2 > 0x3A )
      {
        v18 = v2 - 60;
        if ( !v18 )
          goto LABEL_23;
        v19 = v18 - 3;
        if ( !v19 )
          goto LABEL_23;
        v20 = v19 - 6;
        if ( !v20 )
          goto LABEL_23;
        v21 = v20 - 1;
        if ( !v21 )
          goto LABEL_23;
        if ( v21 == 7 )
          goto LABEL_38;
      }
      else
      {
        if ( v2 == 58 )
          goto LABEL_23;
        v15 = v2 - 46;
        if ( !v15 )
          goto LABEL_23;
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_23;
        v17 = v16 - 6;
        if ( !v17 || v17 - 1 < 2 )
          goto LABEL_38;
      }
LABEL_24:
      if ( !KiLastBranchFromBaseMSR )
        goto LABEL_42;
      goto LABEL_25;
    }
    if ( v4 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_42:
  v23 = *(_BYTE *)(a1 + 141);
  _RAX = 0LL;
  __asm { cpuid }
  v131 = _RAX;
  if ( v23 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
  }
  else if ( v23 != 1 )
  {
    goto LABEL_46;
  }
  *(_QWORD *)(a1 + 36840) = __readmsr(0x8Bu);
LABEL_46:
  _RAX = 1LL;
  __asm { cpuid }
  v39 = _RCX;
  LODWORD(v130) = _RAX;
  v40 = _RBX;
  v41 = (unsigned int)_RDX;
  *(_QWORD *)((char *)&v130 + 4) = __PAIR64__(_RCX, _RBX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v129 = _RAX;
  _RAX = 2147483649LL;
  HIDWORD(v130) = v41;
  __asm { cpuid }
  v52 = _RDX;
  v53 = (unsigned int)_RCX;
  LODWORD(v128) = _RAX;
  *(_QWORD *)((char *)&v128 + 4) = __PAIR64__(_RCX, _RBX);
  HIDWORD(v128) = _RDX;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v23 == 1 )
    {
      if ( *(_BYTE *)(a1 + 64) == 23 )
        KiAccessBitErrata = 1;
    }
    else if ( v23 == 2 && *(_BYTE *)(a1 + 64) == 6 )
    {
      v54 = *(_BYTE *)(a1 + 67);
      if ( v54 == 28
        || (unsigned __int8)(v54 - 38) <= 1u
        || (unsigned __int8)(v54 - 53) <= 1u
        || (LOBYTE(_RCX) = v54 - 55, (unsigned __int8)_RCX <= 0x16u)
        && (v55 = 4718593, _bittest(&v55, _RCX))
        && *(_BYTE *)(a1 + 66) <= 7u )
      {
        KiAccessBitErrata = 2;
      }
    }
  }
  KiDetectKvaLeakage(a1);
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v52 |= 0x100000u;
    HIDWORD(v128) = v52;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v40);
  *(_DWORD *)(a1 + 232) = (v40 >> 5) & 0x7F8;
  if ( (v41 & 0x789F3FD) != 0x789F3FD
    || (v52 & 0x800) == 0
    || (v52 & 0x100000) == 0
    || (v39 & 0x2000) == 0
    || (v53 & 1) == 0
    || HIDWORD(KsepShimDbLock.KernelWaitTime) )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v41, v52, v53, HIDWORD(KsepShimDbLock.KernelWaitTime));
  }
  v56 = *(_QWORD *)(a1 + 36832) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 36832) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v52 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  v57 = v130;
  v58 = v128;
  v59 = v129;
  v60 = v129;
  v61 = v131;
  v62 = v131;
  v63 = *(unsigned __int8 *)(a1 + 141);
  *(_DWORD *)(a1 + 160) = 1;
  *(_DWORD *)(a1 + 164) = 1;
  *(_DWORD *)(a1 + 40712) = 1;
  *(_DWORD *)(a1 + 40716) = 1;
  *(_DWORD *)(a1 + 47944) = 1;
  v130 = v57;
  v128 = v58;
  KiComputeTopologyConstants(v63, v62, v60, &v128, &v130, (int *)&v132);
  v64 = v132;
  if ( (v132 & 0x10) != 0 )
    *(_DWORD *)(a1 + 212) = DWORD2(v133);
  if ( (v64 & 1) != 0 )
    *(_DWORD *)(a1 + 164) = DWORD2(v132);
  if ( (v64 & 8) != 0 )
    *(_DWORD *)(a1 + 40716) = DWORD1(v133);
  if ( (v64 & 2) != 0 )
    *(_DWORD *)(a1 + 160) = HIDWORD(v132);
  if ( (v64 & 4) != 0 )
    *(_DWORD *)(a1 + 40712) = v133;
  if ( (v64 & 0x20) != 0 )
    *(_DWORD *)(a1 + 47944) = HIDWORD(v133);
  v65 = BYTE4(v132);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 164);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 160);
  v66 = (2 * (v65 & 1) + 1) | 4;
  if ( (v65 & 8) == 0 )
    v66 = 2 * (v65 & 1) + 1;
  v67 = v66 | 8;
  if ( (v65 & 4) == 0 )
    v67 = v66;
  v68 = v67 | 0x10;
  if ( (v65 & 2) == 0 )
    v68 = v67;
  v69 = v68 | 0x20;
  if ( (v65 & 0x20) == 0 )
    v69 = v68;
  _InterlockedOr((_DWORD *)&stru_140FC11F0.UserAffinity + 1, v69);
  v70 = *(_BYTE *)(a1 + 141);
  if ( v70 == 1 )
  {
    v56 |= 0x200000uLL;
  }
  else if ( v70 == 2 )
  {
    v56 |= 0x1000000uLL;
  }
  v71 = *(_DWORD *)(a1 + 164);
  if ( *(_DWORD *)(a1 + 36) && !HalIsHyperThreadingEnabled() )
    v71 *= *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 220) = -v71;
  if ( v70 == 2 || ((v70 - 1) & 0xFD) == 0 )
  {
    if ( v59 < 0x80000008 )
    {
      if ( v70 == 1 )
        LOBYTE(KiMtrrMaxRangeShift) = 40;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      LOBYTE(KiMtrrMaxRangeShift) = _RAX;
    }
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v77 = __readcr4();
  if ( (v56 & 1) != 0 )
    v77 |= 0x100000uLL;
  v78 = v77 | 0x10000;
  if ( (v56 & 0x10000000) == 0 )
    v78 = v77;
  if ( KeSmapEnabled )
  {
    v78 |= 0x200000uLL;
    if ( !*(_DWORD *)(a1 + 36) )
      KiTrapFeatures |= 8uLL;
  }
  v79 = v78 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v79 = v78;
  v80 = v79 | 0x8000000;
  if ( (KeFeatureBits2 & 0x4000) == 0 )
    v80 = v79;
  v81 = v80;
  if ( KiFredEnabled && !*(_DWORD *)(a1 + 36) )
  {
    if ( !KiBootDebuggerActive )
      v81 = v80 | 0x100000000LL;
    __writemsr(0x1D4u, (unsigned __int64)KiEnterUserModeEvent & 0xFFFFFFFFFFFFF834uLL | 0x40);
    v82 = *(_QWORD *)(a1 - 376);
    __writemsr(0x1CCu, *(_QWORD *)(v82 + 4));
    __writemsr(0x1CDu, *(_QWORD *)(v82 + 52));
    __writemsr(0x1CEu, *(_QWORD *)(v82 + 36));
    __writemsr(0x1D0u, 0x1000020010uLL);
    if ( !*(_DWORD *)(a1 + 36) && !KiBootDebuggerActive )
    {
      __sidt(&v134);
      LOWORD(v134) = 0;
      __lidt(&v134);
    }
  }
  if ( *(_DWORD *)(a1 + 36) && (v56 & 0x40000000000LL) != 0 && KiFlushPcid )
    v81 |= 0x20000uLL;
  __writecr4(v81);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v81 & 0x20000) != 0 )
  {
    v83 = __readcr3();
    __writecr3(v83 | 2);
  }
  v84 = *(_BYTE *)(a1 + 141);
  if ( v84 == 2 && v61 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v56 |= 0x100000000000uLL;
    }
  }
  v95 = v56 | 0x20000;
  if ( !v127 )
    v95 = v56;
  v96 = v95;
  if ( v84 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) == 0 )
      goto LABEL_163;
    if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
    {
      v102 = __readmsr(0x48Bu);
      if ( (v102 & 0x200000000LL) != 0 )
        v96 = v95 | 0x4000000;
      if ( (v102 & 0x40000000000000LL) != 0 && (v96 & 1) != 0 )
        HvlSetHardwareMbecAvailable();
      if ( (v102 & 0x10000000000LL) != 0 )
        HvlSetApicVirtualizationAvailable();
    }
    v103 = __readmsr(0x3Au);
    if ( (v103 & 1) != 0 )
    {
      if ( (v103 & 4) == 0 )
        goto LABEL_151;
      v96 |= 0x8000000uLL;
    }
    else if ( (v103 & 4) == 0 )
    {
      goto LABEL_151;
    }
    KiVirtFlags |= 1u;
LABEL_151:
    if ( (v103 & 1) != 0 )
      KiVirtFlags |= 2u;
    goto LABEL_163;
  }
  if ( v84 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v96 = v95 | 0x4000000;
      if ( (_RDX & 0x20000) != 0 )
        HvlSetHardwareMbecAvailable();
      if ( (_RDX & 0x2000) != 0 )
        HvlSetApicVirtualizationAvailable();
    }
    v114 = __readmsr(0xC0010114);
    if ( (v114 & 0x10) == 0 )
    {
      v96 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
LABEL_163:
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v120 = __readmsr(0x3Au);
      if ( (v120 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        if ( (_RAX & 1) != 0 )
        {
          v96 |= 0x10000000000uLL;
          *(_DWORD *)(MmWriteableSharedUserData + 876) |= 2u;
          if ( (_RAX & 2) != 0 )
          {
            v96 |= 0x80000000000uLL;
            *(_DWORD *)(MmWriteableSharedUserData + 876) |= 4u;
          }
        }
      }
    }
  }
  KiApplyProcessorErrata((_BYTE *)a1);
  result = KiInitializeHresetSupport(a1);
  *(_QWORD *)(a1 + 36832) = v96;
  return result;
}
