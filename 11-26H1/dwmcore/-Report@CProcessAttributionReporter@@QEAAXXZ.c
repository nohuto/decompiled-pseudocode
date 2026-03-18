/*
 * XREFs of ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x180114E78
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1801151A0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     std::_Func_impl_no_alloc__CProcessAttributionReporter::Report_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Move @ 0x180115500 (std--_Func_impl_no_alloc__CProcessAttributionReporter--Report_--_2_--_lambda_1__void_void___unsi.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProcessAttributionReporter::Report(CProcessAttributionReporter *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[7]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+90h] [rbp-70h]
  _BYTE v26[56]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+E0h] [rbp-20h] BYREF
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+128h] [rbp+28h]
  int v38; // [rsp+12Ch] [rbp+2Ch]
  int *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  __int64 v41; // [rsp+140h] [rbp+40h]
  int v42; // [rsp+148h] [rbp+48h]
  int v43; // [rsp+14Ch] [rbp+4Ch]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  __int64 v46; // [rsp+160h] [rbp+60h]
  int v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+16Ch] [rbp+6Ch]
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  __int64 v51; // [rsp+180h] [rbp+80h]
  int v52; // [rsp+188h] [rbp+88h]
  int v53; // [rsp+18Ch] [rbp+8Ch]

  if ( qword_1803DEA58 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
  {
    v2 = *((_QWORD *)this + 15);
    v24[0] = off_1802DA4C8;
    v27 = 0LL;
    v25 = v24;
    v3 = *(_QWORD *)(v2 + 8);
    v27 = std::_Func_impl_no_alloc__CProcessAttributionReporter::Report_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Move(
            v24,
            v26);
    CProcessAttributionManager::EnumerateChangedProcessAttributions(v3, v2, this, v26);
    if ( v25 )
    {
      v4 = v24;
      LOBYTE(v4) = v25 != v24;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v25 + 32LL))(v25, v4);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    {
      v5 = *((_QWORD *)this + 3);
      v6 = *((_QWORD *)this + 6);
      v7 = *((_QWORD *)this + 9);
      v8 = *((_QWORD *)this + 12);
      v9 = *((_QWORD *)this + 1) - *(_QWORD *)this;
      v10 = *((_QWORD *)this + 4) - v5;
      v11 = *((_QWORD *)this + 7) - v6;
      v12 = *((_QWORD *)this + 13);
      v13 = *((_QWORD *)this + 10) - v7;
      v31 = *(_QWORD *)this;
      v9 >>= 2;
      v10 >>= 2;
      v11 >>= 2;
      v13 >>= 2;
      v14 = (v12 - v8) >> 2;
      v32 = 4 * v9;
      v34 = &v20;
      v37 = 4 * v10;
      v39 = &v21;
      v42 = 4 * v11;
      v44 = &v22;
      v47 = 4 * v13;
      v49 = &v23;
      v52 = 4 * v14;
      v19 = v9;
      v36 = v5;
      v41 = v6;
      v23 = v14;
      v22 = v13;
      v21 = v11;
      v20 = v10;
      v29 = &v19;
      v30 = 4LL;
      v33 = 0;
      v35 = 4LL;
      v38 = 0;
      v40 = 4LL;
      v43 = 0;
      v45 = 4LL;
      v46 = v7;
      v48 = 0;
      v50 = 4LL;
      v51 = v8;
      v53 = 0;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_PROCESS_ATTRIBUTION,
        v10,
        0xBu,
        &v28);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
      {
        if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
          *((_QWORD *)this + 1) = *(_QWORD *)this;
        v15 = *((_QWORD *)this + 3);
        if ( v15 != *((_QWORD *)this + 4) )
          *((_QWORD *)this + 4) = v15;
        v16 = *((_QWORD *)this + 6);
        if ( v16 != *((_QWORD *)this + 7) )
          *((_QWORD *)this + 7) = v16;
        v17 = *((_QWORD *)this + 9);
        if ( v17 != *((_QWORD *)this + 10) )
          *((_QWORD *)this + 10) = v17;
        v18 = *((_QWORD *)this + 12);
        if ( v18 != *((_QWORD *)this + 13) )
          *((_QWORD *)this + 13) = v18;
      }
    }
  }
}
