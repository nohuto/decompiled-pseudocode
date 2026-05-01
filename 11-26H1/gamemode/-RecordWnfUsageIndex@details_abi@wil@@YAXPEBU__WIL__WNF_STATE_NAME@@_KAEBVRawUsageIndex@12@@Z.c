/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000C4C8
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000BA18 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180006278 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000B43C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000B918 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000D248 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x18000F19C (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18000F244 (wil_details_NtUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18000FF40 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rsi
  wil::details_abi *v6; // r12
  unsigned __int64 v7; // r15
  char v8; // cl
  unsigned int v9; // edx
  __int64 v10; // rax
  wil::details *WnfStateData; // rbx
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // r9d
  char v15; // bl
  int updated; // eax
  int v17; // r9d
  void *v18; // r14
  HANDLE ProcessHeap; // rax
  void *v20; // rbx
  HANDLE v21; // rax
  __int64 *v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+20h] [rbp-E0h]
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+64h] [rbp-9Ch]
  __int16 v29; // [rsp+66h] [rbp-9Ah]
  char v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+80h] [rbp-80h]
  LPVOID lpMem; // [rsp+90h] [rbp-70h]
  __int16 v35; // [rsp+98h] [rbp-68h]
  char v36; // [rsp+9Ah] [rbp-66h]
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v40; // [rsp+B8h] [rbp-48h] BYREF
  char v41; // [rsp+BAh] [rbp-46h]
  unsigned int v42; // [rsp+BCh] [rbp-44h]
  unsigned __int16 v43; // [rsp+C0h] [rbp-40h]
  __int128 v44; // [rsp+C8h] [rbp-38h]
  __int16 v45; // [rsp+D8h] [rbp-28h] BYREF
  char v46; // [rsp+DAh] [rbp-26h]
  int v47; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v48; // [rsp+E0h] [rbp-20h]
  __int128 v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v51; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v52[2]; // [rsp+108h] [rbp+8h] BYREF
  char v53; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v54[13]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *v55; // [rsp+188h] [rbp+88h]
  _BYTE v56[4096]; // [rsp+190h] [rbp+90h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v38 = 0LL;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a3 + 8);
    v9 = *(unsigned __int16 *)(a3 + 6);
    v27[0] = *(_WORD *)a3;
    v27[1] = *(_WORD *)(a3 + 2);
    v28 = *(_BYTE *)(a3 + 4);
    v29 = v9;
    v30 = v8;
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
      v31 = v10;
    }
    else
    {
      v31 = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    lpMem = 0LL;
    v35 = 0;
    v36 = 0;
    v25 = 0;
    v24 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v5,
                                                   v9,
                                                   a3,
                                                   (unsigned int)&v25,
                                                   (__int64)v56,
                                                   (__int64)&v24);
    wil::details::NtStatusToHr(WnfStateData);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v24 = 0;
      v25 = 0;
    }
    else
    {
      v12 = v24;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v27, v56, v12, 0x1000uLL);
    if ( HIBYTE(v35) )
      break;
    v37 = 0LL;
    v54[0] = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v54[1] = &v37;
    v54[2] = &v38;
    v54[3] = v27;
    v55 = (wil::details::in1diag3 *)v54;
    v52[1] = &v53;
    v26[0] = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 10LL);
    v40 = *(_WORD *)(a3 + 2);
    v41 = *(_BYTE *)(a3 + 4);
    v42 = 0;
    v43 = 0;
    v44 = 0LL;
    v45 = *(_WORD *)(a3 + 6);
    v46 = *(_BYTE *)(a3 + 8);
    v47 = 0;
    v48 = 0;
    v49 = 0LL;
LABEL_19:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v40,
              v26,
              *(unsigned __int8 **)(a3 + 32)) )
    {
      v13 = 0;
      if ( v42 )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v45,
                  v26,
                  *(unsigned __int8 **)(a3 + 32)) )
        {
          v24 = v47;
          v50 = v48;
          v51 = *((_QWORD *)&v49 + 1);
          v52[0] = v43;
          v39 = *((_QWORD *)&v44 + 1);
          if ( !v55 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v22 = &v50;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v55 + 32LL))(
                  v55,
                  &v39,
                  v52,
                  &v51) )
          {
            if ( v55 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v55 + 24LL))(v55);
            v15 = 0;
            goto LABEL_23;
          }
          if ( ++v13 >= v42 )
            goto LABEL_19;
        }
      }
    }
    if ( v55 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v55 + 24LL))(v55);
    v15 = 1;
LABEL_23:
    if ( !(_BYTE)v35 )
      goto LABEL_31;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v32, (int)v33 - (int)v32, v14, (_DWORD)v22, v25, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v32, v33 - v32, v17, v23, 0, 0);
LABEL_31:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v38 = v37;
      goto LABEL_32;
    }
    ++v7;
    v15 = 0;
LABEL_32:
    v18 = lpMem;
    lpMem = 0LL;
    if ( v18 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v18);
    }
    if ( v15 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v20 = lpMem;
  lpMem = 0LL;
  if ( v20 )
  {
    v21 = GetProcessHeap();
    HeapFree(v21, 0, v20);
  }
}
