/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180071FD8
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800583F8 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1800721B0 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180072218 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180072410 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180072AD4 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ??$?0V_lambda_8db0ce862824541f40dfb767113f1e28_@@X@?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@V_lambda_8db0ce862824541f40dfb767113f1e28_@@@Z @ 0x180072BEC (--$-0V_lambda_8db0ce862824541f40dfb767113f1e28_@@X@-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@V_l.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1800954E0 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180098240 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z @ 0x1800995C0 (-WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800EB0A0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rbx
  wil::details_abi *v6; // r15
  unsigned __int64 v7; // r14
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rax
  char v13; // di
  struct wil::details_abi::RawUsageIndex *v14; // r9
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  struct __WIL__WNF_STATE_NAME *v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v24[12]; // [rsp+80h] [rbp-80h] BYREF
  void *v25; // [rsp+B0h] [rbp-50h]
  char v26; // [rsp+B9h] [rbp-47h]
  _BYTE v27[128]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v28[4096]; // [rsp+140h] [rbp+40h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    LOBYTE(v18) = *((_BYTE *)a3 + 8);
    LOWORD(v17) = a3[3];
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    wil::details_abi::RawUsageIndex::RawUsageIndex(v24, *a3, a3[1], a4, v17, v18);
    LODWORD(v19) = 0;
    v20 = 4096;
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnNtQueryWnfStateData;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (__int64)NtDllProcedureAddress) != 0) )
    {
      v10 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, struct __WIL__WNF_STATE_NAME **, _BYTE *, int *))NtDllProcedureAddress)(
              v5,
              0LL,
              0LL,
              &v19,
              v28,
              &v20);
    }
    else
    {
      v10 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v10, v9);
    if ( v10 )
    {
      v11 = 0;
      v20 = 0;
      LODWORD(v19) = 0;
    }
    else
    {
      v11 = v20;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v24, v28, v11, 0x1000uLL);
    if ( v26 )
      break;
    v21 = 0LL;
    v23[0] = &v21;
    v23[1] = &v22;
    v23[2] = v24;
    v12 = wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(
            v27,
            v23);
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, v12);
    if ( wil::details_abi::WriteWnfUsageBuffer(
           v5,
           (const struct __WIL__WNF_STATE_NAME *)(unsigned int)v19,
           (unsigned int)v24,
           v14) )
    {
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v22 = v21;
    }
    else
    {
      ++v7;
      v13 = 0;
    }
    v15 = v25;
    v25 = 0LL;
    if ( v15 )
      MemoryFree(v15);
    if ( v13 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v16 = v25;
  v25 = 0LL;
  if ( v16 )
    MemoryFree(v16);
}
