/*
 * XREFs of ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021E83C
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z @ 0x140083E2C (-InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DdiCreateMemoryBasis@ADAPTER_RENDER@@QEAAPEAXPEAU_DXGKARG_CREATEMEMORYBASIS@@@Z @ 0x1401AC778 (-DdiCreateMemoryBasis@ADAPTER_RENDER@@QEAAPEAXPEAU_DXGKARG_CREATEMEMORYBASIS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::InitializeDirtyBitplaneForAllocation(
        DXGK_VIRTUAL_GPU_GPUP *this,
        unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // r15
  __int64 v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 MemoryBasis; // rax
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // r14
  unsigned int v16; // edi
  __int64 v17; // [rsp+20h] [rbp-39h]
  unsigned int v18; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v19[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v20; // [rsp+60h] [rbp+7h]
  _OWORD v21[2]; // [rsp+68h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)this + 23);
  v4 = a2;
  v5 = 112LL * a2;
  v18 = 0;
  v6 = *(_DWORD *)(v2 + v5 + 28);
  v7 = v2 + v5;
  v8 = operator new[](0x10uLL, 0x4B677844u, 256LL);
  *(_DWORD *)(v7 + 64) = v6;
  *(_QWORD *)(v7 + 72) = 1LL;
  *(_QWORD *)(v7 + 80) = v8;
  v19[1] = 0;
  v9 = 0;
  memset(v21, 0, sizeof(v21));
  v19[0] = v6;
  v20 = 1LL;
  do
  {
    v10 = v9++;
    v10 *= 2LL;
    v11 = *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 8);
    *(_QWORD *)(v8 + 8 * v10) = v11;
    *(_QWORD *)(v8 + 8 * v10 + 8) = *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 16);
    *((_QWORD *)v21 + v10) = v11;
    *((_QWORD *)v21 + v10 + 1) = *(_QWORD *)(v8 + 8 * v10 + 8);
  }
  while ( !v9 );
  MemoryBasis = ADAPTER_RENDER::DdiCreateMemoryBasis(
                  *((ADAPTER_RENDER **)this + 1),
                  (struct _DXGKARG_CREATEMEMORYBASIS *)v19);
  *(_QWORD *)(v7 + 96) = MemoryBasis;
  *(_DWORD *)(v7 + 104) = 1;
  if ( MemoryBasis )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 16LL) + 760LL)
                                                                                        + 8LL)
                                                                            + 1224LL))(
            *(_QWORD *)(*((_QWORD *)this + 1) + 768LL),
            0LL,
            v6,
            &v18);
    v15 = v14;
    if ( v14 >= 0 )
    {
      result = DXGK_DIRTY_BITPLANE::InitializeBitplane(
                 (PRTL_BITMAP)(v7 + 32),
                 *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 16),
                 v18);
      v16 = result;
      if ( (int)result < 0 )
      {
        WdLogSingleEntry3(2LL, *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 16), v18, v4);
        v17 = *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 16);
        WdLogGlobalForLineNumber = 1116;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VF Size is not a multiple of page size. VF size: 0x%I64x Page size: 0x%I64x Index: %d",
          v17,
          v18,
          v4,
          0LL,
          0LL);
        return v16;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1105;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to Query Segment Dirty Bit Tracking Caps. Status: 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v15;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1095;
  }
  return result;
}
