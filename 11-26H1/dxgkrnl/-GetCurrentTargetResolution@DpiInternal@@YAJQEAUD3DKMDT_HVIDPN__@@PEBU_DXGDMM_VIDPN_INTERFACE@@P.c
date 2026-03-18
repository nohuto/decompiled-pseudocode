/*
 * XREFs of ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x140404E74
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E4CF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiInternal::GetCurrentTargetResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4,
        struct _D3DKMDT_2DREGION *a5)
{
  __int64 (__fastcall *v5)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v13; // rdi
  void (__fastcall *v14)(DpiInternal *, __int64); // r15
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // ecx
  char v19; // cl
  bool v20; // zf
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  int v24; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+40h] BYREF

  v5 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 3);
  v9 = *((unsigned int *)a3 + 1);
  v25 = 0LL;
  v21 = 0LL;
  v10 = v5(this, v9, &v21, &v25);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = v21;
    v14 = (void (__fastcall *)(DpiInternal *, __int64))*((_QWORD *)a2 + 4);
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, int *))(v25 + 24))(v21, &v22, &v23, &v24);
    v16 = v15;
    if ( v15 < 0 || v15 == 1075708679 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1130;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (status = 0x%I64x)",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v17 = v22;
      *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v22 + 20);
      v18 = (int)(*(_DWORD *)(v17 + 56) << 29) >> 29;
      if ( v18 == 2 || (v20 = v18 == 3, v19 = 0, v20) )
        v19 = 1;
      LOBYTE(a5->cx) = v19;
      (*(void (__fastcall **)(__int64))(v25 + 32))(v21);
    }
    if ( v13 )
      v14(this, v13);
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1111;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireTargetModeSet. (status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v11;
  }
}
