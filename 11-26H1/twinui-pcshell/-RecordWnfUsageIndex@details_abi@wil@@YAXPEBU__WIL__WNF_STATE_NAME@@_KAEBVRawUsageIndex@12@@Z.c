/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180115240
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180115E74 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800EBDE0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1801154B4 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1801155CC (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180115E40 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1802871C0 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1802B569C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1802D808C (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  char v8; // dl
  __int16 v9; // cx
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // eax
  char v14; // di
  int v15; // r9d
  int updated; // eax
  int v17; // r9d
  void *v18; // rcx
  void *v19; // rcx
  _BYTE *v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h]
  _WORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+54h] [rbp-ACh]
  __int16 v25; // [rsp+56h] [rbp-AAh]
  char v26; // [rsp+58h] [rbp-A8h]
  unsigned __int64 Size; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int128 v29; // [rsp+70h] [rbp-90h]
  void *v30; // [rsp+80h] [rbp-80h]
  __int16 v31; // [rsp+88h] [rbp-78h]
  char v32; // [rsp+8Ah] [rbp-76h]
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  __int16 v35; // [rsp+A0h] [rbp-60h] BYREF
  char v36; // [rsp+A2h] [rbp-5Eh]
  int v37; // [rsp+A4h] [rbp-5Ch]
  __int16 v38; // [rsp+A8h] [rbp-58h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  _BYTE v40[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v41[15]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v42[4096]; // [rsp+140h] [rbp+40h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v34 = 0LL;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a3 + 8);
    v9 = *(_WORD *)(a3 + 6);
    v23[0] = *(_WORD *)a3;
    v23[1] = *(_WORD *)(a3 + 2);
    v24 = *(_BYTE *)(a3 + 4);
    v25 = v9;
    v26 = v8;
    if ( v9 )
    {
      v35 = v9;
      v36 = v8;
      v37 = 0;
      v38 = 0;
      v39 = 0LL;
      Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v35);
    }
    else
    {
      Size = 0LL;
    }
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    v21 = 0;
    v22 = 4096;
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnNtQueryWnfStateData;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (__int64)NtDllProcedureAddress) != 0) )
    {
      v20 = v42;
      v12 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, int *))NtDllProcedureAddress)(
              v5,
              0LL,
              0LL,
              &v21);
    }
    else
    {
      v12 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v12, v11);
    if ( v12 )
    {
      v13 = 0;
      v22 = 0;
      v21 = 0;
    }
    else
    {
      v13 = v22;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v23, v42, v13, 0x1000uLL);
    if ( HIBYTE(v31) )
      break;
    v33 = 0LL;
    v41[0] = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v41[1] = &v33;
    v41[2] = &v34;
    v41[3] = v23;
    v41[13] = v41;
    v14 = wil::details_abi::RawUsageIndex::Iterate(a3, v40);
    if ( (_BYTE)v31 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v28, (int)v29 - (int)v28, v15, (_DWORD)v20, v21, 1);
      if ( updated == -1073741823 )
      {
        ++v7;
        v14 = 0;
        goto LABEL_18;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v28, v29 - v28, v17, (_DWORD)v20, 0, 0);
    }
    v5 = (wil::details_abi *)((char *)v5 + 8);
    v34 = v33;
LABEL_18:
    v18 = v30;
    v30 = 0LL;
    if ( v18 )
      MemoryFree(v18);
    if ( v14 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v19 = v30;
  v30 = 0LL;
  if ( v19 )
    MemoryFree(v19);
}
