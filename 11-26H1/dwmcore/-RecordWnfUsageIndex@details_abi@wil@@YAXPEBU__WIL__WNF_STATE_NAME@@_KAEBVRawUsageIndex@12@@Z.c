/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1801652E0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180165218 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180164FF0 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1801654C8 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180165888 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180166234 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180200F00 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180222F74 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z @ 0x1802244FC (-WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // r14
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rbx
  __int64 (*NtDllProcedureAddress)(void); // rax
  unsigned int v9; // edi
  unsigned int v10; // eax
  void *v11; // rdx
  char v12; // di
  struct wil::details_abi::RawUsageIndex *v13; // r9
  void *v14; // rdx
  wil::details *v15; // rcx
  wil::details *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v22[12]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details *v23; // [rsp+90h] [rbp-70h]
  char v24; // [rsp+99h] [rbp-67h]
  _BYTE v25[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v26[15]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v27[4096]; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v21 = 0LL;
  v7 = this;
  while ( 1 )
  {
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    LOBYTE(v18) = *((_BYTE *)a3 + 8);
    LOWORD(v17) = a3[3];
    wil::details_abi::RawUsageIndex::RawUsageIndex(v22, *a3, a3[1], a4, v17, v18);
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnNtQueryWnfStateData;
    v20[0] = 0;
    v19 = 4096;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (__int64)NtDllProcedureAddress) != 0) )
    {
      v9 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, _DWORD *, _BYTE *, int *))NtDllProcedureAddress)(
             v7,
             0LL,
             0LL,
             v20,
             v27,
             &v19);
    }
    else
    {
      v9 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v9);
    if ( v9 )
    {
      v10 = 0;
      v19 = 0;
      v20[0] = 0;
    }
    else
    {
      v10 = v19;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v22, v27, v10, 0x1000uLL);
    if ( v24 )
      break;
    *(_QWORD *)&v20[1] = 0LL;
    v26[0] = wistd::__function::Z::$$A6A_NPEAX131I::Z::__func<`wil::details_abi::RecordWnfUsageIndex'::`4'::_lambda_1_,AXPEBU__WIL__WNF_STATE_NAME,unsigned __int64,wil::details_abi::RawUsageIndex const &>::`vftable';
    v26[1] = &v20[1];
    v26[2] = &v21;
    v26[3] = v22;
    v26[13] = v26;
    v12 = wil::details_abi::RawUsageIndex::Iterate(a3, v25);
    if ( wil::details_abi::WriteWnfUsageBuffer(v7, (const struct __WIL__WNF_STATE_NAME *)v20[0], (unsigned int)v22, v13) )
    {
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v21 = *(_QWORD *)&v20[1];
    }
    else
    {
      ++v4;
      v12 = 0;
    }
    v15 = v23;
    v23 = 0LL;
    if ( v15 )
      wil::details::FreeProcessHeap(v15, v14);
    if ( v12 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v16 = v23;
  v23 = 0LL;
  if ( v16 )
    wil::details::FreeProcessHeap(v16, v11);
}
