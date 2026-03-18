/*
 * XREFs of CreateAndInitializeSegmentsAndMmus @ 0x1400AE950
 * Callers:
 *     InitializePhysicalAdapter @ 0x1400AF7BC (InitializePhysicalAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004CE78 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MMUDESCRIPTOR@@$03@@QEAAPEAU_DXGK_MMUDESCRIPTOR@@I@Z @ 0x1400AE830 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MMUDESCRIPTOR@@$03@@QEAAPEAU_DXGK_MMUDESCRIPTOR@.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_SEGMENTDESCRIPTOR5@@$03@@QEAAPEAU_DXGK_SEGMENTDESCRIPTOR5@@I@Z @ 0x1400AE8B0 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_SEGMENTDESCRIPTOR5@@$03@@QEAAPEAU_DXGK_SEGMENTDE.c)
 *     InitializePhysicalAdapterMmus @ 0x1400AF998 (InitializePhysicalAdapterMmus.c)
 *     InitializePhysicalAdapterSegments @ 0x1400AFA68 (InitializePhysicalAdapterSegments.c)
 *     ValidateMmuDescriptors @ 0x1400B0248 (ValidateMmuDescriptors.c)
 *     ValidateSegmentDescriptors @ 0x1400B03D0 (ValidateSegmentDescriptors.c)
 */

