/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180034548
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180033DA0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18002AF74 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180031B48 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180033368 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180034C6C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x180036840 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1800368B8 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x18004B7F0 (_alloca_probe.c)
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
  char v12; // bl
  int v13; // r9d
  int updated; // eax
  int v15; // r9d
  void *v16; // rcx
  void *v17; // rcx
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h]
  void *v27; // [rsp+90h] [rbp-70h]
  char v28; // [rsp+98h] [rbp-68h]
  char v29; // [rsp+99h] [rbp-67h]
  _BYTE v30[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v31[15]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v32[4096]; // [rsp+120h] [rbp+20h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v24,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v20 = 0;
    v21 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData((_DWORD)v5, v8, v9, (unsigned int)&v20, (__int64)v32, (__int64)&v21);
    wil::details::NtStatusToHr((wil::details *)WnfStateData);
    if ( WnfStateData )
    {
      v11 = 0;
      v21 = 0;
      v20 = 0;
    }
    else
    {
      v11 = v21;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v24, v32, v11, 0x1000uLL);
    if ( v29 )
      break;
    v22 = 0LL;
    v31[0] = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v31[1] = &v22;
    v31[2] = &v23;
    v31[3] = v24;
    v31[13] = v31;
    v12 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v30);
    if ( v28 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v25, v26 - (int)v25, v13, v18, v20, 1);
      if ( updated == -1073741823 )
      {
        ++v7;
        v12 = 0;
        goto LABEL_11;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v25, v26 - v25, v15, v19, 0, 0);
    }
    v5 = (wil::details_abi *)((char *)v5 + 8);
    v23 = v22;
LABEL_11:
    v16 = v27;
    v27 = 0LL;
    if ( v16 )
      operator delete(v16);
    if ( v12 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v17 = v27;
  v27 = 0LL;
  if ( v17 )
    operator delete(v17);
}
