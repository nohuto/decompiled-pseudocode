/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180129220
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180129D44 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800E6844 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1801294A8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1801295C0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x18028DDB8 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1802BE44C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1802DF384 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rbx
  wil::details_abi *v6; // r15
  unsigned __int64 v7; // r14
  char v8; // r8
  unsigned int v9; // r9d
  char v10; // dl
  __int16 v11; // cx
  __int64 v12; // rax
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // eax
  char v17; // di
  int v18; // r9d
  int updated; // eax
  int v20; // r9d
  void *v21; // rcx
  void *v22; // rcx
  _BYTE *v23; // [rsp+20h] [rbp-E0h]
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  _WORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v27; // [rsp+54h] [rbp-ACh]
  __int16 v28; // [rsp+56h] [rbp-AAh]
  char v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int128 v32; // [rsp+70h] [rbp-90h]
  void *v33; // [rsp+80h] [rbp-80h]
  __int16 v34; // [rsp+88h] [rbp-78h]
  char v35; // [rsp+8Ah] [rbp-76h]
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-60h]
  _WORD *v39; // [rsp+B0h] [rbp-50h]
  _BYTE v40[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v41; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-30h]
  _WORD *v43; // [rsp+E0h] [rbp-20h]
  void ***v44; // [rsp+130h] [rbp+30h]
  _BYTE v45[4096]; // [rsp+140h] [rbp+40h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v37 = 0LL;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a3 + 8);
    v9 = *(unsigned __int16 *)(a3 + 6);
    v10 = *(_BYTE *)(a3 + 4);
    v11 = *(_WORD *)(a3 + 2);
    v26[0] = *(_WORD *)a3;
    v26[1] = v11;
    v27 = v10;
    v28 = v9;
    v29 = v8;
    if ( (_WORD)v9 )
    {
      v12 = v9;
      if ( v8 == 1 )
      {
        v12 = v9 + 2LL;
      }
      else if ( v8 == 2 )
      {
        v12 = v9 + 4LL;
      }
      v30 = v12;
    }
    else
    {
      v30 = 0LL;
    }
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    v35 = 0;
    v24 = 0;
    v25 = 4096;
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnNtQueryWnfStateData;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (__int64)NtDllProcedureAddress) != 0) )
    {
      v23 = v45;
      v15 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, int *))NtDllProcedureAddress)(
              v5,
              0LL,
              0LL,
              &v24);
    }
    else
    {
      v15 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v15, v14);
    if ( v15 )
    {
      v16 = 0;
      v25 = 0;
      v24 = 0;
    }
    else
    {
      v16 = v25;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v26, v45, v16, 0x1000uLL);
    if ( HIBYTE(v34) )
      break;
    v36 = 0LL;
    *(_QWORD *)&v38 = &v36;
    *((_QWORD *)&v38 + 1) = &v37;
    v39 = v26;
    v41 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v42 = v38;
    v43 = v26;
    v44 = &v41;
    v17 = wil::details_abi::RawUsageIndex::Iterate(a3, v40);
    if ( !(_BYTE)v34 )
      goto LABEL_22;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v31, (int)v32 - (int)v31, v18, (_DWORD)v23, v24, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v31, v32 - v31, v20, (_DWORD)v23, 0, 0);
LABEL_22:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v37 = v36;
      goto LABEL_23;
    }
    ++v7;
    v17 = 0;
LABEL_23:
    v21 = v33;
    v33 = 0LL;
    if ( v21 )
      MemoryFree(v21);
    if ( v17 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v22 = v33;
  v33 = 0LL;
  if ( v22 )
    MemoryFree(v22);
}
