/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000B1F0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000A714 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180006C38 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180009FD8 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000A5D8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000BD54 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x18000EA7C (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18000EB24 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x180011390 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v4; // r13
  unsigned __int64 v5; // r12
  wil::details_abi *v7; // rsi
  unsigned int v8; // edx
  char v9; // cl
  __int64 v10; // rax
  wil::details *WnfStateData; // rbx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // r14d
  int v15; // ebx
  __int64 v16; // r15
  int v17; // r9d
  char v18; // bl
  int updated; // eax
  int v20; // r9d
  void *v21; // r14
  HANDLE ProcessHeap; // rax
  void *v23; // rbx
  HANDLE v24; // rax
  __int64 *v25; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+64h] [rbp-9Ch]
  __int16 v32; // [rsp+66h] [rbp-9Ah]
  char v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int128 v36; // [rsp+80h] [rbp-80h]
  LPVOID lpMem; // [rsp+90h] [rbp-70h]
  __int16 v38; // [rsp+98h] [rbp-68h]
  char v39; // [rsp+9Ah] [rbp-66h]
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v42; // [rsp+B0h] [rbp-50h] BYREF
  char v43; // [rsp+B2h] [rbp-4Eh]
  unsigned int v44; // [rsp+B4h] [rbp-4Ch]
  unsigned __int16 v45; // [rsp+B8h] [rbp-48h]
  __int128 v46; // [rsp+C0h] [rbp-40h]
  __int16 v47; // [rsp+D0h] [rbp-30h] BYREF
  char v48; // [rsp+D2h] [rbp-2Eh]
  int v49; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 v50; // [rsp+D8h] [rbp-28h]
  __int128 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v54; // [rsp+100h] [rbp+0h] BYREF
  __int64 v55; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v56[13]; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *v57; // [rsp+180h] [rbp+80h]
  _BYTE v58[4096]; // [rsp+190h] [rbp+90h] BYREF

  v4 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v5 = 0LL;
  v41 = 0LL;
  v7 = this;
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(a3 + 6);
    v9 = *(_BYTE *)(a3 + 8);
    v30[0] = *(_WORD *)a3;
    v30[1] = *(_WORD *)(a3 + 2);
    v31 = *(_BYTE *)(a3 + 4);
    v32 = v8;
    v33 = v9;
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
      v34 = v10;
    }
    else
    {
      v34 = 0LL;
    }
    v35 = 0LL;
    lpMem = 0LL;
    v36 = 0LL;
    v38 = 0;
    v39 = 0;
    v28 = 0;
    v27 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v7,
                                                   v8,
                                                   a3,
                                                   (unsigned int)&v28,
                                                   (__int64)v58,
                                                   (__int64)&v27);
    wil::details::NtStatusToHr(WnfStateData);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v28 = 0;
      v27 = 0;
    }
    else
    {
      v12 = v27;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v30, v58, v12, 0x1000uLL);
    if ( HIBYTE(v38) )
      break;
    v40 = 0LL;
    v56[0] = wistd::__function::Z::$$A6A_NPEAX131I::Z::__func<`wil::details_abi::RecordWnfUsageIndex'::`4'::_lambda_1_,AXPEBU__WIL__WNF_STATE_NAME,unsigned __int64,wil::details_abi::RawUsageIndex const &>::`vftable';
    v44 = 0;
    v56[1] = &v40;
    v56[2] = &v41;
    v56[3] = v30;
    v57 = (wil::details::in1diag3 *)v56;
    v13 = *(_QWORD *)(a3 + 24);
    v45 = 0;
    v29[0] = (unsigned __int8 *)(v13 + 10);
    v42 = *(_WORD *)(a3 + 2);
    v43 = *(_BYTE *)(a3 + 4);
    v47 = *(_WORD *)(a3 + 6);
    v48 = *(_BYTE *)(a3 + 8);
    v46 = 0LL;
    v49 = 0;
    v50 = 0;
    v51 = 0LL;
LABEL_20:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v42,
              v29,
              *(unsigned __int8 **)(a3 + 32)) )
    {
      v14 = v44;
      v15 = 0;
      if ( v44 )
      {
        v16 = *((_QWORD *)&v46 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v47,
                  v29,
                  *(unsigned __int8 **)(a3 + 32)) )
        {
          v27 = v49;
          v52 = v50;
          v53 = *((_QWORD *)&v51 + 1);
          v54 = v45;
          v55 = v16;
          if ( !v57 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v25 = &v52;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v57 + 32LL))(
                  v57,
                  &v55,
                  &v54,
                  &v53) )
          {
            if ( v57 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v57 + 24LL))(v57);
            v18 = 0;
            goto LABEL_24;
          }
          if ( ++v15 >= v14 )
            goto LABEL_20;
        }
      }
    }
    if ( v57 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v57 + 24LL))(v57);
    v18 = 1;
LABEL_24:
    if ( !(_BYTE)v38 )
      goto LABEL_32;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v7, v35, (int)v36 - (int)v35, v17, (_DWORD)v25, v28, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, v35, v36 - v35, v20, v26, 0, 0);
LABEL_32:
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v41 = v40;
      goto LABEL_33;
    }
    ++v5;
    v18 = 0;
LABEL_33:
    v21 = lpMem;
    lpMem = 0LL;
    if ( v21 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v21);
    }
    if ( v18 || v7 >= v4 || v5 >= 0x32 )
      return;
  }
  v23 = lpMem;
  lpMem = 0LL;
  if ( v23 )
  {
    v24 = GetProcessHeap();
    HeapFree(v24, 0, v23);
  }
}
