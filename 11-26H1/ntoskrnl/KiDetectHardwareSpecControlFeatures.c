/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x1405F4498
 * Callers:
 *     KiDetermineRetpolineEnablement @ 0x1405F4A24 (KiDetermineRetpolineEnablement.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1405F5B74 (KiSetHardwareSpeculationControlFeatures.c)
 *     KiDetectKvaLeakage @ 0x1405F9AC0 (KiDetectKvaLeakage.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     KiIsBranchConfusionPresent @ 0x1405F4B84 (KiIsBranchConfusionPresent.c)
 *     HviGetEnlightenmentInformation @ 0x1406E0980 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char *__fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, signed __int64 a2, _OWORD *a3, char *a4)
{
  unsigned __int64 v4; // r14
  char v5; // al
  char v6; // r12
  __int64 v7; // rdi
  char v8; // si
  bool v10; // zf
  char v11; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  char v23; // r15
  char v32; // cl
  int v33; // ecx
  char v34; // bl
  char v35; // al
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rax
  char v38; // cl
  __int64 v39; // rdi
  _OWORD *v40; // rax
  char *result; // rax
  char v42; // [rsp+20h] [rbp-60h]
  char v43; // [rsp+21h] [rbp-5Fh]
  char v44; // [rsp+22h] [rbp-5Eh]
  __int128 v45; // [rsp+28h] [rbp-58h]
  signed __int64 v46; // [rsp+40h] [rbp-40h] BYREF
  _OWORD *v47; // [rsp+48h] [rbp-38h]
  char *v48; // [rsp+50h] [rbp-30h]
  __int128 v49; // [rsp+58h] [rbp-28h] BYREF
  __int128 v50; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(_BYTE *)(a1 + 64);
  v6 = *(_BYTE *)(a1 + 141);
  LOBYTE(v4) = *(_BYTE *)(a1 + 67);
  v7 = 0LL;
  v8 = 0;
  *(_QWORD *)&v45 = 0LL;
  v49 = 0LL;
  v42 = 0;
  v50 = 0LL;
  v44 = v5;
  v48 = a4;
  v47 = a3;
  v46 = a2;
  *((_QWORD *)&v45 + 1) = 72LL;
  v43 = 1;
  if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetEnlightenmentInformation(&v50);
    v49 = 0LL;
    HviGetHypervisorFeatures(&v49);
    if ( (v49 & 0x100000000000LL) == 0 )
      goto LABEL_7;
    v10 = (v50 & 0x1000) == 0;
  }
  else
  {
    v10 = !HviIsAnyHypervisorPresent();
  }
  if ( v10 )
  {
    v11 = 0;
    v43 = 0;
    goto LABEL_8;
  }
LABEL_7:
  v11 = 1;
  v7 = 0x2000000LL;
  *(_QWORD *)&v45 = 0x2000000LL;
LABEL_8:
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v21 = 0LL;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v21 = (unsigned int)_RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v22 = __readmsr(0x10Au);
      _RDX = (unsigned __int64)HIDWORD(v22) << 32;
      if ( (v22 & 2) != 0 )
      {
        v42 = 1;
        v7 |= 0x201uLL;
        v23 = 1;
        *(_QWORD *)&v45 = v7;
        v8 = 1;
      }
      else
      {
        v23 = 0;
        v42 = 0;
      }
      if ( (v22 & 0x10) != 0 )
      {
        v7 |= 0x100uLL;
        v8 = 1;
        *(_QWORD *)&v45 = v7;
      }
      if ( (v22 & 4) != 0 )
      {
        v7 |= 0x200uLL;
        v42 = v23;
        *(_QWORD *)&v45 = v7;
        v8 = 1;
      }
    }
  }
  if ( v6 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v7 |= 4uLL;
      v8 = 1;
      *(_QWORD *)&v45 = v7;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v7 |= 0x10uLL;
      v8 = 1;
      *(_QWORD *)&v45 = v7;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v7 |= 0x40uLL;
      v8 = 1;
      *(_QWORD *)&v45 = v7;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v7 |= 0x80uLL;
      *(_QWORD *)&v45 = v7;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v7 |= 0x180uLL;
      *(_QWORD *)&v45 = v7;
    }
    v32 = v7;
    if ( (v7 & 0x80u) != 0LL )
      v8 = 1;
    if ( _bittest64((const signed __int64 *)&KeFeatureBits2, 0x25u) )
    {
      v7 |= 0x4000000uLL;
      *(_QWORD *)&v45 = v7;
      v32 = v7;
    }
  }
  else
  {
    if ( (v21 & 0x4000000) != 0 )
    {
      v7 |= 0x14uLL;
      v8 = 1;
      *(_QWORD *)&v45 = v7;
    }
    if ( (v21 & 0x8000000) != 0 )
    {
      v7 |= 0x44uLL;
      v8 = 1;
      *(_QWORD *)&v45 = v7;
    }
    if ( (int)v21 < 0 )
    {
      v7 |= 0x80uLL;
      v8 = 1;
      *(_QWORD *)&v45 = v7;
    }
    v32 = v7;
  }
  if ( (v46 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v7 |= 0x20uLL;
    *(_QWORD *)&v45 = v7;
    v32 = v7;
  }
  if ( v6 == 2 && v44 == 6 )
  {
    if ( (_BYTE)v4 == 0x8E
      || (unsigned __int8)(v4 - 78) <= 0x19u && (_RDX = 50397313LL, _bittest((const int *)&_RDX, v4 - 78))
      || (_BYTE)v4 == 0x9E )
    {
      v7 |= 0x200uLL;
      *(_QWORD *)&v45 = v7;
      v32 = v7;
    }
    LOBYTE(v4) = v4 - 55;
    if ( (unsigned __int8)v4 <= 0x3Eu )
    {
      _RDX = 0x4080404800680001LL;
      if ( _bittest64((const __int64 *)&_RDX, v4) )
      {
        v7 |= 0x200uLL;
        *(_QWORD *)&v45 = v7;
        v32 = v7;
      }
    }
  }
  if ( (v32 & 0x14) == 0x14 )
  {
    if ( v11 && (KiFeatureSettings & 0x8000) == 0 )
      goto LABEL_71;
    v33 = *(_DWORD *)(a1 + 1804);
    _RDX = v33 & 2;
    if ( (v33 & 2) != 0 )
    {
      v7 |= 0x400uLL;
      *(_QWORD *)&v45 = v7;
    }
    if ( (v33 & 4) != 0 )
    {
      v7 |= 0x800uLL;
      *(_QWORD *)&v45 = v7;
      if ( (KiFeatureSettings & 0x4000) != 0 )
      {
        v7 |= 1uLL;
        *(_QWORD *)&v45 = v7;
      }
    }
    if ( v6 == 2 )
    {
      v34 = v42;
      if ( !v11 && !v42 || (v33 & 1) != 0 || (v33 & 2) != 0 )
      {
        v7 |= 0x1000uLL;
LABEL_70:
        *(_QWORD *)&v45 = v7;
      }
    }
    else
    {
LABEL_71:
      v34 = v42;
      if ( v6 == 1 )
      {
        v7 |= 0x1000uLL;
        *(_QWORD *)&v45 = v7;
        if ( (v7 & 0x40) != 0 )
        {
          v7 |= 0x4000uLL;
          goto LABEL_70;
        }
      }
    }
  }
  else
  {
    v34 = v42;
  }
  if ( (!_bittest(&KiFeatureSettings, 0x16u) & _bittest64((const signed __int64 *)&KeFeatureBits2, 0x11u)) != 0 )
  {
    v7 |= 0x2000uLL;
    *(_QWORD *)&v45 = v7;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1, _RDX, v21) )
  {
    v7 |= 0x8000uLL;
    *(_QWORD *)&v45 = v7;
  }
  if ( *(_BYTE *)(a1 + 141) == 1 && (KeFeatureBits2 & 0xC0000000000LL) != 0xC0000000000LL )
  {
    if ( HviIsAnyHypervisorPresent()
      || (v35 = *(_BYTE *)(a1 + 64), v35 >= 25)
      && (v35 != 26 || (v36 = *(_BYTE *)(a1 + 67), v36 > 0x4Fu) && (unsigned __int8)(v36 - 96) > 0x1Fu) )
    {
      v7 |= 0x8000000uLL;
      *(_QWORD *)&v45 = v7;
    }
  }
  if ( v6 != 1 || (KeFeatureBits2 & 0x2000000) != 0 )
  {
    v7 |= 8uLL;
    *(_QWORD *)&v45 = v7;
    if ( v6 == 2 )
    {
      if ( (KeFeatureBits2 & 0x4000000) == 0 && (v43 || v34) )
      {
        v7 |= 0x10000uLL;
        *(_QWORD *)&v45 = v7;
      }
      if ( (KeFeatureBits2 & 0x8000000) != 0 && (v7 & 0x10000) != 0 )
      {
        v7 |= 0x20000uLL;
        *(_QWORD *)&v45 = v7;
      }
    }
  }
  if ( (KiFeatureSettings & 0x10000) != 0 )
  {
    v7 &= 0xFFFFFFFFFFFFF7FEuLL;
    *(_QWORD *)&v45 = v7;
  }
  if ( v6 == 2 && (((KeFeatureBits2 & 0x100000000LL) == 0) & _bittest64(&v46, 0x33u)) != 0 )
  {
    v7 |= 0x40000uLL;
    *(_QWORD *)&v45 = v7;
    if ( (KeFeatureBits2 & 0x80000000) != 0 )
    {
      v7 |= 0x80000uLL;
      *(_QWORD *)&v45 = v7;
      v37 = __readmsr(0x123u);
      if ( (v37 & 0x20) != 0 )
      {
        v7 |= 0x100000uLL;
        *(_QWORD *)&v45 = v7;
      }
    }
  }
  v38 = *(_BYTE *)(a1 + 141);
  if ( v38 == 1 && !_bittest64((const signed __int64 *)&KeFeatureBits2, 0x22u) )
  {
    v7 |= 0x200000uLL;
    *(_QWORD *)&v45 = v7;
  }
  if ( v6 == 1 )
  {
    v7 |= 0x400000uLL;
    *(_QWORD *)&v45 = v7;
  }
  if ( v38 == 2 && (KeFeatureBits2 & 0x800000000LL) == 0 )
  {
    v39 = v7 | 0x800000;
    *(_QWORD *)&v45 = v39;
    if ( (KeFeatureBits2 & 0x1000000000LL) != 0 )
      *(_QWORD *)&v45 = v39 | 0x1000000;
  }
  v40 = v47;
  *v47 = v45;
  *((_QWORD *)v40 + 2) = 4LL;
  result = v48;
  if ( v48 )
    *v48 = v8;
  return result;
}
