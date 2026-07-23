/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x1409C3FD4
 * Callers:
 *     ExpWnfDeleteScopeInstances @ 0x14084D3AC (ExpWnfDeleteScopeInstances.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeById @ 0x1409FD74C (ExpWnfDeleteScopeById.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x14084D4A8 (ExpWnfDestroyPermanentDataStore.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x1409C4084 (ExpWnfDeleteNameInstanceCallback.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *Count; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx

  if ( (_BYTE)a2 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    Count = (_QWORD *)P[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v6 = Count;
            if ( !*Count )
              break;
            Count = (_QWORD *)*Count;
            *v6 = 0LL;
          }
          v7 = Count + 1;
          if ( !Count[1] )
            break;
          Count = (_QWORD *)Count[1];
          *v7 = 0LL;
        }
        v8 = Count[2];
        ExpWnfDeleteNameInstanceCallback(Count, P);
        v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v9 )
          break;
        Count = (_QWORD *)v9;
      }
    }
    P[7].Count = 0LL;
  }
  v10 = (_QWORD *)P[8].Count;
  if ( v10 )
    ExpWnfDestroyPermanentDataStore(v10, a2, a3, a4);
  v11 = (_QWORD *)P[9].Count;
  if ( v11 )
    ExpWnfDestroyPermanentDataStore(v11, a2, a3, a4);
  ExFreePoolWithTag(P, 0x20666E57u);
}
