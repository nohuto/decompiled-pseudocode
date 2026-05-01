/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180060068
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18005FDD0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18005FF44 (-MemoryFree@@YAXPEAX@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18005FFB0 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180060250 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18006042C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18006D170 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x18006DFC4 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     ?WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z @ 0x18006E804 (-WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A29D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // r14
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rbx
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // eax
  char v12; // di
  struct wil::details_abi::RawUsageIndex *v13; // r9
  void *v14; // rcx
  void *v15; // rcx
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v17[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19[12]; // [rsp+60h] [rbp-A0h] BYREF
  void *v20; // [rsp+90h] [rbp-70h]
  char v21; // [rsp+99h] [rbp-67h]
  _BYTE v22[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v23[15]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v24[4096]; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v18 = 0LL;
  v7 = this;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v19,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnNtQueryWnfStateData;
    v17[0] = 0;
    v16 = 4096;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (__int64)NtDllProcedureAddress) != 0) )
    {
      v10 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, _DWORD *, _BYTE *, int *))NtDllProcedureAddress)(
              v7,
              0LL,
              0LL,
              v17,
              v24,
              &v16);
    }
    else
    {
      v10 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v10, v9);
    if ( v10 )
    {
      v11 = 0;
      v16 = 0;
      v17[0] = 0;
    }
    else
    {
      v11 = v16;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v19, v24, v11, 0x1000uLL);
    if ( v21 )
      break;
    *(_QWORD *)&v17[1] = 0LL;
    v23[0] = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v23[1] = &v17[1];
    v23[2] = &v18;
    v23[3] = v19;
    v23[13] = v23;
    v12 = wil::details_abi::RawUsageIndex::Iterate(a3, v22);
    if ( wil::details_abi::WriteWnfUsageBuffer(v7, (const struct __WIL__WNF_STATE_NAME *)v17[0], (unsigned int)v19, v13) )
    {
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v18 = *(_QWORD *)&v17[1];
    }
    else
    {
      ++v4;
      v12 = 0;
    }
    v14 = v20;
    v20 = 0LL;
    if ( v14 )
      MemoryFree(v14);
    if ( v12 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v15 = v20;
  v20 = 0LL;
  if ( v15 )
    MemoryFree(v15);
}