__int64 __fastcall CreateAndInitializeSegmentsAndMmus(struct VIDMM_PHYSICAL_ADAPTER_PBMM *a1)
{
  __int64 v1; // r13
  int v3; // eax
  int v4; // ebx
  __int64 result; // rax
  DXGADAPTER *v6; // rcx
  int v7; // eax
  unsigned __int16 v8; // bx
  DXGADAPTER *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int16 v12; // di
  unsigned int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  DXGADAPTER *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r15d
  DXGADAPTER *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int16 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 *v32; // r9
  __int64 v33; // r8
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // r14d
  _BYTE *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // [rsp+30h] [rbp-D8h]
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v48; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-68h]
  __int64 Elements; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-50h]
  __int64 v53; // [rsp+C8h] [rbp-40h]
  PVOID P; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v55[64]; // [rsp+E0h] [rbp-28h] BYREF
  int v56; // [rsp+120h] [rbp+18h]
  __int128 v57; // [rsp+128h] [rbp+20h] BYREF
  PVOID v58; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v59[416]; // [rsp+140h] [rbp+38h] BYREF
  int v60; // [rsp+2E0h] [rbp+1D8h]

  v1 = *((_QWORD *)a1 + 7);
  LODWORD(v45) = *((unsigned __int16 *)a1 + 36);
  *(_QWORD *)&v48.Type = 42LL;
  v48.pInputData = &v45;
  v48.pOutputData = &v57;
  *(_QWORD *)&v48.InputDataSize = 4LL;
  *(_QWORD *)&v48.Flags.0 = 0LL;
  HIDWORD(v48.hKmdProcessHandle) = 0;
  v57 = 0LL;
  v48.OutputDataSize = 16;
  v3 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v1 + 24), &v48);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(3LL, v3);
    WdLogGlobalForLineNumber = 776;
    return (unsigned int)v4;
  }
  v46 = *((unsigned __int16 *)a1 + 36);
  v48.pInputData = &v46;
  v48.pOutputData = &v45;
  v48.Type = DXGKQAITYPE_QUERYSEGMENT4|0x20;
  v48.InputDataSize = 8;
  v48.OutputDataSize = 8;
  v6 = *(DXGADAPTER **)(v1 + 24);
  v45 = 0LL;
  v7 = DXGADAPTER::DdiQueryAdapterInfo(v6, &v48);
  v4 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
    WdLogGlobalForLineNumber = 798;
    return (unsigned int)v4;
  }
  v8 = v45;
  if ( (unsigned __int16)(v45 - 1) > 0x1Fu )
  {
    WdLogSingleEntry1(1LL, 32LL);
    WdLogGlobalForLineNumber = 807;
    goto LABEL_98;
  }
  v47 = *((unsigned __int16 *)a1 + 36);
  v48.pInputData = &v47;
  v48.pOutputData = &v46;
  v48.Type = DXGKQAITYPE_GPUMMUCAPS|0x20;
  v48.InputDataSize = 8;
  v48.OutputDataSize = 8;
  v9 = *(DXGADAPTER **)(v1 + 24);
  v46 = 0LL;
  v10 = DXGADAPTER::DdiQueryAdapterInfo(v9, &v48);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
    result = v11;
    WdLogGlobalForLineNumber = 831;
    return result;
  }
  v12 = v46;
  if ( (unsigned __int16)(v46 - 1) > 0x1Fu )
  {
    WdLogSingleEntry1(1LL, 32LL);
    WdLogGlobalForLineNumber = 840;
LABEL_98:
    DxgkLogInternalTriageEvent(v43, 0x40000LL);
    return 3221225485LL;
  }
  v58 = 0LL;
  v60 = 0;
  P = 0LL;
  v56 = 0;
  v13 = v8;
  Elements = PagedPoolZeroedArray<_DXGK_SEGMENTDESCRIPTOR5,4>::AllocateElements((__int64 *)&v58, v8);
  v14 = Elements;
  v15 = PagedPoolZeroedArray<_DXGK_MMUDESCRIPTOR,4>::AllocateElements((__int64 *)&P, v8);
  v49 = v15;
  if ( !v14 )
  {
    _InterlockedAdd(&dword_14008A738, 1u);
    WdLogSingleEntry1(6LL, (unsigned __int16)v45);
    WdLogGlobalForLineNumber = 858;
    goto LABEL_12;
  }
  if ( !v15 )
  {
    _InterlockedAdd(&dword_14008A8F4, 1u);
    WdLogSingleEntry1(6LL, (unsigned __int16)v46);
    WdLogGlobalForLineNumber = 867;
LABEL_12:
    DxgkLogInternalTriageEvent(v16, 262145LL);
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
LABEL_51:
    if ( v58 != v59 )
    {
      if ( v58 )
        ExFreePoolWithTag(v58, 0);
    }
    return 3221225495LL;
  }
  v47 = *((unsigned __int16 *)a1 + 36);
  v48.pInputData = &v47;
  v48.pOutputData = &v51;
  v48.Type = DXGKQAITYPE_SEGMENTMEMORYSTATE|0x20;
  v48.InputDataSize = 8;
  v48.OutputDataSize = 24;
  v17 = *(DXGADAPTER **)(v1 + 24);
  v52 = 0LL;
  v51 = v14;
  v18 = DXGADAPTER::DdiQueryAdapterInfo(v17, &v48);
  v20 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry1(3LL, v18);
    WdLogGlobalForLineNumber = 890;
    goto LABEL_20;
  }
  if ( !(unsigned __int8)ValidateSegmentDescriptors(v19, Elements, v8, DWORD2(v57)) )
  {
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
LABEL_86:
    if ( v58 != v59 && v58 )
      ExFreePoolWithTag(v58, 0);
    return 3221225485LL;
  }
  LOWORD(v45) = *((_WORD *)a1 + 36);
  v51 = v49;
  v48.pInputData = &v45;
  v53 = 0LL;
  v48.pOutputData = &v51;
  v48.Type = DXGKQAITYPE_PAGETABLELEVELDESC|0x20;
  v48.InputDataSize = 2;
  v48.OutputDataSize = 32;
  v21 = *(DXGADAPTER **)(v1 + 24);
  v52 = 0LL;
  v22 = DXGADAPTER::DdiQueryAdapterInfo(v21, &v48);
  v20 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry1(3LL, v22);
    WdLogGlobalForLineNumber = 922;
