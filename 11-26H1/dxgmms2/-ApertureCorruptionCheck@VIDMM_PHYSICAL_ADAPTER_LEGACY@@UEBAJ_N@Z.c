/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAJ_N@Z @ 0x14004F640
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmCheckForApertureGuardPageCorruption@@YAJPEBUVIDMM_SEGMENT_BASE@@PEAPEAK_N@Z @ 0x14004F898 (-VidMmCheckForApertureGuardPageCorruption@@YAJPEBUVIDMM_SEGMENT_BASE@@PEAPEAK_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::ApertureCorruptionCheck(VIDMM_PHYSICAL_ADAPTER_LEGACY *this, bool a2)
{
  unsigned __int16 i; // bx
  __int64 v5; // rax
  const struct VIDMM_SEGMENT_BASE *v6; // rsi
  int v7; // ecx
  __int64 v8; // r9
  unsigned int *v10; // [rsp+50h] [rbp+8h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 34) )
      return 0LL;
    v5 = *((_QWORD *)this + 219);
    v10 = 0LL;
    v6 = (const struct VIDMM_SEGMENT_BASE *)((*(_QWORD *)(v5 + 8LL * i) + 8LL) & -(__int64)(*(_QWORD *)(v5 + 8LL * i) != 0LL));
    v7 = VidMmCheckForApertureGuardPageCorruption(v6, &v10, a2);
    if ( v7 < 0 )
      break;
  }
  if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 7) + 24LL);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 37LL, v8, v6, v10);
    WdLogGlobalForLineNumber = 213;
  }
  return (unsigned int)v7;
}
