/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x14010A59C
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400F4754 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_GLO.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x14010A4E4 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::Unlock(VIDMM_RECYCLE_RANGE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx

  v3 = *((int *)this + 16);
  if ( (_DWORD)v3 != 2 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 3LL, v3, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x14010A7E4LL);
  }
  if ( (*((_DWORD *)this + 23))-- == 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
    *((_QWORD *)this + 12) = *(_QWORD *)(v5 + 1576) + (unsigned int)dword_14008A50C;
    v6 = (_QWORD *)((char *)this + 104);
    v7 = *(_QWORD **)(v5 + 1552);
    if ( *v7 != v5 + 1544 )
      __fastfail(3u);
    *v6 = v5 + 1544;
    *((_QWORD *)this + 14) = v7;
    *v7 = v6;
    *(_QWORD *)(v5 + 1552) = v6;
    if ( !_InterlockedExchange((volatile __int32 *)(v5 + 1536), 1) && !*(_DWORD *)(v5 + 1584) )
      KeSetTimer((PKTIMER)(v5 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v5 + 1440));
    v8 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    if ( (__int64)(v8
                 + _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                     v8)) < 0
      && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    else
    {
      WdLogSingleEntry3(4LL, this, *((int *)this + 16), 3LL);
      WdLogGlobalForLineNumber = 2257;
      if ( (byte_14008A202 & 0x40) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v9, &EventRecycleRangeTransition, v10, this, *((_DWORD *)this + 16), 3);
      v1 = *((_QWORD *)this + 9);
      v11 = *(__int64 **)(v1 + 152);
      if ( !v11 )
        goto LABEL_10;
    }
    v12 = *v11;
    v13 = 144 * v11[1];
    *(_DWORD *)(v13 + v12) = 2;
    *(_QWORD *)(v13 + v12 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v13 + v12 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v1 + 152) + 8LL);
    v14 = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v14 + 8) == *(_QWORD *)(v14 + 48) )
    {
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v1 + 152) + 16LL) = 1;
    }
LABEL_10:
    *((_DWORD *)this + 16) = 3;
  }
}
