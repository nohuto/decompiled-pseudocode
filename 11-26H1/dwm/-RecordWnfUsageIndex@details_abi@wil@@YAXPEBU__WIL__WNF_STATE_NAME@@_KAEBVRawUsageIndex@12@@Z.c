/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x14000A2D4
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x140009BE4 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     ??$?0V_lambda_1_@?3??RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@23@@Z@X@?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@V_lambda_1_@?3??RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@45@@Z@@Z @ 0x140006314 (--$-0V_lambda_1_@-3--RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRa.c)
 *     ??0_lambda_1_@?3??RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@23@@Z@QEAA@AEA_K3AEAV523@@Z @ 0x140006C30 (--0_lambda_1_@-3--RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUs.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x140006C74 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1400081D4 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x140008E5C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1400097AC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x14000AC44 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x14000C1AC (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x14000C224 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x14000F7B0 (_alloca_probe.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rdi
  int v8; // edx
  int v9; // r8d
  unsigned int WnfStateData; // ebx
  unsigned int v11; // eax
  void *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  void *v16; // rdx
  char v17; // bl
  int v18; // r9d
  int updated; // eax
  int v20; // r9d
  wil::details *v21; // rcx
  wil::details *v22; // rcx
  int v23; // [rsp+20h] [rbp-E0h]
  int v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[24]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+80h] [rbp-80h]
  wil::details *v32; // [rsp+90h] [rbp-70h]
  char v33; // [rsp+98h] [rbp-68h]
  char v34; // [rsp+99h] [rbp-67h]
  __int128 v35; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  _QWORD v37[3]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v38[120]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v39[4096]; // [rsp+150h] [rbp+50h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v28 = 0LL;
  v7 = this;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v29,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v26 = 0;
    v25 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData((_DWORD)v7, v8, v9, (unsigned int)&v26, (__int64)v39, (__int64)&v25);
    wil::details::NtStatusToHr((wil::details *)WnfStateData);
    if ( WnfStateData )
    {
      v11 = 0;
      v25 = 0;
      v26 = 0;
    }
    else
    {
      v11 = v25;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v29, v39, v11, 0x1000uLL);
    if ( v34 )
      break;
    v27 = 0LL;
    v13 = `wil::details_abi::RecordWnfUsageIndex'::`4'::_lambda_1_::_lambda_1_(
            v37,
            (__int64)&v27,
            (__int64)&v28,
            (__int64)v29);
    v14 = v13[2];
    v35 = *(_OWORD *)v13;
    v36 = v14;
    v15 = wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::X::Z::Z(
            (__int64)v38,
            (__int64)&v35);
    v17 = wil::details_abi::RawUsageIndex::Iterate(a3, v15);
    if ( v33 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v7, v30, v31 - (int)v30, v18, v23, v26, 1);
      if ( updated == -1073741823 )
      {
        ++v4;
        v17 = 0;
        goto LABEL_11;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, v30, v31 - v30, v20, v24, 0, 0);
    }
    v7 = (wil::details_abi *)((char *)v7 + 8);
    v28 = v27;
LABEL_11:
    v21 = v32;
    v32 = 0LL;
    if ( v21 )
      wil::details::FreeProcessHeap(v21, v16);
    if ( v17 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v22 = v32;
  v32 = 0LL;
  if ( v22 )
    wil::details::FreeProcessHeap(v22, v12);
}
