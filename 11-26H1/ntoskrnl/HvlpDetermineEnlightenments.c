/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1405C4248
 * Callers:
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     HvlpSetRegister64 @ 0x14048DA10 (HvlpSetRegister64.c)
 *     HvlpGetRegister64 @ 0x1404CA750 (HvlpGetRegister64.c)
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1405BE1A4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpGetRegister128 @ 0x1405C3FD0 (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x1405C48A4 (HvlpQueryExtendedCapabilities.c)
 *     HviGetEnlightenmentInformation @ 0x1406E0980 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  int v0; // edi
  __int16 v1; // si
  __int64 v2; // rbx
  unsigned int v3; // r15d
  unsigned __int64 v4; // rax
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // ecx
  char v13; // r14
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  ULONG v17; // eax
  int v18; // ecx
  int v19; // r14d
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  int v25; // edi
  int v26; // ebx
  char v27; // al
  __int64 v28; // rax
  int v29; // edx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v31; // [rsp+28h] [rbp-49h] BYREF
  __int128 v32; // [rsp+30h] [rbp-41h] BYREF
  __int128 v33; // [rsp+40h] [rbp-31h] BYREF
  __int128 v34; // [rsp+50h] [rbp-21h] BYREF
  __int64 v35; // [rsp+60h] [rbp-11h]
  __int64 v36; // [rsp+68h] [rbp-9h]
  __int128 v37; // [rsp+70h] [rbp-1h] BYREF
  __int128 v38; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v39; // [rsp+90h] [rbp+1Fh] BYREF
  _BYTE v40[16]; // [rsp+A0h] [rbp+2Fh] BYREF

  v31 = 0LL;
  v35 = 0LL;
  LODWORD(v36) = 0;
  v32 = 0LL;
  HvlEnableIdleYield = 0;
  v0 = 0;
  v37 = 0LL;
  v39 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  HviGetEnlightenmentInformation(&v37);
  v38 = 0LL;
  HviGetHypervisorFeatures(&v38);
  HviGetHypervisorFeatures(&v39);
  HviGetHardwareFeatures((__int64)&v33);
  v1 = v37;
  if ( (v37 & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v37 & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v37 & 4) != 0 )
  {
    if ( (v37 & 0x20000) != 0 || (v0 = 8388612, KeGetCurrentPrcb()->CpuVendor == 2) )
      v0 = 4;
  }
  v2 = v38;
  if ( (v38 & 0x10) != 0 )
    HvlpFlags |= 0x80000u;
  if ( (v37 & 8) != 0 )
  {
    v0 |= 0x10u;
    HvlpFlags |= 1u;
  }
  if ( (v37 & 0x200) != 0 )
  {
    v0 |= 0x1000u;
    HvlpFlags |= 0x10u;
  }
  v3 = HIDWORD(v39);
  if ( (HIDWORD(v39) & 0x40000) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v0 |= 0x100000u;
  }
  if ( (v37 & 0x40000) != 0 )
    HvlpFlags |= 0x400000u;
  if ( (v37 & 0x10000) != 0 )
    HvlpFlags |= 0x800000u;
  v5 = v0 | 0x20000000;
  if ( (v37 & 0x100000) == 0 )
    v5 = v0;
  v6 = v5;
  if ( (v37 & 0x1000000) != 0 && KeGetCurrentPrcb()->CpuVendor == 1 )
    v6 = v5 | 0x80000000;
  v7 = v6 | 0x80;
  if ( ((HIDWORD(v39) >> 4) & 1) == 0 )
    v7 = v6;
  v8 = v7 | 0x40000000;
  if ( (v37 & 0x800000) == 0 )
    v8 = v7;
  if ( (v37 & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v9 = v8 | 0x20;
  if ( (v37 & 0x20) == 0 )
    v9 = v8;
  v10 = v9 | 0x4000;
  if ( (v37 & 0x400) == 0 )
    v10 = v9;
  v11 = v10 | 0x200;
  if ( (BYTE12(v39) & 0x20) == 0 )
    v11 = v10;
  if ( SDWORD1(v37) > 0 )
  {
    _BitScanReverse(&v12, DWORD1(v37));
    v11 |= 0x40u;
    HvlLongSpinCountMask = DWORD1(v37) | ((1 << v12) - 1);
  }
  if ( (v38 & 0x100000000000LL) != 0 )
  {
    *(_QWORD *)&v37 = 1LL;
    HvlpSetRegister64(589831, 1uLL);
    HvlpGetRegister64(589831, &v37);
    if ( (v37 & 0x4000000000000000LL) != 0 )
    {
      HvlpSetRegister64(589831, 0x8000000000000001uLL);
      HvlpFlags |= 2u;
    }
  }
  if ( (v2 & 0x100000000LL) != 0 )
    HvlpFlags |= 0x2000000u;
  if ( (v3 & 0x10000000) != 0 )
  {
    v11 |= 0x4000000u;
    if ( ((v3 >> 4) & 1) == 0 )
      v11 &= ~0x4000000u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516, &v32);
    v13 = v32;
    v14 = v11 | 0x400;
    if ( (BYTE4(v32) & 1) == 0 )
      v14 = v11;
    v15 = v14 | 0x10000000;
    if ( (BYTE4(v32) & 8) == 0 )
      v15 = v14;
    v16 = v15 | 0x20000;
    if ( (BYTE4(v32) & 2) == 0 )
      v16 = v15;
    v11 = v16 | 0x40000;
    if ( (BYTE4(v32) & 4) == 0 )
      v11 = v16;
    if ( (v32 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v32 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( (int)v32 < 0 )
    {
      HvlpRootFlags |= 0x187u;
      v11 |= 0x10000u;
      HvlHyperVRootPartition = 1;
      if ( (unsigned int)HvlpQueryHypervisorSchedulerType() == 4 )
        v11 |= 0x40000u;
    }
    v17 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v13 & 4) != 0 )
    {
      v17 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v17 |= 0x10u;
      HvlpRootFlags = v17;
    }
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v17 | 0x400;
  }
  v18 = v11 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v18 = v11;
  if ( (v3 & 8) == 0 )
    HvlpFlags |= 4u;
  v19 = v18 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v19 = v18;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v20 = HvlpAcquireHypercallPage((__int64)&v34, 2, (__int64)v40, 8LL);
    HvcallInitiateHypercall(70LL, 0LL);
    HvlpReleaseHypercallPage((unsigned int *)&v34, v21, v22, v23);
    HvlPartitionId = *v20;
  }
  v24 = v19 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v24 = v19;
  if ( (v2 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v25 = v24 | 0x8000;
  if ( (v38 & 0x20000000000000LL) == 0 )
    v25 = v24;
  if ( (v1 & 0x2000) != 0 )
  {
    v26 = v25 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags(0LL) & 2) == 0 )
      v26 = v25;
  }
  else
  {
    v26 = v25;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v33 & 0x800000) != 0 )
    HvlpFlags |= 0x1000000u;
  if ( v1 < 0 && (v26 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v33 & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v27 = HvlpQueryExtendedCapabilities(&v31);
  v28 = v31 & -(__int64)(v27 != 0);
  if ( (v28 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v28 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v28 & 8) != 0 )
    HvlpFlags |= 0x180000u;
  if ( (v28 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v29 = v26 | 0x200000;
  if ( (v28 & 2) == 0 )
    v29 = v26;
  if ( (v28 & 4) != 0 )
  {
    v29 |= 0x400000u;
    if ( (v28 & 0x80u) != 0LL )
      v29 |= 0x8000000u;
  }
  HvlpEnlightenments = v29 & ~HvlpRescindedEnlightenments & 0xFCFFFFF7;
  HvlEnlightenments = v29 & ~HvlpRescindedEnlightenments & 0xFCFFFFF7;
  result = HvlGetEnlightenmentInfo;
  qword_140E00970 = (__int64)HvlGetEnlightenmentInfo;
  return result;
}
