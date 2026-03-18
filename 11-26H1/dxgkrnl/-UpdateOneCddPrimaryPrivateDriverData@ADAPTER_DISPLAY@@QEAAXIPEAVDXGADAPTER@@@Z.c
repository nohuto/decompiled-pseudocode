/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1401A51E4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1403983A0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  UINT v14; // eax
  ADAPTER_RENDER *v15; // rcx
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v16; // [rsp+50h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v17; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v18[24]; // [rsp+B0h] [rbp+7h] BYREF

  v5 = *((_QWORD *)this + 16);
  v6 = 4024LL * a2;
  v8 = *(_QWORD *)(v5 + v6 + 88);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 56LL);
    if ( !*(_DWORD *)(v5 + v6 + 992) )
    {
LABEL_3:
      *(_DWORD *)(v9 + 12) |= 4u;
      return;
    }
    if ( !*((_QWORD *)a3 + 396) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8200;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->IsRenderAdapter()",
        8200LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(v9 + 12) & 4) == 0 )
    {
      memset(&v17, 0, sizeof(v17));
      v17.hAllocation = *(HANDLE *)(*(_QWORD *)(v8 + 48) + 16LL);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)a3 + 396), &v17) < 0 )
      {
        WdLogSingleEntry1(2LL);
        v10 = L"Failed to get primary allocation description, marking Cdd primary 0x%I64x as having invalid PrivateDriverData";
        WdLogGlobalForLineNumber = 8219;
LABEL_9:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v8, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_3;
      }
      v11 = *((_QWORD *)this + 16);
      if ( v17.PrivateDriverFormatAttribute != *(_DWORD *)(v11 + v6 + 1044) )
      {
        *(_QWORD *)&v16.StandardAllocationType = 1LL;
        *(_QWORD *)&v18[16] = 0LL;
        *(&v16.AllocationPrivateDriverDataSize + 1) = 0;
        v16.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v18;
        *(_OWORD *)v18 = 0LL;
        v16.PhysicalAdapterIndex = 0;
        *(_QWORD *)v18 = *(_QWORD *)(v11 + v6 + 992);
        *(_QWORD *)&v18[12] = *(_QWORD *)(v11 + v6 + 1008);
        v12 = *(_DWORD *)(v11 + v6 + 1000);
        v13 = *(_QWORD *)(v8 + 48);
        *(_DWORD *)&v18[8] = v12;
        *(_DWORD *)&v18[20] = a2;
        v16.pAllocationPrivateDriverData = *(void **)(v13 + 32);
        v14 = *(_DWORD *)(v13 + 40);
        v15 = (ADAPTER_RENDER *)*((_QWORD *)a3 + 396);
        v16.AllocationPrivateDriverDataSize = v14;
        v16.pResourcePrivateDriverData = *(void **)(v9 + 120);
        v16.ResourcePrivateDriverDataSize = *(_DWORD *)(v9 + 128);
        if ( ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v15, &v16) < 0 )
        {
          WdLogSingleEntry1(2LL);
          v10 = L"Failed to get private driver data for primary, marking Cdd primary 0x%I64x as having invalid PrivateDriverData";
          WdLogGlobalForLineNumber = 8282;
          goto LABEL_9;
        }
        *(_DWORD *)(*((_QWORD *)this + 16) + v6 + 1044) = v17.PrivateDriverFormatAttribute;
      }
    }
  }
}
