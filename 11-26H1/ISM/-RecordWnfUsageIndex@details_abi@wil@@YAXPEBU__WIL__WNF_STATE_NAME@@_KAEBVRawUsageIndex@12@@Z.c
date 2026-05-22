/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18009FB10
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180080620 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18006F288 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18008E898 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180095C24 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18009EDB4 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800A042C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x1800A15A0 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1800A1618 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1801D3D60 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rdi
  wil::details_abi *v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // edx
  int v9; // r8d
  unsigned int WnfStateData; // ebx
  unsigned int v11; // eax
  void *v12; // rdx
  void *v13; // rdx
  char v14; // bl
  int v15; // r9d
  int updated; // eax
  int v17; // r9d
  wil::details *v18; // rcx
  wil::details *v19; // rcx
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v26[24]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+80h] [rbp-80h]
  wil::details *v29; // [rsp+90h] [rbp-70h]
  char v30; // [rsp+98h] [rbp-68h]
  char v31; // [rsp+99h] [rbp-67h]
  _BYTE v32[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v33[15]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v34[4096]; // [rsp+120h] [rbp+20h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v26,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v22 = 0;
    v23 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData((_DWORD)v5, v8, v9, (unsigned int)&v22, (__int64)v34, (__int64)&v23);
    wil::details::NtStatusToHr((wil::details *)WnfStateData);
    if ( WnfStateData )
    {
      v11 = 0;
      v23 = 0;
      v22 = 0;
    }
    else
    {
      v11 = v23;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v26, v34, v11, 0x1000uLL);
    if ( v31 )
      break;
    v24 = 0LL;
    v33[0] = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v33[1] = &v24;
    v33[2] = &v25;
    v33[3] = v26;
    v33[13] = v33;
    v14 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v32);
    if ( v30 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v27, v28 - (int)v27, v15, v20, v22, 1);
      if ( updated == -1073741823 )
      {
        ++v7;
        v14 = 0;
        goto LABEL_11;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v27, v28 - v27, v17, v21, 0, 0);
    }
    v5 = (wil::details_abi *)((char *)v5 + 8);
    v25 = v24;
LABEL_11:
    v18 = v29;
    v29 = 0LL;
    if ( v18 )
      wil::details::FreeProcessHeap(v18, v13);
    if ( v14 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v19 = v29;
  v29 = 0LL;
  if ( v19 )
    wil::details::FreeProcessHeap(v19, v12);
}
