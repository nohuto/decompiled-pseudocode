/*
 * XREFs of ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403717C0
 * Callers:
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x140371584 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x140038090 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B0E4 (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B118 (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401F64DC (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x140371C54 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x140371EF8 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x140371F38 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1403722EC (-Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGPROCESS_RENDER_ADAPTER_INFO::Initialize(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // r14
  UINT v9; // edi
  int v10; // eax
  char v11; // cl
  void *v12; // rax
  unsigned __int8 IsVmProcessOrVmValidation; // al
  int v14; // r8d
  int v15; // eax
  int v17; // eax
  unsigned int v18; // edx
  __int64 i; // r8
  __int64 v20; // rcx
  const wchar_t *v21; // r9
  int v22; // edx
  int v23; // eax
  int v24; // eax
  void *v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-89h]
  __int64 v27; // [rsp+20h] [rbp-89h]
  __int64 v28; // [rsp+28h] [rbp-81h]
  _DXGKARG_CREATEPROCESS v29; // [rsp+50h] [rbp-59h] BYREF
  __int128 v30; // [rsp+90h] [rbp-19h]
  __int128 v31; // [rsp+A0h] [rbp-9h]
  __int128 v32; // [rsp+B0h] [rbp+7h]

  LODWORD(v6) = 0;
  if ( !*((_BYTE *)this + 109) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)a3 + 2) + 209LL) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a3 + 95) + 8LL) + 1136LL))(*((_QWORD *)a3 + 96));
      v6 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)a3 + 2), v7);
        v27 = *((_QWORD *)a3 + 2);
        WdLogGlobalForLineNumber = 2510;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open vidmm process adapter info for adapter 0x%I64x. Status: 0x%I64x",
          v27,
          v6,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v6;
      }
      *((_BYTE *)this + 108) = 1;
    }
    v8 = *((_QWORD *)a3 + 2);
    v9 = *(_DWORD *)(v8 + 296);
    if ( (*(_DWORD *)(v8 + 2508) & 0x80u) == 0 && !DXGADAPTER::IsGpuVaIoMmuSupported(*((DXGADAPTER **)a3 + 2)) )
    {
LABEL_7:
      v10 = *(_DWORD *)(v8 + 2508);
      if ( (v10 & 0x80u) != 0
        || (v10 & 0x40) != 0
        || DXGADAPTER::IsGpuVaIoMmuSupported((DXGADAPTER *)v8)
        || DXGADAPTER::IsGpuVaIoMmuGlobalSupported((DXGADAPTER *)v8) )
      {
        v11 = *((_BYTE *)a2 + 408);
        v12 = (void *)*((_QWORD *)a2 + 8);
        memset(&v29.hKmdProcess, 0, 48);
        v29.hDxgkProcess = v12;
        v29.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFC | (*((_DWORD *)a2 + 102) >> 1) & 1 | (2 * (v11 & 1));
        IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v8);
        v14 = *((_DWORD *)a2 + 102) >> 8;
        v29.Flags.Value = v29.Flags.Value & 0xFFFFFFF3 | (4
                                                        * (IsVmProcessOrVmValidation & 1 | (2
                                                                                          * ((*((_DWORD *)a2 + 102) & 0x80) != 0))));
        if ( (v14 & 1) != 0 )
        {
          v25 = (void *)*((_QWORD *)DXGPROCESS::GetRenderAdapterInfo(*((DXGPROCESS **)a2 + 74), *(_DWORD *)(v8 + 240))
                        + 6);
          v29.pProcessName = (WCHAR *)*((_QWORD *)a2 + 78);
          v29.ProcessNameLength = *((_DWORD *)a2 + 158);
          v29.hKmdVmWorkerProcess = v25;
        }
        v29.pPasid = (ULONG *)*((_QWORD *)this + 3);
        v15 = *((_DWORD *)a2 + 102) >> 9;
        v29.NumPasid = v9;
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        if ( (v15 & 1) != 0 )
        {
          if ( !*(_BYTE *)(v8 + 3098) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2591;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pAdapter->AllowInSessionIsolatedContainer()",
              2591LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v29.Flags.Value |= 0x10u;
        }
        LODWORD(v6) = ADAPTER_RENDER::DdiCreateProcess(a3, &v29);
        if ( (int)v6 < 0 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 2608;
LABEL_16:
          DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
          DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(this);
          return (unsigned int)v6;
        }
        *((_QWORD *)this + 6) = v29.hKmdProcess;
      }
      *((_BYTE *)this + 109) = 1;
      if ( (int)v6 >= 0 )
        return (unsigned int)v6;
      goto LABEL_16;
    }
    LODWORD(v6) = DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(this, v9);
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry0(6LL);
      v21 = L"Failed to allocate Pasid array";
      v22 = 262145;
      v28 = 0LL;
      v26 = 2524LL;
      WdLogGlobalForLineNumber = 2524;
    }
    else
    {
      v17 = *(_DWORD *)(v8 + 444);
      if ( (v17 & 8) != 0 || (v17 & 4) != 0 || (v17 & 0x10) != 0 || (*((_DWORD *)a2 + 102) & 0x80) != 0 )
      {
        v18 = 0;
        for ( i = *(_QWORD *)(*((_QWORD *)a2 + 8) + 80LL);
              v18 < *((_DWORD *)this + 4);
              *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v20) = i )
        {
          v20 = v18++;
        }
        goto LABEL_7;
      }
      if ( DXGADAPTER::IsGpuVaIoMmuSupported((DXGADAPTER *)v8)
        && (v23 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1401695E0)(3LL, 0LL, 0LL), v6 = v23, v23 < 0) )
      {
        WdLogSingleEntry1(2LL);
        v21 = L"Failed to create Pasid domain: 0x%I64x";
        v28 = 0LL;
        v26 = v6;
        WdLogGlobalForLineNumber = 2545;
      }
      else
      {
        v24 = DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(this, (struct DXGADAPTER *)v8);
        v6 = v24;
        if ( v24 >= 0 )
          goto LABEL_7;
        WdLogSingleEntry2(2LL, v8, v24);
        v21 = L"Failed to initialize PASIDs for the adapter 0x%I64x. Status: 0x%I64x";
        v28 = v6;
        v26 = v8;
        WdLogGlobalForLineNumber = 2552;
      }
      v22 = 0x40000;
    }
    DxgkLogInternalTriageEvent(0LL, v22, -1, (__int64)v21, v26, v28, 0LL, 0LL, 0LL);
    goto LABEL_16;
  }
  return (unsigned int)v6;
}
