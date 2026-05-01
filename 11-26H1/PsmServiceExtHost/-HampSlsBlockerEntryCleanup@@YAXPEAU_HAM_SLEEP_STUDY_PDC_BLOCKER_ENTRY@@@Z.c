/*
 * XREFs of ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800665E8
 * Callers:
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800665C4 (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 */

void __fastcall HampSlsBlockerEntryCleanup(struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rcx

  v1 = *((unsigned __int8 *)a1 + 32);
  if ( (_BYTE)v1 != 5 && (_BYTE)v1 )
    SleepstudyHelperBlockerActiveDereference(*((_QWORD *)a1 + v1 + 8));
  v3 = (_QWORD *)((char *)a1 + 72);
  v4 = 4LL;
  do
  {
    if ( *v3 )
    {
      SleepstudyHelperDestroyBlocker();
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *((_QWORD *)a1 + 7) )
  {
    SleepstudyHelperDestroyBlocker();
    *((_QWORD *)a1 + 7) = 0LL;
  }
  v5 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( v5 )
    CemRcObjectDereference(v5);
}
