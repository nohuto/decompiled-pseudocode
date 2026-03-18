/*
 * XREFs of ?VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400DD220
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400DCDB8 (-TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z.c)
 *     CommitResources_0 @ 0x1400DCFC8 (CommitResources_0.c)
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmRecordAlloc(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  void (__fastcall *v10)(__int64 *, __int64, __int64 (__fastcall *)(), __int64 *, _DWORD, _DWORD, _DWORD); // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]
  _BYTE v15[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-18h]

  v4 = *((unsigned __int16 *)a1 + 36);
  v14 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8LL * *(unsigned int *)(*(_QWORD *)(a1[7] + 24) + 240LL));
  v16 = v8 + 32;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 32, 0LL);
  v9 = *a1;
  v17 = 2;
  v10 = *(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall *)(), __int64 *, _DWORD, _DWORD, _DWORD))(v9 + 104);
  v11 = *(_QWORD *)(v8 + 8) + 304 * v4;
  v13 = a4;
  v12 = v11;
  v10(a1, a2, VidMmRecordAllocCb, &v12, 0, 0, *(_QWORD *)(a2 + 16) >> 12);
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v15);
}
