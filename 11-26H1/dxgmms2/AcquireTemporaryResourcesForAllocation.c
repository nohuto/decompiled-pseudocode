/*
 * XREFs of AcquireTemporaryResourcesForAllocation @ 0x1400AE5A8
 * Callers:
 *     ?VidMmPbmmTransferMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI2@Z @ 0x1400B0D6C (-VidMmPbmmTransferMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI2@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

_QWORD *__fastcall AcquireTemporaryResourcesForAllocation(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r12
  _DWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 LogicalAddress; // rax
  int v20; // eax
  __int64 **v21; // rdx
  __int64 *v22; // rax
  _QWORD *result; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+90h] [rbp+8h]
  __int64 v27; // [rsp+98h] [rbp+10h]

  v4 = *a2;
  v6 = *(_QWORD *)(a1 + 56);
  v26 = *a2;
  v10 = (_QWORD *)operator new(72LL, 0x66356956u, 256LL);
  v11 = v10;
  if ( !v10 )
  {
    _InterlockedIncrement(&dword_14008A900);
    WdLogSingleEntry2(6LL, a1, a2);
    WdLogGlobalForLineNumber = 61;
    DxgkLogInternalTriageEvent(v24, 262145LL);
    return 0LL;
  }
  memset(v10, 0, 0x48uLL);
  v12 = (unsigned __int64)a4 << 12;
  v13 = a4;
  v11[4] = v12;
  v11[3] = (unsigned __int64)a3 << 12;
  v14 = *(_QWORD *)(v4 + 216);
  v15 = *(_QWORD *)(v4 + 224);
  v16 = v11 + 5;
  v25 = v12;
  v27 = v15;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v15, v26) < 0 )
  {
    WdLogSingleEntry2(3LL, a3, (unsigned int)v13);
    WdLogGlobalForLineNumber = 84;
LABEL_8:
    if ( (*v16 & 2) != 0 )
    {
      LOBYTE(v25) = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned __int64))(*(_QWORD *)v14 + 24LL))(
        v14,
        v15,
        v11[3],
        v11[4],
        v25);
      *v16 &= ~2u;
    }
    operator delete(v11);
    return 0LL;
  }
  *v16 |= 2u;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, v15, v11[3], v11[4]);
  v11[2] = v17;
  v18 = v17;
  if ( *(_BYTE *)(v6 + 40098) )
  {
    if ( (*v16 & 1) == 0 )
    {
      LogicalAddress = VidMmiGetLogicalAddress(*(void **)(*a2 + 344), v11[3]);
      LOBYTE(v25) = 0;
      v20 = SysMmMapPagesToIommu(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 224LL), LogicalAddress, v18, v13, v25, 3, a2);
      if ( v20 < 0 )
      {
        WdLogSingleEntry1(3LL, v20);
        v15 = v27;
        WdLogGlobalForLineNumber = 115;
        goto LABEL_8;
      }
    }
  }
  v11[8] = a2;
  v21 = (__int64 **)a2[13];
  v22 = v11 + 6;
  if ( *v21 != a2 + 12 )
    __fastfail(3u);
  *v22 = (__int64)(a2 + 12);
  v11[7] = v21;
  *v21 = v22;
  a2[13] = (__int64)v22;
  result = v11;
  *((_DWORD *)a2 + 14) |= 0x40u;
  ++*(_DWORD *)(a1 + 1824);
  return result;
}
