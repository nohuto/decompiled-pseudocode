/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@_J4444_N@Z @ 0x1800D79E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800476A0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800D36F8 (--$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendInputReport(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        __int128 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rcx
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  int *v44; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v45[64]; // [rsp+48h] [rbp-B8h]
  int v46[12]; // [rsp+90h] [rbp-70h] BYREF
  char v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+418h] [rbp+318h]
  __int64 v49; // [rsp+420h] [rbp+320h]
  __int64 v50; // [rsp+428h] [rbp+328h]
  char v51; // [rsp+430h] [rbp+330h]
  char v52; // [rsp+438h] [rbp+338h] BYREF
  __int128 v53; // [rsp+920h] [rbp+820h]
  __int128 v54; // [rsp+930h] [rbp+830h]
  __int128 v55; // [rsp+940h] [rbp+840h]
  __int128 v56; // [rsp+950h] [rbp+850h]
  __int128 v57; // [rsp+BD0h] [rbp+AD0h]
  __int128 v58; // [rsp+BE0h] [rbp+AE0h]
  __int128 v59; // [rsp+BF0h] [rbp+AF0h]
  __int128 v60; // [rsp+C00h] [rbp+B00h]
  wil::details::in1diag3 *retaddr; // [rsp+C98h] [rbp+B98h]

  v42 = a3;
  v43 = a4;
  memset_0(v46, 0, 0xBC0uLL);
  *(_DWORD *)v45 = 1065353216;
  *(_DWORD *)&v45[20] = 1065353216;
  *(_OWORD *)&v45[4] = 0LL;
  *(_DWORD *)&v45[40] = 1065353216;
  *(_OWORD *)&v45[24] = 0LL;
  *(_DWORD *)&v45[60] = 1065353216;
  *(_OWORD *)&v45[44] = 0LL;
  v46[6] = 3008;
  v57 = *(_OWORD *)v45;
  v58 = *(_OWORD *)&v45[16];
  v59 = *(_OWORD *)&v45[32];
  v60 = *(_OWORD *)&v45[48];
  v17 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a2, a3, 512, a4, (__int64)v46);
  if ( v17 < 0 )
  {
    v18 = 757LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v17);
    return (unsigned int)v17;
  }
  v20 = a10;
  v48 = a7;
  v49 = a8;
  v21 = a9;
  if ( a9 <= a10 )
    v21 = a10;
  if ( v21 <= a11 )
  {
    v50 = a11;
  }
  else
  {
    if ( a9 > a10 )
      v20 = a9;
    v50 = v20;
  }
  v22 = &v52;
  v51 = a12;
  v23 = 9LL;
  v47 = 1;
  do
  {
    v24 = a5[1];
    *(_OWORD *)v22 = *a5;
    v25 = a5[2];
    *((_OWORD *)v22 + 1) = v24;
    v26 = a5[3];
    *((_OWORD *)v22 + 2) = v25;
    v27 = a5[4];
    *((_OWORD *)v22 + 3) = v26;
    v28 = a5[5];
    *((_OWORD *)v22 + 4) = v27;
    v29 = a5[6];
    *((_OWORD *)v22 + 5) = v28;
    v30 = a5[7];
    a5 += 8;
    *((_OWORD *)v22 + 6) = v29;
    v22 += 128;
    *((_OWORD *)v22 - 1) = v30;
    --v23;
  }
  while ( v23 );
  v31 = *((_QWORD *)a5 + 12);
  v32 = a5[1];
  *(_OWORD *)v22 = *a5;
  v33 = a5[2];
  *((_OWORD *)v22 + 1) = v32;
  v34 = a5[3];
  *((_OWORD *)v22 + 2) = v33;
  v35 = a5[4];
  *((_OWORD *)v22 + 3) = v34;
  v36 = a5[5];
  *((_OWORD *)v22 + 4) = v35;
  v37 = *a6;
  *((_OWORD *)v22 + 5) = v36;
  *((_QWORD *)v22 + 12) = v31;
  v38 = a6[1];
  v39 = *(_QWORD *)(a1 + 16);
  v53 = v37;
  v40 = a6[2];
  v54 = v38;
  v41 = a6[3];
  v55 = v40;
  v56 = v41;
  v17 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v39 + 24LL))(v39, v46, a11);
  if ( v17 < 0 )
  {
    v18 = 769LL;
    goto LABEL_3;
  }
  v44 = v46;
  RawInputProvidersContinuousTracing::HandInputReportProcessed<unsigned long &,enum MPCGestureType &,LegacyInputInfo *>(
    (unsigned int *)&v43,
    (unsigned int *)&v42,
    &v44);
  return 0LL;
}
