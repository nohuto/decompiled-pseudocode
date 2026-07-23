/*
 * XREFs of ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50
 * Callers:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeSelectIdealProcessor @ 0x140201160 (KeSelectIdealProcessor.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140202DF8 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 */

void __fastcall KiAdaptThreadIdealProcessorForProcessIdealSetChange(
        struct _KPROCESS *a1,
        __int64 a2,
        struct _KAFFINITY_EX *a3,
        struct _KAFFINITY_EX *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned int *a7)
{
  unsigned __int8 *v7; // r12
  char v8; // r15
  unsigned __int8 *v9; // r13
  int v11; // eax
  struct _KTHREAD *v13; // rbx
  unsigned int *v14; // r14
  int MiscFlags; // eax
  __int64 UserAffinityPrimaryGroup; // r8
  _KAFFINITY_EX *UserAffinity; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int v20; // r11d
  __int64 UserIdealProcessor; // rdi
  __int64 v22; // rbp
  unsigned __int64 v23; // r10
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool v26; // zf
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  v11 = *(_DWORD *)(a2 + 120);
  v13 = (struct _KTHREAD *)a2;
  *a5 = 0;
  *v9 = 0;
  if ( (v11 & 1) != 0 )
    return;
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v13->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&a5);
    while ( v13->ThreadLock );
  }
  v14 = a7;
  if ( (*((_DWORD *)&v13->0 + 1) & 1) != 0 )
    goto LABEL_22;
  MiscFlags = v13->MiscFlags;
  v27 = 0LL;
  if ( (MiscFlags & 8) != 0 )
  {
    UserAffinityPrimaryGroup = v13->UserAffinityPrimaryGroup;
    UserAffinity = v13->UserAffinity;
  }
  else
  {
    UserAffinityPrimaryGroup = v13->AffinityPrimaryGroup;
    UserAffinity = v13->Affinity;
  }
  WORD4(v27) = UserAffinityPrimaryGroup;
  a2 = (unsigned __int16)UserAffinityPrimaryGroup >= UserAffinity->Count
     ? 0LL
     : UserAffinity->Bitmap[UserAffinityPrimaryGroup];
  *(_QWORD *)&v27 = a2;
  v18 = (unsigned __int16)UserAffinityPrimaryGroup >= a3->Count
      ? 0LL
      : a3->Bitmap[(unsigned __int16)UserAffinityPrimaryGroup];
  v19 = (unsigned __int16)UserAffinityPrimaryGroup >= a4->Count
      ? 0LL
      : a4->Bitmap[(unsigned __int16)UserAffinityPrimaryGroup];
  if ( v18 == v19 )
    goto LABEL_22;
  if ( (v18 & v19) == v19 )
  {
    v20 = 1;
LABEL_34:
    v23 = v19;
    goto LABEL_21;
  }
  if ( (v18 & v19) != v18 )
  {
    v20 = 3;
    goto LABEL_34;
  }
  v20 = 2;
  v23 = v18 ^ v19;
LABEL_21:
  UserIdealProcessor = v13->UserIdealProcessor;
  a5 = (unsigned __int8 *)v23;
  v22 = KiProcessorBlock[UserIdealProcessor];
  if ( (v23 & *(_QWORD *)(v22 + 200)) == 0 && (a2 & v23) != 0 )
  {
    if ( v20 != 2 || (a2 = *a7 % (unsigned int)__popcnt(v19), v8 = 1, (unsigned int)a2 >= (unsigned int)__popcnt(v18)) )
    {
      v24 = (unsigned __int16)KeSelectIdealProcessor(
                                &v27,
                                &a1->IdealProcessorAssignmentBlock->ThreadSeed[(unsigned __int16)UserAffinityPrimaryGroup],
                                &a5,
                                1LL);
      KiSetIdealProcessorThread(v13, v24, 0, 0LL, 2);
      v13->ThreadLock = 0LL;
      v25 = KiProcessorBlock[v24];
      *v7 = (_DWORD)v24 != (_DWORD)UserIdealProcessor;
      a2 = *(_QWORD *)(v25 + 192);
      v26 = (xmmword_140FC0C10 & 0x8000000) == 0;
      *v9 = *(_WORD *)(a2 + 138) != *(_WORD *)(*(_QWORD *)(v22 + 192) + 138LL);
      if ( !v26 )
        EtwTraceIdealProcessor(v13, 1351LL, (unsigned int)UserIdealProcessor, (unsigned int)v24);
      goto LABEL_23;
    }
  }
LABEL_22:
  v13->ThreadLock = 0LL;
LABEL_23:
  if ( v8 )
    *v14 = ExGenRandom(1, a2);
}
