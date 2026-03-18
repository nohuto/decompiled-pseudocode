/*
 * XREFs of ??1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ @ 0x1400E2470
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400E1ABC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??_EVIDMM_DEVICE_COMMITMENT_INFO@@QEAAPEAXI@Z @ 0x1400376CC (--_EVIDMM_DEVICE_COMMITMENT_INFO@@QEAAPEAXI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PHYSICAL_DEVICE::~VIDMM_PHYSICAL_DEVICE(
        VIDMM_PHYSICAL_DEVICE *this,
        __int64 a2,
        unsigned int a3,
        bool a4)
{
  VIDMM_DEVICE_COMMITMENT_INFO *v4; // rdx
  unsigned __int16 i; // bx
  __int64 v7; // rsi
  _QWORD *v8; // rax

  v4 = (VIDMM_DEVICE_COMMITMENT_INFO *)*((_QWORD *)this + 2);
  if ( !v4 )
    return;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 136LL); ++i )
  {
    v7 = 56LL * i;
    v8 = (_QWORD *)((char *)v4 + v7 + 32);
    if ( (_QWORD *)*v8 != v8 && (*(_DWORD *)(**(_QWORD **)(*v8 - 56LL) + 24LL) & 0x800000) != 0 )
    {
      WdLogSingleEntry5(
        0LL,
        275LL,
        43LL,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        *(_QWORD *)(**((_QWORD **)this + 1) + 24LL),
        0LL);
      WdLogGlobalForLineNumber = 3125;
    }
    v4 = (VIDMM_DEVICE_COMMITMENT_INFO *)*((_QWORD *)this + 2);
    if ( *(VIDMM_DEVICE_COMMITMENT_INFO **)((char *)v4 + v7 + 32) == (VIDMM_DEVICE_COMMITMENT_INFO *)((char *)v4 + v7 + 32)
      || !g_IsInternalRelease )
    {
      if ( !*((_DWORD *)v4 + 14 * i) )
        goto LABEL_7;
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( !g_IsInternalRelease )
    {
LABEL_7:
      if ( !*(_QWORD *)((char *)v4 + v7 + 8) )
        goto LABEL_8;
      goto LABEL_20;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
LABEL_20:
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_22;
    }
LABEL_8:
    if ( !*((_QWORD *)v4 + 7 * i + 2) )
      goto LABEL_9;
LABEL_22:
    if ( !g_IsInternalRelease )
    {
LABEL_9:
      if ( !*((_QWORD *)v4 + 7 * i + 3) )
        continue;
      goto LABEL_24;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
LABEL_24:
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x1400E26FCLL);
    }
  }
  if ( v4 )
    VIDMM_DEVICE_COMMITMENT_INFO::`vector deleting destructor'(v4, (unsigned int)v4, a3, a4);
}
