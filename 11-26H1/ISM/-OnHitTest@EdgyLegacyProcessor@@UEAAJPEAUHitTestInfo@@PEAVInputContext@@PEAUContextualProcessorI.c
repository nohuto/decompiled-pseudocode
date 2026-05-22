/*
 * XREFs of ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AD100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x180054E98 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z @ 0x1801ACF7C (-EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AE7BC (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1801AFBF4 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801B0B24 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801B1360 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyLegacyProcessor::OnHitTest(
        EdgyLegacyProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v7; // esi
  __int64 *v8; // r15
  __int32 v9; // ecx
  const char *v10; // r9
  void *v11; // rdi
  unsigned int v12; // eax
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v20; // [rsp+40h] [rbp-C0h]
  HANDLE TargetHandle; // [rsp+48h] [rbp-B8h] BYREF
  __m256i v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h]
  __int128 v27; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  _BYTE v31[64]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v7 = 0;
  *(_DWORD *)a4 = 0;
  v8 = (__int64 *)((char *)a4 + 8);
  if ( !*((_QWORD *)a4 + 1) )
  {
    *(__int64 *)((char *)&v22.m256i_i64[1] + 4) = 0LL;
    if ( (*(_DWORD *)a2 & 0x88) == 8 )
    {
      v9 = *((_DWORD *)a2 + 8);
      if ( (v9 & 4) != 0 )
      {
        v22.m256i_i64[3] = *((unsigned int *)a2 + 2);
        v22.m256i_i32[0] = *((_DWORD *)a2 + 10);
        v22.m256i_i32[2] = v9;
        v22.m256i_i32[1] = *((_DWORD *)a2 + 1);
        *(__int64 *)((char *)&v22.m256i_i64[1] + 4) = *(_QWORD *)((char *)a2 + 44);
        EdgyLegacyProcessor::EnsureEdgeMetricsForDisplay((struct D2D_VECTOR_2F *)this, a2);
        EdgyImpl::Reset((EdgyLegacyProcessor *)((char *)this + 80));
        if ( (unsigned __int8)Edges::HitTest((Edges *)(*((_QWORD *)this + 13) + 72LL), (__int64)this + 80) )
        {
          if ( !*((_QWORD *)this + 10) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x2F,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
              v10);
          *(__m256i *)((char *)this + 24) = v22;
          v11 = *(void **)(*((_QWORD *)a3 + 22) + 8LL);
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          memset_0(v31, 0, sizeof(v31));
          if ( v11 )
          {
            v12 = ToCompositionInputType(*(_DWORD *)a2);
            if ( (int)NtQueryCompositionInputQueueAndTransform(v11, v12, &v27, v31) >= 0 && (unsigned int)(v27 - 3) <= 1 )
            {
              v26 = v28;
              *(_OWORD *)v22.m256i_i8 = v29;
              v20 = v30;
              TargetHandle = 0LL;
              CurrentProcess = GetCurrentProcess();
              v14 = GetCurrentProcess();
              if ( DuplicateHandle(v14, v11, CurrentProcess, &TargetHandle, 0, 0, 2u) )
              {
                v15 = *((_QWORD *)this + 9);
                if ( v15 )
                {
                  v23 = v26;
                  v24 = *(_OWORD *)v22.m256i_i8;
                  v25 = v20;
                  EdgyProcessorTarget::UpdateInputTarget(v15, &v23, TargetHandle, (char *)this + 24);
                }
                else
                {
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
                  v23 = v26;
                  v24 = *(_OWORD *)v22.m256i_i8;
                  v25 = v20;
                  v7 = EdgyProcessorTarget::Create(this, (char *)this + 24, &v23, TargetHandle, (char *)this + 72);
                  if ( v7 < 0 )
                    goto LABEL_17;
                }
                v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
                v17 = **v16;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
                v7 = v17(v16, &GUID_00000000_0000_0000_c000_000000000046, v8);
                if ( v7 >= 0 )
                  *(_DWORD *)a4 = 1;
              }
            }
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
          *(_DWORD *)a4 = 0;
        }
      }
    }
  }
LABEL_17:
  if ( !*v8 )
    EdgyImpl::Reset((EdgyLegacyProcessor *)((char *)this + 80));
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgylegacyprocessor.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