LABEL_20:
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
    if ( v58 != v59 && v58 )
      ExFreePoolWithTag(v58, 0);
    return v20;
  }
  if ( !(unsigned __int8)ValidateMmuDescriptors(v23, v49, v12, (unsigned __int16)v52) )
  {
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
    goto LABEL_86;
  }
  v24 = v52 - 1;
  v25 = 8LL * v8;
  if ( !is_mul_ok(v8, 8uLL) )
    v25 = -1LL;
  v26 = operator new[](v25, 0x37306956u, 64LL);
  *((_QWORD *)a1 + 234) = v26;
  if ( !v26 )
  {
    _InterlockedAdd(&dword_14008A778, 1u);
    WdLogSingleEntry2(6LL, v1, *((unsigned __int16 *)a1 + 36));
    WdLogGlobalForLineNumber = 945;
    goto LABEL_47;
  }
  v28 = 8LL * v12;
  if ( !is_mul_ok(v12, 8uLL) )
    v28 = -1LL;
  v29 = operator new[](v28, 0x63306956u, 64LL);
  *((_QWORD *)a1 + 236) = v29;
  if ( !v29 )
  {
    _InterlockedAdd(&dword_14008A8FC, 1u);
    WdLogSingleEntry2(6LL, v1, *((unsigned __int16 *)a1 + 36));
    WdLogGlobalForLineNumber = 957;
LABEL_47:
    DxgkLogInternalTriageEvent(v27, 262145LL);
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    v56 = 0;
    P = 0LL;
    goto LABEL_51;
  }
  *((_DWORD *)a1 + 35) = v8;
  *((_DWORD *)a1 + 34) = v8;
  *((_WORD *)a1 + 952) = v12;
  v4 = InitializePhysicalAdapterSegments(a1);
  if ( v4 < 0 || (v4 = InitializePhysicalAdapterMmus(a1, v30, v12), v4 < 0) )
  {
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
    if ( v58 != v59 && v58 )
      ExFreePoolWithTag(v58, 0);
    return (unsigned int)v4;
  }
  v31 = 0;
  if ( v13 )
  {
    v32 = (__int64 *)*((_QWORD *)a1 + 234);
    do
    {
      v33 = *v32;
      v34 = 1 << v31;
      v35 = *(_DWORD *)(*v32 + 108);
      if ( v35 )
      {
        if ( v35 == 1 )
          *((_DWORD *)a1 + 21) |= v34;
      }
      else
      {
        *((_DWORD *)a1 + 22) |= v34;
      }
      v36 = *(_DWORD *)(v33 + 64);
      if ( (v36 & 0x80000) != 0 )
      {
        *((_DWORD *)a1 + 29) |= v34;
      }
      else if ( (v36 & 0x100000) != 0 )
      {
        *((_DWORD *)a1 + 30) |= v34;
      }
      else
      {
        *((_DWORD *)a1 + 31) |= v34;
      }
      if ( (*(_DWORD *)(v33 + 64) & 0x10) != 0 )
        *((_DWORD *)a1 + 25) |= v34;
      if ( (*(_DWORD *)(v33 + 64) & 4) != 0 )
      {
        *((_DWORD *)a1 + 26) |= v34;
        *((_DWORD *)a1 + 27) |= v34;
      }
      if ( (*(_DWORD *)(v33 + 64) & 0x6000) != 0 )
      {
        *((_DWORD *)a1 + 26) |= v34;
        *((_DWORD *)a1 + 28) |= v34;
      }
      ++v31;
      ++v32;
    }
    while ( v31 < v13 );
  }
  v37 = *((_DWORD *)a1 + 22);
  v38 = *((_DWORD *)a1 + 21) | v37;
  *((_DWORD *)a1 + 19) = v38;
  *((_DWORD *)a1 + 20) = v38;
  *((_DWORD *)a1 + 24) = v37;
  if ( !*((_DWORD *)a1 + 29) )
  {
    WdLogSingleEntry3(1LL, v38, *((unsigned int *)a1 + 30), *((unsigned int *)a1 + 31));
    v44 = *((unsigned int *)a1 + 30);
    WdLogGlobalForLineNumber = 1054;
    DxgkLogInternalTriageEvent(v44, 0x40000LL);
    if ( P != v55 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v56 = 0;
    goto LABEL_86;
  }
  *((_WORD *)a1 + 953) = v24;
  v39 = (1 << v12) - 1;
  v40 = *((unsigned __int16 *)a1 + 36);
  *((_DWORD *)a1 + 474) = v39;
  v41 = v39 & ~(1 << v24);
  LOBYTE(v39) = BYTE8(v57);
  *((_DWORD *)a1 + 475) = v41;
  *(_BYTE *)(v40 + v1 + 60) = v39;
  *(_DWORD *)(v1 + 4LL * *((unsigned __int16 *)a1 + 36) + 380) = DWORD1(v57);
  *(_DWORD *)(v1 + 4LL * *((unsigned __int16 *)a1 + 36) + 124) = v57;
  v42 = P;
  *((_QWORD *)a1 + 219) = *((_QWORD *)a1 + 234);
  if ( v42 != v55 && v42 )
    ExFreePoolWithTag(v42, 0);
  P = 0LL;
  v56 = 0;
  if ( v58 != v59 && v58 )
    ExFreePoolWithTag(v58, 0);
  return 0LL;
}
