/*
 * XREFs of NtDxgkGetProperties @ 0x140413730
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1401DF50C (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1401DF714 (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x14028FCA0 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z @ 0x14036CA00 (-AllocateElements@-$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x14036CA80 (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x14036CBA4 (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x140424ED4 (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 */

__int64 __fastcall NtDxgkGetProperties(void *Src)
{
  unsigned int v2; // ebx
  struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *Elements; // rax
  struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *v4; // rdi
  size_t v5; // rsi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v8; // ebx
  const wchar_t *v9; // r9
  unsigned int v10; // eax
  __int128 v11; // [rsp+60h] [rbp-48h] BYREF
  void *Srca[2]; // [rsp+70h] [rbp-38h]
  __int64 v13; // [rsp+80h] [rbp-28h]
  PVOID P; // [rsp+88h] [rbp-20h] BYREF
  _BYTE v15[4]; // [rsp+90h] [rbp-18h] BYREF
  int v16; // [rsp+94h] [rbp-14h]

  v11 = 0LL;
  *(_OWORD *)Srca = 0LL;
  v13 = 0LL;
  P = 0LL;
  v16 = 0;
  RtlCopyFromUser(&v11, Src, 0x28uLL);
  if ( !Srca[0] )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6541;
    if ( P != v15 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v16 = 0;
    return 3221225485LL;
  }
  if ( !DWORD1(v11) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6548;
    if ( P != v15 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v16 = 0;
    return 3221225485LL;
  }
  if ( DWORD2(v11) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6555;
    if ( P != v15 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v16 = 0;
    return 3221225485LL;
  }
  if ( (unsigned int)v11 > 2 )
  {
    if ( (_DWORD)v11 == 3 )
    {
      v2 = 32;
      goto LABEL_27;
    }
    if ( (_DWORD)v11 == 4 )
    {
      v2 = 88;
      goto LABEL_27;
    }
    if ( (_DWORD)v11 != 5 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6602;
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
      if ( P != v15 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v16 = 0;
      return 3221225485LL;
    }
  }
  v2 = 16;
LABEL_27:
  if ( DWORD1(v11) < v2 )
  {
    WdLogSingleEntry2(2LL, (int)v11, -1073741811LL);
    WdLogGlobalForLineNumber = 6611;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v15 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v16 = 0;
    return 3221225485LL;
  }
  Elements = (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)PagedPoolZeroedArray<unsigned char,4>::AllocateElements(
                                                                         (__int64 *)&P,
                                                                         v2);
  v4 = Elements;
  v5 = v2;
  if ( !Elements )
  {
    WdLogSingleEntry2(2LL, v2, -1073741801LL);
    WdLogGlobalForLineNumber = 6620;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
      v2,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    if ( P != v15 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v16 = 0;
    return 3221225495LL;
  }
  RtlCopyFromUser(Elements, Srca[0], v2);
  Current = DXGPROCESS::GetCurrent(v6);
  if ( (_DWORD)v11 )
  {
    switch ( (_DWORD)v11 )
    {
      case 1:
        v10 = ProcessUserPreferredAdapterProperty(Current, v4, 0);
        break;
      case 2:
        v10 = ProcessDefaultHighPerformanceAdapterProperty(Current, v4, 0);
        break;
      case 3:
        v10 = PresentDurationPlaneProperty(Current, (const struct _LUID *)v4, 0);
        break;
      case 4:
        if ( *((_DWORD *)v4 + 2) < 0x50u )
        {
          v8 = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 6677;
          v9 = L"Invalid cbSize specified of PresentStatsDwm2 , returning 0x%I64x";
          goto LABEL_47;
        }
        v10 = PresentStatsDwm2Property((struct _KTHREAD **)Current, v4);
        break;
      case 5:
        v10 = ProcessBoostedVSyncEligibleProperty(Current, v4, 0);
        break;
      default:
        v8 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6697;
        v9 = L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x";
LABEL_47:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_48;
    }
  }
  else
  {
    v10 = ProcessVrrEligibleProperty(Current, v4, 0);
  }
  v8 = v10;
  RtlCopyToUser(Srca[0], v4, v5);
LABEL_48:
  if ( P != v15 && P )
    ExFreePoolWithTag(P, 0);
  return v8;
}
