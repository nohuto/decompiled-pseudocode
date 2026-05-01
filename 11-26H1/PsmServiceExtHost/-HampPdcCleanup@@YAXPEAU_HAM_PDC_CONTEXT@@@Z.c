/*
 * XREFs of ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E240
 * Callers:
 *     ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BB90 (-HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800665C4 (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 */

void __fastcall HampPdcCleanup(struct _HAM_PDC_CONTEXT *a1)
{
  unsigned __int64 *v1; // rsi
  unsigned __int64 v3; // rdx
  int v4; // ebp
  unsigned __int64 v5; // rax
  struct _HAM_SLEEP_STUDY_CONTEXT *v6; // rcx
  unsigned __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rcx

  v1 = (unsigned __int64 *)((char *)a1 + 40);
  if ( (*((_BYTE *)a1 + 48) & 1) != 0 )
  {
    if ( *v1 )
      v3 = *v1 ^ (unsigned __int64)v1;
    else
      v3 = 0LL;
  }
  else
  {
    v3 = *v1;
  }
  v4 = *((_BYTE *)a1 + 48) & 1;
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
  v8 = *((_BYTE *)a1 + 48);
  *v1 = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  if ( (v8 & 1) != 0 )
    *((_BYTE *)a1 + 48) = 1;
  if ( *((_QWORD *)a1 + 2) )
    Pdcv2ActivationClientUnregister();
  v9 = *((_QWORD *)a1 + 8);
  if ( v9 )
    TpReleaseWork(v9);
}
