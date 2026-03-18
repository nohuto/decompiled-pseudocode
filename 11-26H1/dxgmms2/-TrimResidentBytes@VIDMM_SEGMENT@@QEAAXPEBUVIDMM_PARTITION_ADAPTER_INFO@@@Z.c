/*
 * XREFs of ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400D351C
 * Callers:
 *     ?TrimResidentBytes@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400B28D0 (-TrimResidentBytes@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14010FBF0 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::TrimResidentBytes(VIDMM_SEGMENT **this, const struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  __int64 v4; // rax
  VIDMM_SEGMENT *v5; // rsi
  __int64 *v6; // rbx
  const struct VIDMM_PARTITION_ADAPTER_INFO *v7; // rcx
  __int64 v8; // rbx
  VIDMM_GLOBAL *v9; // rcx

  if ( *((_DWORD *)this + 27) != 1 && *(_QWORD *)(*(_QWORD *)a2 + 64LL) > *((_QWORD *)a2 + 2) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v4 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v4 + 24) = *((_QWORD *)a2 + 2);
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
      WdLogGlobalForLineNumber = 26808;
    }
    v5 = this[33];
    while ( v5 != (VIDMM_SEGMENT *)(this + 33) )
    {
      v6 = (__int64 *)((char *)v5 - 240);
      v5 = *(VIDMM_SEGMENT **)v5;
      v7 = (const struct VIDMM_PARTITION_ADAPTER_INFO *)v6[41];
      if ( v7 == a2 )
      {
        v8 = *v6;
        (*((void (__fastcall **)(VIDMM_SEGMENT **, __int64, _QWORD, _QWORD, _QWORD))*this + 3))(
          this,
          v8,
          *(_QWORD *)(v8 + 136),
          *(_QWORD *)(v8 + 16),
          *(_QWORD *)v7);
        (*(void (__fastcall **)(VIDMM_SEGMENT *, __int64))(*(_QWORD *)this[2] + 264LL))(this[2], v8);
        if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v9, a2) )
          break;
      }
    }
  }
}
