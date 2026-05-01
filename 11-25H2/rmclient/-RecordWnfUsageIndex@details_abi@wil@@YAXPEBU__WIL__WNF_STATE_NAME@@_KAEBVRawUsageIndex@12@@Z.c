/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007FEC
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180007ED0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180006258 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180008360 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800083C0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x180017CFC (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180017D74 (wil_details_NtUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18001C140 (_alloca_probe.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v4; // r12
  unsigned __int64 v5; // r15
  wil::details_abi *v7; // rdi
  unsigned int v8; // edx
  char v9; // cl
  __int64 v10; // rax
  unsigned int WnfStateData; // ebx
  int v12; // edx
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
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+20h] [rbp-E0h]
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+52h] [rbp-AEh]
  char v33; // [rsp+54h] [rbp-ACh]
  __int16 v34; // [rsp+56h] [rbp-AAh]
  char v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v37; // [rsp+68h] [rbp-98h]
  __int128 v38; // [rsp+70h] [rbp-90h]
  wil::details *v39; // [rsp+80h] [rbp-80h]
  __int16 v40; // [rsp+88h] [rbp-78h]
  char v41; // [rsp+8Ah] [rbp-76h]
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v45; // [rsp+B0h] [rbp-50h]
  _BYTE v46[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v47; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v49; // [rsp+E0h] [rbp-20h]
  void ***v50; // [rsp+130h] [rbp+30h]
  unsigned __int16 v51; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int16 v52; // [rsp+142h] [rbp+42h]
  __int16 v53; // [rsp+144h] [rbp+44h]
  __int16 v54; // [rsp+146h] [rbp+46h]
  char v55; // [rsp+148h] [rbp+48h]
  char v56; // [rsp+149h] [rbp+49h]
  _BYTE v57[4086]; // [rsp+14Ah] [rbp+4Ah] BYREF
  __int64 v58; // [rsp+1140h] [rbp+1040h] BYREF

  v4 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v5 = 0LL;
  v43 = 0LL;
  v7 = this;
  while ( 1 )
  {
    v8 = (unsigned __int16)a3[3];
    v9 = *((_BYTE *)a3 + 8);
    v31 = *a3;
    v32 = a3[1];
    v33 = *((_BYTE *)a3 + 4);
    v34 = v8;
    v35 = v9;
    if ( (_WORD)v8 )
    {
      v10 = v8;
      if ( v9 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( v9 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v36 = v10;
    }
    else
    {
      v36 = 0LL;
    }
    v37 = 0LL;
    v39 = 0LL;
    v38 = 0LL;
    v40 = 0;
    v41 = 0;
    v30 = 0;
    v29 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData(
                     (_DWORD)v7,
                     v8,
                     (_DWORD)a3,
                     (unsigned int)&v30,
                     (__int64)&v51,
                     (__int64)&v29);
    wil::details::NtStatusToHr((wil::details *)WnfStateData, v12);
    if ( WnfStateData )
    {
      v15 = 0;
      v30 = 0;
      v29 = 0;
    }
    else
    {
      v15 = v29;
    }
    v16 = v15;
    v17 = 0LL;
    v18 = v39;
    v39 = 0LL;
    if ( v18 )
    {
      wil::details::FreeProcessHeap(v18, v13);
      v17 = v39;
    }
    LOBYTE(v14) = v35;
    v37 = &v51;
    *((_QWORD *)&v38 + 1) = &v58;
    *(_QWORD *)&v38 = (char *)&v51 + v16;
    v19 = 0;
    HIBYTE(v40) = 0;
    if ( v16 < 0xA )
      goto LABEL_12;
    v20 = v51;
    if ( v51 || v52 > v31 )
      v19 = 1;
    HIBYTE(v40) = v19;
    if ( v51 || v52 != v31 || v53 != v32 || v55 != v33 || v54 != v34 || v56 != v35 )
    {
LABEL_12:
      v20 = (unsigned __int64)v57;
      v51 = 0;
      *(_QWORD *)&v38 = v57;
      v52 = v31;
      v53 = v32;
      v55 = v33;
      v54 = v34;
      v56 = v35;
    }
    if ( v19 )
      break;
    v42 = 0LL;
    *(_QWORD *)&v44 = &v42;
    *((_QWORD *)&v44 + 1) = &v43;
    v45 = &v31;
    v47 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v50 = &v47;
    v48 = v44;
    v49 = &v31;
    v22 = wil::details_abi::RawUsageIndex::Iterate(a3, v46, v31, v14);
    if ( (_BYTE)v40 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v7, (_DWORD)v37, (int)v38 - (int)v37, v23, v27, v30, 1);
      if ( updated == -1073741823 )
      {
        ++v5;
        v22 = 0;
        goto LABEL_16;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, (_DWORD)v37, v38 - (_DWORD)v37, v26, v28, 0, 0);
    }
    v7 = (wil::details_abi *)((char *)v7 + 8);
    v43 = v42;
LABEL_16:
    v24 = v39;
    v39 = 0LL;
    if ( v24 )
      wil::details::FreeProcessHeap(v24, v21);
    if ( v22 || v7 >= v4 || v5 >= 0x32 )
      return;
  }
  v39 = 0LL;
  if ( v17 )
    wil::details::FreeProcessHeap(v17, (void *)v20);
}
