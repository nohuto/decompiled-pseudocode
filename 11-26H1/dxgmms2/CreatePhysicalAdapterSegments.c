/*
 * XREFs of CreatePhysicalAdapterSegments @ 0x1400B14D0
 * Callers:
 *     ?InitializePhysicalAdapter@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ @ 0x1400B1EC0 (-InitializePhysicalAdapter@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004CE78 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_SEGMENTDESCRIPTOR5@@$03@@QEAAPEAU_DXGK_SEGMENTDESCRIPTOR5@@I@Z @ 0x1400AE8B0 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_SEGMENTDESCRIPTOR5@@$03@@QEAAPEAU_DXGK_SEGMENTDE.c)
 *     InitializePhysicalAdapterSegments_0 @ 0x1400B1ED8 (InitializePhysicalAdapterSegments_0.c)
 *     ValidateSegmentDescriptors_0 @ 0x1400B3268 (ValidateSegmentDescriptors_0.c)
 */

__int64 __fastcall CreatePhysicalAdapterSegments(struct VIDMM_PHYSICAL_ADAPTER_LEGACY *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r13
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 Elements; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r12d
  int v20; // esi
  unsigned int v21; // ecx
  __int64 *v22; // r9
  __int64 v23; // r8
  int v24; // edx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r8d
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // edx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h]
  __int128 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  __int64 v40; // [rsp+88h] [rbp-80h]
  struct _DXGKARG_QUERYADAPTERINFO v41; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v43[416]; // [rsp+D0h] [rbp-38h] BYREF
  int v44; // [rsp+270h] [rbp+168h]

  v1 = *((unsigned __int16 *)a1 + 36);
  v2 = *((_QWORD *)a1 + 7);
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 3032LL) + 352 * v1;
  v41.pInputData = &v35;
  LODWORD(v35) = v1;
  v41.pOutputData = &v36;
  v40 = v4;
  *(_QWORD *)&v41.Type = 11LL;
  *(_QWORD *)&v41.InputDataSize = 4LL;
  *(_QWORD *)&v41.Flags.0 = 0LL;
  HIDWORD(v41.hKmdProcessHandle) = 0;
  v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  v41.OutputDataSize = 40;
  v5 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 24), &v41);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL, v5);
    result = v6;
    WdLogGlobalForLineNumber = 665;
    return result;
  }
  if ( !(_DWORD)v36 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 673;
LABEL_5:
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225473LL;
  }
  if ( (unsigned int)v36 > 0x20 )
  {
    WdLogSingleEntry2(1LL, (unsigned int)v36, 32LL);
    WdLogGlobalForLineNumber = 681;
    goto LABEL_5;
  }
  v9 = (unsigned __int16)v36;
  P = 0LL;
  v44 = 0;
  Elements = PagedPoolZeroedArray<_DXGK_SEGMENTDESCRIPTOR5,4>::AllocateElements((__int64 *)&P, (unsigned __int16)v36);
  v11 = Elements;
  if ( !Elements )
  {
    _InterlockedAdd(&dword_14008A738, 1u);
    WdLogSingleEntry1(6LL, v9);
    WdLogGlobalForLineNumber = 693;
LABEL_22:
    DxgkLogInternalTriageEvent(v12, 262145LL);
    if ( P != v43 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return 3221225495LL;
  }
  v37 = Elements;
  v39 = 104LL;
  v13 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 24), &v41);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(1LL, v13);
    WdLogGlobalForLineNumber = 705;
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    if ( P != v43 && P )
      ExFreePoolWithTag(P, 0);
    return v14;
  }
  if ( !(unsigned __int8)ValidateSegmentDescriptors_0(v2, v11, v9, (unsigned int)v38) )
    goto LABEL_56;
  v16 = (*((_BYTE *)a1 + 556) & 0x48) == 0;
  *((_DWORD *)a1 + 35) = v9;
  if ( !v16 )
    LOWORD(v9) = v9 + 1;
  v17 = 8LL * (unsigned __int16)v9;
  if ( !is_mul_ok((unsigned __int16)v9, 8uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, 0x37306956u, 64LL);
  *((_QWORD *)a1 + 233) = v18;
  if ( !v18 )
  {
    _InterlockedAdd(&dword_14008A778, 1u);
    WdLogSingleEntry2(6LL, v2, *((unsigned __int16 *)a1 + 36));
    WdLogGlobalForLineNumber = 742;
    goto LABEL_22;
  }
  v19 = (unsigned __int16)v9;
  *((_DWORD *)a1 + 34) = (unsigned __int16)v9;
  v20 = InitializePhysicalAdapterSegments_0(a1);
  if ( v20 < 0 )
  {
    if ( P != v43 && P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v20;
  }
  v21 = 0;
  if ( v19 )
  {
    v22 = (__int64 *)*((_QWORD *)a1 + 233);
    do
    {
      v23 = *v22;
      v24 = 1 << v21;
      v25 = *(_DWORD *)(*v22 + 64);
      if ( (v25 & 1) != 0 )
      {
        *((_DWORD *)a1 + 23) |= v24;
      }
      else if ( (v25 & 0x1000) != 0 )
      {
        *((_DWORD *)a1 + 22) |= v24;
      }
      else
      {
        *((_DWORD *)a1 + 21) |= v24;
      }
      v26 = *(_DWORD *)(v23 + 64);
      if ( (v26 & 0x80000) != 0 )
      {
        *((_DWORD *)a1 + 29) |= v24;
      }
      else if ( (v26 & 0x100000) != 0 )
      {
        *((_DWORD *)a1 + 30) |= v24;
      }
      else
      {
        *((_DWORD *)a1 + 31) |= v24;
      }
      if ( (*(_DWORD *)(v23 + 64) & 0x10) != 0 )
        *((_DWORD *)a1 + 25) |= v24;
      if ( (*(_DWORD *)(v23 + 64) & 4) != 0 )
      {
        *((_DWORD *)a1 + 26) |= v24;
        *((_DWORD *)a1 + 27) |= v24;
      }
      if ( (*(_DWORD *)(v23 + 64) & 0x6000) != 0 )
      {
        *((_DWORD *)a1 + 26) |= v24;
        *((_DWORD *)a1 + 28) |= v24;
      }
      ++v21;
      ++v22;
    }
    while ( v21 < v19 );
  }
  v27 = *((_DWORD *)a1 + 23);
  v28 = *((_DWORD *)a1 + 21);
  v29 = v28 | *((_DWORD *)a1 + 22) | v27;
  *((_DWORD *)a1 + 24) = *((_DWORD *)a1 + 22) | v27;
  *((_DWORD *)a1 + 19) = v29;
  *((_DWORD *)a1 + 20) = v27 | v28;
  if ( !*((_DWORD *)a1 + 29) )
  {
    WdLogSingleEntry3(1LL, v29, *((unsigned int *)a1 + 30), *((unsigned int *)a1 + 31));
    v30 = *((unsigned int *)a1 + 30);
    WdLogGlobalForLineNumber = 830;
LABEL_55:
    DxgkLogInternalTriageEvent(v30, 0x40000LL);
LABEL_56:
    if ( P != v43 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225485LL;
  }
  if ( (_DWORD)v38 && !_bittest((const int *)&v27, (unsigned __int8)(v38 - 1)) )
  {
    WdLogSingleEntry1(1LL, (unsigned int)v38);
    WdLogGlobalForLineNumber = 844;
    goto LABEL_55;
  }
  v31 = v40;
  *(_BYTE *)(*((unsigned __int16 *)a1 + 36) + v2 + 60) = v38;
  *(_DWORD *)(v2 + 4LL * *((unsigned __int16 *)a1 + 36) + 380) = DWORD2(v38);
  *(_DWORD *)(v2 + 4LL * *((unsigned __int16 *)a1 + 36) + 124) = DWORD1(v38);
  v32 = *((_DWORD *)a1 + 23);
  *((_QWORD *)a1 + 219) = *((_QWORD *)a1 + 233);
  v33 = *(_DWORD *)(v31 + 344);
  *((_DWORD *)a1 + 32) = v33;
  if ( (v33 & v32) != 0 )
  {
    _bittestandset(&v33, *((unsigned __int16 *)a1 + 72));
    *((_DWORD *)a1 + 32) = v33;
  }
  v34 = *(_DWORD *)(v31 + 348);
  *((_DWORD *)a1 + 33) = v34;
  if ( (v32 & v34) != 0 )
  {
    _bittestandset(&v34, *((unsigned __int16 *)a1 + 72));
    *((_DWORD *)a1 + 33) = v34;
  }
  if ( P != v43 && P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
