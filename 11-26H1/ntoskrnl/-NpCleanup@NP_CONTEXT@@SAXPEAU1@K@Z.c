/*
 * XREFs of ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x1403EA1EC
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall NP_CONTEXT::NpCleanup(struct NP_CONTEXT *a1, int a2)
{
  char *v3; // rbx
  char *v4; // rdx
  char *v5; // rcx

  if ( !a2 )
  {
    v3 = (char *)a1 + 64;
    while ( 1 )
    {
      v4 = (char *)*((_QWORD *)a1 + 9);
      if ( v4 == v3 )
        break;
      v5 = *(char **)v3;
      *(_QWORD *)v3 = **(_QWORD **)v3;
      if ( v5 == v4 )
      {
        *((_QWORD *)v3 + 1) = v3;
        *(_QWORD *)v3 = 0LL;
      }
      else
      {
        --*(_QWORD *)v4;
      }
      if ( !v5 )
        break;
      ExFreePoolWithTag(v5, 0);
    }
  }
}
