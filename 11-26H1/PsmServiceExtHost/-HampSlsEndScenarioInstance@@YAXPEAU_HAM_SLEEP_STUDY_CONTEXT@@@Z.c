/*
 * XREFs of ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18006CB0C
 * Callers:
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002D4B0 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800665C4 (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 */

void __fastcall HampSlsEndScenarioInstance(struct _HAM_SLEEP_STUDY_CONTEXT *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // rdx
  int v4; // esi
  unsigned __int64 v5; // rax
  struct _HAM_SLEEP_STUDY_CONTEXT *v6; // rcx
  unsigned __int64 v7; // rbx

  v1 = (unsigned __int64)a1 + 16;
  v3 = *((_QWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 24) & 1) != 0 && v3 )
    v3 ^= v1;
  v4 = *((_BYTE *)a1 + 24) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)v3;
        v6 = (struct _HAM_SLEEP_STUDY_CONTEXT *)v3;
        if ( !*(_QWORD *)v3 )
        {
          v6 = (struct _HAM_SLEEP_STUDY_CONTEXT *)(v3 + 8);
          v5 = *(_QWORD *)(v3 + 8);
          if ( !v5 )
            break;
        }
        if ( v4 )
          v3 ^= v5;
        else
          v3 = v5;
        *(_QWORD *)v6 = 0LL;
      }
      v7 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v7 )
        v7 ^= v3;
      HampSlsBlockerEntryDestroy(v6, (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v3);
      if ( !v7 )
        break;
      v3 = v7;
    }
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *((_DWORD *)a1 + 8) &= ~1u;
}
