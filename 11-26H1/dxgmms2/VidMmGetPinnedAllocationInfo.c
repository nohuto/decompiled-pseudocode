/*
 * XREFs of VidMmGetPinnedAllocationInfo @ 0x140123AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidMmGetPinnedAllocationInfo(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // rcx

  if ( !*(_DWORD *)(a2[46] + 16LL) && (*(_DWORD *)a2[46] & 0x40000000) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 10LL, a2, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_6;
  }
  v5 = *(_DWORD *)(*a2 + 52LL);
  if ( (v5 & 2) == 0 )
  {
LABEL_6:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 10LL, a2, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x140123BE3LL);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40320) + 8LL * ((unsigned __int8)v5 >> 2));
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 48LL))(v6, *a2, a3);
}
