/*
 * XREFs of ReferenceAllocationForPreparation @ 0x1400D3624
 * Callers:
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011C0EC (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall ReferenceAllocationForPreparation(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, _BYTE *a4)
{
  _DWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v7; // rcx
  int v10; // eax
  unsigned __int64 v11; // rax
  _DWORD *v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-28h]

  v4 = (_DWORD *)(a3 + 24);
  v5 = *(_QWORD *)a3;
  v7 = 0LL;
  if ( *(_WORD *)(*(_QWORD *)(a3 + 368) + 8LL) )
    *v4 &= ~0x100000u;
  v10 = *(_DWORD *)(a3 + 72);
  if ( !v10 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = v5;
      WdLogGlobalForLineNumber = 2113;
    }
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer(0LL, &EventAllocationFault2, a3, a3, 0);
    v11 = *(_QWORD *)(v5 + 16);
    _InterlockedIncrement((volatile signed __int32 *)this + 1832);
    _InterlockedAdd64((volatile signed __int64 *)this + 917, v11);
    if ( (*v4 & 0x100000) != 0 )
      *v4 |= 0x200000u;
    return 3221225473LL;
  }
  v13 = (_DWORD *)(a3 + 24);
  if ( v10 == 1 && (*v4 & 0x100000) == 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v13 = (_DWORD *)(a3 + 24);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = a3;
      WdLogGlobalForLineNumber = 2137;
    }
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v7, &EventAllocationFault2, a3, a3, 1);
    v14 = *(_QWORD *)(v5 + 16);
    _InterlockedIncrement((volatile signed __int32 *)this + 1816);
    _InterlockedAdd64((volatile signed __int64 *)this + 909, v14);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 248LL))(a2, v5);
    v7 = 0LL;
    *a4 = 1;
  }
  if ( (*v13 & 0x100000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = a3;
      WdLogGlobalForLineNumber = 2160;
    }
    if ( (byte_14008A201 & 1) != 0 )
    {
      LODWORD(v16) = 4;
      McTemplateK0pq_EtwWriteTransfer(v7, &EventAllocationFault2, a3, a3, v16);
    }
    v15 = *(_QWORD *)(v5 + 16);
    _InterlockedIncrement((volatile signed __int32 *)this + 1820);
    _InterlockedAdd64((volatile signed __int64 *)this + 911, v15);
    *v13 |= 0x200000u;
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v7, &EventMigrateAllocation, a3, a3);
    VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)a3);
    return 3221225473LL;
  }
  return 0LL;
}
