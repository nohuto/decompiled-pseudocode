/*
 * XREFs of ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x1402013E4
 * Callers:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KiStartIdealProcessorAssignmentBlock @ 0x1402013B8 (KiStartIdealProcessorAssignmentBlock.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140201520 (-KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET.c)
 */

void __fastcall KiSelectIdealProcessorSetsForProcess(
        unsigned __int64 a1,
        union _KI_PROCESS_CONCURRENCY_COUNT *a2,
        struct _KAFFINITY_EX *a3,
        struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *a4)
{
  unsigned int v4; // esi
  unsigned __int16 v6; // di
  _KI_PROCESS_CONCURRENCY_COUNT v7; // ebx
  unsigned __int64 v8; // r14
  _KAFFINITY_EX *v9; // rcx
  unsigned __int64 v10; // rdx
  _KI_PROCESS_CONCURRENCY_COUNT v11; // edx
  bool v12; // cc
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v13; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY v15; // [rsp+40h] [rbp-10h] BYREF
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v16; // [rsp+98h] [rbp+48h]

  v4 = a2->AllFields >> 18;
  v6 = 0;
  v13 = 0LL;
  v16.Low.AllFields = 0;
  if ( v4 < 2 )
    v4 = 2;
  v7.AllFields = 537133055;
  v16.High.AllFields = 537133055;
  if ( KiActiveGroups )
  {
    v8 = a1 >> 12;
    do
    {
      v9 = *(_KAFFINITY_EX **)(a1 + 80);
      v15 = 0LL;
      v14 = 0LL;
      v15.Group = v6;
      if ( v6 >= v9->Count )
        v10 = 0LL;
      else
        v10 = v9->Bitmap[v6];
      v15.Mask = v10;
      KiSelectIdealProcessorSetForGroup(&v15, *(_WORD *)(*(_QWORD *)(a1 + 184) + 2LL * v6 + 80), v4, v8, &v14, &v13);
      v11.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v16.Low;
      if ( v16.Low.AllFields < v13.Low.AllFields )
        v11.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v13.Low;
      v12 = v7.AllFields <= v13.High.AllFields;
      a3->Bitmap[v6] = v14;
      if ( !v12 )
        v7.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v13.High;
      ++v6;
      v16.Low = v11;
    }
    while ( v6 < (unsigned __int16)KiActiveGroups );
    v16.High = v7;
  }
  *a4 = v16;
}
