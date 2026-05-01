/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180006768
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006650 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180006610 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180006AEC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180006B50 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180007C88 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x18001212C (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180016B24 (wil_details_NtUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18001A6B0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v4; // r12
  unsigned __int64 v5; // r15
  wil::details_abi *v7; // rdi
  unsigned __int16 v8; // cx
  char v9; // al
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v11; // edx
  unsigned int v12; // ebx
  void *v13; // rdx
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  wil::details *v17; // rcx
  wil::details *v18; // rax
  char v19; // al
  unsigned __int64 v20; // rdx
  void *v21; // rdx
  char v22; // bl
  int v23; // r9d
  wil::details *v24; // rcx
  int updated; // eax
  int v26; // r9d
  unsigned __int16 *v27; // [rsp+20h] [rbp-E0h]
  _DWORD v28[3]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v30; // [rsp+52h] [rbp-AEh]
  char v31; // [rsp+54h] [rbp-ACh]
  unsigned __int16 v32; // [rsp+56h] [rbp-AAh]
  char v33; // [rsp+58h] [rbp-A8h]
  __int64 Size; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v35; // [rsp+68h] [rbp-98h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  wil::details *v37; // [rsp+80h] [rbp-80h]
  __int16 v38; // [rsp+88h] [rbp-78h]
  char v39; // [rsp+8Ah] [rbp-76h]
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v42; // [rsp+A0h] [rbp-60h] BYREF
  char v43; // [rsp+A2h] [rbp-5Eh]
  int v44; // [rsp+A4h] [rbp-5Ch]
  __int16 v45; // [rsp+A8h] [rbp-58h]
  __int128 v46; // [rsp+B0h] [rbp-50h]
  _BYTE v47[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v48[15]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 v49; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int16 v50; // [rsp+142h] [rbp+42h]
  unsigned __int16 v51; // [rsp+144h] [rbp+44h]
  unsigned __int16 v52; // [rsp+146h] [rbp+46h]
  char v53; // [rsp+148h] [rbp+48h]
  char v54; // [rsp+149h] [rbp+49h]
  _BYTE v55[4086]; // [rsp+14Ah] [rbp+4Ah] BYREF
  __int64 v56; // [rsp+1140h] [rbp+1040h] BYREF

  v4 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v5 = 0LL;
  v41 = 0LL;
  v7 = this;
  while ( 1 )
  {
    v8 = a3[3];
    v29 = *a3;
    v30 = a3[1];
    v31 = *((_BYTE *)a3 + 4);
    v9 = *((_BYTE *)a3 + 8);
    v33 = v9;
    v32 = v8;
    if ( v8 )
    {
      v42 = v8;
      v43 = v9;
      v46 = 0LL;
      v44 = 0;
      v45 = 0;
      Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v42);
    }
    else
    {
      Size = 0LL;
    }
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnNtQueryWnfStateData;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0;
    v39 = 0;
    v28[0] = 0;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (__int64)NtDllProcedureAddress) != 0) )
    {
      v27 = &v49;
      v12 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, _DWORD *))NtDllProcedureAddress)(
              v7,
              0LL,
              0LL,
              v28);
    }
    else
    {
      v12 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v12, v11);
    if ( v12 )
    {
      v15 = 0;
      v28[0] = 0;
    }
    else
    {
      v15 = 4096;
    }
    v16 = v15;
    v17 = 0LL;
    v18 = v37;
    v37 = 0LL;
    if ( v18 )
    {
      wil::details::FreeProcessHeap(v18, v13);
      v17 = v37;
    }
    LOBYTE(v14) = v33;
    v35 = &v49;
    *(_QWORD *)&v36 = (char *)&v49 + v16;
    *((_QWORD *)&v36 + 1) = &v56;
    v19 = 0;
    HIBYTE(v38) = 0;
    if ( v16 < 0xA )
      goto LABEL_26;
    v20 = v49;
    if ( v49 || v50 > v29 )
    {
      v19 = 1;
      HIBYTE(v38) = 1;
    }
    if ( v49 || v50 != v29 || v51 != v30 || v53 != v31 || v52 != v32 || v54 != v33 )
    {
LABEL_26:
      v20 = (unsigned __int64)v55;
      v49 = 0;
      *(_QWORD *)&v36 = v55;
      v50 = v29;
      v51 = v30;
      v53 = v31;
      v52 = v32;
      v54 = v33;
    }
    if ( v19 )
      break;
    v40 = 0LL;
    v48[0] = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v48[1] = &v40;
    v48[2] = &v41;
    v48[3] = &v29;
    v48[13] = v48;
    v22 = wil::details_abi::RawUsageIndex::Iterate(a3, v47, v29, v14);
    if ( (_BYTE)v38 )
    {
      updated = wil_details_NtUpdateWnfStateData(
                  (_DWORD)v7,
                  (_DWORD)v35,
                  (int)v36 - (int)v35,
                  v23,
                  (_DWORD)v27,
                  v28[0],
                  1);
      if ( updated == -1073741823 )
      {
        ++v5;
        v22 = 0;
        goto LABEL_22;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, (_DWORD)v35, v36 - (_DWORD)v35, v26, (_DWORD)v27, 0, 0);
    }
    v7 = (wil::details_abi *)((char *)v7 + 8);
    v41 = v40;
LABEL_22:
    v24 = v37;
    v37 = 0LL;
    if ( v24 )
      wil::details::FreeProcessHeap(v24, v21);
    if ( v22 || v7 >= v4 || v5 >= 0x32 )
      return;
  }
  v37 = 0LL;
  if ( v17 )
    wil::details::FreeProcessHeap(v17, (void *)v20);
}
