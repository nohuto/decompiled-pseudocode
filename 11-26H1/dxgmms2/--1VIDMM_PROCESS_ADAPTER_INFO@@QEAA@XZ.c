/*
 * XREFs of ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1400C5E00
 * Callers:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1400046CC (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1400377C8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1400C6A24 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_PRIORITY@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1400C71D8 (-LogData@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_PRIORITY@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTE.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1400C72D8 (-LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1400C73EC (-LogData@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@QEAAXPEAVDXGPROCESS@@PEAVDXGADA.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_FREQUENCY_STATS@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1400C74F4 (-LogData@VIDMM_TELEMETRY_PROCESS_FREQUENCY_STATS@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1400C7620 (-LogData@VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_ADAPTER_INFO::~VIDMM_PROCESS_ADAPTER_INFO(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  unsigned int v2; // r9d
  __int64 v3; // r11
  int v4; // r10d
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  struct DXGADAPTER *v8; // rbx
  struct DXGPROCESS *v9; // rdi
  void *v10; // rcx
  char *v11; // rcx
  char *v12; // rbx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // r11d

  if ( *(_QWORD *)this && *((_QWORD *)this + 1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL) == 4 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 702;
    }
    else
    {
      v2 = 0;
      v3 = 1LL;
      while ( v2 < *(_DWORD *)(*(_QWORD *)this + 6952LL) )
      {
        v4 = 0;
        v5 = *((_QWORD *)this + 1) + 304LL * (unsigned __int16)v2;
        v6 = 0LL;
        v7 = (_QWORD *)(v5 + 80);
        while ( v6 < 2 )
        {
          if ( v7[8] || *v7 || v7[16] )
          {
            v15 = *(_QWORD *)(v5 + 8LL * v4 + 208);
            g_DxgMmsBugcheckExportIndex = v3;
            WdLogSingleEntry5(0LL, 270LL, 51LL, this, v15, 0LL);
            WdLogGlobalForLineNumber = 213;
LABEL_24:
            v16 = *(_QWORD *)(v13 + 224);
            g_DxgMmsBugcheckExportIndex = v3;
            WdLogSingleEntry5(0LL, 270LL, 51LL, this, v16, 0LL);
            WdLogGlobalForLineNumber = 213;
LABEL_25:
            v17 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)(v13 + 8));
            g_DxgMmsBugcheckExportIndex = v18;
            WdLogSingleEntry5(0LL, 270LL, 51LL, this, v17, 0LL);
            WdLogGlobalForLineNumber = 213;
            JUMPOUT(0x1400C609ELL);
          }
          v4 += v3;
          v6 += v3;
          ++v7;
        }
        if ( VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)(v5 + 8)) )
          goto LABEL_25;
        if ( *(_QWORD *)(v13 + 224) )
          goto LABEL_24;
        v2 = v3 + v14;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    v8 = *(struct DXGADAPTER **)(*(_QWORD *)this + 24LL);
    v9 = *(struct DXGPROCESS **)(*((_QWORD *)this + 2) + 72LL);
    VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT::LogData(
      (VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT *)(*((_QWORD *)this + 23) + 56LL),
      v9,
      v8);
    VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY::LogData(
      (VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY *)(*((_QWORD *)this + 23) + 328LL),
      v9,
      v8);
    VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_PRIORITY::LogData(
      (VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_PRIORITY *)(*((_QWORD *)this + 23) + 680LL),
      v9,
      v8);
    VIDMM_TELEMETRY_PROCESS_FREQUENCY_STATS::LogData(
      (VIDMM_TELEMETRY_PROCESS_FREQUENCY_STATS *)(*((_QWORD *)this + 23) + 744LL),
      v9,
      v8);
    VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS::LogData(
      (VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS *)(*((_QWORD *)this + 23) + 768LL),
      v9,
      v8);
  }
  v10 = (void *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    operator delete(v10);
    *((_QWORD *)this + 23) = 0LL;
  }
  v11 = (char *)*((_QWORD *)this + 1);
  if ( v11 )
  {
    v12 = v11 - 8;
    `vector destructor iterator'(
      v11,
      304LL,
      *((_QWORD *)v11 - 1),
      (void (__fastcall *)(char *))VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO::~VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO);
    operator delete(v12);
    *((_QWORD *)this + 1) = 0LL;
  }
}
