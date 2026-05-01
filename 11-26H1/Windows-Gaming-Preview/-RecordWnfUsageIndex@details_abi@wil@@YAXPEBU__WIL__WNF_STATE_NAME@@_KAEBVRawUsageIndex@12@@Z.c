/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180008554
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180007828 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180007280 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800076A0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800090AC (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18000A814 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     wil_details_NtQueryWnfStateData @ 0x18000B224 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18000B2CC (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x180043310 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rsi
  wil::details_abi *v6; // r13
  unsigned __int64 v7; // r12
  char v8; // cl
  unsigned int v9; // edx
  __int64 v10; // rax
  wil::details *WnfStateData; // rbx
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // r14d
  __int64 v15; // r15
  int v16; // r9d
  char v17; // bl
  int updated; // eax
  int v19; // r9d
  void *v20; // r14
  HANDLE ProcessHeap; // rax
  void *v22; // rbx
  HANDLE v23; // rax
  __int64 *v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v30; // [rsp+64h] [rbp-9Ch]
  __int16 v31; // [rsp+66h] [rbp-9Ah]
  char v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  LPVOID lpMem; // [rsp+90h] [rbp-70h]
  __int16 v37; // [rsp+98h] [rbp-68h]
  char v38; // [rsp+9Ah] [rbp-66h]
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v42; // [rsp+B8h] [rbp-48h] BYREF
  char v43; // [rsp+BAh] [rbp-46h]
  unsigned int v44; // [rsp+BCh] [rbp-44h]
  unsigned __int16 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+C8h] [rbp-38h]
  __int16 v47; // [rsp+D8h] [rbp-28h] BYREF
  char v48; // [rsp+DAh] [rbp-26h]
  int v49; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v50; // [rsp+E0h] [rbp-20h]
  __int128 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v53; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v54[2]; // [rsp+108h] [rbp+8h] BYREF
  char v55; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v56[13]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *v57; // [rsp+188h] [rbp+88h]
  _BYTE v58[4096]; // [rsp+190h] [rbp+90h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v40 = 0LL;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a3 + 8);
    v9 = *(unsigned __int16 *)(a3 + 6);
    v29[0] = *(_WORD *)a3;
    v29[1] = *(_WORD *)(a3 + 2);
    v30 = *(_BYTE *)(a3 + 4);
    v31 = v9;
    v32 = v8;
    if ( (_WORD)v9 )
    {
      v10 = v9;
      if ( v8 == 1 )
      {
        v10 = v9 + 2LL;
      }
      else if ( v8 == 2 )
      {
        v10 = v9 + 4LL;
      }
      v33 = v10;
    }
    else
    {
      v33 = 0LL;
    }
    v34 = 0LL;
    v35 = 0LL;
    lpMem = 0LL;
    v37 = 0;
    v38 = 0;
    v27 = 0;
    v26 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v5,
                                                   v9,
                                                   a3,
                                                   (unsigned int)&v27,
                                                   (__int64)v58,
                                                   (__int64)&v26);
    wil::details::NtStatusToHr(WnfStateData);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v26 = 0;
      v27 = 0;
    }
    else
    {
      v12 = v26;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v29, v58, v12, 0x1000uLL);
    if ( HIBYTE(v37) )
      break;
    v39 = 0LL;
    v56[0] = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v56[1] = &v39;
    v56[2] = &v40;
    v56[3] = v29;
    v57 = (wil::details::in1diag3 *)v56;
    v54[1] = &v55;
    v28[0] = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 10LL);
    v42 = *(_WORD *)(a3 + 2);
    v43 = *(_BYTE *)(a3 + 4);
    v44 = 0;
    v45 = 0;
    v46 = 0LL;
    v47 = *(_WORD *)(a3 + 6);
    v48 = *(_BYTE *)(a3 + 8);
    v49 = 0;
    v50 = 0;
    v51 = 0LL;
LABEL_20:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v42,
              v28,
              *(unsigned __int8 **)(a3 + 32)) )
    {
      v13 = 0;
      v14 = v44;
      if ( v44 )
      {
        v15 = *((_QWORD *)&v46 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v47,
                  v28,
                  *(unsigned __int8 **)(a3 + 32)) )
        {
          v26 = v49;
          v52 = v50;
          v53 = *((_QWORD *)&v51 + 1);
          v54[0] = v45;
          v41 = v15;
          if ( !v57 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v24 = &v52;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v57 + 32LL))(
                  v57,
                  &v41,
                  v54,
                  &v53) )
          {
            if ( v57 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v57 + 24LL))(v57);
            v17 = 0;
            goto LABEL_24;
          }
          if ( ++v13 >= v14 )
            goto LABEL_20;
        }
      }
    }
    if ( v57 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v57 + 24LL))(v57);
    v17 = 1;
LABEL_24:
    if ( !(_BYTE)v37 )
      goto LABEL_32;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v34, (int)v35 - (int)v34, v16, (_DWORD)v24, v27, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v34, v35 - v34, v19, v25, 0, 0);
LABEL_32:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v40 = v39;
      goto LABEL_33;
    }
    ++v7;
    v17 = 0;
LABEL_33:
    v20 = lpMem;
    lpMem = 0LL;
    if ( v20 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    if ( v17 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v22 = lpMem;
  lpMem = 0LL;
  if ( v22 )
  {
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v22);
  }
}
