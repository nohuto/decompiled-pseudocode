/*
 * XREFs of NtDxgkSetProperties @ 0x14036C450
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1401DF50C (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1401DF714 (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z @ 0x14036CA00 (-AllocateElements@-$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x14036CA80 (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x14036CBA4 (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x140424ED4 (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 */

__int64 __fastcall NtDxgkSetProperties(void *Src)
{
  size_t v1; // rbx
  struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *v2; // rax
  struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *v3; // rdi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int128 v9; // [rsp+58h] [rbp-50h] BYREF
  void *Srca[2]; // [rsp+68h] [rbp-40h]
  __int64 v11; // [rsp+78h] [rbp-30h]
  PVOID P; // [rsp+80h] [rbp-28h] BYREF
  _BYTE v13[4]; // [rsp+88h] [rbp-20h] BYREF
  int v14; // [rsp+8Ch] [rbp-1Ch]

  v9 = 0LL;
  *(_OWORD *)Srca = 0LL;
  v11 = 0LL;
  P = 0LL;
  v14 = 0;
  RtlCopyFromUser(&v9, Src, 0x28uLL);
  if ( !Srca[0] )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6379;
    if ( P != v13 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v14 = 0;
    return 3221225485LL;
  }
  if ( !DWORD1(v9) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6386;
    if ( P != v13 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v14 = 0;
    return 3221225485LL;
  }
  if ( *((_QWORD *)&v9 + 1) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6393;
    if ( P != v13 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v14 = 0;
    return 3221225485LL;
  }
  if ( (unsigned int)v9 <= 2 )
    goto LABEL_5;
  if ( (_DWORD)v9 != 3 )
  {
    if ( (_DWORD)v9 != 5 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6431;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v13 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v14 = 0;
      return 3221225485LL;
    }
LABEL_5:
    v1 = 16LL;
    goto LABEL_6;
  }
  v1 = 32LL;
LABEL_6:
  if ( DWORD1(v9) < (unsigned int)v1 )
  {
    WdLogSingleEntry2(2LL, (int)v9, -1073741811LL);
    WdLogGlobalForLineNumber = 6440;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v13 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v14 = 0;
    return 3221225485LL;
  }
  else
  {
    v2 = (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)PagedPoolZeroedArray<unsigned char,4>::AllocateElements(
                                                                     &P,
                                                                     (unsigned int)v1);
    v3 = v2;
    if ( v2 )
    {
      RtlCopyFromUser(v2, Srca[0], v1);
      Current = DXGPROCESS::GetCurrent(v5);
      if ( (_DWORD)v9 )
      {
        switch ( (_DWORD)v9 )
        {
          case 1:
            v7 = ProcessUserPreferredAdapterProperty(Current, v3, 1);
            break;
          case 2:
            v7 = ProcessDefaultHighPerformanceAdapterProperty(Current, v3, 1);
            break;
          case 3:
            v7 = PresentDurationPlaneProperty(Current, (const struct _LUID *)v3, 1);
            break;
          case 5:
            v7 = ProcessBoostedVSyncEligibleProperty(Current, v3, 1);
            break;
          default:
            v8 = -1073741811;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 6510;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_41;
        }
      }
      else
      {
        v7 = ProcessVrrEligibleProperty(Current, v3, 1);
      }
      v8 = v7;
LABEL_41:
      if ( P != v13 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return v8;
    }
    WdLogSingleEntry2(2LL, v1, -1073741801LL);
    WdLogGlobalForLineNumber = 6449;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
      v1,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    if ( P != v13 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v14 = 0;
    return 3221225495LL;
  }
}
